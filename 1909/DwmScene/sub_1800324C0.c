/*
 * XREFs of sub_1800324C0 @ 0x1800324C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1800324C0(__int64 a1)
{
  unsigned __int8 *v2; // rax
  unsigned __int8 *v3; // rbx
  unsigned __int64 v5; // rax
  unsigned __int64 v6; // rsi
  __int64 v7; // rbx
  __int64 v8; // rax

  v2 = (unsigned __int8 *)std::streambuf::gptr(a1);
  v3 = v2;
  if ( v2 )
  {
    if ( (unsigned __int64)v2 < **(_QWORD **)(a1 + 56) + **(int **)(a1 + 80) )
      return *v2;
    v5 = std::streambuf::pptr(a1);
    if ( v5 && (*(_BYTE *)(a1 + 112) & 4) == 0 )
    {
      v6 = *(_QWORD *)(a1 + 104);
      if ( v6 < v5 )
        v6 = v5;
      if ( v6 > (unsigned __int64)v3 )
      {
        *(_QWORD *)(a1 + 104) = v6;
        v7 = **(_QWORD **)(a1 + 24);
        v8 = std::streambuf::gptr(a1);
        **(_QWORD **)(a1 + 24) = v7;
        **(_QWORD **)(a1 + 56) = v8;
        **(_DWORD **)(a1 + 80) = v6 - v8;
        v2 = (unsigned __int8 *)std::streambuf::gptr(a1);
        return *v2;
      }
    }
  }
  return 0xFFFFFFFFLL;
}
