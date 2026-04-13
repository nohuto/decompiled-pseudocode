/*
 * XREFs of ?name@locale@std@@QEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@2@XZ @ 0x1800C0150
 * Callers:
 *     ?_Getcat@?$collate@G@std@@SA_KPEAPEBVfacet@locale@2@PEBV42@@Z @ 0x1800B6C6C (-_Getcat@-$collate@G@std@@SA_KPEAPEBVfacet@locale@2@PEBV42@@Z.c)
 *     ?_Getcat@?$collate@_W@std@@SA_KPEAPEBVfacet@locale@2@PEBV42@@Z @ 0x1800B6D88 (-_Getcat@-$collate@_W@std@@SA_KPEAPEBVfacet@locale@2@PEBV42@@Z.c)
 *     ?_Getcat@?$collate@D@std@@SA_KPEAPEBVfacet@locale@2@PEBV42@@Z @ 0x1800C1060 (-_Getcat@-$collate@D@std@@SA_KPEAPEBVfacet@locale@2@PEBV42@@Z.c)
 * Callees:
 *     ?assign@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAAEAV12@PEBD_K@Z @ 0x180014240 (-assign@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAAAEAV12@PEBD_K@Z.c)
 *     ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@$$QEAV01@@Z @ 0x180049048 (--0-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@$$QEAV01@@Z.c)
 *     __security_check_cookie @ 0x1800C6A00 (__security_check_cookie.c)
 *     ??3@YAXPEAX@Z_0 @ 0x1800C6EA1 (--3@YAXPEAX@Z_0.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall std::locale::name(__int64 *a1, _QWORD *a2)
{
  __int64 v3; // rax
  void **v4; // rdx
  char v5; // bl
  char *v6; // rdx
  size_t v7; // r8
  char v8; // bl
  void *v10[2]; // [rsp+30h] [rbp-50h] BYREF
  __int64 v11; // [rsp+40h] [rbp-40h]
  unsigned __int64 v12; // [rsp+48h] [rbp-38h]
  void *v13[3]; // [rsp+50h] [rbp-30h] BYREF
  unsigned __int64 v14; // [rsp+68h] [rbp-18h]

  v3 = *a1;
  if ( *a1 )
  {
    v6 = *(char **)(v3 + 40);
    if ( !v6 )
      v6 = (char *)(v3 + 48);
    v12 = 15LL;
    v11 = 0LL;
    LOBYTE(v10[0]) = 0;
    if ( *v6 )
    {
      v7 = -1LL;
      do
        ++v7;
      while ( v6[v7] );
    }
    else
    {
      v7 = 0LL;
    }
    std::string::assign(v10, v6, v7);
    v4 = v10;
    v5 = 2;
  }
  else
  {
    v14 = 15LL;
    v13[2] = 0LL;
    LOBYTE(v13[0]) = 0;
    v4 = v13;
    v5 = 1;
  }
  std::string::string(a2, v4);
  v8 = v5 | 4;
  if ( (v8 & 2) != 0 )
  {
    v8 &= ~2u;
    if ( v12 >= 0x10 )
      operator delete(v10[0]);
    v12 = 15LL;
    v11 = 0LL;
    LOBYTE(v10[0]) = 0;
  }
  if ( (v8 & 1) != 0 && v14 >= 0x10 )
    operator delete(v13[0]);
  return a2;
}
