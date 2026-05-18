/*
 * XREFs of sub_18002D39C @ 0x18002D39C
 * Callers:
 *     sub_18002E3F4 @ 0x18002E3F4 (sub_18002E3F4.c)
 *     sub_18002E4BC @ 0x18002E4BC (sub_18002E4BC.c)
 *     sub_18002E674 @ 0x18002E674 (sub_18002E674.c)
 *     sub_1800316AC @ 0x1800316AC (sub_1800316AC.c)
 *     sub_1800317E4 @ 0x1800317E4 (sub_1800317E4.c)
 * Callees:
 *     sub_18002DFE0 @ 0x18002DFE0 (sub_18002DFE0.c)
 *     ?uncaught_exception@std@@YA_NXZ @ 0x18012743A (-uncaught_exception@std@@YA_NXZ.c)
 *     _guard_dispatch_icall_nop @ 0x180127630 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall sub_18002D39C(__int64 a1, __int64 a2)
{
  __int64 v3; // rdi
  unsigned int v4; // ebx
  __int64 v5; // r14
  __int64 v6; // rsi
  __int16 v7; // ax
  __int64 v8; // r8
  __int64 v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rcx
  __int64 v15; // [rsp+28h] [rbp-30h] BYREF
  char v16; // [rsp+30h] [rbp-28h]

  v3 = a1;
  v4 = 0;
  v5 = -1LL;
  do
    ++v5;
  while ( *(_BYTE *)(a2 + v5) );
  if ( std::ios_base::width((std::ios_base *)(a1 + *(int *)(*(_QWORD *)a1 + 4LL))) <= 0
    || std::ios_base::width((std::ios_base *)(v3 + *(int *)(*(_QWORD *)v3 + 4LL))) <= v5 )
  {
    v6 = 0LL;
  }
  else
  {
    v6 = std::ios_base::width((std::ios_base *)(v3 + *(int *)(*(_QWORD *)v3 + 4LL))) - v5;
  }
  sub_18002DFE0(&v15, v3);
  if ( v16 )
  {
    try
    {
      v7 = std::ios_base::flags((std::ios_base *)(v3 + *(int *)(*(_QWORD *)v3 + 4LL)));
    }
    catch ( ... )
    {
      LOBYTE(v8) = 1;
      std::ios::setstate(a1 + *(int *)(*(_QWORD *)a1 + 4LL), 4LL, v8);
      v3 = a1;
      v4 = 0;
      goto LABEL_19;
    }
    if ( (v7 & 0x1C0) != 0x40 )
    {
      while ( v6 > 0 )
      {
        v9 = *(int *)(*(_QWORD *)v3 + 4LL);
        LOBYTE(v10) = *(_BYTE *)(v9 + v3 + 88);
        if ( (unsigned int)std::streambuf::sputc(*(_QWORD *)(v9 + v3 + 72), v10) == -1 )
          goto LABEL_16;
        --v6;
      }
    }
    if ( std::streambuf::sputn(*(_QWORD *)(*(int *)(*(_QWORD *)v3 + 4LL) + v3 + 72), a2, v5) == v5 )
    {
      while ( v6 > 0 )
      {
        v12 = *(int *)(*(_QWORD *)v3 + 4LL);
        LOBYTE(v11) = *(_BYTE *)(v12 + v3 + 88);
        if ( (unsigned int)std::streambuf::sputc(*(_QWORD *)(v12 + v3 + 72), v11) == -1 )
          goto LABEL_16;
        --v6;
      }
    }
    else
    {
LABEL_16:
      v4 = 4;
    }
    std::ios_base::width((std::ios_base *)(v3 + *(int *)(*(_QWORD *)v3 + 4LL)), 0LL);
  }
  else
  {
    v4 = 4;
  }
LABEL_19:
  std::ios::setstate(v3 + *(int *)(*(_QWORD *)v3 + 4LL), v4, 0LL);
  if ( !std::uncaught_exception() )
    std::ostream::_Osfx(v15);
  v13 = *(_QWORD *)(*(int *)(*(_QWORD *)v15 + 4LL) + v15 + 72);
  if ( v13 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
  return v3;
}
