/*
 * XREFs of MiLoadDataIntoVsmEnclave @ 0x1408943C0
 * Callers:
 *     NtLoadEnclaveData @ 0x1408956C0 (NtLoadEnclaveData.c)
 * Callees:
 *     MiMakeProtectionMask @ 0x140050400 (MiMakeProtectionMask.c)
 *     MiCommitExistingVad @ 0x1400509A0 (MiCommitExistingVad.c)
 *     MmUnlockPages @ 0x14006A390 (MmUnlockPages.c)
 *     MmProbeAndLockPages @ 0x14008E960 (MmProbeAndLockPages.c)
 *     KiUnstackDetachProcess @ 0x140090690 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x140090AF0 (KiStackAttachProcess.c)
 *     MmSizeOfMdl @ 0x140119480 (MmSizeOfMdl.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     MiCountCommittedPages @ 0x1402D3AA0 (MiCountCommittedPages.c)
 *     PsLoadVsmEnclaveData @ 0x14030A198 (PsLoadVsmEnclaveData.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     MiDecommitRegion @ 0x140606890 (MiDecommitRegion.c)
 */

__int64 __fastcall MiLoadDataIntoVsmEnclave(
        __int64 a1,
        ULONG_PTR a2,
        ULONG_PTR a3,
        KPROCESSOR_MODE a4,
        __int64 a5,
        int a6,
        _DWORD *a7,
        unsigned __int64 Base,
        __int64 a9,
        int a10,
        _QWORD *a11)
{
  __int64 v11; // rsi
  __int64 result; // rax
  unsigned int v13; // eax
  unsigned int ProtectionMask; // eax
  int VsmEnclaveData; // ebx
  SIZE_T v16; // rax
  _WORD *PoolWithTag; // rax
  __int64 v18; // r14
  int *v19; // r14
  int v20; // r8d
  int v24; // [rsp+78h] [rbp-A0h] BYREF
  ULONG_PTR BugCheckParameter1; // [rsp+80h] [rbp-98h]
  ULONG_PTR v26; // [rsp+88h] [rbp-90h]
  __int64 v27; // [rsp+90h] [rbp-88h]
  _DWORD *v28; // [rsp+98h] [rbp-80h]
  __int64 v29; // [rsp+A0h] [rbp-78h]
  _BYTE v30[48]; // [rsp+A8h] [rbp-70h] BYREF

  BugCheckParameter1 = a2;
  v26 = a3;
  v27 = a5;
  v28 = a7;
  memset(v30, 0, sizeof(v30));
  v11 = 0LL;
  *a11 = 0LL;
  if ( a9 != 4096 )
    return 3221225714LL;
  if ( a6 != 4 )
    return 3221225476LL;
  v13 = *a7;
  if ( !*a7 )
    return 3221225485LL;
  if ( v13 > 2 )
  {
    if ( v13 == 3 )
      goto LABEL_10;
    if ( v13 != 4 )
    {
      if ( v13 == 5 )
      {
LABEL_10:
        if ( Base )
          return 3221225713LL;
        goto LABEL_14;
      }
      return 3221225485LL;
    }
  }
  if ( !Base )
    return 3221225477LL;
LABEL_14:
  ProtectionMask = MiMakeProtectionMask(a10 & 0x5FFFFFFF);
  if ( (ProtectionMask & 7) == 0 || ProtectionMask > 7 || (ProtectionMask & 5) == 5 )
    return 3221225541LL;
  if ( (ProtectionMask & 2) != 0
    && (*(_DWORD *)&KeGetCurrentThread()->ApcState.Process[2].Spare2[7] & 0x100) != 0
    && (*(_DWORD *)(&KeGetCurrentThread()[1].SwapListEntry + 1) & 0x40000) == 0 )
  {
    return 3221227012LL;
  }
  v29 = a5 + 4095;
  if ( MiCountCommittedPages(a5, a5 + 4095, a3, a1 + 1280) )
    return 3221225505LL;
  result = MiCommitExistingVad(a3, a5, 4096LL, a10, 0, 0LL, 0, 0LL, &v24);
  VsmEnclaveData = result;
  if ( (int)result >= 0 )
  {
    if ( Base )
    {
      v16 = MmSizeOfMdl((PVOID)Base, 0x1000uLL);
      PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, v16, 0x6C646D4Du);
      v11 = (__int64)PoolWithTag;
      if ( !PoolWithTag )
      {
        VsmEnclaveData = -1073741670;
        v18 = a3;
        goto LABEL_34;
      }
      *(_QWORD *)PoolWithTag = 0LL;
      PoolWithTag[4] = 8 * (((unsigned __int16)((Base & 0xFFF) + 0x1FFF) >> 12) + 6);
      PoolWithTag[5] = 0;
      *((_QWORD *)PoolWithTag + 4) = Base & 0xFFFFFFFFFFFFF000uLL;
      *((_DWORD *)PoolWithTag + 11) = Base & 0xFFF;
      *((_DWORD *)PoolWithTag + 10) = 4096;
      KiStackAttachProcess((_KPROCESS *)BugCheckParameter1, 0, (__int64)v30);
      if ( a4 == 1 && (Base + 4096 > 0x7FFFFFFF0000LL || Base + 4096 < Base) )
        MEMORY[0x7FFFFFFF0000] = 0;
      MmProbeAndLockPages((PMDL)v11, a4, IoReadAccess);
      v19 = a7;
      KiUnstackDetachProcess((struct _KTHREAD *)v30, 0);
      if ( VsmEnclaveData < 0 )
      {
        v18 = a3;
        goto LABEL_33;
      }
    }
    else
    {
      v19 = a7;
    }
    v20 = *v19;
    v18 = a3;
    VsmEnclaveData = PsLoadVsmEnclaveData(*(_QWORD *)(a3 + 72), a5, v20, a10, v11);
    if ( VsmEnclaveData >= 0 )
      *a11 = 4096LL;
LABEL_33:
    if ( VsmEnclaveData >= 0 )
    {
LABEL_35:
      if ( v11 )
      {
        if ( (*(_BYTE *)(v11 + 10) & 2) != 0 )
          MmUnlockPages((PMDL)v11);
        ExFreePoolWithTag((PVOID)v11, 0);
      }
      return (unsigned int)VsmEnclaveData;
    }
LABEL_34:
    MiDecommitRegion(v18, a5, a5 + 4095);
    goto LABEL_35;
  }
  return result;
}
