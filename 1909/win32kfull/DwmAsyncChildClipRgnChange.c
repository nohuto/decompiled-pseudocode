/*
 * XREFs of DwmAsyncChildClipRgnChange @ 0x1C00EE53C
 * Callers:
 *     OffsetWindow @ 0x1C002C110 (OffsetWindow.c)
 *     SelectWindowRgn @ 0x1C00EE40C (SelectWindowRgn.c)
 * Callees:
 *     memset @ 0x1C0168440 (memset.c)
 */

__int64 __fastcall DwmAsyncChildClipRgnChange(PVOID Object, __int64 a2)
{
  unsigned int v4; // edi
  _DWORD v6[18]; // [rsp+20h] [rbp-48h] BYREF

  v4 = -1073741823;
  _InterlockedIncrement64(&g_cDWMWindowUniqueness);
  if ( Object )
  {
    memset(v6, 0, 0x34uLL);
    v6[0] = 3407884;
    LOWORD(v6[1]) = 0x8000;
    v6[10] = 1073741847;
    *(_QWORD *)&v6[11] = a2;
    v4 = LpcRequestPort(Object, v6);
    ObfDereferenceObject(Object);
  }
  return v4;
}
