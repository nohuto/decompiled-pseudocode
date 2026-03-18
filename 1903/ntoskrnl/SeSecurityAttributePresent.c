/*
 * XREFs of SeSecurityAttributePresent @ 0x140092510
 * Callers:
 *     SepVerifyDesktopAppxPackageName @ 0x14031D414 (SepVerifyDesktopAppxPackageName.c)
 *     ExpGetProcessInformation @ 0x1405F8B60 (ExpGetProcessInformation.c)
 *     PsQueryProcessAttributesByToken @ 0x1406910F0 (PsQueryProcessAttributesByToken.c)
 * Callees:
 *     ExReleaseResourceLite @ 0x14003BBD0 (ExReleaseResourceLite.c)
 *     ExpAcquireResourceSharedLite @ 0x14003C830 (ExpAcquireResourceSharedLite.c)
 *     KeLeaveCriticalRegion @ 0x14003E220 (KeLeaveCriticalRegion.c)
 *     AuthzBasepEqualUnicodeString @ 0x140085040 (AuthzBasepEqualUnicodeString.c)
 *     AuthzBasepEqualUnicodeStringCaseSensitive @ 0x140133400 (AuthzBasepEqualUnicodeStringCaseSensitive.c)
 *     ExAcquireFastResourceShared @ 0x14016B740 (ExAcquireFastResourceShared.c)
 *     ExpAllocateOwnerEntryForLegacyShim @ 0x14016BAC8 (ExpAllocateOwnerEntryForLegacyShim.c)
 *     KeBugCheckEx @ 0x1401C3B20 (KeBugCheckEx.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     RtlEqualUnicodeString @ 0x140653D20 (RtlEqualUnicodeString.c)
 */

_BOOL8 __fastcall SeSecurityAttributePresent(__int64 a1, const UNICODE_STRING *a2, struct _KTHREAD *a3)
{
  char v4; // bp
  struct _KTHREAD *CurrentThread; // rax
  ULONG_PTR v6; // rbx
  __int64 v7; // r9
  __int16 v8; // ax
  const UNICODE_STRING *v9; // rdi
  char v10; // r12
  __int64 v11; // r13
  const UNICODE_STRING *v12; // rbx
  const UNICODE_STRING *v13; // r15
  const UNICODE_STRING *v14; // rcx
  __int64 *v16; // r14
  unsigned __int8 CurrentIrql; // dl
  void *OwnerEntryForLegacyShim; // rdi
  const UNICODE_STRING *String2; // [rsp+68h] [rbp+10h]

  String2 = a2;
  v4 = 0;
  if ( KeGetCurrentIrql() < 2u )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    v6 = *(_QWORD *)(a1 + 48);
    LOWORD(CurrentThread) = *(_WORD *)(v6 + 26);
    v7 = (unsigned __int8)CurrentThread;
    LOBYTE(v7) = (unsigned __int8)CurrentThread & 0x41;
    if ( ((unsigned __int8)CurrentThread & 0x41) == 1 )
      KeBugCheckEx(0x1C6u, 0xFuLL, *(_QWORD *)(a1 + 48), 0LL, 0LL);
    v8 = *(_WORD *)(v6 + 26) & 1;
    if ( v8 )
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
    if ( v8 )
    {
      OwnerEntryForLegacyShim = (void *)ExpAllocateOwnerEntryForLegacyShim(a1);
      if ( !(unsigned __int8)ExAcquireFastResourceShared(v6, (ULONG_PTR)OwnerEntryForLegacyShim) )
        ExFreePoolWithTag(OwnerEntryForLegacyShim, 0);
    }
    else
    {
      ExpAcquireResourceSharedLite(v6, 1, (__int64)a3, v7);
    }
    a2 = String2;
    v4 = 1;
  }
  v9 = 0LL;
  v10 = 0;
  v11 = *(_QWORD *)(a1 + 776);
  v12 = *(const UNICODE_STRING **)(v11 + 8);
  v13 = 0LL;
  if ( v12 == (const UNICODE_STRING *)(v11 + 8) )
  {
LABEL_12:
    v16 = *(__int64 **)(v11 + 32);
    if ( v16 == (__int64 *)(v11 + 32) )
      goto LABEL_13;
    while ( 1 )
    {
      v13 = (const UNICODE_STRING *)(v16 - 2);
      if ( (v16[5] & 1) == 0 )
      {
        if ( AuthzBasepEqualUnicodeString(v13 + 2, String2) )
          break;
      }
      v16 = (__int64 *)*v16;
      if ( v16 == (__int64 *)(v11 + 32) )
        goto LABEL_13;
    }
  }
  else
  {
    while ( 1 )
    {
      v13 = v12;
      v14 = v12 + 2;
      if ( KeGetCurrentIrql() >= 2u
         ? AuthzBasepEqualUnicodeStringCaseSensitive(v14)
         : RtlEqualUnicodeString(v14, a2, 1u) )
      {
        break;
      }
      v12 = *(const UNICODE_STRING **)&v12->Length;
      a2 = String2;
      if ( v12 == (const UNICODE_STRING *)(v11 + 8) )
        goto LABEL_12;
    }
  }
  v10 = 1;
LABEL_13:
  if ( v10 )
    v9 = v13;
  if ( v4 )
  {
    ExReleaseResourceLite(*(PERESOURCE *)(a1 + 48));
    KeLeaveCriticalRegion();
  }
  return v9 != 0LL;
}
