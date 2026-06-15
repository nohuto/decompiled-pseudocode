/*
 * XREFs of ??$_Emplace_reallocate@AEBU_tagpropertykey@@@?$vector@U_tagpropertykey@@V?$allocator@U_tagpropertykey@@@std@@@std@@QEAAPEAU_tagpropertykey@@QEAU2@AEBU2@@Z @ 0x18010EEB0
 * Callers:
 *     ?RuntimeClassInitialize@CHybridPropertyStore@@QEAAJPEAUIMMDevice@@IPEBU_tagpropertykey@@@Z @ 0x18010F498 (-RuntimeClassInitialize@CHybridPropertyStore@@QEAAJPEAUIMMDevice@@IPEBU_tagpropertykey@@@Z.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x18001D500 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     memmove_0 @ 0x1800688AF (memmove_0.c)
 *     ?_Change_array@?$vector@U_tagpropertykey@@V?$allocator@U_tagpropertykey@@@std@@@std@@AEAAXQEAU_tagpropertykey@@_K1@Z @ 0x18010F650 (-_Change_array@-$vector@U_tagpropertykey@@V-$allocator@U_tagpropertykey@@@std@@@std@@AEAAXQEAU_t.c)
 */

__int64 __fastcall std::vector<_tagpropertykey>::_Emplace_reallocate<_tagpropertykey const &>(
        const void **a1,
        _BYTE *a2,
        __int64 a3)
{
  __int64 v6; // r15
  __int64 v7; // rdx
  unsigned __int64 v8; // r14
  unsigned __int64 v9; // rdx
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // rbx
  SIZE_T v12; // rcx
  _QWORD *v13; // rdi
  __int64 v14; // r15
  _BYTE *v15; // r8
  _BYTE *v16; // rdx
  char *v17; // rcx
  size_t v18; // r8

  v6 = (a2 - (_BYTE *)*a1) / 20;
  v7 = ((_BYTE *)a1[1] - (_BYTE *)*a1) / 20;
  if ( v7 == 0xCCCCCCCCCCCCCCCLL )
    std::_Xlength_error("vector<T> too long");
  v8 = v7 + 1;
  v9 = ((_BYTE *)a1[2] - (_BYTE *)*a1) / 20;
  v10 = v9 >> 1;
  if ( v9 <= 0xCCCCCCCCCCCCCCCLL - (v9 >> 1) )
  {
    v11 = v10 + v9;
    if ( v10 + v9 < v8 )
      v11 = v8;
  }
  else
  {
    v11 = v8;
  }
  v12 = 20 * v11;
  if ( v11 > 0xCCCCCCCCCCCCCCCLL )
    v12 = -1LL;
  v13 = std::_Allocate<16,std::_Default_allocate_traits,0>(v12);
  v14 = 5 * v6;
  *(_OWORD *)((char *)v13 + 4 * v14) = *(_OWORD *)a3;
  *((_DWORD *)v13 + v14 + 4) = *(_DWORD *)(a3 + 16);
  v15 = a1[1];
  v16 = *a1;
  v17 = (char *)v13;
  if ( a2 == v15 )
  {
    v18 = v15 - v16;
  }
  else
  {
    memmove_0(v13, v16, a2 - (_BYTE *)*a1);
    v17 = (char *)v13 + 4 * v14 + 20;
    v18 = (_BYTE *)a1[1] - a2;
    v16 = a2;
  }
  memmove_0(v17, v16, v18);
  std::vector<_tagpropertykey>::_Change_array(a1, v13, v8, v11, -2LL);
  return (__int64)*a1 + 4 * v14;
}
