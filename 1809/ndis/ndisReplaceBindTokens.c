/*
 * XREFs of ndisReplaceBindTokens @ 0x1C0106888
 * Callers:
 *     ndisReadNicBindProperties @ 0x1C0106590 (ndisReadNicBindProperties.c)
 * Callees:
 *     ?ReadBoolean@NetSetupPropertyBag@@QEAAJAEBU_NETSETUPPROPKEY@@AEA_N@Z @ 0x1C00C71E4 (-ReadBoolean@NetSetupPropertyBag@@QEAAJAEBU_NETSETUPPROPKEY@@AEA_N@Z.c)
 *     ?GetAtom@?$KStringAtomTableBase@$00@Rtl@@QEAAPEAU_KStringAtom@2@PEB_W@Z @ 0x1C0104E20 (-GetAtom@-$KStringAtomTableBase@$00@Rtl@@QEAAPEAU_KStringAtom@2@PEB_W@Z.c)
 */

__int64 __fastcall ndisReplaceBindTokens(__int64 a1, void ***a2)
{
  unsigned __int64 v2; // rbx
  __int64 result; // rax
  __int64 v5; // rcx
  char *Atom; // rsi
  __int64 v7; // rcx
  char *v8; // rax
  unsigned __int64 v9; // rdx
  unsigned __int64 i; // rcx
  __int64 v11; // rdx
  _QWORD *v12; // r8
  __int64 v13; // rcx
  bool v14; // [rsp+40h] [rbp+18h] BYREF

  v2 = 0LL;
  if ( *((_QWORD *)P + 11) )
  {
    result = NetSetupPropertyBag::ReadBoolean(a2, (const struct _NETSETUPPROPKEY *)&unk_1C0091520, &v14);
    if ( (_DWORD)result )
      return result;
    if ( !v14 )
    {
      Atom = Rtl::KStringAtomTableBase<1>::GetAtom(v5, L"ndis5");
      v8 = Rtl::KStringAtomTableBase<1>::GetAtom(v7, L"wlan");
      if ( !Atom || !v8 )
        return 3221225626LL;
      v9 = *(unsigned int *)(a1 + 52);
      for ( i = 0LL; i != v9; ++i )
      {
        if ( i >= v9 )
LABEL_17:
          __fastfail(5u);
        if ( *(char **)(*(_QWORD *)(a1 + 56) + 8 * i) == v8 )
          return 0LL;
      }
      v11 = *(unsigned int *)(a1 + 20);
      v12 = P;
      while ( v2 != v11 )
      {
        if ( v2 >= *(unsigned int *)(a1 + 20) )
          goto LABEL_17;
        v13 = *(_QWORD *)(a1 + 24);
        if ( *(char **)(v13 + 8 * v2) == Atom )
          *(_QWORD *)(v13 + 8 * v2) = v12[11];
        ++v2;
      }
    }
  }
  return 0LL;
}
