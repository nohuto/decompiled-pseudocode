/*
 * XREFs of xxxUserModeCallback @ 0x1C01E2838
 * Callers:
 *     xxxMNStartMenu @ 0x1C01D5620 (xxxMNStartMenu.c)
 *     xxxMNOpenHierarchy @ 0x1C01E7B08 (xxxMNOpenHierarchy.c)
 *     xxxMenuWindowProc @ 0x1C01E96E0 (xxxMenuWindowProc.c)
 *     xxxTrackPopupMenuEx @ 0x1C020ABF4 (xxxTrackPopupMenuEx.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall xxxUserModeCallback(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5)
{
  unsigned int v5; // ebx
  unsigned int v7; // edi
  int v8; // ebx
  __int64 v10; // [rsp+58h] [rbp+20h] BYREF

  v10 = a4;
  v5 = a3;
  v7 = a1;
  if ( gdwInAtomicOperation )
  {
    a4 = gdwExtraInstrumentations;
    if ( (gdwExtraInstrumentations & 1) != 0 )
      KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
  }
  UserSessionSwitchLeaveCrit(a1, a2, a3, a4);
  EtwTraceBeginCallback(v7);
  v8 = KeUserModeCallback(v7, a2, v5, &v10, &a5);
  EtwTraceEndCallback(v7);
  EnterCrit(0LL, 1LL);
  if ( v8 >= 0 && a5 )
    return (unsigned int)-1073741823;
  return (unsigned int)v8;
}
