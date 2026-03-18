/*
 * XREFs of DwmAsyncActivationChange @ 0x1C00A7D10
 * Callers:
 *     xxxDWP_DoNCActivate @ 0x1C00A7B84 (xxxDWP_DoNCActivate.c)
 * Callees:
 *     memset @ 0x1C0163640 (memset.c)
 */

__int64 __fastcall DwmAsyncActivationChange(PVOID Object, __int64 a2, int a3)
{
  unsigned int v6; // ebx
  __int64 v7; // r8
  __int64 v8; // r9
  _DWORD v10[16]; // [rsp+20h] [rbp-48h] BYREF

  v6 = -1073741823;
  _InterlockedIncrement64(&g_cDWMWindowUniqueness);
  if ( Object )
  {
    memset(v10, 0, 0x38uLL);
    v10[0] = 3670032;
    LOWORD(v10[1]) = 0x8000;
    v10[10] = 1073741836;
    *(_QWORD *)&v10[11] = a2;
    v10[13] = a3;
    EtwUpdateEvent(a2, 1073741836LL, v7, v8);
    v6 = LpcRequestPort(Object, v10);
    ObfDereferenceObject(Object);
  }
  return v6;
}
