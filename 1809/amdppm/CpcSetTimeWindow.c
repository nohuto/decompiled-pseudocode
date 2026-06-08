/*
 * XREFs of CpcSetTimeWindow @ 0x1C0004900
 * Callers:
 *     <none>
 * Callees:
 *     WriteGenAddr @ 0x1C00038E8 (WriteGenAddr.c)
 *     WriteGenAddrHidden @ 0x1C0003B58 (WriteGenAddrHidden.c)
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
