/*
 * XREFs of ??$?6GU?$char_traits@G@std@@@std@@YAAEAV?$basic_ostream@GU?$char_traits@G@std@@@0@AEAV10@PEBG@Z @ 0x180227F30
 * Callers:
 *     ?_GenerateAumIdForView@Win32BackedViewHostItem@Holographic@Shell@Internal@Windows@@CA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@PEAUIWin32ApplicationView@@@Z @ 0x1802348B0 (-_GenerateAumIdForView@Win32BackedViewHostItem@Holographic@Shell@Internal@Windows@@CA-AV-$basic_.c)
 *     ?IsWindowVisibleInContactPanel@PeoplePaneViewManager@@AEAAJPEAUHWND__@@PEBGPEAH@Z @ 0x180240CE8 (-IsWindowVisibleInContactPanel@PeoplePaneViewManager@@AEAAJPEAUHWND__@@PEBGPEAH@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 *     ??0sentry@?$basic_ostream@GU?$char_traits@G@std@@@std@@QEAA@AEAV12@@Z @ 0x18022C1E4 (--0sentry@-$basic_ostream@GU-$char_traits@G@std@@@std@@QEAA@AEAV12@@Z.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall std::operator<<<unsigned short,std::char_traits<unsigned short>>(__int64 a1, __int64 a2)
{
  __int64 v2; // r13
  __int64 v3; // rdi
  unsigned int v4; // ebx
  __int64 v5; // r15
  __int64 v6; // r14
  __int16 v7; // ax
  __int64 v8; // r8
  __int64 v9; // r13
  unsigned __int16 v10; // ax
  __int64 v11; // rax
  __int64 v12; // r15
  unsigned __int16 v13; // ax
  __int64 v14; // rax
  __int64 v16; // [rsp+28h] [rbp-50h] BYREF
  char v17; // [rsp+30h] [rbp-48h]

  v2 = a2;
  v3 = a1;
  v4 = 0;
  v5 = -1LL;
  do
    ++v5;
  while ( *(_WORD *)(a2 + 2 * v5) );
  if ( std::ios_base::width((std::ios_base *)(a1 + *(int *)(*(_QWORD *)a1 + 4LL))) <= 0
    || std::ios_base::width((std::ios_base *)(v3 + *(int *)(*(_QWORD *)v3 + 4LL))) <= v5 )
  {
    v6 = 0LL;
  }
  else
  {
    v6 = std::ios_base::width((std::ios_base *)(v3 + *(int *)(*(_QWORD *)v3 + 4LL))) - v5;
  }
  std::basic_ostream<unsigned short>::sentry::sentry(&v16, v3);
  if ( v17 )
  {
    try
    {
      v7 = std::ios_base::flags((std::ios_base *)(v3 + *(int *)(*(_QWORD *)v3 + 4LL)));
    }
    catch ( ... )
    {
      LOBYTE(v8) = 1;
      std::basic_ios<unsigned short>::setstate(a1 + *(int *)(*(_QWORD *)a1 + 4LL), 4LL, v8);
      v3 = a1;
      v4 = 0;
      goto LABEL_20;
    }
    if ( (v7 & 0x1C0) != 0x40 )
    {
      while ( v6 > 0 )
      {
        v9 = std::basic_ios<unsigned short>::rdbuf(v3 + *(int *)(*(_QWORD *)v3 + 4LL));
        v10 = std::basic_ios<unsigned short>::fill(v3 + *(int *)(*(_QWORD *)v3 + 4LL));
        if ( (unsigned __int16)std::basic_streambuf<unsigned short>::sputc(v9, v10) == 0xFFFF )
          goto LABEL_17;
        --v6;
      }
      v2 = a2;
    }
    v11 = std::basic_ios<unsigned short>::rdbuf(v3 + *(int *)(*(_QWORD *)v3 + 4LL));
    if ( std::basic_streambuf<unsigned short>::sputn(v11, v2, v5) == v5 )
    {
      while ( v6 > 0 )
      {
        v12 = std::basic_ios<unsigned short>::rdbuf(v3 + *(int *)(*(_QWORD *)v3 + 4LL));
        v13 = std::basic_ios<unsigned short>::fill(v3 + *(int *)(*(_QWORD *)v3 + 4LL));
        if ( (unsigned __int16)std::basic_streambuf<unsigned short>::sputc(v12, v13) == 0xFFFF )
          goto LABEL_17;
        --v6;
      }
    }
    else
    {
LABEL_17:
      v4 = 4;
    }
    std::ios_base::width((std::ios_base *)(v3 + *(int *)(*(_QWORD *)v3 + 4LL)), 0LL);
  }
  else
  {
    v4 = 4;
  }
LABEL_20:
  std::basic_ios<unsigned short>::setstate(v3 + *(int *)(*(_QWORD *)v3 + 4LL), v4, 0LL);
  if ( !std::uncaught_exception() )
    std::basic_ostream<unsigned short>::_Osfx(v16);
  if ( std::basic_ios<unsigned short>::rdbuf(v16 + *(int *)(*(_QWORD *)v16 + 4LL)) )
  {
    v14 = std::basic_ios<unsigned short>::rdbuf(v16 + *(int *)(*(_QWORD *)v16 + 4LL));
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
  }
  return v3;
}
