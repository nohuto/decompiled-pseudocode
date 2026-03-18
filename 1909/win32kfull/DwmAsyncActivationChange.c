/*
 * XREFs of DwmAsyncActivationChange @ 0x1C012F068
 * Callers:
 *     xxxDWP_DoNCActivate @ 0x1C012EEEC (xxxDWP_DoNCActivate.c)
 * Callees:
 *     memset @ 0x1C0168440 (memset.c)
 */

__int64 __fastcall DwmAsyncActivationChange(PVOID Object, __int64 a2, int a3)
{
  unsigned int v6; // ebx
  _DWORD v8[16]; // [rsp+20h] [rbp-48h] BYREF

  v6 = -1073741823;
  _InterlockedIncrement64(&g_cDWMWindowUniqueness);
  if ( Object )
  {
    memset(v8, 0, 0x38uLL);
    v8[0] = 3670032;
    LOWORD(v8[1]) = 0x8000;
    v8[10] = 1073741836;
    *(_QWORD *)&v8[11] = a2;
    v8[13] = a3;
    EtwUpdateEvent(a2);
    v6 = LpcRequestPort(Object, v8);
    ObfDereferenceObject(Object);
  }
  return v6;
}
