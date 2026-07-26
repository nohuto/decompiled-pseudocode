/*
 * XREFs of ndisLoadNamedFilterAltitudes @ 0x1C0106288
 * Callers:
 *     ndisEnsureBindingInfoLoaded @ 0x1C0105DEC (ndisEnsureBindingInfoLoaded.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0026050 (__security_check_cookie.c)
 *     ?Open@KRegKey@@QEAAJKPEB_WPEAX@Z @ 0x1C00C74C4 (-Open@KRegKey@@QEAAJKPEB_WPEAX@Z.c)
 *     KRegKey::QueryValueMultisz__lambda_29d8629352f6f89c7b5645c91a914417___lambda_b682bc781c4d660a15b7c549a2c203d1____0 @ 0x1C01048FC (KRegKey--QueryValueMultisz__lambda_29d8629352f6f89c7b5645c91a914417___lambda_b682bc_ea_1C01048FC.c)
 *     ?GetAtom@?$KStringAtomTableBase@$00@Rtl@@QEAAPEAU_KStringAtom@2@PEB_W@Z @ 0x1C0104E20 (-GetAtom@-$KStringAtomTableBase@$00@Rtl@@QEAAPEAU_KStringAtom@2@PEB_W@Z.c)
 *     ?append@?$KArray@PEAU_KStringAtom@Rtl@@$00@Rtl@@QEAA_NAEBQEAU_KStringAtom@2@@Z @ 0x1C0105364 (-append@-$KArray@PEAU_KStringAtom@Rtl@@$00@Rtl@@QEAA_NAEBQEAU_KStringAtom@2@@Z.c)
 */

__int64 ndisLoadNamedFilterAltitudes()
{
  unsigned int v0; // eax
  unsigned int v1; // ebx
  __int64 v2; // rcx
  wchar_t **v3; // rbx
  HANDLE Handle; // [rsp+30h] [rbp-228h] BYREF
  char *Atom; // [rsp+38h] [rbp-220h] BYREF
  wchar_t Dst[256]; // [rsp+40h] [rbp-218h] BYREF

  Handle = 0LL;
  wcscpy_s(Dst, 0x100uLL, L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\NetworkSetup2\\Parameters");
  v0 = KRegKey::Open((KRegKey *)&Handle, 1u, Dst, 0LL);
  v1 = v0;
  if ( v0 == -1073741772 )
  {
LABEL_8:
    v1 = 0;
  }
  else if ( !v0 )
  {
    v1 = KRegKey::QueryValueMultisz__lambda_29d8629352f6f89c7b5645c91a914417___lambda_b682bc781c4d660a15b7c549a2c203d1____0(&Handle);
    if ( !v1 )
    {
      v3 = off_1C00871D0;
      while ( 1 )
      {
        Atom = Rtl::KStringAtomTableBase<1>::GetAtom(v2, *v3);
        if ( !Atom || !Rtl::KArray<Rtl::_KStringAtom *,1>::append((__int64)P + 72, &Atom) )
          break;
        if ( ++v3 == &off_1C00871F0 )
          goto LABEL_8;
      }
      v1 = -1073741670;
    }
  }
  if ( Handle )
    ZwClose(Handle);
  return v1;
}
