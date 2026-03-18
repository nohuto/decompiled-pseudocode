/*
 * XREFs of SepCanTokenMatchAllPackageSid @ 0x140092380
 * Callers:
 *     SepMatchPackage @ 0x1400869BC (SepMatchPackage.c)
 *     SepNormalAccessCheck @ 0x1400C7500 (SepNormalAccessCheck.c)
 *     SeQueryInformationToken @ 0x1405FEE00 (SeQueryInformationToken.c)
 * Callees:
 *     ExReleaseResourceLite @ 0x14003BBD0 (ExReleaseResourceLite.c)
 *     ExpAcquireResourceSharedLite @ 0x14003C830 (ExpAcquireResourceSharedLite.c)
 *     KeLeaveCriticalRegion @ 0x14003E220 (KeLeaveCriticalRegion.c)
 *     AuthzBasepQuerySecurityAttributeAndValues @ 0x140092830 (AuthzBasepQuerySecurityAttributeAndValues.c)
 *     ExAcquireFastResourceShared @ 0x14016B740 (ExAcquireFastResourceShared.c)
 *     ExpAllocateOwnerEntryForLegacyShim @ 0x14016BAC8 (ExpAllocateOwnerEntryForLegacyShim.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x1401C3B20 (KeBugCheckEx.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 */

_BOOL8 __fastcall SepCanTokenMatchAllPackageSid(__int64 a1, __int64 a2, struct _KTHREAD *a3)
{
  __int64 v3; // rax
  char v5; // bl
  bool v6; // si
  struct _KTHREAD *CurrentThread; // rax
  ULONG_PTR v8; // rbx
  __int64 v9; // rcx
  __int16 v10; // ax
  unsigned __int8 CurrentIrql; // dl
  void *OwnerEntryForLegacyShim; // rbp
  __int128 v14; // [rsp+30h] [rbp-78h]
  _QWORD v15[2]; // [rsp+40h] [rbp-68h] BYREF
  __int128 v16; // [rsp+50h] [rbp-58h]
  __int128 v17; // [rsp+60h] [rbp-48h]
  __int128 v18; // [rsp+70h] [rbp-38h]
  __int64 v19; // [rsp+80h] [rbp-28h]

  *(_QWORD *)&v14 = 2359330LL;
  v15[0] = 0LL;
  *((_QWORD *)&v14 + 1) = L"WIN://NOALLAPPPKG";
  v3 = *(_QWORD *)(a1 + 776);
  v17 = 0LL;
  v5 = 0;
  v6 = 1;
  v18 = 0LL;
  v19 = 0LL;
  v16 = v14;
  v15[1] = v3;
  if ( KeGetCurrentIrql() < 2u )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    v8 = *(_QWORD *)(a1 + 48);
    LOWORD(CurrentThread) = *(_WORD *)(v8 + 26);
    v9 = (unsigned __int8)CurrentThread;
    LOBYTE(v9) = (unsigned __int8)CurrentThread & 0x41;
    if ( ((unsigned __int8)CurrentThread & 0x41) == 1 )
      KeBugCheckEx(0x1C6u, 0xFuLL, v8, 0LL, 0LL);
    v10 = *(_WORD *)(v8 + 26) & 1;
    if ( v10 )
    {
      CurrentIrql = KeGetCurrentIrql();
      a3 = KeGetCurrentThread();
      if ( CurrentIrql > 1u )
        KeBugCheckEx(0x1C6u, 0LL, CurrentIrql, 1uLL, 0LL);
      if ( (a3->ApcState.InProgressFlags & 2) != 0 )
        KeBugCheckEx(0x1C6u, 6uLL, 0LL, 0LL, 0LL);
      if ( !CurrentIrql && (a3->MiscFlags & 0x400) == 0 && !a3->WaitBlock[3].SpareLong )
        KeBugCheckEx(0x1C6u, 7uLL, 0LL, 0LL, 0LL);
    }
    if ( v10 )
    {
      OwnerEntryForLegacyShim = (void *)ExpAllocateOwnerEntryForLegacyShim(v9);
      if ( !(unsigned __int8)ExAcquireFastResourceShared(v8, (ULONG_PTR)OwnerEntryForLegacyShim) )
        ExFreePoolWithTag(OwnerEntryForLegacyShim, 0);
    }
    else
    {
      ExpAcquireResourceSharedLite(v8, 1, (__int64)a3, 0LL);
    }
    v5 = 1;
  }
  if ( (int)AuthzBasepQuerySecurityAttributeAndValues(v15) >= 0 )
    v6 = *(_QWORD *)v18 == 0LL;
  if ( v5 )
  {
    ExReleaseResourceLite(*(PERESOURCE *)(a1 + 48));
    KeLeaveCriticalRegion();
  }
  return v6;
}
