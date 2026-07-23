/*
 * XREFs of SepDesktopAppxSubProcessToken @ 0x140084754
 * Callers:
 *     SeSubProcessToken @ 0x140618F30 (SeSubProcessToken.c)
 * Callees:
 *     ExReleaseResourceLite @ 0x14003BBD0 (ExReleaseResourceLite.c)
 *     ExAcquireResourceExclusiveLite @ 0x14003C350 (ExAcquireResourceExclusiveLite.c)
 *     KeLeaveCriticalRegionThread @ 0x14003FC70 (KeLeaveCriticalRegionThread.c)
 *     RtlQueryPackageClaims @ 0x140084370 (RtlQueryPackageClaims.c)
 *     AuthzBasepSetSecurityAttributesToken @ 0x140084880 (AuthzBasepSetSecurityAttributesToken.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     SepDesktopAppModifyTokenBreakaway @ 0x14031CFAC (SepDesktopAppModifyTokenBreakaway.c)
 *     SepVerifyDesktopAppPolicyOverrideCaller @ 0x14031D044 (SepVerifyDesktopAppPolicyOverrideCaller.c)
 *     SepVerifyDesktopAppxImage @ 0x14031D258 (SepVerifyDesktopAppxImage.c)
 */

__int64 __fastcall SepDesktopAppxSubProcessToken(PERESOURCE *TokenHandle, __int64 a2, char a3, _BYTE *a4, _BYTE *a5)
{
  bool v9; // si
  NTSTATUS PackageClaims; // eax
  __int64 v11; // r8
  int v12; // ebx
  ULONG Flags; // eax
  struct _KTHREAD *CurrentThread; // rax
  signed __int32 v16[8]; // [rsp+0h] [rbp-E1h] BYREF
  PSIZE_T AppIdSize; // [rsp+20h] [rbp-C1h]
  PGUID DynamicId; // [rsp+28h] [rbp-B9h]
  PPS_PKG_CLAIM PkgClaim; // [rsp+30h] [rbp-B1h]
  PULONG64 AttributesPresent; // [rsp+38h] [rbp-A9h]
  _BYTE v21[8]; // [rsp+40h] [rbp-A1h] BYREF
  _PS_PKG_CLAIM v22; // [rsp+48h] [rbp-99h] BYREF
  _DWORD v23[2]; // [rsp+50h] [rbp-91h] BYREF
  int *v24; // [rsp+58h] [rbp-89h]
  _DWORD v25[4]; // [rsp+60h] [rbp-81h] BYREF
  int v26; // [rsp+70h] [rbp-71h] BYREF
  const WCHAR *v27; // [rsp+78h] [rbp-69h]
  __int64 v28; // [rsp+80h] [rbp-61h]
  __int64 v29; // [rsp+88h] [rbp-59h]
  __int64 v30; // [rsp+90h] [rbp-51h]
  int v31; // [rsp+98h] [rbp-49h]
  const wchar_t *v32; // [rsp+A0h] [rbp-41h]
  __int64 v33; // [rsp+A8h] [rbp-39h]
  __int64 v34; // [rsp+B0h] [rbp-31h]
  __int64 v35; // [rsp+B8h] [rbp-29h]
  int v36; // [rsp+C0h] [rbp-21h]
  const wchar_t *v37; // [rsp+C8h] [rbp-19h]
  __int64 v38; // [rsp+D0h] [rbp-11h]
  __int64 v39; // [rsp+D8h] [rbp-9h]
  __int64 v40; // [rsp+E0h] [rbp-1h]

  v27 = L"WIN://SYSAPPID";
  v26 = 1966108;
  v28 = 0LL;
  v29 = 0LL;
  v30 = 0LL;
  AttributesPresent = 0LL;
  v32 = L"WIN://PKG";
  *a4 = 0;
  v33 = 0LL;
  v34 = 0LL;
  v35 = 0LL;
  v9 = 0;
  v22 = 0LL;
  v37 = L"WIN://PKGHOSTID";
  v38 = 0LL;
  v39 = 0LL;
  v40 = 0LL;
  PkgClaim = &v22;
  DynamicId = 0LL;
  AppIdSize = 0LL;
  v21[0] = 0;
  v31 = 1310738;
  v36 = 2097182;
  *a5 = 0;
  PackageClaims = RtlQueryPackageClaims(TokenHandle, 0LL, 0LL, 0LL, AppIdSize, DynamicId, PkgClaim, AttributesPresent);
  v12 = PackageClaims;
  if ( PackageClaims < 0 )
  {
    if ( PackageClaims == -1073741275 )
      v12 = 0;
    goto LABEL_4;
  }
  Flags = v22.Flags;
  if ( (v22.Flags & 4) == 0 )
    goto LABEL_4;
  *a5 = 1;
  if ( (a3 & 3) == 3 )
  {
    v12 = -1073741811;
    goto LABEL_8;
  }
  if ( (a3 & 1) != 0 && (Flags & 0x20) != 0 )
  {
    v12 = SepDesktopAppModifyTokenBreakaway(TokenHandle, &v22, 0LL);
    if ( v12 < 0 )
      goto LABEL_8;
    Flags = v22.Flags;
  }
  if ( (a3 & 6) == 0 && (Flags & 0x20) == 0 )
    goto LABEL_23;
  if ( (a3 & 2) != 0 && (Flags & 0x20) == 0 )
  {
    LOBYTE(v11) = 1;
    v12 = SepDesktopAppModifyTokenBreakaway(TokenHandle, &v22, v11);
    if ( v12 < 0 )
      goto LABEL_8;
  }
  if ( !(unsigned __int8)SepVerifyDesktopAppPolicyOverrideCaller(TokenHandle) )
  {
    Flags = v22.Flags;
LABEL_23:
    if ( (Flags & 0xFF0000) == 0x30000LL )
      v9 = (Flags & 0x2000) == 0LL;
    LOBYTE(v11) = v9;
    v12 = SepVerifyDesktopAppxImage(a2, TokenHandle, v11, v21);
    if ( v12 < 0 )
      goto LABEL_8;
    if ( !v21[0] )
    {
      LOWORD(v28) = 3;
      v25[0] = 3;
      v25[1] = 3;
      v25[2] = 3;
      v23[1] = 3;
      LODWORD(v29) = 0;
      LOWORD(v33) = 2;
      LODWORD(v34) = 0;
      LOWORD(v38) = 2;
      LODWORD(v39) = 0;
      v24 = &v26;
      CurrentThread = KeGetCurrentThread();
      v23[0] = 1;
      --CurrentThread->KernelApcDisable;
      ExAcquireResourceExclusiveLite(TokenHandle[6], 1u);
      _InterlockedOr(v16, 0);
      v12 = AuthzBasepSetSecurityAttributesToken(TokenHandle[97], v25, v23);
      TokenHandle[7] = (PERESOURCE)(ExpLuidIncrement + _InterlockedExchangeAdd64(&ExpLuid, ExpLuidIncrement));
      _InterlockedOr(v16, 0);
      ExReleaseResourceLite(TokenHandle[6]);
      KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
      *a4 = 1;
      *a5 = 0;
    }
  }
LABEL_4:
  if ( v12 < 0 )
LABEL_8:
    *a5 = 0;
  return (unsigned int)v12;
}
