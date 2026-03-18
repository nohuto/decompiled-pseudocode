/*
 * XREFs of SmProcessStatsRequest @ 0x1408E7F34
 * Callers:
 *     SmQueryStoreInformation @ 0x1406F0B68 (SmQueryStoreInformation.c)
 * Callees:
 *     KeInitializeEvent @ 0x14000AB10 (KeInitializeEvent.c)
 *     KeWaitForSingleObject @ 0x14003FB10 (KeWaitForSingleObject.c)
 *     MmUnlockPages @ 0x14006A600 (MmUnlockPages.c)
 *     CmSiFreeMemory @ 0x14008CFE0 (CmSiFreeMemory.c)
 *     MmProbeAndLockPages @ 0x1400CBF50 (MmProbeAndLockPages.c)
 *     SmAlloc @ 0x1400D8890 (SmAlloc.c)
 *     MmSizeOfMdl @ 0x1400F75A0 (MmSizeOfMdl.c)
 *     ?SmStoreRequest@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@KPEAU_SM_WORK_ITEM@1@PEAU_KEVENT@@PEAU_IO_STATUS_BLOCK@@@Z @ 0x140144670 (-SmStoreRequest@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@KPEAU_SM_WORK_ITEM@1@PEAU_KEVENT@@PEAU_I.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     SeSinglePrivilegeCheck @ 0x140678440 (SeSinglePrivilegeCheck.c)
 *     ExRaiseDatatypeMisalignment @ 0x140913920 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall SmProcessStatsRequest(__int64 a1, _OWORD *a2, int a3, _DWORD *a4, KPROCESSOR_MODE PreviousMode)
{
  struct _MDL *v7; // r14
  __int64 v8; // rsi
  int v9; // r12d
  int v10; // ebx
  unsigned __int8 v11; // r15^1
  unsigned int v12; // eax
  PVOID v13; // rax
  int v14; // eax
  PVOID Base[2]; // [rsp+40h] [rbp-68h]
  __int64 v17; // [rsp+50h] [rbp-58h] BYREF
  __int64 v18; // [rsp+58h] [rbp-50h]
  struct _KEVENT Object[3]; // [rsp+60h] [rbp-48h] BYREF

  v17 = 0LL;
  v18 = 0LL;
  v7 = 0LL;
  v8 = 0LL;
  v9 = 0;
  KeInitializeEvent(Object, NotificationEvent, 0);
  if ( a3 == 16 )
  {
    if ( PreviousMode && ((unsigned __int8)a2 & 7) != 0 )
      ExRaiseDatatypeMisalignment();
    *(_OWORD *)Base = *a2;
    v11 = BYTE1(*a2);
    if ( LOBYTE(Base[0]) == 2 && v11 < 4u )
    {
      if ( v11 <= 1u || SeSinglePrivilegeCheck(SeProfileSingleProcessPrivilege, PreviousMode) )
      {
        if ( (!HIDWORD(Base[0])
           || (v12 = MmSizeOfMdl(Base[1], HIDWORD(Base[0])), (v7 = (struct _MDL *)SmAlloc(v12, 0x444D6D73u)) != 0LL))
          && (v13 = SmAlloc(0x28uLL, 0x69576D73u), (v8 = (__int64)v13) != 0) )
        {
          memset(v13, 0, 0x28uLL);
          v14 = 0;
          if ( HIDWORD(Base[0]) )
          {
            v7->Next = 0LL;
            v7->Size = 8 * (((((__int64)Base[1] & 0xFFF) + (unsigned __int64)HIDWORD(Base[0]) + 4095) >> 12) + 6);
            v7->MdlFlags = 0;
            v7->StartVa = (PVOID)((unsigned __int64)Base[1] & 0xFFFFFFFFFFFFF000uLL);
            v7->ByteOffset = (__int64)Base[1] & 0xFFF;
            v7->ByteCount = HIDWORD(Base[0]);
            v9 = 1;
            MmProbeAndLockPages(v7, PreviousMode, IoWriteAccess);
            v14 = *(_DWORD *)v8;
          }
          *(_DWORD *)v8 = v14 & 0xFFFFFFF8 | 3;
          *(_DWORD *)(v8 + 8) = v11;
          *(_DWORD *)(v8 + 12) = HIDWORD(Base[0]);
          *(_QWORD *)(v8 + 16) = v7;
          v10 = SMKM_STORE_MGR<SM_TRAITS>::SmStoreRequest(
                  (__int64)&SmGlobals,
                  HIWORD(LODWORD(Base[0])),
                  v8,
                  (__int64)Object,
                  (__int64)&v17);
          if ( v10 >= 0 )
          {
            v8 = 0LL;
            KeWaitForSingleObject(Object, Executive, 0, 0, 0LL);
            v10 = v17;
            *a4 = v18;
          }
        }
        else
        {
          v10 = -1073741670;
        }
      }
      else
      {
        v10 = -1073741790;
      }
    }
    else
    {
      v10 = -1073741811;
    }
  }
  else
  {
    v10 = -1073741306;
  }
  if ( v8 )
    CmSiFreeMemory((PPRIVILEGE_SET)v8);
  if ( v9 )
    MmUnlockPages(v7);
  if ( v7 )
    CmSiFreeMemory((PPRIVILEGE_SET)v7);
  return (unsigned int)v10;
}
