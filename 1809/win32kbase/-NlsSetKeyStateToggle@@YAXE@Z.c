/*
 * XREFs of ?NlsSetKeyStateToggle@@YAXE@Z @ 0x1C0090FC0
 * Callers:
 *     NlsKbdInitializePerSystem @ 0x1C0090DC0 (NlsKbdInitializePerSystem.c)
 * Callees:
 *     <none>
 */

void __fastcall NlsSetKeyStateToggle(unsigned __int8 a1)
{
  unsigned __int64 v1; // rdx

  v1 = (unsigned __int64)a1 >> 2;
  if ( gpqForeground )
    *(_BYTE *)(v1 + gpqForeground + 228) |= 1 << (2 * (a1 & 3) + 1);
  *((_BYTE *)&gafAsyncKeyState + v1) |= 1 << (2 * (a1 & 3) + 1);
}
