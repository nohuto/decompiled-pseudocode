/*
 * XREFs of xxxSendUAHInitMenuMessage @ 0x1C0010198
 * Callers:
 *     xxxPaintMenuBar @ 0x1C000CCE4 (xxxPaintMenuBar.c)
 *     xxxMenuDraw @ 0x1C00103BC (xxxMenuDraw.c)
 *     xxxMNCompute @ 0x1C0013858 (xxxMNCompute.c)
 * Callees:
 *     xxxSendMessage @ 0x1C003F318 (xxxSendMessage.c)
 */

__int64 __fastcall xxxSendUAHInitMenuMessage(__int64 a1, __int64 a2, __int64 a3)
{
  _QWORD *v3; // r9
  unsigned int v5; // r8d
  _QWORD v7[2]; // [rsp+20h] [rbp-28h] BYREF
  int v8; // [rsp+30h] [rbp-18h]

  v3 = *(_QWORD **)(a2 + 16);
  if ( v3 || (v3 = **(_QWORD ***)a2) != 0LL )
    v7[0] = *v3;
  else
    v7[0] = 0LL;
  v7[1] = a3;
  v8 = *(_DWORD *)(v3[5] + 40LL);
  v5 = ((__int64 (__fastcall *)(__int64, __int64, _QWORD, _QWORD *))xxxSendMessage)(a1, 147LL, 0LL, v7);
  if ( v5 )
    *(_DWORD *)(*(_QWORD *)(**(_QWORD **)a2 + 40LL) + 40LL) |= 0x800u;
  else
    *(_DWORD *)(*(_QWORD *)(**(_QWORD **)a2 + 40LL) + 40LL) &= ~0x800u;
  return v5;
}
