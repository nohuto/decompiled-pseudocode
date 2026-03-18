/*
 * XREFs of xxxSendUAHMenuMessage @ 0x1C000D12C
 * Callers:
 *     xxxPaintMenuBar @ 0x1C000CCE4 (xxxPaintMenuBar.c)
 *     xxxMenuDraw @ 0x1C00103BC (xxxMenuDraw.c)
 *     xxxMenuWindowProc @ 0x1C01E96E0 (xxxMenuWindowProc.c)
 *     xxxMNDrawFullNC @ 0x1C020881C (xxxMNDrawFullNC.c)
 * Callees:
 *     xxxSendMessage @ 0x1C003F318 (xxxSendMessage.c)
 */

__int64 __fastcall xxxSendUAHMenuMessage(__int64 a1, __int64 a2, _QWORD *a3, __int64 a4)
{
  __int64 v4; // rax
  _QWORD v6[2]; // [rsp+20h] [rbp-28h] BYREF
  int v7; // [rsp+30h] [rbp-18h]

  if ( a3 )
    v6[0] = *a3;
  else
    v6[0] = 0LL;
  v4 = a3[5];
  v6[1] = a4;
  v7 = *(_DWORD *)(v4 + 40);
  return ((__int64 (__fastcall *)(__int64, __int64, _QWORD, _QWORD *))xxxSendMessage)(a1, a2, 0LL, v6);
}
