/*
 * XREFs of ?xsgetn@?$basic_streambuf@_WU?$char_traits@_W@std@@@std@@MEAA_JPEA_W_J@Z @ 0x18002F9D0
 * Callers:
 *     <none>
 * Callees:
 *     memcpy_0 @ 0x1800C7147 (memcpy_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800C7DF0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall std::wstreambuf::xsgetn(__int64 a1, _WORD *a2, __int64 a3)
{
  __int64 v3; // rbp
  __int64 i; // rdi
  const void *v7; // rdx
  int v8; // ecx
  __int64 v9; // rbx
  __int64 v10; // rax
  __int16 v11; // ax

  v3 = 0LL;
  for ( i = a3; i > 0; a2 = (_WORD *)((char *)a2 + v10) )
  {
    v7 = **(const void ***)(a1 + 56);
    if ( v7 )
      v8 = **(_DWORD **)(a1 + 80);
    else
      v8 = 0;
    if ( v8 <= 0 )
    {
      v11 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 56LL))(a1);
      if ( v11 == -1 )
        return v3;
      v9 = 1LL;
      *a2 = v11;
      --i;
      v10 = 2LL;
    }
    else
    {
      v9 = i;
      if ( i >= v8 )
        v9 = v8;
      if ( v9 )
        memcpy_0(a2, v7, 2 * v9);
      i -= v9;
      **(_DWORD **)(a1 + 80) -= v9;
      **(_QWORD **)(a1 + 56) += 2LL * (int)v9;
      v10 = 2 * v9;
    }
    v3 += v9;
  }
  return v3;
}
