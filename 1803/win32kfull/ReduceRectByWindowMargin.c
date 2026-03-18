/*
 * XREFs of ReduceRectByWindowMargin @ 0x1C01BF6A0
 * Callers:
 *     GetWindowFrameBounds @ 0x1C01BF5C0 (GetWindowFrameBounds.c)
 *     xxxDrawDragRectEx @ 0x1C01C6034 (xxxDrawDragRectEx.c)
 * Callees:
 *     GetWindowExtendedMargin @ 0x1C0059034 (GetWindowExtendedMargin.c)
 */

__int64 __fastcall ReduceRectByWindowMargin(__int64 a1, _OWORD *a2, __int64 a3)
{
  __int64 result; // rax
  __int16 v5; // [rsp+38h] [rbp+10h] BYREF
  __int16 v6; // [rsp+3Ah] [rbp+12h]
  __int16 v7; // [rsp+3Ch] [rbp+14h]
  __int16 v8; // [rsp+3Eh] [rbp+16h]

  *(_OWORD *)a3 = *a2;
  result = GetWindowExtendedMargin(a1, (__int64)&v5);
  if ( (_DWORD)result )
  {
    *(_DWORD *)(a3 + 4) += v7;
    *(_DWORD *)a3 += v5;
    *(_DWORD *)(a3 + 8) -= v6;
    result = (unsigned int)v8;
    *(_DWORD *)(a3 + 12) -= result;
  }
  return result;
}
