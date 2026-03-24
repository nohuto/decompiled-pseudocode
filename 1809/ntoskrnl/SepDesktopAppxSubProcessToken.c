/*
 * XREFs of SepDesktopAppxSubProcessToken @ 0x1400DA020
 * Callers:
 *     SeSubProcessToken @ 0x14064EA4C (SeSubProcessToken.c)
 * Callees:
 *     ExReleaseResourceLite @ 0x14004F590 (ExReleaseResourceLite.c)
 *     ExAcquireResourceExclusiveLite @ 0x1400505F0 (ExAcquireResourceExclusiveLite.c)
 *     RtlQueryPackageClaims @ 0x1400A5590 (RtlQueryPackageClaims.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1400B79B0 (KiLeaveCriticalRegionUnsafe.c)
 *     AuthzBasepSetSecurityAttributesToken @ 0x1400D8A94 (AuthzBasepSetSecurityAttributesToken.c)
 *     __security_check_cookie @ 0x140194010 (__security_check_cookie.c)
 *     SepDesktopAppModifyTokenBreakaway @ 0x1402FED78 (SepDesktopAppModifyTokenBreakaway.c)
 *     SepVerifyDesktopAppPolicyOverrideCaller @ 0x1402FEE10 (SepVerifyDesktopAppPolicyOverrideCaller.c)
 *     SepVerifyDesktopAppxImage @ 0x1402FF010 (SepVerifyDesktopAppxImage.c)
 */

__int64 __fastcall SepDesktopAppxSubProcessToken(__int64 a1, __int64 a2, char a3, _BYTE *a4, _BYTE *a5)
{
  NTSTATUS PackageClaims; // eax
  __int64 v10; // r8
  int v11; // ebx
  int v13; // eax
  struct _KTHREAD *CurrentThread; // rax
  signed __int32 v15[8]; // [rsp+0h] [rbp-E1h] BYREF
  size_t *v16; // [rsp+20h] [rbp-C1h]
  GUID *v17; // [rsp+28h] [rbp-B9h]
  __int64 *v18; // [rsp+30h] [rbp-B1h]
  __int64 v19; // [rsp+38h] [rbp-A9h]
  _BYTE v20[8]; // [rsp+40h] [rbp-A1h] BYREF
  __int64 v21; // [rsp+48h] [rbp-99h] BYREF
  _DWORD v22[2]; // [rsp+50h] [rbp-91h] BYREF
  int *v23; // [rsp+58h] [rbp-89h]
  int v24[4]; // [rsp+60h] [rbp-81h] BYREF
  int v25; // [rsp+70h] [rbp-71h] BYREF
  const WCHAR *v26; // [rsp+78h] [rbp-69h]
  __int64 v27; // [rsp+80h] [rbp-61h]
  __int64 v28; // [rsp+88h] [rbp-59h]
  __int64 v29; // [rsp+90h] [rbp-51h]
  int v30; // [rsp+98h] [rbp-49h]
  const wchar_t *v31; // [rsp+A0h] [rbp-41h]
  __int64 v32; // [rsp+A8h] [rbp-39h]
  __int64 v33; // [rsp+B0h] [rbp-31h]
  __int64 v34; // [rsp+B8h] [rbp-29h]
  int v35; // [rsp+C0h] [rbp-21h]
  const wchar_t *v36; // [rsp+C8h] [rbp-19h]
  __int64 v37; // [rsp+D0h] [rbp-11h]
  __int64 v38; // [rsp+D8h] [rbp-9h]
  __int64 v39; // [rsp+E0h] [rbp-1h]

  v21 = 0LL;
  v19 = 0LL;
  v26 = L"WIN://SYSAPPID";
  *a4 = 0;
  v27 = 0LL;
  v28 = 0LL;
  v29 = 0LL;
  v20[0] = 0;
  v31 = L"WIN://PKG";
  v25 = 1966108;
  v32 = 0LL;
  v33 = 0LL;
  v34 = 0LL;
  v36 = L"WIN://PKGHOSTID";
  v37 = 0LL;
  v38 = 0LL;
  v39 = 0LL;
  v18 = &v21;
  v17 = 0LL;
  v16 = 0LL;
  v30 = 1310738;
  v35 = 2097182;
  *a5 = 0;
  PackageClaims = RtlQueryPackageClaims(a1, 0LL, 0LL, 0LL, v16, v17, (int)v18, v19);
  v11 = PackageClaims;
  if ( PackageClaims < 0 )
  {
    if ( PackageClaims == -1073741275 )
      v11 = 0;
    goto LABEL_4;
  }
  v13 = v21;
  if ( (v21 & 4) == 0 )
    goto LABEL_4;
  *a5 = 1;
  if ( (a3 & 3) == 3 )
  {
    v11 = -1073741811;
    goto LABEL_8;
  }
  if ( (a3 & 1) != 0 && (v13 & 0x20) != 0 )
  {
    v11 = SepDesktopAppModifyTokenBreakaway(a1, &v21, 0LL);
    if ( v11 < 0 )
      goto LABEL_8;
    v13 = v21;
  }
  if ( (a3 & 6) != 0 || (v13 & 0x20) != 0 )
  {
    if ( (a3 & 2) != 0 && (v13 & 0x20) == 0 )
    {
      LOBYTE(v10) = 1;
      v11 = SepDesktopAppModifyTokenBreakaway(a1, &v21, v10);
      if ( v11 < 0 )
        goto LABEL_8;
    }
    if ( (unsigned __int8)SepVerifyDesktopAppPolicyOverrideCaller(a1) )
      goto LABEL_4;
    v13 = v21;
  }
  LOBYTE(v10) = (v13 & 0xFF0000) == 196608LL;
  v11 = SepVerifyDesktopAppxImage(a2, a1, v10, v20);
  if ( v11 < 0 )
    goto LABEL_8;
  if ( !v20[0] )
  {
    LODWORD(v28) = 0;
    LOWORD(v27) = 3;
    v24[0] = 3;
    v24[1] = 3;
    v24[2] = 3;
    v22[1] = 3;
    LOWORD(v32) = 2;
    LODWORD(v33) = 0;
    LOWORD(v37) = 2;
    LODWORD(v38) = 0;
    v23 = &v25;
    CurrentThread = KeGetCurrentThread();
    v22[0] = 1;
    --CurrentThread->KernelApcDisable;
    ExAcquireResourceExclusiveLite(*(PERESOURCE *)(a1 + 48), 1u);
    _InterlockedOr(v15, 0);
    v11 = AuthzBasepSetSecurityAttributesToken(*(_DWORD **)(a1 + 776), v24, (__int64)v22);
    *(_QWORD *)(a1 + 56) = ExpLuidIncrement + _InterlockedExchangeAdd64(&ExpLuid, ExpLuidIncrement);
    _InterlockedOr(v15, 0);
    ExReleaseResourceLite(*(PERESOURCE *)(a1 + 48));
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
    *a4 = 1;
    *a5 = 0;
  }
LABEL_4:
  if ( v11 < 0 )
LABEL_8:
    *a5 = 0;
  return (unsigned int)v11;
}
