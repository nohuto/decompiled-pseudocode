/*
 * XREFs of CpcSetAutonomousMode @ 0x1C00048B0
 * Callers:
 *     <none>
 * Callees:
 *     WriteGenAddr @ 0x1C00038E8 (WriteGenAddr.c)
 *     WriteGenAddrHidden @ 0x1C0003B58 (WriteGenAddrHidden.c)
 */

char __fastcall CpcSetAutonomousMode(_QWORD *a1, int a2)
{
  _BYTE *v2; // rax

  v2 = (_BYTE *)(a1[14] + 188LL);
  if ( *(_BYTE *)(*a1 + 78LL) )
  {
    LOBYTE(v2) = WriteGenAddrHidden(*(_DWORD *)(*a1 + 80LL), v2, a2 != 0);
  }
  else if ( a1[14] != -188LL )
  {
    LOBYTE(v2) = WriteGenAddr((_BYTE *)(a1[14] + 188LL), a2 != 0);
  }
  return (char)v2;
}
