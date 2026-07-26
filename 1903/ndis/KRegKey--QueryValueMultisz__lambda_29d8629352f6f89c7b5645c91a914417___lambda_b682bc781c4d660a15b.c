/*
 * XREFs of KRegKey::QueryValueMultisz__lambda_29d8629352f6f89c7b5645c91a914417___lambda_b682bc781c4d660a15b7c549a2c203d1___ @ 0x1C0124AA8
 * Callers:
 *     KRegKey::QueryValueMultisz__lambda_29d8629352f6f89c7b5645c91a914417___lambda_b682bc781c4d660a15b7c549a2c203d1____0 @ 0x1C0124C94 (KRegKey--QueryValueMultisz__lambda_29d8629352f6f89c7b5645c91a914417___lambda_b682bc_ea_1C0124C94.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0040770 (__security_check_cookie.c)
 *     memset @ 0x1C0041440 (memset.c)
 *     ??_V@YAXPEAX@Z @ 0x1C010B93C (--_V@YAXPEAX@Z.c)
 *     ?GetAtom@?$KStringAtomTableBase@$00@Rtl@@QEAAPEAU_KStringAtom@2@PEB_W@Z @ 0x1C01251C0 (-GetAtom@-$KStringAtomTableBase@$00@Rtl@@QEAAPEAU_KStringAtom@2@PEB_W@Z.c)
 *     ?append@?$KArray@PEAU_KStringAtom@Rtl@@$00@Rtl@@QEAA_NAEBQEAU_KStringAtom@2@@Z @ 0x1C0125668 (-append@-$KArray@PEAU_KStringAtom@Rtl@@$00@Rtl@@QEAA_NAEBQEAU_KStringAtom@2@@Z.c)
 *     ?reserve@?$KArray@PEAU_KStringAtom@Rtl@@$00@Rtl@@QEAA_N_K@Z @ 0x1C0126CBC (-reserve@-$KArray@PEAU_KStringAtom@Rtl@@$00@Rtl@@QEAA_N_K@Z.c)
 */

__int64 __fastcall KRegKey::QueryValueMultisz__lambda_29d8629352f6f89c7b5645c91a914417___lambda_b682bc781c4d660a15b7c549a2c203d1___(
        HANDLE *a1,
        _UNICODE_STRING *a2)
{
  _BYTE *v4; // rsi
  _BYTE *v5; // rbx
  NTSTATUS v6; // eax
  NTSTATUS v7; // edi
  _BYTE *PoolWithTag; // rax
  __int64 v9; // rax
  _WORD *v10; // rdi
  unsigned int v11; // r8d
  _WORD *v12; // rcx
  unsigned __int64 v13; // rdx
  _WORD *v15; // rsi
  ULONG ResultLength; // [rsp+30h] [rbp-148h] BYREF
  __int64 Atom; // [rsp+38h] [rbp-140h] BYREF
  _BYTE KeyValueInformation[256]; // [rsp+40h] [rbp-138h] BYREF

  memset(KeyValueInformation, 0, sizeof(KeyValueInformation));
  v4 = KeyValueInformation;
  v5 = 0LL;
  v6 = ZwQueryValueKey(*a1, a2, KeyValuePartialInformation, KeyValueInformation, 0x100u, &ResultLength);
  v7 = v6;
  if ( v6 == -2147483643 )
  {
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, ResultLength, 0x7A536C4Du);
    v5 = PoolWithTag;
    if ( !PoolWithTag )
    {
LABEL_3:
      v7 = -1073741670;
      goto LABEL_17;
    }
    v7 = ZwQueryValueKey(*a1, a2, KeyValuePartialInformation, PoolWithTag, ResultLength, &ResultLength);
    if ( v7 < 0 )
      goto LABEL_17;
    v4 = v5;
  }
  else if ( v6 < 0 )
  {
    goto LABEL_17;
  }
  if ( *((_DWORD *)v4 + 1) != 7 )
  {
    v7 = -1073741788;
    goto LABEL_17;
  }
  v9 = *((unsigned int *)v4 + 2);
  if ( (v9 & 1) != 0 )
  {
    v7 = -1073741811;
    goto LABEL_17;
  }
  v10 = v4 + 12;
  v11 = 0;
  v12 = v4 + 12;
  v13 = (unsigned __int64)&v4[v9 + 12];
  if ( (unsigned __int64)(v4 + 12) >= v13 )
    goto LABEL_16;
LABEL_12:
  if ( *v12 )
  {
    while ( (unsigned __int64)++v12 < v13 )
    {
      if ( !*v12 )
      {
        ++v11;
        if ( (unsigned __int64)++v12 < v13 )
          goto LABEL_12;
        break;
      }
    }
LABEL_16:
    v7 = -1073741789;
    goto LABEL_17;
  }
  if ( !(unsigned __int8)Rtl::KArray<Rtl::_KStringAtom *,1>::reserve((char *)P + 72, v11 + 4LL) )
    goto LABEL_3;
  while ( *v10 )
  {
    v15 = v10;
    do
      ++v15;
    while ( *v15 );
    Atom = Rtl::KStringAtomTableBase<1>::GetAtom(P, v10);
    if ( !Atom )
      goto LABEL_3;
    Rtl::KArray<Rtl::_KStringAtom *,1>::append((char *)P + 72, &Atom);
    v10 = v15 + 1;
  }
  v7 = 0;
LABEL_17:
  if ( v5 )
    operator delete[](v5);
  return (unsigned int)v7;
}
