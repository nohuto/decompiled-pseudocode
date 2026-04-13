/*
 * XREFs of ?xsputn@?$basic_streambuf@_WU?$char_traits@_W@std@@@std@@MEAA_JPEB_W_J@Z @ 0x18002F8F0
 * Callers:
 *     <none>
 * Callees:
 *     memcpy_0 @ 0x1800C7147 (memcpy_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800C7DF0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall std::wstreambuf::xsputn(__int64 a1, unsigned __int16 *a2, __int64 a3)
{
  __int64 v3; // rbp
  __int64 i; // rdi
  void *v7; // r9
  int v8; // ecx
  __int64 v9; // rbx
  __int64 v10; // rax

  v3 = 0LL;
  for ( i = a3; i > 0; a2 = (unsigned __int16 *)((char *)a2 + v10) )
  {
    v7 = **(void ***)(a1 + 64);
    if ( v7 )
      v8 = **(_DWORD **)(a1 + 88);
    else
      v8 = 0;
    if ( v8 <= 0 )
    {
      if ( (*(unsigned __int16 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a1 + 24LL))(a1, *a2) == 0xFFFF )
        return v3;
      v9 = 1LL;
      --i;
      v10 = 2LL;
    }
    else
    {
      v9 = i;
      if ( i >= v8 )
        v9 = v8;
      if ( v9 )
        memcpy_0(v7, a2, 2 * v9);
      i -= v9;
      **(_DWORD **)(a1 + 88) -= v9;
      **(_QWORD **)(a1 + 64) += 2LL * (int)v9;
      v10 = 2 * v9;
    }
    v3 += v9;
  }
  return v3;
}
