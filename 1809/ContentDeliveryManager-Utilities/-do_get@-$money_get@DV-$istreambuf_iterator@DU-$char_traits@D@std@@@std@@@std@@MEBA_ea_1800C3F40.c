/*
 * XREFs of ?do_get@?$money_get@DV?$istreambuf_iterator@DU?$char_traits@D@std@@@std@@@std@@MEBA?AV?$istreambuf_iterator@DU?$char_traits@D@std@@@2@V32@0_NAEAVios_base@2@AEAHAEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@2@@Z @ 0x1800C3F40
 * Callers:
 *     <none>
 * Callees:
 *     ?append@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAAEAV12@_KD@Z @ 0x180033AA8 (-append@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAAAEAV12@_KD@Z.c)
 *     ?equal@?$istreambuf_iterator@DU?$char_traits@D@std@@@std@@QEBA_NAEBV12@@Z @ 0x1800B1334 (-equal@-$istreambuf_iterator@DU-$char_traits@D@std@@@std@@QEBA_NAEBV12@@Z.c)
 *     ?_Getmfld@?$money_get@DV?$istreambuf_iterator@DU?$char_traits@D@std@@@std@@@std@@AEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@2@AEAV?$istreambuf_iterator@DU?$char_traits@D@std@@@2@0_NAEAVios_base@2@PEAD@Z @ 0x1800C1C84 (-_Getmfld@-$money_get@DV-$istreambuf_iterator@DU-$char_traits@D@std@@@std@@@std@@AEBA-AV-$basic_.c)
 *     __security_check_cookie @ 0x1800C6A00 (__security_check_cookie.c)
 *     ??3@YAXPEAX@Z_0 @ 0x1800C6EA1 (--3@YAXPEAX@Z_0.c)
 */

// Hidden C++ exception states: #wind=1
_OWORD *__fastcall std::money_get<char,std::istreambuf_iterator<char>>::do_get(
        __int64 a1,
        _OWORD *a2,
        __int64 *a3,
        __int64 *a4,
        char a5,
        __int64 a6,
        _DWORD *a7,
        __int64 a8)
{
  _BYTE *v11; // rsi
  char v12; // al
  unsigned __int64 v13; // rbx
  __int64 v14; // rax
  void **v15; // rax
  _BYTE *v16; // rcx
  void **v17; // rax
  __int64 v18; // rdx
  _BYTE v20[8]; // [rsp+38h] [rbp-48h]
  __int64 v21; // [rsp+40h] [rbp-40h]
  void *v22[3]; // [rsp+48h] [rbp-38h] BYREF
  unsigned __int64 v23; // [rsp+60h] [rbp-20h]
  char v24[16]; // [rsp+68h] [rbp-18h] BYREF

  v21 = -2LL;
  std::money_get<char,std::istreambuf_iterator<char>>::_Getmfld(a1, (char *)v22, (__int64)a3, a4, a5, a6, v24);
  v11 = v22[2];
  v12 = std::istreambuf_iterator<char>::equal(a3, a4);
  v13 = 0LL;
  if ( v12 )
    *a7 |= 1u;
  if ( v11 )
  {
    if ( (unsigned __int64)v11 > *(_QWORD *)(a8 + 16) )
    {
      std::string::append((char *)a8, (size_t)&v11[-*(_QWORD *)(a8 + 16)], 0);
    }
    else
    {
      *(_QWORD *)(a8 + 16) = v11;
      if ( *(_QWORD *)(a8 + 24) < 0x10uLL )
        v14 = a8;
      else
        v14 = *(_QWORD *)a8;
      v11[v14] = 0;
    }
    v15 = v22;
    if ( v23 >= 0x10 )
      v15 = (void **)v22[0];
    if ( *(_BYTE *)v15 == 45 )
    {
      if ( *(_QWORD *)(a8 + 24) < 0x10uLL )
        v16 = (_BYTE *)a8;
      else
        v16 = *(_BYTE **)a8;
      *v16 = v24[10];
      v13 = 1LL;
    }
    while ( v13 < (unsigned __int64)v11 )
    {
      v17 = v22;
      if ( v23 >= 0x10 )
        v17 = (void **)v22[0];
      if ( *(_QWORD *)(a8 + 24) < 0x10uLL )
        v18 = a8;
      else
        v18 = *(_QWORD *)a8;
      *(_BYTE *)(v18 + v13) = v20[*((char *)v17 + v13)];
      ++v13;
    }
  }
  else
  {
    *a7 |= 2u;
  }
  *a2 = *(_OWORD *)a3;
  if ( v23 >= 0x10 )
    operator delete(v22[0]);
  return a2;
}
