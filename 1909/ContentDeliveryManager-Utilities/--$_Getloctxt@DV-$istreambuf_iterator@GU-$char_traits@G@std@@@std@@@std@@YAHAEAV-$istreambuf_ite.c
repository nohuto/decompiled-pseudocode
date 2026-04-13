/*
 * XREFs of ??$_Getloctxt@DV?$istreambuf_iterator@GU?$char_traits@G@std@@@std@@@std@@YAHAEAV?$istreambuf_iterator@GU?$char_traits@G@std@@@0@0_KPEBD@Z @ 0x1800B8308
 * Callers:
 *     ?do_get@?$time_get@GV?$istreambuf_iterator@GU?$char_traits@G@std@@@std@@@std@@MEBA?AV?$istreambuf_iterator@GU?$char_traits@G@std@@@2@V32@0AEAVios_base@2@AEAHPEAUtm@@DD@Z @ 0x1800C1180 (-do_get@-$time_get@GV-$istreambuf_iterator@GU-$char_traits@G@std@@@std@@@std@@MEBA-AV-$istreambu.c)
 * Callees:
 *     ??D?$istreambuf_iterator@GU?$char_traits@G@std@@@std@@QEBAAEBGXZ @ 0x180034554 (--D-$istreambuf_iterator@GU-$char_traits@G@std@@@std@@QEBAAEBGXZ.c)
 *     ?assign@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAAEAV12@_KD@Z @ 0x1800348D0 (-assign@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAAAEAV12@_KD@Z.c)
 *     ?_Inc@?$istreambuf_iterator@GU?$char_traits@G@std@@@std@@AEAAXXZ @ 0x1800357D0 (-_Inc@-$istreambuf_iterator@GU-$char_traits@G@std@@@std@@AEAAXXZ.c)
 *     ?equal@?$istreambuf_iterator@_WU?$char_traits@_W@std@@@std@@QEBA_NAEBV12@@Z @ 0x1800375E4 (-equal@-$istreambuf_iterator@_WU-$char_traits@_W@std@@@std@@QEBA_NAEBV12@@Z.c)
 *     __security_check_cookie @ 0x1800CAA90 (__security_check_cookie.c)
 *     ??3@YAXPEAX@Z_0 @ 0x1800CAF31 (--3@YAXPEAX@Z_0.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall std::_Getloctxt<char,std::istreambuf_iterator<unsigned short>>(
        __int64 *a1,
        __int64 *a2,
        size_t a3,
        _BYTE *a4)
{
  char v6; // dl
  _BYTE *v7; // rcx
  size_t v8; // rax
  unsigned __int64 v9; // r15
  unsigned __int64 v10; // r13
  void **v11; // r12
  __int64 v12; // rbx
  __int64 v13; // r14
  char v15; // al
  void **v16; // rax
  void **v17; // rax
  char v18; // al
  char v19; // cl
  void **v20; // rdx
  char v21; // cl
  char v22; // [rsp+20h] [rbp-50h]
  unsigned int v23; // [rsp+24h] [rbp-4Ch]
  void *v26[3]; // [rsp+40h] [rbp-30h] BYREF
  __int64 v27; // [rsp+58h] [rbp-18h]

  if ( *a4 )
  {
    v6 = *a4;
    v7 = a4;
    do
    {
      v8 = a3 + 1;
      if ( v6 != *a4 )
        v8 = a3;
      a3 = v8;
      v6 = *++v7;
    }
    while ( *v7 );
  }
  v27 = 15LL;
  v26[2] = 0LL;
  LOBYTE(v26[0]) = 0;
  std::string::assign(v26, a3, 0);
  v23 = -2;
  v9 = 1LL;
  v10 = v27;
  v11 = (void **)v26[0];
LABEL_7:
  v22 = 0;
  v12 = 0LL;
  v13 = 0LL;
  if ( a3 )
  {
    while ( 1 )
    {
      while ( 1 )
      {
        v15 = a4[v12];
        if ( !v15 || v15 == *a4 )
          break;
        ++v12;
      }
      v16 = v26;
      if ( v10 >= 0x10 )
        v16 = v11;
      if ( *((_BYTE *)v16 + v13) )
        break;
      v12 += v9;
      v18 = a4[v12];
      if ( v18 == *a4 || !v18 )
      {
        v23 = v13;
LABEL_26:
        v20 = v26;
        if ( v10 >= 0x10 )
          v20 = v11;
        v21 = 127;
        if ( v9 < 0x7F )
          v21 = v9;
        *((_BYTE *)v20 + v13) = v21;
        v11 = (void **)v26[0];
        v10 = v27;
LABEL_31:
        v19 = v22;
        goto LABEL_32;
      }
      if ( std::istreambuf_iterator<wchar_t>::equal(a1, a2)
        || (char)a4[v12] != *(unsigned __int16 *)std::istreambuf_iterator<unsigned short>::operator*(a1) )
      {
        goto LABEL_26;
      }
      v19 = 1;
      v22 = 1;
LABEL_32:
      if ( ++v13 >= a3 )
      {
        if ( v19 && !std::istreambuf_iterator<wchar_t>::equal(a1, a2) )
        {
          ++v9;
          std::istreambuf_iterator<unsigned short>::_Inc(a1);
          v23 = -1;
          goto LABEL_7;
        }
        goto LABEL_8;
      }
    }
    v17 = v26;
    if ( v10 >= 0x10 )
      v17 = v11;
    v12 += *((char *)v17 + v13);
    goto LABEL_31;
  }
LABEL_8:
  if ( v10 >= 0x10 )
    operator delete(v11);
  return v23;
}
