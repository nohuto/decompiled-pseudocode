/*
 * XREFs of sub_1800322B0 @ 0x1800322B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned __int64 *__fastcall sub_1800322B0(__int64 a1, unsigned __int64 *a2, _QWORD *a3, char a4)
{
  unsigned __int64 v5; // rsi
  __int64 v8; // r14
  unsigned __int64 v9; // rax
  __int64 v10; // r9
  __int64 v11; // rcx
  __int64 v12; // r8
  int v13; // ecx

  v5 = *a3 + a3[1];
  v8 = std::streambuf::gptr(a1);
  v9 = std::streambuf::pptr(a1);
  if ( v9 && *(_QWORD *)(a1 + 104) < v9 )
    *(_QWORD *)(a1 + 104) = v9;
  v10 = **(_QWORD **)(a1 + 24);
  v11 = *(_QWORD *)(a1 + 104);
  if ( v5 > v11 - v10 || v5 && ((a4 & 1) != 0 && !v8 || (a4 & 2) != 0 && !v9) )
  {
    *a2 = -1LL;
  }
  else
  {
    v12 = v10 + v5;
    if ( (a4 & 1) != 0 && v8 )
    {
      **(_QWORD **)(a1 + 56) = v12;
      **(_DWORD **)(a1 + 80) = v11 - v12;
    }
    if ( (a4 & 2) != 0 && v9 )
    {
      v13 = **(_DWORD **)(a1 + 64) + **(_DWORD **)(a1 + 88) - v12;
      **(_QWORD **)(a1 + 32) = v10;
      **(_QWORD **)(a1 + 64) = v12;
      **(_DWORD **)(a1 + 88) = v13;
    }
    *a2 = v5;
  }
  a2[1] = 0LL;
  a2[2] = 0LL;
  return a2;
}
