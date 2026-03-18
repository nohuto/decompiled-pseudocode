/*
 * XREFs of DwmAsyncChildDestroy @ 0x1C001C920
 * Callers:
 *     xxxFreeWindow @ 0x1C001E184 (xxxFreeWindow.c)
 *     ?DwmNotifyChildrenCreateDestroy@@YAXPEBUtagDESKTOP@@H@Z @ 0x1C00C7DC8 (-DwmNotifyChildrenCreateDestroy@@YAXPEBUtagDESKTOP@@H@Z.c)
 * Callees:
 *     memset @ 0x1C0163640 (memset.c)
 */

__int64 __fastcall DwmAsyncChildDestroy(PVOID Object, __int64 a2)
{
  unsigned int v4; // edi
  __int64 v5; // r8
  __int64 v6; // r9
  _DWORD v8[18]; // [rsp+20h] [rbp-48h] BYREF

  v4 = -1073741823;
  _InterlockedIncrement64(&g_cDWMWindowUniqueness);
  if ( Object )
  {
    memset(v8, 0, 0x34uLL);
    v8[0] = 3407884;
    LOWORD(v8[1]) = 0x8000;
    v8[10] = 1073741844;
    *(_QWORD *)&v8[11] = a2;
    EtwUpdateEvent(a2, 1073741844LL, v5, v6);
    v4 = LpcRequestPort(Object, v8);
    ObfDereferenceObject(Object);
  }
  return v4;
}
