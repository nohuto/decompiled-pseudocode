/*
 * XREFs of ??$_Emplace_reallocate@AEAV?$shared_ptr@VAltTabWindowHookData@@@std@@@?$vector@V?$shared_ptr@VAltTabWindowHookData@@@std@@V?$allocator@V?$shared_ptr@VAltTabWindowHookData@@@std@@@2@@std@@QEAAPEAV?$shared_ptr@VAltTabWindowHookData@@@1@QEAV21@AEAV21@@Z @ 0x18028D9D8
 * Callers:
 *     ??0AltTabWindowHook@@QEAA@PE$AAVXamlAltTabViewController@@@Z @ 0x18028DE20 (--0AltTabWindowHook@@QEAA@PE$AAVXamlAltTabViewController@@@Z.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180022954 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ?_Change_array@?$vector@V?$shared_ptr@VAltTabWindowHookData@@@std@@V?$allocator@V?$shared_ptr@VAltTabWindowHookData@@@std@@@2@@std@@AEAAXQEAV?$shared_ptr@VAltTabWindowHookData@@@2@_K1@Z @ 0x1802900F8 (-_Change_array@-$vector@V-$shared_ptr@VAltTabWindowHookData@@@std@@V-$allocator@V-$shared_ptr@VA.c)
 */

unsigned __int64 __fastcall std::vector<std::shared_ptr<AltTabWindowHookData>>::_Emplace_reallocate<std::shared_ptr<AltTabWindowHookData> &>(
        __int64 a1,
        _QWORD *a2,
        _QWORD *a3)
{
  unsigned __int64 v5; // rsi
  __int64 v6; // rax
  unsigned __int64 v7; // r14
  unsigned __int64 v8; // rcx
  unsigned __int64 v9; // rdx
  unsigned __int64 v10; // rdi
  size_t v11; // rcx
  _QWORD *v12; // rax
  _QWORD *v13; // r10
  unsigned __int64 v14; // rsi
  _QWORD *v15; // rcx
  _QWORD *v16; // r8
  __int64 v17; // rax
  _QWORD *v18; // r9
  __int64 v19; // rdx
  _QWORD *v20; // rdx
  signed __int64 v21; // rbx
  __int64 v22; // rcx
  unsigned __int64 result; // rax
  _QWORD *v24; // [rsp+20h] [rbp-38h]
  void *v25; // [rsp+20h] [rbp-38h]
  __int64 v26; // [rsp+60h] [rbp+8h]
  __int64 v27; // [rsp+78h] [rbp+20h]

  v5 = (unsigned __int64)a2 - AltTabWindowHook::s_altTabHooks;
  v6 = ((__int64)xmmword_18050FDD8 - AltTabWindowHook::s_altTabHooks) >> 4;
  if ( v6 == 0xFFFFFFFFFFFFFFFLL )
    std::_Xlength_error("vector<T> too long");
  v7 = v6 + 1;
  v8 = (*((_QWORD *)&xmmword_18050FDD8 + 1) - AltTabWindowHook::s_altTabHooks) >> 4;
  v9 = v8 >> 1;
  if ( v8 <= 0xFFFFFFFFFFFFFFFLL - (v8 >> 1) )
  {
    v10 = v9 + v8;
    if ( v9 + v8 < v7 )
      v10 = v6 + 1;
  }
  else
  {
    v10 = v6 + 1;
  }
  v11 = 16 * v10;
  if ( v10 > 0xFFFFFFFFFFFFFFFLL )
    v11 = -1LL;
  v12 = std::_Allocate<16,std::_Default_allocate_traits,0>(v11);
  v13 = v12;
  v24 = v12;
  v14 = v5 & 0xFFFFFFFFFFFFFFF0uLL;
  v15 = (_QWORD *)((char *)v12 + v14);
  v16 = (_QWORD *)((char *)v12 + v14 + 16);
  v27 = (__int64)v16;
  try
  {
    *v15 = 0LL;
    v15[1] = 0LL;
    v17 = a3[1];
    if ( v17 )
      _InterlockedIncrement((volatile signed __int32 *)(v17 + 8));
    *v15 = *a3;
    v15[1] = a3[1];
    v26 = (__int64)v15;
    v18 = (_QWORD *)xmmword_18050FDD8;
    if ( a2 == (_QWORD *)xmmword_18050FDD8 )
    {
      if ( AltTabWindowHook::s_altTabHooks != (_QWORD)xmmword_18050FDD8 )
      {
        v15 = v13;
        v19 = AltTabWindowHook::s_altTabHooks - (_QWORD)v13;
        do
        {
          *v15 = 0LL;
          v15[1] = 0LL;
          *v15 = *(_QWORD *)((char *)v15 + v19);
          v15[1] = *(_QWORD *)((char *)v15 + v19 + 8);
          *(_QWORD *)((char *)v15 + v19) = 0LL;
          *(_QWORD *)((char *)v15 + v19 + 8) = 0LL;
          v15 += 2;
        }
        while ( (_QWORD *)((char *)v15 + v19) != v18 );
      }
    }
    else
    {
      v15 = (_QWORD *)AltTabWindowHook::s_altTabHooks;
      if ( (_QWORD *)AltTabWindowHook::s_altTabHooks != a2 )
      {
        v20 = v13;
        v15 = (_QWORD *)(AltTabWindowHook::s_altTabHooks - (_QWORD)v13);
        do
        {
          *v20 = 0LL;
          v20[1] = 0LL;
          *v20 = *(_QWORD *)((char *)v20 + (_QWORD)v15);
          v20[1] = *(_QWORD *)((char *)v20 + (_QWORD)v15 + 8);
          *(_QWORD *)((char *)v20 + (_QWORD)v15) = 0LL;
          *(_QWORD *)((char *)v20 + (_QWORD)v15 + 8) = 0LL;
          v20 += 2;
        }
        while ( (_QWORD *)((char *)v20 + (_QWORD)v15) != a2 );
        v18 = (_QWORD *)xmmword_18050FDD8;
      }
      v26 = (__int64)v13;
      if ( a2 != v18 )
      {
        v21 = (char *)a2 - v14 - (char *)v13;
        do
        {
          *v16 = 0LL;
          v16[1] = 0LL;
          *v16 = *(_QWORD *)((char *)v16 + v21 - 16);
          v16[1] = *(_QWORD *)((char *)v16 + v21 - 8);
          *(_QWORD *)((char *)v16 + v21 - 16) = 0LL;
          *(_QWORD *)((char *)v16 + v21 - 8) = 0LL;
          v16 += 2;
        }
        while ( (_QWORD *)((char *)v16 + v21 - 16) != v18 );
      }
    }
    std::vector<std::shared_ptr<AltTabWindowHookData>>::_Change_array(v15, v13, v7, v10, v24, -2LL);
    result = v14 + AltTabWindowHook::s_altTabHooks;
  }
  catch ( ... )
  {
    std::vector<std::shared_ptr<ViewEventRegistration>>::_Destroy(v22, v26, v27);
    std::_Deallocate<16,0>(v25, (const struct std::nothrow_t *)(16 * v10));
    throw;
  }
  return result;
}
