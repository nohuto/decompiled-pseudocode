/*
 * XREFs of ?GetGCData@@YAPEAUtagVWPLGESTUREDATA@@PEAUtagWND@@@Z @ 0x1C0011354
 * Callers:
 *     ?SetBitMask@@YAXPEAUtagWND@@IH@Z @ 0x1C000F4E4 (-SetBitMask@@YAXPEAUtagWND@@IH@Z.c)
 *     ?_StoreGestureConfig@@YAHPEAUtagWND@@IPEAUtagGESTURECONFIG@@@Z @ 0x1C000FA60 (-_StoreGestureConfig@@YAHPEAUtagWND@@IPEAUtagGESTURECONFIG@@@Z.c)
 *     SetGestureConfigSettings @ 0x1C0010EFC (SetGestureConfigSettings.c)
 *     GetGestureConfigSettings @ 0x1C0213950 (GetGestureConfigSettings.c)
 * Callees:
 *     VWPLGetData @ 0x1C0012800 (VWPLGetData.c)
 */

struct tagVWPLGESTUREDATA *__fastcall GetGCData(struct tagWND *a1)
{
  int v1; // eax
  __int64 v3; // [rsp+30h] [rbp+8h] BYREF

  v1 = VWPLGetData(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)a1 + 2) + 416LL) + 864LL), a1, &v3);
  return (struct tagVWPLGESTUREDATA *)(v3 & -(__int64)(v1 != 0));
}
