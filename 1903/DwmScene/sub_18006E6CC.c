/*
 * XREFs of sub_18006E6CC @ 0x18006E6CC
 * Callers:
 *     sub_180077D74 @ 0x180077D74 (sub_180077D74.c)
 * Callees:
 *     sub_180073590 @ 0x180073590 (sub_180073590.c)
 *     sub_180074378 @ 0x180074378 (sub_180074378.c)
 *     ?uncaught_exception@std@@YA_NXZ @ 0x18012743A (-uncaught_exception@std@@YA_NXZ.c)
 *     _guard_dispatch_icall_nop @ 0x180127630 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall sub_18006E6CC(__int64 a1, _BYTE *a2)
{
  __int64 v2; // rbx
  unsigned int v3; // edi
  __int64 v4; // r15
  __int64 v5; // rsi
  __int64 v6; // rcx
  void (__fastcall ***v7)(_QWORD, __int64); // rax
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r13
  unsigned __int16 v11; // ax
  __int64 v12; // rcx
  __int64 v14; // [rsp+28h] [rbp-60h] BYREF
  char v15; // [rsp+30h] [rbp-58h]
  _BYTE v16[8]; // [rsp+38h] [rbp-50h] BYREF
  _QWORD *v17; // [rsp+40h] [rbp-48h]
  _BYTE *v19; // [rsp+98h] [rbp+10h]
  int v20; // [rsp+A0h] [rbp+18h]
  __int64 v21; // [rsp+A8h] [rbp+20h]

  v19 = a2;
  v2 = a1;
  v3 = 0;
  v20 = 0;
  v4 = -1LL;
  do
    ++v4;
  while ( a2[v4] );
  if ( std::ios_base::width((std::ios_base *)(a1 + *(int *)(*(_QWORD *)a1 + 4LL))) <= 0
    || std::ios_base::width((std::ios_base *)(v2 + *(int *)(*(_QWORD *)v2 + 4LL))) <= v4 )
  {
    v5 = 0LL;
  }
  else
  {
    v5 = std::ios_base::width((std::ios_base *)(v2 + *(int *)(*(_QWORD *)v2 + 4LL))) - v4;
  }
  sub_180074378(&v14, v2);
  if ( v15 )
  {
    try
    {
      v6 = std::ios_base::getloc(v2 + *(int *)(*(_QWORD *)v2 + 4LL), v16);
      v21 = sub_180073590(v6);
      if ( v17 )
      {
        v7 = (void (__fastcall ***)(_QWORD, __int64))(*(__int64 (__fastcall **)(_QWORD *, _QWORD))(*v17 + 16LL))(
                                                       v17,
                                                       *v17);
        if ( v7 )
          (**v7)(v7, 1LL);
      }
      if ( (std::ios_base::flags((std::ios_base *)(v2 + *(int *)(*(_QWORD *)v2 + 4LL))) & 0x1C0) != 0x40 )
      {
        while ( v5 > 0 )
        {
          if ( (unsigned __int16)std::wstreambuf::sputc(
                                   *(_QWORD *)(*(int *)(*(_QWORD *)v2 + 4LL) + v2 + 72),
                                   *(unsigned __int16 *)(*(int *)(*(_QWORD *)v2 + 4LL) + v2 + 88)) == 0xFFFF )
          {
            v3 = 4;
            v20 = 4;
            goto LABEL_34;
          }
          --v5;
        }
      }
    }
    catch ( ... )
    {
      LOBYTE(v9) = 1;
      std::wios::setstate(a1 + *(int *)(*(_QWORD *)a1 + 4LL), 4LL, v9);
      v2 = a1;
      v3 = v20;
      goto LABEL_27;
    }
LABEL_34:
    while ( !v3 )
    {
      if ( v4 <= 0 )
      {
        while ( v5 > 0 )
        {
          if ( (unsigned __int16)std::wstreambuf::sputc(
                                   *(_QWORD *)(*(int *)(*(_QWORD *)v2 + 4LL) + v2 + 72),
                                   *(unsigned __int16 *)(*(int *)(*(_QWORD *)v2 + 4LL) + v2 + 88)) == 0xFFFF )
          {
            v3 = 4;
            goto LABEL_25;
          }
          --v5;
        }
        break;
      }
      v10 = *(_QWORD *)(*(int *)(*(_QWORD *)v2 + 4LL) + v2 + 72);
      LOBYTE(v8) = *v19;
      v11 = std::ctype<wchar_t>::widen(v21, v8);
      if ( (unsigned __int16)std::wstreambuf::sputc(v10, v11) == 0xFFFF )
        v3 = 4;
      --v4;
      ++v19;
    }
LABEL_25:
    std::ios_base::width((std::ios_base *)(v2 + *(int *)(*(_QWORD *)v2 + 4LL)), 0LL);
  }
  else
  {
    v3 = 4;
  }
LABEL_27:
  std::wios::setstate(v2 + *(int *)(*(_QWORD *)v2 + 4LL), v3, 0LL);
  if ( !std::uncaught_exception() )
    std::wostream::_Osfx(v14);
  v12 = *(_QWORD *)(*(int *)(*(_QWORD *)v14 + 4LL) + v14 + 72);
  if ( v12 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
  return v2;
}
