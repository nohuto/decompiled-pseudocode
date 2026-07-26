/*
 * XREFs of ndisLoadNamedFilterAltitudes @ 0x1C01265CC
 * Callers:
 *     ndisEnsureBindingInfoLoaded @ 0x1C01260F8 (ndisEnsureBindingInfoLoaded.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0040760 (__security_check_cookie.c)
 *     ?Open@KRegKey@@QEAAJKPEB_WPEAX@Z @ 0x1C0100B80 (-Open@KRegKey@@QEAAJKPEB_WPEAX@Z.c)
 *     KRegKey::QueryValueMultisz__lambda_29d8629352f6f89c7b5645c91a914417___lambda_b682bc781c4d660a15b7c549a2c203d1____0 @ 0x1C0124C94 (KRegKey--QueryValueMultisz__lambda_29d8629352f6f89c7b5645c91a914417___lambda_b682bc_ea_1C0124C94.c)
 *     ?GetAtom@?$KStringAtomTableBase@$00@Rtl@@QEAAPEAU_KStringAtom@2@PEB_W@Z @ 0x1C01251C0 (-GetAtom@-$KStringAtomTableBase@$00@Rtl@@QEAAPEAU_KStringAtom@2@PEB_W@Z.c)
 *     ?append@?$KArray@PEAU_KStringAtom@Rtl@@$00@Rtl@@QEAA_NAEBQEAU_KStringAtom@2@@Z @ 0x1C0125668 (-append@-$KArray@PEAU_KStringAtom@Rtl@@$00@Rtl@@QEAA_NAEBQEAU_KStringAtom@2@@Z.c)
 */

__int64 ndisLoadNamedFilterAltitudes()
{
  unsigned int v0; // eax
  unsigned int v1; // ebx
  wchar_t **v2; // rbx
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
      v2 = off_1C00CC1C0;
      while ( 1 )
      {
        Atom = Rtl::KStringAtomTableBase<1>::GetAtom((__int64)P, *v2);
        if ( !Atom || !Rtl::KArray<Rtl::_KStringAtom *,1>::append((__int64)P + 72, &Atom) )
          break;
        if ( ++v2 == &off_1C00CC1E0 )
          goto LABEL_8;
      }
      v1 = -1073741670;
    }
  }
  if ( Handle )
    ZwClose(Handle);
  return v1;
}
