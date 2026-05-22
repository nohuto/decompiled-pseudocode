/*
 * XREFs of ?UnregisterSystemContextObserver@SystemContextProvider@@UEAAJPEAUISystemContextObserver@@@Z @ 0x18009EBC0
 * Callers:
 *     ?UnregisterSystemContextObserver@InputConfigContextProvider@@UEAAJPEAUISystemContextObserver@@@Z @ 0x18009DF30 (-UnregisterSystemContextObserver@InputConfigContextProvider@@UEAAJPEAUISystemContextObserver@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003590 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?erase@?$_Hash@V?$_Uset_traits@PEAUISystemContextObserver@@V?$_Uhash_compare@PEAUISystemContextObserver@@U?$hash@PEAUISystemContextObserver@@@std@@U?$equal_to@PEAUISystemContextObserver@@@3@@std@@V?$allocator@PEAUISystemContextObserver@@@3@$0A@@std@@@std@@QEAA_KAEBQEAUISystemContextObserver@@@Z @ 0x18003A148 (-erase@-$_Hash@V-$_Uset_traits@PEAUISystemContextObserver@@V-$_Uhash_compare@PEAUISystemContextO.c)
 */

__int64 __fastcall SystemContextProvider::UnregisterSystemContextObserver(
        SystemContextProvider *this,
        struct ISystemContextObserver *a2)
{
  unsigned __int64 v2; // r8
  __int64 v5; // rdx
  __int64 *v7; // rdx
  __int64 v8; // r9
  __int64 v9; // rax
  __int64 v10; // r8
  __int64 v11; // rax
  __int64 v12; // r9
  __int64 *i; // rax
  __int64 v14; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  struct ISystemContextObserver *v16; // [rsp+38h] [rbp+10h] BYREF

  v16 = a2;
  v2 = 0LL;
  if ( !a2 )
  {
    v5 = 72LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v5,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\utilities\\systemcontextprovider\\lib\\systemcontextprovider.cpp",
      (const char *)0x80070057LL);
    return 2147942487LL;
  }
  v7 = (__int64 *)*((_QWORD *)this + 4);
  v8 = 0xCBF29CE484222325uLL;
  do
  {
    v9 = *((unsigned __int8 *)&v16 + v2++);
    v8 = 0x100000001B3LL * (v9 ^ v8);
  }
  while ( v2 < 8 );
  v10 = *((_QWORD *)this + 6);
  v11 = v8 & *((_QWORD *)this + 9);
  v12 = 2 * v11;
  for ( i = *(__int64 **)(v10 + 16 * v11); ; i = (__int64 *)*i )
  {
    v14 = *(__int64 **)(v10 + 8 * v12) == v7 ? (__int64)v7 : **(_QWORD **)(v10 + 8 * v12 + 8);
    if ( i == (__int64 *)v14 )
      break;
    if ( (struct ISystemContextObserver *)i[2] == a2 )
      goto LABEL_14;
  }
  i = v7;
LABEL_14:
  if ( i == v7 )
  {
    v5 = 78LL;
    goto LABEL_3;
  }
  std::_Hash<std::_Uset_traits<ISystemContextObserver *,std::_Uhash_compare<ISystemContextObserver *,std::hash<ISystemContextObserver *>,std::equal_to<ISystemContextObserver *>>,std::allocator<ISystemContextObserver *>,0>>::erase(
    (_QWORD *)this + 3,
    &v16);
  return 0LL;
}
