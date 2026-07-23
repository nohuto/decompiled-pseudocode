/*
 * XREFs of MiFindHotPatchRecord @ 0x1406833C4
 * Callers:
 *     MiApplyRequiredDriverHotPatches @ 0x140682FA0 (MiApplyRequiredDriverHotPatches.c)
 *     MiFindProcessImageHotPatchRecord @ 0x140856078 (MiFindProcessImageHotPatchRecord.c)
 * Callees:
 *     ExAcquirePushLockSharedEx @ 0x14004EE20 (ExAcquirePushLockSharedEx.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x14004F090 (KiLeaveGuardedRegionUnsafe.c)
 *     KeAbPostRelease @ 0x140051240 (KeAbPostRelease.c)
 *     ExfReleasePushLockShared @ 0x1400913F0 (ExfReleasePushLockShared.c)
 *     RtlDuplicateUnicodeString @ 0x1406D4EA0 (RtlDuplicateUnicodeString.c)
 *     MiCompareHotPatchNodes @ 0x140855CD8 (MiCompareHotPatchNodes.c)
 */

__int64 __fastcall MiFindHotPatchRecord(
        const UNICODE_STRING **a1,
        ULONG_PTR a2,
        int a3,
        int a4,
        PUNICODE_STRING StringOut,
        _DWORD *a6)
{
  struct _KTHREAD *CurrentThread; // rdi
  int v7; // esi
  const UNICODE_STRING *v9; // rbx
  NTSTATUS v10; // ebx
  int v12; // eax
  _BYTE v13[24]; // [rsp+20h] [rbp-38h] BYREF
  int v14; // [rsp+38h] [rbp-20h]
  int v15; // [rsp+3Ch] [rbp-1Ch]

  CurrentThread = KeGetCurrentThread();
  v14 = a3;
  v7 = a2;
  v15 = a4;
  if ( !(_DWORD)a2 )
  {
    --CurrentThread->SpecialApcDisable;
    ExAcquirePushLockSharedEx((ULONG_PTR)&MiHotPatchListLock, a2);
  }
  v9 = *a1;
  if ( !v9 )
    goto LABEL_4;
  do
  {
    v12 = MiCompareHotPatchNodes(v13, v9);
    if ( v12 >= 0 )
    {
      if ( v12 <= 0 )
        break;
      v9 = (const UNICODE_STRING *)v9->Buffer;
    }
    else
    {
      v9 = *(const UNICODE_STRING **)&v9->Length;
    }
  }
  while ( v9 );
  if ( v9 )
  {
    if ( a6 )
      *a6 = MiHotPatchGeneration;
    if ( !StringOut || (v10 = RtlDuplicateUnicodeString(0, v9 + 2, StringOut), v10 >= 0) )
      v10 = 0;
  }
  else
  {
LABEL_4:
    v10 = -1073741275;
  }
  if ( !v7 )
  {
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)&MiHotPatchListLock, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)&MiHotPatchListLock);
    KeAbPostRelease((ULONG_PTR)&MiHotPatchListLock);
    KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
  }
  return (unsigned int)v10;
}
