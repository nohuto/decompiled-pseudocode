/*
 * XREFs of SeSecurityAttributePresent @ 0x1400A6F90
 * Callers:
 *     SepVerifyDesktopAppxPackageName @ 0x1402FF3BC (SepVerifyDesktopAppxPackageName.c)
 *     ExpGetProcessInformation @ 0x1405E7B60 (ExpGetProcessInformation.c)
 *     PsQueryProcessAttributesByToken @ 0x140626980 (PsQueryProcessAttributesByToken.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x14004F410 (KeLeaveCriticalRegion.c)
 *     ExReleaseResourceLite @ 0x14004F590 (ExReleaseResourceLite.c)
 *     ExpAcquireResourceSharedLite @ 0x140050960 (ExpAcquireResourceSharedLite.c)
 *     AuthzBasepEqualUnicodeString @ 0x1400A5D28 (AuthzBasepEqualUnicodeString.c)
 *     AuthzBasepEqualUnicodeStringCaseSensitive @ 0x14013AEF8 (AuthzBasepEqualUnicodeStringCaseSensitive.c)
 *     ExAcquireFastResourceShared @ 0x140165C60 (ExAcquireFastResourceShared.c)
 *     ExpAllocateOwnerEntryForLegacyShim @ 0x140166464 (ExpAllocateOwnerEntryForLegacyShim.c)
 *     KeBugCheckEx @ 0x1401BBD20 (KeBugCheckEx.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     RtlEqualUnicodeString @ 0x140626D60 (RtlEqualUnicodeString.c)
 */

_BOOL8 __fastcall SeSecurityAttributePresent(__int64 a1, const UNICODE_STRING *a2)
{
  char v3; // bp
  struct _KTHREAD *CurrentThread; // rax
  ULONG_PTR v5; // rbx
  __int16 v6; // ax
  const UNICODE_STRING *v7; // rdi
  char v8; // r12
  __int64 v9; // r13
  const UNICODE_STRING *v10; // rbx
  const UNICODE_STRING *v11; // r15
  const UNICODE_STRING *v12; // rcx
  __int64 *v14; // r14
  unsigned __int8 CurrentIrql; // dl
  struct _KTHREAD *v17; // r8
  void *OwnerEntryForLegacyShim; // rdi
  const UNICODE_STRING *String2; // [rsp+68h] [rbp+10h]

  String2 = a2;
  v3 = 0;
  if ( KeGetCurrentIrql() < 2u )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    v5 = *(_QWORD *)(a1 + 48);
    if ( (*(_WORD *)(v5 + 26) & 0x41) == 1 )
      KeBugCheckEx(0x1C6u, 0xFuLL, *(_QWORD *)(a1 + 48), 0LL, 0LL);
    v6 = *(_WORD *)(v5 + 26) & 1;
    if ( v6 )
    {
      CurrentIrql = KeGetCurrentIrql();
      v17 = KeGetCurrentThread();
      if ( CurrentIrql > 1u )
        KeBugCheckEx(0x1C6u, 0LL, CurrentIrql, 1uLL, 0LL);
      if ( (v17->ApcState.InProgressFlags & 2) != 0 )
        KeBugCheckEx(0x1C6u, 6uLL, 0LL, 0LL, 0LL);
      if ( !CurrentIrql && (v17->MiscFlags & 0x400) == 0 && !v17->WaitBlock[3].SpareLong )
        KeBugCheckEx(0x1C6u, 7uLL, 0LL, 0LL, 0LL);
    }
    if ( v6 )
    {
      OwnerEntryForLegacyShim = (void *)ExpAllocateOwnerEntryForLegacyShim(a1);
      if ( !(unsigned __int8)ExAcquireFastResourceShared(v5, (ULONG_PTR)OwnerEntryForLegacyShim) )
        ExFreePoolWithTag(OwnerEntryForLegacyShim, 0);
    }
    else
    {
      ExpAcquireResourceSharedLite(v5, 1);
    }
    a2 = String2;
    v3 = 1;
  }
  v7 = 0LL;
  v8 = 0;
  v9 = *(_QWORD *)(a1 + 776);
  v10 = *(const UNICODE_STRING **)(v9 + 8);
  v11 = 0LL;
  if ( v10 == (const UNICODE_STRING *)(v9 + 8) )
  {
LABEL_12:
    v14 = *(__int64 **)(v9 + 32);
    if ( v14 == (__int64 *)(v9 + 32) )
      goto LABEL_13;
    while ( 1 )
    {
      v11 = (const UNICODE_STRING *)(v14 - 2);
      if ( (v14[5] & 1) == 0 )
      {
        if ( AuthzBasepEqualUnicodeString(v11 + 2, String2) )
          break;
      }
      v14 = (__int64 *)*v14;
      if ( v14 == (__int64 *)(v9 + 32) )
        goto LABEL_13;
    }
  }
  else
  {
    while ( 1 )
    {
      v11 = v10;
      v12 = v10 + 2;
      if ( KeGetCurrentIrql() >= 2u
         ? AuthzBasepEqualUnicodeStringCaseSensitive(v12, a2)
         : RtlEqualUnicodeString(v12, a2, 1u) )
      {
        break;
      }
      v10 = *(const UNICODE_STRING **)&v10->Length;
      a2 = String2;
      if ( v10 == (const UNICODE_STRING *)(v9 + 8) )
        goto LABEL_12;
    }
  }
  v8 = 1;
LABEL_13:
  if ( v8 )
    v7 = v11;
  if ( v3 )
  {
    ExReleaseResourceLite(*(PERESOURCE *)(a1 + 48));
    KeLeaveCriticalRegion();
  }
  return v7 != 0LL;
}
