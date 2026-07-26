/*
 * XREFs of KRegKey::QueryValueMultisz__lambda_29d8629352f6f89c7b5645c91a914417___lambda_b682bc781c4d660a15b7c549a2c203d1___ @ 0x1C0104734
 * Callers:
 *     KRegKey::QueryValueMultisz__lambda_29d8629352f6f89c7b5645c91a914417___lambda_b682bc781c4d660a15b7c549a2c203d1____0 @ 0x1C01048FC (KRegKey--QueryValueMultisz__lambda_29d8629352f6f89c7b5645c91a914417___lambda_b682bc_ea_1C01048FC.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0026050 (__security_check_cookie.c)
 *     ??_V@YAXPEAX@Z @ 0x1C00D0550 (--_V@YAXPEAX@Z.c)
 *     ?GetAtom@?$KStringAtomTableBase@$00@Rtl@@QEAAPEAU_KStringAtom@2@PEB_W@Z @ 0x1C0104E20 (-GetAtom@-$KStringAtomTableBase@$00@Rtl@@QEAAPEAU_KStringAtom@2@PEB_W@Z.c)
 *     ?append@?$KArray@PEAU_KStringAtom@Rtl@@$00@Rtl@@QEAA_NAEBQEAU_KStringAtom@2@@Z @ 0x1C0105364 (-append@-$KArray@PEAU_KStringAtom@Rtl@@$00@Rtl@@QEAA_NAEBQEAU_KStringAtom@2@@Z.c)
 *     ?reserve@?$KArray@PEAU_KStringAtom@Rtl@@$00@Rtl@@QEAA_N_K@Z @ 0x1C010696C (-reserve@-$KArray@PEAU_KStringAtom@Rtl@@$00@Rtl@@QEAA_N_K@Z.c)
 */

__int64 __fastcall KRegKey::QueryValueMultisz__lambda_29d8629352f6f89c7b5645c91a914417___lambda_b682bc781c4d660a15b7c549a2c203d1___(
        HANDLE *a1,
        _UNICODE_STRING *a2)
{
  void *v4; // rbx
  _DWORD *PoolWithTag; // rsi
  NTSTATUS v6; // eax
  unsigned int v7; // edi
  __int64 v8; // rax
  _WORD *v9; // rdi
  _WORD *v10; // rcx
  unsigned __int64 v11; // rdx
  unsigned int v12; // eax
  __int64 v14; // rcx
  _WORD *v15; // rsi
  ULONG ResultLength; // [rsp+30h] [rbp-148h] BYREF
  __int64 Atom; // [rsp+38h] [rbp-140h] BYREF
  _BYTE KeyValueInformation[256]; // [rsp+40h] [rbp-138h] BYREF

  v4 = 0LL;
  PoolWithTag = KeyValueInformation;
  v6 = ZwQueryValueKey(*a1, a2, KeyValuePartialInformation, KeyValueInformation, 0x100u, &ResultLength);
  v7 = v6;
  if ( v6 == -2147483643 )
  {
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, ResultLength, 0x7A536C4Du);
    if ( !PoolWithTag )
      goto LABEL_7;
    operator delete[](0LL);
    v4 = PoolWithTag;
    v6 = ZwQueryValueKey(*a1, a2, KeyValuePartialInformation, PoolWithTag, ResultLength, &ResultLength);
    v7 = v6;
  }
  if ( v6 < 0 )
    goto LABEL_16;
  if ( PoolWithTag[1] != 7 )
  {
    v7 = -1073741788;
    goto LABEL_16;
  }
  v8 = (unsigned int)PoolWithTag[2];
  if ( (v8 & 1) != 0 )
  {
    v7 = -1073741811;
    goto LABEL_16;
  }
  v9 = PoolWithTag + 3;
  v10 = PoolWithTag + 3;
  v11 = (unsigned __int64)PoolWithTag + v8 + 12;
  v12 = 0;
  if ( (unsigned __int64)(PoolWithTag + 3) >= v11 )
  {
LABEL_15:
    v7 = -1073741789;
    goto LABEL_16;
  }
LABEL_11:
  if ( *v10 )
  {
    while ( 1 )
    {
      if ( (unsigned __int64)++v10 >= v11 )
        goto LABEL_15;
      if ( !*v10 )
      {
        ++v12;
        if ( (unsigned __int64)++v10 < v11 )
          goto LABEL_11;
        goto LABEL_15;
      }
    }
  }
  if ( !(unsigned __int8)Rtl::KArray<Rtl::_KStringAtom *,1>::reserve((char *)P + 72, v12 + 4LL) )
  {
LABEL_7:
    v7 = -1073741670;
    goto LABEL_16;
  }
  while ( *v9 )
  {
    v15 = v9;
    do
      ++v15;
    while ( *v15 );
    Atom = Rtl::KStringAtomTableBase<1>::GetAtom(v14, v9);
    if ( !Atom )
      goto LABEL_7;
    Rtl::KArray<Rtl::_KStringAtom *,1>::append((char *)P + 72, &Atom);
    v9 = v15 + 1;
  }
  v7 = 0;
LABEL_16:
  operator delete[](v4);
  return v7;
}
