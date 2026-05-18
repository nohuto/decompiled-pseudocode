/*
 * XREFs of sub_18007FDC0 @ 0x18007FDC0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_18007FDC0(__int64 a1)
{
  unsigned __int16 *v2; // rax
  unsigned __int16 *v3; // rbx
  unsigned __int64 v5; // rax
  unsigned __int64 v6; // rsi
  __int64 v7; // rbx
  __int64 v8; // rax

  v2 = (unsigned __int16 *)std::wstreambuf::gptr(a1);
  v3 = v2;
  if ( v2 )
  {
    if ( (unsigned __int64)v2 < **(_QWORD **)(a1 + 56) + 2LL * **(int **)(a1 + 80) )
      return *v2;
    v5 = std::wstreambuf::pptr(a1);
    if ( v5 && (*(_BYTE *)(a1 + 112) & 4) == 0 )
    {
      v6 = *(_QWORD *)(a1 + 104);
      if ( v6 < v5 )
        v6 = v5;
      if ( v6 > (unsigned __int64)v3 )
      {
        *(_QWORD *)(a1 + 104) = v6;
        v7 = **(_QWORD **)(a1 + 24);
        v8 = std::wstreambuf::gptr(a1);
        **(_QWORD **)(a1 + 24) = v7;
        **(_QWORD **)(a1 + 56) = v8;
        **(_DWORD **)(a1 + 80) = (__int64)(v6 - v8) >> 1;
        v2 = (unsigned __int16 *)std::wstreambuf::gptr(a1);
        return *v2;
      }
    }
  }
  return 0xFFFFLL;
}
