/*
 * XREFs of sub_180072744 @ 0x180072744
 * Callers:
 *     sub_180077E84 @ 0x180077E84 (sub_180077E84.c)
 * Callees:
 *     sub_180074488 @ 0x180074488 (sub_180074488.c)
 *     ?uncaught_exception@std@@YA_NXZ @ 0x18012754A (-uncaught_exception@std@@YA_NXZ.c)
 *     _guard_dispatch_icall_nop @ 0x180127740 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall sub_180072744(__int64 a1, __int64 a2, unsigned __int64 a3)
{
  __int64 v5; // rbx
  unsigned int v6; // edi
  unsigned __int64 v7; // rsi
  __int64 v8; // r8
  __int64 v9; // rcx
  __int64 v11; // [rsp+28h] [rbp-40h] BYREF
  char v12; // [rsp+30h] [rbp-38h]
  int v14; // [rsp+88h] [rbp+20h]

  v5 = a1;
  v6 = 0;
  v14 = 0;
  if ( std::ios_base::width((std::ios_base *)(a1 + *(int *)(*(_QWORD *)a1 + 4LL))) <= 0
    || std::ios_base::width((std::ios_base *)(v5 + *(int *)(*(_QWORD *)v5 + 4LL))) <= a3 )
  {
    v7 = 0LL;
  }
  else
  {
    v7 = std::ios_base::width((std::ios_base *)(v5 + *(int *)(*(_QWORD *)v5 + 4LL))) - a3;
  }
  sub_180074488(&v11, v5);
  if ( v12 )
  {
    try
    {
      if ( (std::ios_base::flags((std::ios_base *)(v5 + *(int *)(*(_QWORD *)v5 + 4LL))) & 0x1C0) != 0x40 )
      {
        while ( v7 )
        {
          if ( (unsigned __int16)std::wstreambuf::sputc(
                                   *(_QWORD *)(*(int *)(*(_QWORD *)v5 + 4LL) + v5 + 72),
                                   *(unsigned __int16 *)(*(int *)(*(_QWORD *)v5 + 4LL) + v5 + 88)) == 0xFFFF )
          {
            v6 = 4;
            v14 = 4;
            goto LABEL_11;
          }
          --v7;
        }
      }
      if ( std::wstreambuf::sputn(*(_QWORD *)(*(int *)(*(_QWORD *)v5 + 4LL) + v5 + 72), a2, a3) == a3 )
      {
LABEL_11:
        while ( v7 )
        {
          if ( (unsigned __int16)std::wstreambuf::sputc(
                                   *(_QWORD *)(*(int *)(*(_QWORD *)v5 + 4LL) + v5 + 72),
                                   *(unsigned __int16 *)(*(int *)(*(_QWORD *)v5 + 4LL) + v5 + 88)) == 0xFFFF )
          {
            v6 |= 4u;
            goto LABEL_14;
          }
          --v7;
        }
      }
      else
      {
        v6 = 4;
LABEL_14:
        v14 = v6;
      }
      std::ios_base::width((std::ios_base *)(v5 + *(int *)(*(_QWORD *)v5 + 4LL)), 0LL);
    }
    catch ( ... )
    {
      LOBYTE(v8) = 1;
      std::wios::setstate(a1 + *(int *)(*(_QWORD *)a1 + 4LL), 4LL, v8);
      v5 = a1;
      v6 = v14;
    }
  }
  else
  {
    v6 = 4;
  }
  std::wios::setstate(v5 + *(int *)(*(_QWORD *)v5 + 4LL), v6, 0LL);
  if ( !std::uncaught_exception() )
    std::wostream::_Osfx(v11);
  v9 = *(_QWORD *)(*(int *)(*(_QWORD *)v11 + 4LL) + v11 + 72);
  if ( v9 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
  return v5;
}
