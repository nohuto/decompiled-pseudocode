/*
 * XREFs of LdrAppxHandleIntegrityFailure @ 0x1800CD7D0
 * Callers:
 *     LdrpMapDllNtFileName @ 0x18002ABA0 (LdrpMapDllNtFileName.c)
 * Callees:
 *     RtlFreeHeap @ 0x180017E40 (RtlFreeHeap.c)
 *     RtlQueryPackageIdentity @ 0x180074660 (RtlQueryPackageIdentity.c)
 *     __security_check_cookie @ 0x18008FEC0 (__security_check_cookie.c)
 *     NtClose @ 0x1800A04C0 (NtClose.c)
 *     NtQueryValueKey @ 0x1800A05C0 (NtQueryValueKey.c)
 *     ZwTerminateProcess @ 0x1800A0860 (ZwTerminateProcess.c)
 *     RtlCaptureContext @ 0x1800A4310 (RtlCaptureContext.c)
 *     memset @ 0x1800A7100 (memset.c)
 *     LdrpAppxEtwGenericIntegrityFailure @ 0x1800CD9E0 (LdrpAppxEtwGenericIntegrityFailure.c)
 *     LdrpAppxEtwIntegrityFailure @ 0x1800CDA68 (LdrpAppxEtwIntegrityFailure.c)
 *     LdrpAppxGetBinaryNameKeyInformation @ 0x1800CDB60 (LdrpAppxGetBinaryNameKeyInformation.c)
 *     LdrpAppxGetRemediationRegistryKey @ 0x1800CDCB4 (LdrpAppxGetRemediationRegistryKey.c)
 *     RtlReportException @ 0x1800DDD10 (RtlReportException.c)
 */

__int64 __fastcall LdrAppxHandleIntegrityFailure(unsigned int a1)
{
  int PackageIdentity; // ebx
  _WORD *v3; // rdi
  __int64 v4; // rcx
  HANDLE Handle; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v7; // [rsp+40h] [rbp-C0h] BYREF
  _WORD *v8; // [rsp+48h] [rbp-B8h] BYREF
  unsigned __int64 v9; // [rsp+50h] [rbp-B0h] BYREF
  int v10; // [rsp+58h] [rbp-A8h]
  const wchar_t *v11; // [rsp+60h] [rbp-A0h]
  _QWORD v12[20]; // [rsp+70h] [rbp-90h] BYREF
  struct _CONTEXT ContextRecord; // [rsp+110h] [rbp+10h] BYREF
  _DWORD v14[20]; // [rsp+5E0h] [rbp+4E0h] BYREF
  _BYTE v15[256]; // [rsp+630h] [rbp+530h] BYREF

  v7 = 256LL;
  v10 = 1441812;
  v11 = L"BinaryHash";
  PackageIdentity = RtlQueryPackageIdentity(-4, (int)v15, (int)&v7, 0, 0LL, 0LL);
  if ( PackageIdentity < 0 )
    goto LABEL_14;
  PackageIdentity = LdrpAppxGetRemediationRegistryKey(a1, v15, &Handle);
  if ( PackageIdentity < 0 )
    goto LABEL_14;
  PackageIdentity = LdrpAppxGetBinaryNameKeyInformation(Handle, &v8, &v9);
  if ( PackageIdentity >= 0 )
  {
    v3 = v8;
    LODWORD(v4) = 0;
    if ( *v8 )
    {
      do
        v4 = (unsigned int)(v4 + 1);
      while ( v8[v4] );
    }
    memset(v14, 0, sizeof(v14));
    PackageIdentity = NtQueryValueKey();
    if ( PackageIdentity >= 0 )
    {
      if ( v14[1] != 3 || !v14[2] )
        PackageIdentity = -1073739509;
      if ( PackageIdentity >= 0 )
        LdrpAppxEtwIntegrityFailure(a1, v15, v3);
    }
    RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v9);
  }
  NtClose(Handle);
  if ( PackageIdentity < 0 )
LABEL_14:
    LdrpAppxEtwGenericIntegrityFailure((unsigned int)PackageIdentity);
  if ( a1 != -1073740673 )
  {
    memset(v12, 0, 0x98uLL);
    v12[0] = 0x1060C201ELL;
    v12[2] = LdrAppxHandleIntegrityFailure;
    memset(&ContextRecord, 0, sizeof(ContextRecord));
    RtlCaptureContext(&ContextRecord);
    RtlReportException(v12, &ContextRecord, 2LL);
    ZwTerminateProcess();
  }
  return 3221225781LL;
}
