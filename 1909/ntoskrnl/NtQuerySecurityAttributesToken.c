/*
 * XREFs of NtQuerySecurityAttributesToken @ 0x140665E60
 * Callers:
 *     <none>
 * Callees:
 *     SepReferenceTokenByHandle @ 0x140036B70 (SepReferenceTokenByHandle.c)
 *     ExReleaseResourceLite @ 0x14003B910 (ExReleaseResourceLite.c)
 *     ExAcquireResourceSharedLite @ 0x14003C470 (ExAcquireResourceSharedLite.c)
 *     ObfDereferenceObject @ 0x14003DFA0 (ObfDereferenceObject.c)
 *     KeLeaveCriticalRegionThread @ 0x14003F9B0 (KeLeaveCriticalRegionThread.c)
 *     SepInternalQuerySecurityAttributesTokenEx @ 0x1400CF360 (SepInternalQuerySecurityAttributesTokenEx.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     ProbeForWrite @ 0x1405F10D0 (ProbeForWrite.c)
 *     SepCaptureUnicodeStringArray @ 0x1406674B0 (SepCaptureUnicodeStringArray.c)
 *     ExRaiseAccessViolation @ 0x140913900 (ExRaiseAccessViolation.c)
 *     ExRaiseDatatypeMisalignment @ 0x140913920 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall NtQuerySecurityAttributesToken(
        void *a1,
        __int64 a2,
        unsigned int a3,
        volatile void *a4,
        unsigned int Length,
        unsigned __int64 a6)
{
  char v9; // r13
  unsigned __int8 v10; // si
  __int64 v11; // r14
  unsigned __int64 v12; // rdx
  unsigned __int64 v13; // rax
  unsigned __int64 v14; // rax
  int SecurityAttributesToken; // edi
  struct _KTHREAD *CurrentThread; // rax
  PERESOURCE *v17; // rbx
  char v18; // dl
  _BYTE v20[4]; // [rsp+40h] [rbp-48h] BYREF
  int v21; // [rsp+44h] [rbp-44h]
  PVOID Object; // [rsp+48h] [rbp-40h] BYREF
  PVOID P; // [rsp+50h] [rbp-38h] BYREF
  __int64 v24; // [rsp+58h] [rbp-30h] BYREF

  P = 0LL;
  v9 = 0;
  Object = 0LL;
  v24 = 0LL;
  v20[0] = 0;
  v10 = KeGetCurrentThread()->$24A664F1AFBF48775CBEA2BECCC9B900::gap0[10];
  v20[1] = v10;
  if ( Length )
  {
    if ( a4 )
      goto LABEL_3;
LABEL_24:
    SecurityAttributesToken = -1073741811;
    v21 = -1073741811;
LABEL_25:
    v17 = (PERESOURCE *)Object;
    goto LABEL_15;
  }
  if ( a4 )
    goto LABEL_24;
LABEL_3:
  if ( v10 )
  {
    ProbeForWrite(a4, Length, 4u);
    v11 = a6;
    v12 = a6;
    if ( (a6 & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    v13 = a6 + 3;
    if ( a6 >= a6 + 3 || v13 >= 0x7FFFFFFF0000LL )
      ExRaiseAccessViolation();
    v14 = (v13 & 0xFFFFFFFFFFFFF000uLL) + 4096;
    do
    {
      *(_BYTE *)v12 = *(_BYTE *)v12;
      v12 = (v12 & 0xFFFFFFFFFFFFF000uLL) + 4096;
    }
    while ( v12 != v14 );
  }
  else
  {
    v11 = a6;
  }
  SecurityAttributesToken = SepCaptureUnicodeStringArray(a2, a3, v10, &P);
  v21 = SecurityAttributesToken;
  if ( SecurityAttributesToken < 0 )
    goto LABEL_25;
  SecurityAttributesToken = SepReferenceTokenByHandle(a1, 8u, v10, &Object, v20, &v24);
  v21 = SecurityAttributesToken;
  if ( SecurityAttributesToken < 0 )
    goto LABEL_25;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v17 = (PERESOURCE *)Object;
  ExAcquireResourceSharedLite(*((PERESOURCE *)Object + 6), 1u);
  v9 = 1;
  SecurityAttributesToken = SepInternalQuerySecurityAttributesTokenEx(
                              (__int64)v17,
                              v18,
                              (__int64)P,
                              a3,
                              0,
                              (__int64)a4,
                              Length,
                              v11);
  v21 = SecurityAttributesToken;
LABEL_15:
  if ( v10 == 1 && P )
    ExFreePoolWithTag(P, 0);
  if ( v9 )
  {
    ExReleaseResourceLite(v17[6]);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
    SecurityAttributesToken = v21;
    v17 = (PERESOURCE *)Object;
  }
  if ( v17 )
    ObfDereferenceObject(v17);
  return (unsigned int)SecurityAttributesToken;
}
