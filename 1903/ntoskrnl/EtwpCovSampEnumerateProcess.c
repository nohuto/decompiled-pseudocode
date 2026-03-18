/*
 * XREFs of EtwpCovSampEnumerateProcess @ 0x140903950
 * Callers:
 *     <none>
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x140043820 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x1400438A0 (ExAcquireRundownProtection_0.c)
 *     KiUnstackDetachProcess @ 0x140090690 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x140090AF0 (KiStackAttachProcess.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1401CC5F0 (_guard_dispatch_icall.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     MmEnumerateAddressSpaceAndReferenceImages @ 0x1406BE140 (MmEnumerateAddressSpaceAndReferenceImages.c)
 *     EtwpCovSampImageNotify @ 0x140903F10 (EtwpCovSampImageNotify.c)
 */

__int64 __fastcall EtwpCovSampEnumerateProcess(__int64 BugCheckParameter1)
{
  int v2; // r14d
  unsigned __int64 *v3; // rdi
  unsigned __int64 v4; // r10
  unsigned __int64 *v5; // rsi
  __int64 v6; // rcx
  unsigned __int64 v7; // r10
  unsigned __int64 v8; // rax
  __int64 v10; // [rsp+30h] [rbp-49h] BYREF
  UNICODE_STRING FullImageName; // [rsp+38h] [rbp-41h] BYREF
  _QWORD v12[7]; // [rsp+48h] [rbp-31h] BYREF
  _BYTE v13[48]; // [rsp+80h] [rbp+7h] BYREF

  memset(v13, 0, sizeof(v13));
  v2 = 0;
  v10 = 0LL;
  v3 = 0LL;
  *(_QWORD *)&FullImageName.Length = 0LL;
  FullImageName.Buffer = 0LL;
  if ( (PEPROCESS)BugCheckParameter1 == PsInitialSystemProcess )
    return 0LL;
  if ( (_KPROCESS *)BugCheckParameter1 == KeGetCurrentThread()->ApcState.Process )
    goto LABEL_5;
  if ( ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)(BugCheckParameter1 + 768)) )
  {
    KiStackAttachProcess((_KPROCESS *)BugCheckParameter1, 0, (__int64)v13);
    v2 = 1;
LABEL_5:
    v3 = (unsigned __int64 *)MmEnumerateAddressSpaceAndReferenceImages(BugCheckParameter1, 1);
    if ( v3 )
    {
      memset(v12, 0, sizeof(v12));
      v4 = *v3;
      LODWORD(v12[1]) |= 0x400u;
      v12[0] = 56LL;
      v5 = v3;
      if ( v4 )
      {
        v6 = v10;
        do
        {
          if ( (v4 & 3) == 0 )
          {
            v7 = v4 & 0xFFFFFFFFFFFFFFFCuLL;
            v8 = v5[1] & 0xFFFFFFFFFFFF0000uLL;
            *v5 = v7;
            v12[2] = v8;
            v12[4] = v5[3];
            v12[6] = v7;
            if ( FltMgrCallbacks
              && (*(int (__fastcall **)(unsigned __int64, __int64, UNICODE_STRING *, __int64 *))(FltMgrCallbacks + 24))(
                   v7,
                   1024LL,
                   &FullImageName,
                   &v10) >= 0 )
            {
              EtwpCovSampImageNotify(&FullImageName, *(HANDLE *)(BugCheckParameter1 + 744), (PIMAGE_INFO)&v12[1]);
            }
            v6 = v10;
          }
          if ( v6 )
          {
            (*(void (**)(void))(FltMgrCallbacks + 32))();
            v6 = 0LL;
            v10 = 0LL;
          }
          v5 += 6;
          v4 = *v5;
        }
        while ( *v5 );
      }
    }
  }
  if ( v3 )
    ExFreePoolWithTag(v3, 0);
  if ( v2 )
  {
    KiUnstackDetachProcess((struct _KTHREAD *)v13, 0);
    ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)(BugCheckParameter1 + 768));
  }
  return 0LL;
}
