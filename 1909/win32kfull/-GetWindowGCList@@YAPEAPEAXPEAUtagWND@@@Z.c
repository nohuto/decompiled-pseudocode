/*
 * XREFs of ?GetWindowGCList@@YAPEAPEAXPEAUtagWND@@@Z @ 0x1C000F528
 * Callers:
 *     ?_StoreGestureConfig@@YAHPEAUtagWND@@IPEAUtagGESTURECONFIG@@@Z @ 0x1C000FA60 (-_StoreGestureConfig@@YAHPEAUtagWND@@IPEAUtagGESTURECONFIG@@@Z.c)
 *     GetGestureConfigSettings @ 0x1C0213950 (GetGestureConfigSettings.c)
 * Callees:
 *     VWPLGetData @ 0x1C0012800 (VWPLGetData.c)
 */

void **__fastcall GetWindowGCList(struct tagWND *a1)
{
  __int64 v1; // rax
  __int64 v3; // [rsp+30h] [rbp+8h] BYREF

  v1 = *((_QWORD *)a1 + 2);
  v3 = 0LL;
  if ( (unsigned int)VWPLGetData(*(_QWORD *)(*(_QWORD *)(v1 + 416) + 864LL), a1, &v3) && v3 )
    return *(void ***)(v3 + 16);
  else
    return 0LL;
}
