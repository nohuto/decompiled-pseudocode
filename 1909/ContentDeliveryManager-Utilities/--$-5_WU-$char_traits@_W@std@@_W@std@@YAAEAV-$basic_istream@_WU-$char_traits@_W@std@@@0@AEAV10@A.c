/*
 * XREFs of ??$?5_WU?$char_traits@_W@std@@_W@std@@YAAEAV?$basic_istream@_WU?$char_traits@_W@std@@@0@AEAV10@AEBU?$_Timeobj@_W@0@@Z @ 0x1800A986C
 * Callers:
 *     ?GetFileTimeFromString@StringUtils@CommonHelper@CreativeFramework@@YA?AU_FILETIME@@PEB_W_N@Z @ 0x1800A961C (-GetFileTimeFromString@StringUtils@CommonHelper@CreativeFramework@@YA-AU_FILETIME@@PEB_W_N@Z.c)
 * Callees:
 *     ?clear@ios_base@std@@QEAAXH_N@Z @ 0x180024F20 (-clear@ios_base@std@@QEAAXH_N@Z.c)
 *     ?_Ipfx@?$basic_istream@_WU?$char_traits@_W@std@@@std@@QEAA_N_N@Z @ 0x180094298 (-_Ipfx@-$basic_istream@_WU-$char_traits@_W@std@@@std@@QEAA_N_N@Z.c)
 *     ?get@?$time_get@_WV?$istreambuf_iterator@_WU?$char_traits@_W@std@@@std@@@std@@QEBA?AV?$istreambuf_iterator@_WU?$char_traits@_W@std@@@2@V32@0AEAVios_base@2@AEAHPEAUtm@@PEB_W4@Z @ 0x1800AA8DC (-get@-$time_get@_WV-$istreambuf_iterator@_WU-$char_traits@_W@std@@@std@@@std@@QEBA-AV-$istreambu.c)
 *     ??$use_facet@V?$time_get@_WV?$istreambuf_iterator@_WU?$char_traits@_W@std@@@std@@@std@@@std@@YAAEBV?$time_get@_WV?$istreambuf_iterator@_WU?$char_traits@_W@std@@@std@@@0@AEBVlocale@0@@Z @ 0x1800AB024 (--$use_facet@V-$time_get@_WV-$istreambuf_iterator@_WU-$char_traits@_W@std@@@std@@@std@@@std@@YAA.c)
 *     _guard_dispatch_icall_nop @ 0x1800CBEA0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 *__fastcall std::operator>><wchar_t,std::char_traits<wchar_t>,wchar_t>(__int64 *a1, __int64 *a2)
{
  __int64 *v3; // rdi
  __int64 *v4; // rsi
  __int64 v5; // rcx
  __int64 v6; // rbx
  int v7; // r15d
  void (__fastcall ***v8)(_QWORD, __int64); // rax
  __int64 v9; // rdx
  __int64 v10; // rax
  char *v11; // rcx
  int v12; // edx
  __int64 v13; // rcx
  char *v15; // rdx
  int v16; // ecx
  int v17; // ecx
  __int128 v19; // [rsp+60h] [rbp-68h] BYREF
  __int64 *v20; // [rsp+70h] [rbp-58h]
  __int128 v22; // [rsp+80h] [rbp-48h] BYREF
  char v23; // [rsp+90h] [rbp-38h] BYREF
  int v25; // [rsp+E0h] [rbp+18h] BYREF
  __int64 v26; // [rsp+E8h] [rbp+20h] BYREF

  v3 = a1;
  v4 = a1;
  v25 = 0;
  v20 = a1;
  v5 = *(__int64 *)((char *)a1 + *(int *)(*a1 + 4) + 72);
  if ( v5 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 8LL))(v5);
  if ( std::wistream::_Ipfx(v3) )
  {
    v6 = **(_QWORD **)((char *)v3 + *(int *)(*v3 + 4) + 64);
    v26 = v6;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 8LL))(v6);
    v7 = std::use_facet<std::time_get<wchar_t,std::istreambuf_iterator<wchar_t>>>(&v26);
    if ( v6 )
    {
      v8 = (void (__fastcall ***)(_QWORD, __int64))(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
      if ( v8 )
        (**v8)(v8, 1LL);
    }
    try
    {
      *(_QWORD *)&v19 = 0LL;
      BYTE8(v19) = 1;
      v22 = v19;
      v9 = (__int64)v3 + *(int *)(*v3 + 4);
      *(_QWORD *)&v19 = *(_QWORD *)(v9 + 72);
      BYTE8(v19) = (_QWORD)v19 == 0LL;
      std::time_get<wchar_t,std::istreambuf_iterator<wchar_t>>::get(
        v7,
        (unsigned int)&v23,
        (unsigned int)&v19,
        (unsigned int)&v22,
        v9,
        (__int64)&v25,
        *a2,
        a2[1],
        a2[2]);
    }
    catch ( ... )
    {
      v15 = (char *)a1 + *(int *)(*a1 + 4);
      v16 = *((_DWORD *)v15 + 4) | 4;
      v17 = v16 & 0x17;
      *((_DWORD *)v15 + 4) = v17;
      if ( (v17 & *((_DWORD *)v15 + 5)) != 0 )
        throw;
      v3 = a1;
      v4 = a1;
    }
  }
  v10 = *v3;
  v11 = (char *)v3 + *(int *)(*v3 + 4);
  if ( v25 )
  {
    v12 = v25 | *((_DWORD *)v11 + 4);
    if ( !*((_QWORD *)v11 + 9) )
      LOBYTE(v12) = v12 | 4;
    std::ios_base::clear((std::ios_base *)v11, v12, 0);
    v10 = *v4;
  }
  v13 = *(__int64 *)((char *)v3 + *(int *)(v10 + 4) + 72);
  if ( v13 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
  return v3;
}
