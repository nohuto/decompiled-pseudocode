/*
 * XREFs of ?bCleanupFontHash@@YAHPEAPEAU_FONTHASH@@@Z @ 0x1C011DB7C
 * Callers:
 *     ?bCleanupFontTable@@YAHPEAPEAVPFT@@@Z @ 0x1C011DAE0 (-bCleanupFontTable@@YAHPEAPEAVPFT@@@Z.c)
 * Callees:
 *     ?bValid@FHOBJ@@QEBAHXZ @ 0x1C00945B8 (-bValid@FHOBJ@@QEBAHXZ.c)
 *     ?vFree@FHOBJ@@QEAAXXZ @ 0x1C011DBC8 (-vFree@FHOBJ@@QEAAXXZ.c)
 */

__int64 __fastcall bCleanupFontHash(struct _FONTHASH **a1)
{
  __int64 v1; // rax
  unsigned int v2; // ebx
  BOOL v3; // edi
  _QWORD v5[3]; // [rsp+20h] [rbp-18h] BYREF

  v1 = (__int64)*a1;
  v5[0] = a1;
  v5[1] = v1;
  v2 = 0;
  v3 = FHOBJ::bValid((FHOBJ *)v5);
  if ( v3 )
    FHOBJ::vFree((FHOBJ *)v5);
  LOBYTE(v2) = v3;
  return v2;
}
