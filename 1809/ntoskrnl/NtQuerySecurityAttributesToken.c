/*
 * XREFs of NtQuerySecurityAttributesToken @ 0x140626040
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObject @ 0x14004E150 (ObfDereferenceObject.c)
 *     ExReleaseResourceLite @ 0x14004F590 (ExReleaseResourceLite.c)
 *     ExAcquireResourceSharedLite @ 0x140050860 (ExAcquireResourceSharedLite.c)
 *     SepInternalQuerySecurityAttributesTokenEx @ 0x1400A6AC8 (SepInternalQuerySecurityAttributesTokenEx.c)
 *     SepReferenceTokenByHandle @ 0x1400A8D80 (SepReferenceTokenByHandle.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1400B79B0 (KiLeaveCriticalRegionUnsafe.c)
 *     ExFreePoolWithTag @ 0x14034BC60 (ExFreePoolWithTag.c)
 *     SepCaptureUnicodeStringArray @ 0x140625B10 (SepCaptureUnicodeStringArray.c)
 *     ProbeForWrite @ 0x140629A60 (ProbeForWrite.c)
 */

__int64 __fastcall NtQuerySecurityAttributesToken(
        void *a1,
        SIZE_T a2,
        unsigned int a3,
        volatile void *a4,
        unsigned int Length,
        volatile void *Address)
{
  char v9; // r15
  char PreviousMode; // bl
  __int64 v11; // r13
  int SecurityAttributesToken; // esi
  struct _KTHREAD *CurrentThread; // rax
  PERESOURCE *v14; // rdi
  __int64 v15; // rdx
  _BYTE v17[3]; // [rsp+41h] [rbp-47h] BYREF
  int v18; // [rsp+44h] [rbp-44h]
  PVOID Object; // [rsp+48h] [rbp-40h] BYREF
  PVOID P; // [rsp+50h] [rbp-38h] BYREF
  __int64 v21; // [rsp+58h] [rbp-30h] BYREF

  P = 0LL;
  v9 = 0;
  Object = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( Length )
  {
    if ( a4 )
      goto LABEL_3;
LABEL_17:
    SecurityAttributesToken = -1073741811;
    v18 = -1073741811;
LABEL_18:
    v14 = (PERESOURCE *)Object;
    goto LABEL_8;
  }
  if ( a4 )
    goto LABEL_17;
LABEL_3:
  if ( PreviousMode )
  {
    ProbeForWrite(a4, Length, 4u);
    v11 = (__int64)Address;
    ProbeForWrite(Address, 4uLL, 4u);
  }
  else
  {
    v11 = (__int64)Address;
  }
  SecurityAttributesToken = SepCaptureUnicodeStringArray(a2, a3, PreviousMode, (SIZE_T *)&P);
  v18 = SecurityAttributesToken;
  if ( SecurityAttributesToken < 0 )
    goto LABEL_18;
  SecurityAttributesToken = SepReferenceTokenByHandle(a1, 8u, PreviousMode, &Object, v17, &v21);
  v18 = SecurityAttributesToken;
  if ( SecurityAttributesToken < 0 )
    goto LABEL_18;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v14 = (PERESOURCE *)Object;
  ExAcquireResourceSharedLite(*((PERESOURCE *)Object + 6), 1u);
  v9 = 1;
  SecurityAttributesToken = SepInternalQuerySecurityAttributesTokenEx(
                              (__int64)v14,
                              v15,
                              (__int64)P,
                              a3,
                              0,
                              (__int64)a4,
                              Length,
                              v11);
  v18 = SecurityAttributesToken;
LABEL_8:
  if ( PreviousMode == 1 && P )
    ExFreePoolWithTag(P, 0);
  if ( v9 )
  {
    ExReleaseResourceLite(v14[6]);
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
    SecurityAttributesToken = v18;
    v14 = (PERESOURCE *)Object;
  }
  if ( v14 )
    ObfDereferenceObject(v14);
  return (unsigned int)SecurityAttributesToken;
}
