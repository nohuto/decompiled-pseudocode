/*
 * XREFs of ?iHash@@YAIPEBGI@Z @ 0x1C004CFC4
 * Callers:
 *     ?pPFFGet@PUBLIC_PFTOBJ@@QEAAPEAVPFF@@PEBGKKPEAUtagDESIGNVECTOR@@KPEAPEAPEAV2@H@Z @ 0x1C004CB54 (-pPFFGet@PUBLIC_PFTOBJ@@QEAAPEAVPFF@@PEBGKKPEAUtagDESIGNVECTOR@@KPEAPEAPEAV2@H@Z.c)
 *     ?pbktSearch@FHOBJ@@QEAAPEAU_HASHBUCKET@@PEBGPEAIPEAU_UNIVERSAL_FONT_ID@@H@Z @ 0x1C004CE94 (-pbktSearch@FHOBJ@@QEAAPEAU_HASHBUCKET@@PEBGPEAIPEAU_UNIVERSAL_FONT_ID@@H@Z.c)
 *     ?vSetUniqueness@PFFOBJ@@QEAAXXZ @ 0x1C012CB0C (-vSetUniqueness@PFFOBJ@@QEAAXXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall iHash(const unsigned __int16 *a1, unsigned int a2)
{
  unsigned int v2; // eax
  int v3; // r8d

  v2 = 0;
  while ( *a1 )
  {
    v3 = *(unsigned __int8 *)a1++;
    v2 = v3 + 257 * v2;
  }
  return v2 % a2;
}
