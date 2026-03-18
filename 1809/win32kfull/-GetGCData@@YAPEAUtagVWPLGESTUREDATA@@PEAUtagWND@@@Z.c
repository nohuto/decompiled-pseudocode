/*
 * XREFs of ?GetGCData@@YAPEAUtagVWPLGESTUREDATA@@PEAUtagWND@@@Z @ 0x1C012AD8C
 * Callers:
 *     ?SetBitMask@@YAXPEAUtagWND@@IH@Z @ 0x1C012A8F0 (-SetBitMask@@YAXPEAUtagWND@@IH@Z.c)
 *     ?_StoreGestureConfig@@YAHPEAUtagWND@@IPEAUtagGESTURECONFIG@@@Z @ 0x1C012AAF8 (-_StoreGestureConfig@@YAHPEAUtagWND@@IPEAUtagGESTURECONFIG@@@Z.c)
 *     SetGestureConfigSettings @ 0x1C012AC54 (SetGestureConfigSettings.c)
 *     GetGestureConfigSettings @ 0x1C01FC948 (GetGestureConfigSettings.c)
 * Callees:
 *     VWPLGetData @ 0x1C00D09D8 (VWPLGetData.c)
 */

struct tagVWPLGESTUREDATA *__fastcall GetGCData(struct tagWND *a1)
{
  int v1; // eax
  __int64 v3; // [rsp+30h] [rbp+8h] BYREF

  v1 = VWPLGetData(*(_DWORD **)(*(_QWORD *)(*((_QWORD *)a1 + 2) + 424LL) + 872LL), (__int64)a1, &v3);
  return (struct tagVWPLGESTUREDATA *)(v3 & -(__int64)(v1 != 0));
}
