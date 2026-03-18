/*
 * XREFs of UsbhConnectPdoToHub @ 0x1C00265FC
 * Callers:
 *     UsbhCreatePdo @ 0x1C0022E20 (UsbhCreatePdo.c)
 * Callees:
 *     PdoExt @ 0x1C0011270 (PdoExt.c)
 *     Log @ 0x1C0013360 (Log.c)
 */

__int64 __fastcall UsbhConnectPdoToHub(__int64 a1, __int64 a2)
{
  _DWORD *v4; // rax

  *((_QWORD *)PdoExt(a1) + 148) = 0LL;
  Log(a2, 8, 1346653995, a1, 0LL);
  v4 = PdoExt(a1);
  v4[356] |= 2u;
  *((_QWORD *)PdoExt(a1) + 148) = a2;
  return 0LL;
}
