/*
 * XREFs of DwmAsyncChildClipRgnChange @ 0x1C00C4D8C
 * Callers:
 *     OffsetChildren @ 0x1C0073D44 (OffsetChildren.c)
 *     SelectWindowRgn @ 0x1C00C4C7C (SelectWindowRgn.c)
 * Callees:
 *     memset @ 0x1C013D6C0 (memset.c)
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
