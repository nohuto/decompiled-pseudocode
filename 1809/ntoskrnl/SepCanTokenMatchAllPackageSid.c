/*
 * XREFs of SepCanTokenMatchAllPackageSid @ 0x1400A6D60
 * Callers:
 *     SepMatchPackage @ 0x1400ABB0C (SepMatchPackage.c)
 *     SeQueryInformationToken @ 0x14063D370 (SeQueryInformationToken.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x14004F410 (KeLeaveCriticalRegion.c)
 *     ExReleaseResourceLite @ 0x14004F590 (ExReleaseResourceLite.c)
 *     ExpAcquireResourceSharedLite @ 0x140050960 (ExpAcquireResourceSharedLite.c)
 *     AuthzBasepQuerySecurityAttributeAndValues @ 0x1400A6EE8 (AuthzBasepQuerySecurityAttributeAndValues.c)
 *     ExAcquireFastResourceShared @ 0x140165C60 (ExAcquireFastResourceShared.c)
 *     ExpAllocateOwnerEntryForLegacyShim @ 0x140166464 (ExpAllocateOwnerEntryForLegacyShim.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x1401BBD20 (KeBugCheckEx.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 */

_BOOL8 __fastcall SepCanTokenMatchAllPackageSid(__int64 a1)
{
  char v2; // bl
  bool v3; // si
  struct _KTHREAD *CurrentThread; // rax
  ULONG_PTR v5; // rbx
  __int64 v6; // rcx
  __int16 v7; // ax
  unsigned __int8 CurrentIrql; // r8
  struct _KTHREAD *v10; // rdx
  void *OwnerEntryForLegacyShim; // rbp
  __int128 v12; // [rsp+30h] [rbp-78h]
  _OWORD v13[5]; // [rsp+40h] [rbp-68h] BYREF

  memset(v13, 0, 0x48uLL);
  LODWORD(v12) = 2359330;
  *((_QWORD *)&v12 + 1) = L"WIN://NOALLAPPPKG";
  v2 = 0;
  v3 = 1;
  *((_QWORD *)&v13[0] + 1) = *(_QWORD *)(a1 + 776);
  v13[1] = v12;
  if ( KeGetCurrentIrql() < 2u )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    v5 = *(_QWORD *)(a1 + 48);
    LOWORD(CurrentThread) = *(_WORD *)(v5 + 26);
    v6 = (unsigned __int8)CurrentThread;
    LOBYTE(v6) = (unsigned __int8)CurrentThread & 0x41;
    if ( ((unsigned __int8)CurrentThread & 0x41) == 1 )
      KeBugCheckEx(0x1C6u, 0xFuLL, v5, 0LL, 0LL);
    v7 = *(_WORD *)(v5 + 26) & 1;
    if ( v7 )
    {
      CurrentIrql = KeGetCurrentIrql();
      v10 = KeGetCurrentThread();
      if ( CurrentIrql > 1u )
        KeBugCheckEx(0x1C6u, 0LL, CurrentIrql, 1uLL, 0LL);
      if ( (v10->ApcState.InProgressFlags & 2) != 0 )
        KeBugCheckEx(0x1C6u, 6uLL, 0LL, 0LL, 0LL);
      if ( !CurrentIrql && (v10->MiscFlags & 0x400) == 0 && !v10->WaitBlock[3].SpareLong )
        KeBugCheckEx(0x1C6u, 7uLL, 0LL, 0LL, 0LL);
    }
    if ( v7 )
    {
      OwnerEntryForLegacyShim = (void *)ExpAllocateOwnerEntryForLegacyShim(v6);
      if ( !(unsigned __int8)ExAcquireFastResourceShared(v5, (ULONG_PTR)OwnerEntryForLegacyShim) )
        ExFreePoolWithTag(OwnerEntryForLegacyShim, 0);
    }
    else
    {
      ExpAcquireResourceSharedLite(v5, 1);
    }
    v2 = 1;
  }
  if ( (int)AuthzBasepQuerySecurityAttributeAndValues(v13) >= 0 )
    v3 = **(_QWORD **)&v13[3] == 0LL;
  if ( v2 )
  {
    ExReleaseResourceLite(*(PERESOURCE *)(a1 + 48));
    KeLeaveCriticalRegion();
  }
  return v3;
}
