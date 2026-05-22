/*
 * XREFs of ?UnregisterSystemContextObserver@SystemContextProvider@@UEAAJPEAUISystemContextObserver@@@Z @ 0x1800D3320
 * Callers:
 *     ?UnregisterSystemContextObserver@InputConfigContextProvider@@UEAAJPEAUISystemContextObserver@@@Z @ 0x1800D2FA0 (-UnregisterSystemContextObserver@InputConfigContextProvider@@UEAAJPEAUISystemContextObserver@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180010FD4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?erase@?$_Hash@V?$_Uset_traits@PEAUISystemContextObserver@@V?$_Uhash_compare@PEAUISystemContextObserver@@U?$hash@PEAUISystemContextObserver@@@std@@U?$equal_to@PEAUISystemContextObserver@@@3@@std@@V?$allocator@PEAUISystemContextObserver@@@3@$0A@@std@@@std@@QEAA_KAEBQEAUISystemContextObserver@@@Z @ 0x1800D3568 (-erase@-$_Hash@V-$_Uset_traits@PEAUISystemContextObserver@@V-$_Uhash_compare@PEAUIS_ea_1800D3568.c)
 */

__int64 __fastcall SystemContextProvider::UnregisterSystemContextObserver(
        SystemContextProvider *this,
        struct ISystemContextObserver *a2)
{
  __int64 v4; // rdx
  __int64 v6; // rax
  struct ISystemContextObserver **v7; // rdx
  __int64 v8; // r10
  __int64 v9; // rcx
  __int64 v10; // r11
  __int64 *v11; // rdx
  __int64 v12; // r10
  __int64 *i; // rcx
  __int64 *v14; // rax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  struct ISystemContextObserver *v16; // [rsp+38h] [rbp+10h] BYREF

  v16 = a2;
  if ( !a2 )
  {
    v4 = 72LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v4,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\utilities\\systemcontextprovider\\lib\\systemcontextprovider.cpp",
      (const char *)0x80070057LL);
    return 2147942487LL;
  }
  v6 = 0xCBF29CE484222325uLL;
  v7 = &v16;
  v8 = 8LL;
  do
  {
    v9 = *(unsigned __int8 *)v7;
    v7 = (struct ISystemContextObserver **)((char *)v7 + 1);
    v6 = 0x100000001B3LL * (v9 ^ v6);
    --v8;
  }
  while ( v8 );
  v10 = *((_QWORD *)this + 6);
  v11 = (__int64 *)*((_QWORD *)this + 4);
  v12 = 2 * (v6 & *((_QWORD *)this + 9));
  for ( i = *(__int64 **)(v10 + 16 * (v6 & *((_QWORD *)this + 9))); ; i = (__int64 *)*i )
  {
    v14 = *(__int64 **)(v10 + 8 * v12) == v11 ? (__int64 *)*((_QWORD *)this + 4) : **(__int64 ***)(v10 + 8 * v12 + 8);
    if ( i == v14 )
      break;
    if ( (struct ISystemContextObserver *)i[2] == a2 )
      goto LABEL_14;
  }
  i = (__int64 *)*((_QWORD *)this + 4);
LABEL_14:
  if ( i == v11 )
  {
    v4 = 78LL;
    goto LABEL_3;
  }
  std::_Hash<std::_Uset_traits<ISystemContextObserver *,std::_Uhash_compare<ISystemContextObserver *,std::hash<ISystemContextObserver *>,std::equal_to<ISystemContextObserver *>>,std::allocator<ISystemContextObserver *>,0>>::erase(
    (char *)this + 24,
    &v16);
  return 0LL;
}
