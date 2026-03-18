/*
 * XREFs of EtwpCalculateUpdateNotification @ 0x140666718
 * Callers:
 *     EtwpEnableGuid @ 0x140664144 (EtwpEnableGuid.c)
 *     EtwpDisallowedGuidAddition @ 0x1408F1F54 (EtwpDisallowedGuidAddition.c)
 *     EtwpDisallowedGuidRemoval @ 0x1408F2208 (EtwpDisallowedGuidRemoval.c)
 * Callees:
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     RtlCompareMemory @ 0x1401CC1F0 (RtlCompareMemory.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     EtwpComputeRegEntryEnableInfo @ 0x1405C5338 (EtwpComputeRegEntryEnableInfo.c)
 *     EtwpGetSchematizedFilterSize @ 0x1405D3DF8 (EtwpGetSchematizedFilterSize.c)
 *     EtwpBuildNotificationPacket @ 0x140663208 (EtwpBuildNotificationPacket.c)
 */

char __fastcall EtwpCalculateUpdateNotification(
        __int64 a1,
        unsigned __int8 a2,
        unsigned __int8 a3,
        char a4,
        char a5,
        char a6,
        int a7,
        _QWORD *a8)
{
  unsigned __int8 v9; // al
  char v10; // cl
  __int16 v11; // r14
  _OWORD *v12; // rsi
  __int64 v13; // rcx
  unsigned __int8 v14; // dl
  __int128 v15; // xmm0
  int SchematizedFilterSize; // eax
  _OWORD *v17; // rax
  _BYTE Source2[120]; // [rsp+28h] [rbp-59h] BYREF

  if ( a5 )
  {
    if ( a6 )
      v9 = *(_BYTE *)(a1 + 103);
    else
      v9 = *(_BYTE *)(a1 + 101);
    v10 = 0;
  }
  else if ( a6 )
  {
    v9 = *(_BYTE *)(a1 + 102);
    v10 = *(_BYTE *)(a1 + 100);
  }
  else
  {
    v9 = *(_BYTE *)(a1 + 100);
    v10 = *(_BYTE *)(a1 + 102);
  }
  v11 = *(_WORD *)(a1 + 98) & 8;
  if ( !v11 )
  {
    if ( (a2 & a3) == 0 && (v9 & a2) == 0 )
      return 0;
    if ( a4 != v9 || a5 == 2 || v10 || *(_BYTE *)(a1 + 101) || *(_BYTE *)(a1 + 103) )
    {
LABEL_13:
      memset(Source2, 0, sizeof(Source2));
      v12 = (_OWORD *)*a8;
      v13 = *(_QWORD *)(a1 + 32);
      v14 = *(_BYTE *)(a1 + 100);
      *(_OWORD *)Source2 = *(_OWORD *)*a8;
      *(_OWORD *)&Source2[16] = v12[1];
      *(_OWORD *)&Source2[32] = v12[2];
      *(_OWORD *)&Source2[48] = v12[3];
      *(_QWORD *)&Source2[64] = *((_QWORD *)v12 + 8);
      v15 = *(_OWORD *)(v13 + 40);
      *(_QWORD *)&Source2[4] = 0x100000078LL;
      *(_OWORD *)&Source2[40] = v15;
      SchematizedFilterSize = EtwpGetSchematizedFilterSize(v13, v14);
      if ( SchematizedFilterSize )
        *(_DWORD *)&Source2[4] = SchematizedFilterSize + 136;
      EtwpComputeRegEntryEnableInfo(a1, (__int64)&Source2[72]);
      if ( v11 )
      {
        *(_QWORD *)&Source2[104] = 0LL;
        *(_DWORD *)&Source2[112] = 0;
      }
      if ( !v12
        || (*((_DWORD *)v12 + 1) != *(_DWORD *)&Source2[4] || RtlCompareMemory(v12, Source2, 0x78uLL) != 120
          ? (*a8 = 0LL, v17 = 0LL)
          : (v17 = (_OWORD *)*a8),
            !v17) )
      {
        if ( (int)EtwpBuildNotificationPacket(*(_QWORD *)(a1 + 32), Source2, *(_BYTE *)(a1 + 100), a8) < 0 )
          return 0;
      }
      return 1;
    }
LABEL_28:
    *a8 = 0LL;
    return 1;
  }
  if ( v9 || a7 != 1 )
    goto LABEL_28;
  if ( a3 )
    goto LABEL_13;
  return 0;
}
