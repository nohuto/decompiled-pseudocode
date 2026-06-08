/*
 * XREFs of CpcSetTimeWindow @ 0x1C000A3A0
 * Callers:
 *     <none>
 * Callees:
 *     WriteGenAddr @ 0x1C0002208 (WriteGenAddr.c)
 *     WriteGenAddrHidden @ 0x1C0002478 (WriteGenAddrHidden.c)
 */

char __fastcall CpcSetTimeWindow(_QWORD *a1, unsigned int a2)
{
  _BYTE *v2; // rax

  v2 = (_BYTE *)(a1[14] + 116LL);
  if ( *(_BYTE *)(*a1 + 78LL) )
  {
    LOBYTE(v2) = WriteGenAddrHidden(*(_DWORD *)(*a1 + 80LL), v2, a2);
  }
  else if ( a1[14] != -116LL )
  {
    LOBYTE(v2) = WriteGenAddr((_BYTE *)(a1[14] + 116LL), a2);
  }
  return (char)v2;
}
