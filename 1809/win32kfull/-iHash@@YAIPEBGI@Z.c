/*
 * XREFs of ?iHash@@YAIPEBGI@Z @ 0x1C007FB28
 * Callers:
 *     ?pPFFGet@PUBLIC_PFTOBJ@@QEAAPEAVPFF@@PEBGKKPEAUtagDESIGNVECTOR@@KPEAPEAPEAV2@H@Z @ 0x1C007F36C (-pPFFGet@PUBLIC_PFTOBJ@@QEAAPEAVPFF@@PEBGKKPEAUtagDESIGNVECTOR@@KPEAPEAPEAV2@H@Z.c)
 *     ?pbktSearch@FHOBJ@@QEAAPEAU_HASHBUCKET@@PEBGPEAIPEAU_UNIVERSAL_FONT_ID@@H@Z @ 0x1C007F9F8 (-pbktSearch@FHOBJ@@QEAAPEAU_HASHBUCKET@@PEBGPEAIPEAU_UNIVERSAL_FONT_ID@@H@Z.c)
 *     ?vSetUniqueness@PFFOBJ@@QEAAXXZ @ 0x1C0122C48 (-vSetUniqueness@PFFOBJ@@QEAAXXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall iHash(unsigned __int16 *a1, unsigned int a2)
{
  unsigned __int16 v2; // r8
  const unsigned __int16 *v3; // r9
  unsigned int i; // eax

  v2 = *a1;
  v3 = a1;
  for ( i = 0; *v3; LOBYTE(v2) = *v3 )
  {
    ++v3;
    i = (unsigned __int8)v2 + 257 * i;
  }
  return i % a2;
}
