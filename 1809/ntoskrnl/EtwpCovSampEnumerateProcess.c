/*
 * XREFs of EtwpCovSampEnumerateProcess @ 0x1408C77C0
 * Callers:
 *     <none>
 * Callees:
 *     KiStackAttachProcess @ 0x140016DB0 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x140017190 (KiUnstackDetachProcess.c)
 *     ExReleaseRundownProtection_0 @ 0x14004D2F0 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x14004D320 (ExAcquireRundownProtection_0.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     MmEnumerateAddressSpaceAndReferenceImages @ 0x1405DE340 (MmEnumerateAddressSpaceAndReferenceImages.c)
 *     EtwpCovSampImageNotify @ 0x1408C7D70 (EtwpCovSampImageNotify.c)
 */

__int64 __fastcall EtwpCovSampEnumerateProcess(__int64 BugCheckParameter1)
{
  int v1; // r14d
  unsigned __int64 *v2; // rdi
  unsigned __int64 v4; // r10
  unsigned __int64 *v5; // rsi
  __int64 v6; // rcx
  unsigned __int64 v7; // r10
  unsigned __int64 v8; // rax
  _QWORD v10[8]; // [rsp+30h] [rbp-49h] BYREF
  UNICODE_STRING FullImageName; // [rsp+70h] [rbp-9h] BYREF
  _BYTE v12[48]; // [rsp+80h] [rbp+7h] BYREF

  v1 = 0;
  v2 = 0LL;
  v10[0] = 0LL;
  if ( (PEPROCESS)BugCheckParameter1 == PsInitialSystemProcess )
    return 0LL;
  if ( (_KPROCESS *)BugCheckParameter1 == KeGetCurrentThread()->ApcState.Process )
    goto LABEL_5;
  if ( ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)(BugCheckParameter1 + 760)) )
  {
    KiStackAttachProcess((_KPROCESS *)BugCheckParameter1, 0LL, (__int64)v12);
    v1 = 1;
LABEL_5:
    v2 = (unsigned __int64 *)MmEnumerateAddressSpaceAndReferenceImages(BugCheckParameter1, 1);
    if ( v2 )
    {
      memset(&v10[1], 0, 0x38uLL);
      v4 = *v2;
      LODWORD(v10[2]) |= 0x400u;
      v10[1] = 56LL;
      v5 = v2;
      if ( v4 )
      {
        v6 = v10[0];
        do
        {
          if ( (v4 & 3) == 0 )
          {
            v7 = v4 & 0xFFFFFFFFFFFFFFFCuLL;
            v8 = v5[1] & 0xFFFFFFFFFFFF0000uLL;
            *v5 = v7;
            v10[3] = v8;
            v10[5] = v5[3];
            v10[7] = v7;
            if ( FltMgrCallbacks
              && (*(int (__fastcall **)(unsigned __int64, __int64, UNICODE_STRING *, _QWORD *))(FltMgrCallbacks + 24))(
                   v7,
                   1024LL,
                   &FullImageName,
                   v10) >= 0 )
            {
              EtwpCovSampImageNotify(&FullImageName, *(HANDLE *)(BugCheckParameter1 + 736), (PIMAGE_INFO)&v10[2]);
            }
            v6 = v10[0];
          }
          if ( v6 )
          {
            (*(void (**)(void))(FltMgrCallbacks + 32))();
            v6 = 0LL;
            v10[0] = 0LL;
          }
          v5 += 6;
          v4 = *v5;
        }
        while ( *v5 );
      }
    }
  }
  if ( v2 )
    ExFreePoolWithTag(v2, 0);
  if ( v1 )
  {
    KiUnstackDetachProcess((__int64)v12, 0LL);
    ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)(BugCheckParameter1 + 760));
  }
  return 0LL;
}
