/*
 * XREFs of CpcSetAutonomousActivityWindow @ 0x1C0004840
 * Callers:
 *     <none>
 * Callees:
 *     WriteGenAddr @ 0x1C00038E8 (WriteGenAddr.c)
 *     WriteGenAddrHidden @ 0x1C0003B58 (WriteGenAddrHidden.c)
 */

char __fastcall CpcSetAutonomousActivityWindow(__int64 *a1, unsigned int a2)
{
  char v2; // r8
  unsigned __int64 v3; // r8
  __int64 v4; // rax
  __int64 v5; // rcx
  _BYTE *v6; // rax

  v2 = 0;
  while ( a2 > 0x7F )
  {
    ++v2;
    a2 /= 0xAu;
  }
  v3 = a2 & 0x7F | (unsigned __int64)((unsigned __int8)(v2 & 7) << 7);
  v4 = a1[14];
  v5 = *a1;
  v6 = (_BYTE *)(v4 + 200);
  if ( *(_BYTE *)(v5 + 78) )
  {
    LOBYTE(v6) = WriteGenAddrHidden(*(_DWORD *)(v5 + 80), v6, v3);
  }
  else if ( v6 )
  {
    LOBYTE(v6) = WriteGenAddr(v6, v3);
  }
  return (char)v6;
}
