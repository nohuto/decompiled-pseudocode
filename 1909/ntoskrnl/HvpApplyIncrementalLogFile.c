/*
 * XREFs of HvpApplyIncrementalLogFile @ 0x14083F5BC
 * Callers:
 *     HvApplyLogFile @ 0x14083F4C8 (HvApplyLogFile.c)
 * Callees:
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     SymCryptMarvin32 @ 0x1401BA654 (SymCryptMarvin32.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     CmpTraceHiveMountLogEntryApplied @ 0x1408261A4 (CmpTraceHiveMountLogEntryApplied.c)
 *     HvpApplyLogEntryDataToFileBackedHive @ 0x140830314 (HvpApplyLogEntryDataToFileBackedHive.c)
 *     HvpRecoverDataReadRoutine @ 0x140830CA0 (HvpRecoverDataReadRoutine.c)
 *     HvpIsLogEntryHeaderCoherent @ 0x14083FAF4 (HvpIsLogEntryHeaderCoherent.c)
 *     HvpIsMetadataArrayCoherent @ 0x14083FB70 (HvpIsMetadataArrayCoherent.c)
 *     HvpReadLogEntryHeader @ 0x14083FFB4 (HvpReadLogEntryHeader.c)
 *     HvpUpdateRecoveryVector @ 0x140840008 (HvpUpdateRecoveryVector.c)
 */

__int64 __fastcall HvpApplyIncrementalLogFile(
        __int64 a1,
        int a2,
        unsigned int a3,
        __int64 a4,
        unsigned int *a5,
        __int64 a6,
        unsigned __int64 a7,
        __int64 a8,
        __int64 a9,
        __int64 a10,
        __int64 a11,
        __int64 a12,
        unsigned int *a13)
{
  unsigned int *v14; // r15
  int v16; // r12d
  unsigned int v17; // ebx
  char v18; // r14
  __int64 result; // rax
  unsigned __int64 Alignment; // r15
  unsigned __int64 v21; // r15
  bool v22; // zf
  int v24; // [rsp+3Ch] [rbp-65h] BYREF
  struct _LOOKASIDE_LIST_EX v25; // [rsp+40h] [rbp-61h] BYREF

  v14 = a5;
  v25.L.ListHead.Region = a7;
  *(_QWORD *)&v25.L.Depth = a10;
  *(_QWORD *)&v25.L.FreeMisses = a11;
  *(_QWORD *)&v25.L.Tag = a12;
  *(_QWORD *)&v25.L.AllocateMisses = a5;
  memset(&v25.L.48, 0, 0x28uLL);
  v16 = 0;
  v17 = 512;
  v18 = 0;
  while ( 1 )
  {
    result = HvpReadLogEntryHeader(v17, HvpRecoverDataReadRoutine, v14, &v25.L.48);
    if ( (int)result < 0 )
      break;
    if ( !(unsigned __int8)HvpIsLogEntryHeaderCoherent(&v25.L.48, v17, a3) || HIDWORD(v25.L.Free) != a2 )
      goto LABEL_17;
    result = HvpRecoverDataReadRoutine(v14, v17, SHIDWORD(v25.L.Allocate), &v25);
    if ( (int)result < 0 )
      break;
    Alignment = v25.L.ListHead.Alignment;
    if ( !(unsigned __int8)HvpIsMetadataArrayCoherent(
                             &v25.L.48,
                             v25.L.ListHead.Alignment + 40,
                             HIDWORD(v25.L.ListEntry.Flink)) )
      goto LABEL_17;
    SymCryptMarvin32(
      HvSymcryptSeed,
      (unsigned __int16 *)(Alignment + 40),
      (unsigned int)(HIDWORD(v25.L.Allocate) - 40),
      v25.L.Future);
    if ( v25.L.ListEntry.Blink != *(struct _LIST_ENTRY **)v25.L.Future )
      goto LABEL_17;
    v21 = v25.L.ListHead.Alignment + 40;
    HvpApplyLogEntryDataToFileBackedHive(
      v25.L.ListHead.Region,
      (__int64)&v25.L.48,
      v25.L.ListHead.Alignment + 40,
      v25.L.ListHead.Alignment + 40 + 8LL * HIDWORD(v25.L.ListEntry.Flink),
      HIDWORD(v25.L.Allocate) - (8 * HIDWORD(v25.L.ListEntry.Flink) + 40),
      &v24);
    v22 = ((__int64)v25.L.FreeEx & 1) == 0;
    *(_DWORD *)(a1 + 40) = v25.L.ListEntry.Flink;
    if ( !v22 )
      *(_DWORD *)(a1 + 144) |= 1u;
    v18 = 1;
    ++v16;
    CmpTraceHiveMountLogEntryApplied(SHIDWORD(v25.L.Allocate), v24);
    if ( *(_QWORD *)&v25.L.Depth )
      HvpUpdateRecoveryVector(v21, HIDWORD(v25.L.ListEntry.Flink), *(_QWORD *)&v25.L.Depth);
    v14 = *(unsigned int **)&v25.L.AllocateMisses;
    ++a2;
    v17 += HIDWORD(v25.L.Allocate);
    if ( !v17 )
    {
      result = 2147483674LL;
      break;
    }
  }
  if ( (_DWORD)result == -1073741801 || (_DWORD)result == -1073741670 || (_DWORD)result == -1073741492 )
    return result;
LABEL_17:
  result = v18 != 0 ? 0x40000009 : 0;
  if ( *(_QWORD *)&v25.L.FreeMisses )
    **(_DWORD **)&v25.L.FreeMisses = a2;
  if ( *(_QWORD *)&v25.L.Tag )
    **(_DWORD **)&v25.L.Tag = v16;
  if ( a13 )
  {
    if ( v18 )
      *a13 = v17;
    else
      *a13 = 0;
  }
  return result;
}
