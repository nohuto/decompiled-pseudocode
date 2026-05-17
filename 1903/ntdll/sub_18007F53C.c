/*
 * XREFs of sub_18007F53C @ 0x18007F53C
 * Callers:
 *     sub_18002105C @ 0x18002105C (sub_18002105C.c)
 *     sub_18007F45C @ 0x18007F45C (sub_18007F45C.c)
 *     sub_1800CF3AC @ 0x1800CF3AC (sub_1800CF3AC.c)
 * Callees:
 *     <none>
 */

_DWORD *__fastcall sub_18007F53C(__int64 a1, __int64 a2, __int64 a3, __int64 *a4, _DWORD *a5)
{
  __int64 v5; // r10
  __int64 v6; // rax
  __int64 v7; // rdx
  int v8; // ecx
  _DWORD *result; // rax

  v5 = *(_QWORD *)(a1 + 48);
  v6 = 0LL;
  v7 = *(_QWORD *)(v5 + *(unsigned int *)(a2 + 16) + 8 * ((a3 - *(unsigned int *)(a2 + 12) - v5) >> 3));
  if ( v7 < 0 )
  {
    v8 = (unsigned __int16)v7;
  }
  else
  {
    v8 = 0;
    v6 = v7 + v5 + 2;
  }
  *a4 = v6;
  result = a5;
  *a5 = v8;
  return result;
}
