/*
 * XREFs of ?_Init@?$_Mpunct@_W@std@@IEAAXAEBV_Locinfo@2@_N@Z @ 0x1800B9688
 * Callers:
 *     ?_Getcat@?$moneypunct@_W$00@std@@SA_KPEAPEBVfacet@locale@2@PEBV42@@Z @ 0x1800B7524 (-_Getcat@-$moneypunct@_W$00@std@@SA_KPEAPEBVfacet@locale@2@PEBV42@@Z.c)
 *     ?_Getcat@?$moneypunct@_W$0A@@std@@SA_KPEAPEBVfacet@locale@2@PEBV42@@Z @ 0x1800B760C (-_Getcat@-$moneypunct@_W$0A@@std@@SA_KPEAPEBVfacet@locale@2@PEBV42@@Z.c)
 *     ?_Makewloc@_Locimp@locale@std@@CAXAEBV_Locinfo@3@HPEAV123@PEBV23@@Z @ 0x1800BAD40 (-_Makewloc@_Locimp@locale@std@@CAXAEBV_Locinfo@3@HPEAV123@PEBV23@@Z.c)
 * Callees:
 *     _Getcvt @ 0x1800AB6B0 (_Getcvt.c)
 *     ??_U@YAPEAX_K@Z @ 0x1800ABA2C (--_U@YAPEAX_K@Z.c)
 *     ??$_Getvals@_W@?$_Mpunct@_W@std@@IEAAX_WPEBUlconv@@@Z @ 0x1800B45AC (--$_Getvals@_W@-$_Mpunct@_W@std@@IEAAX_WPEBUlconv@@@Z.c)
 *     memcpy_s_0 @ 0x1800C6CE5 (memcpy_s_0.c)
 */

errno_t __fastcall std::_Mpunct<wchar_t>::_Init(__int64 a1, __int64 a2, char a3)
{
  _Cvtvec *v5; // rax
  struct lconv *v6; // r14
  char *mon_grouping; // rsi
  __int64 v8; // rbx
  size_t v9; // rbx
  _BYTE *v10; // rax
  __int64 v11; // rdx
  char v12; // cl
  int v13; // eax
  unsigned int p_sign_posn; // r8d
  unsigned int p_cs_precedes; // eax
  unsigned int p_sep_by_space; // edx
  char *v17; // r8
  char *v18; // rsi
  unsigned int n_sign_posn; // eax
  unsigned int n_cs_precedes; // ecx
  unsigned int n_sep_by_space; // edx
  errno_t result; // eax
  _Cvtvec v23; // [rsp+28h] [rbp-60h] BYREF

  v5 = Getcvt(&v23);
  *(_OWORD *)(a1 + 72) = *(_OWORD *)&v5->_Page;
  *(_OWORD *)(a1 + 88) = *(_OWORD *)&v5->_Isleadbyte[4];
  *(_OWORD *)(a1 + 104) = *(_OWORD *)&v5->_Isleadbyte[20];
  v6 = localeconv();
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_QWORD *)(a1 + 32) = 0LL;
  *(_QWORD *)(a1 + 40) = 0LL;
  *(_QWORD *)(a1 + 48) = 0LL;
  mon_grouping = v6->mon_grouping;
  v8 = -1LL;
  do
    ++v8;
  while ( mon_grouping[v8] );
  v9 = v8 + 1;
  try
  {
    v10 = operator new[](v9);
    if ( v9 )
    {
      v11 = v10 - mon_grouping;
      do
      {
        mon_grouping[v11] = *mon_grouping;
        ++mon_grouping;
        --v9;
      }
      while ( v9 );
    }
    *(_QWORD *)(a1 + 16) = v10;
    std::_Mpunct<wchar_t>::_Getvals<wchar_t>(a1, 0LL, (__int64)v6);
  }
  catch ( ... )
  {
    std::_Mpunct<wchar_t>::_Tidy(a1);
    throw;
  }
  v12 = *(_BYTE *)(a1 + 68);
  if ( v12 )
    LOBYTE(v13) = v6->int_frac_digits;
  else
    LOBYTE(v13) = v6->frac_digits;
  v13 = (char)v13;
  if ( (unsigned int)(char)v13 > 0x7E )
    v13 = 0;
  *(_DWORD *)(a1 + 56) = v13;
  p_sign_posn = v6->p_sign_posn;
  p_cs_precedes = v6->p_cs_precedes;
  p_sep_by_space = v6->p_sep_by_space;
  if ( v12 || p_sep_by_space > 2 || p_cs_precedes > 1 || p_sign_posn > 4 )
  {
    v18 = "$+xv";
    v17 = "$+xv";
  }
  else
  {
    v17 = &aVXVXvXvXvXVxVx[32 * p_sep_by_space
                         + 16 * p_cs_precedes
                         + 8 * p_sep_by_space
                         + 4 * p_cs_precedes
                         + 4 * p_sign_posn];
    v18 = "$+xv";
  }
  memcpy_s_0((void *const)(a1 + 60), 4uLL, v17, 4uLL);
  n_sign_posn = v6->n_sign_posn;
  n_cs_precedes = v6->n_cs_precedes;
  n_sep_by_space = v6->n_sep_by_space;
  if ( !*(_BYTE *)(a1 + 68) && n_sep_by_space <= 2 && n_cs_precedes <= 1 && n_sign_posn <= 4 )
    v18 = &aVXVXvXvXvXVxVx[32 * n_sep_by_space
                         + 16 * n_cs_precedes
                         + 8 * n_sep_by_space
                         + 4 * n_cs_precedes
                         + 4 * n_sign_posn];
  result = memcpy_s_0((void *const)(a1 + 64), 4uLL, v18, 4uLL);
  if ( a3 )
  {
    result = 1987586852;
    *(_DWORD *)(a1 + 60) = 1987586852;
    *(_DWORD *)(a1 + 64) = 1987586852;
  }
  return result;
}
