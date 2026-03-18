/*
 * XREFs of ?pPFFGet@DEVICE_PFTOBJ@@QEAAPEAVPFF@@PEAUHDEV__@@PEAPEAPEAV2@@Z @ 0x1C007EB04
 * Callers:
 *     ?ppfeGetAMatch@@YAPEAVPFE@@AEAVXDCOBJ@@PEAUtagENUMLOGFONTEXDVW@@PEBGKKPEAKPEAU_POINTL@@3H@Z @ 0x1C0027840 (-ppfeGetAMatch@@YAPEAVPFE@@AEAVXDCOBJ@@PEAUtagENUMLOGFONTEXDVW@@PEBGKKPEAKPEAU_POINTL@@3H@Z.c)
 *     GreEnumFonts @ 0x1C007E5A8 (GreEnumFonts.c)
 *     ?bFoundForcedMatch@MAPPER@@QEAAHPEAU_UNIVERSAL_FONT_ID@@@Z @ 0x1C007F790 (-bFoundForcedMatch@MAPPER@@QEAAHPEAU_UNIVERSAL_FONT_ID@@@Z.c)
 *     ?bLoadFonts@DEVICE_PFTOBJ@@QEAAHPEAVPDEVOBJ@@I@Z @ 0x1C015F1C4 (-bLoadFonts@DEVICE_PFTOBJ@@QEAAHPEAVPDEVOBJ@@I@Z.c)
 *     DEVICE_PFTOBJ_pPFFGetWrap @ 0x1C0257350 (DEVICE_PFTOBJ_pPFFGetWrap.c)
 *     ?vAttemptDeviceMatch@MAPPER@@QEAAXXZ @ 0x1C0278528 (-vAttemptDeviceMatch@MAPPER@@QEAAXXZ.c)
 * Callees:
 *     ?SkipInvalidPff@@YAPEAVPFF@@PEAV1@@Z @ 0x1C015F17C (-SkipInvalidPff@@YAPEAVPFF@@PEAV1@@Z.c)
 */

struct PFF *__fastcall DEVICE_PFTOBJ::pPFFGet(DEVICE_PFTOBJ *this, unsigned __int64 a2, struct PFF ***a3)
{
  struct PFF **v3; // rax
  struct PFF *v4; // rcx
  struct PFF *result; // rax
  __int64 v6; // r10

  v3 = (struct PFF **)(*(_QWORD *)this + 40LL + 8 * ((a2 >> 4) % *(unsigned int *)(*(_QWORD *)this + 24LL)));
  v4 = *v3;
  if ( a3 )
    *a3 = v3;
  while ( 1 )
  {
    result = SkipInvalidPff(v4);
    if ( !result || v6 == *((_QWORD *)result + 11) )
      break;
    v4 = (struct PFF *)*((_QWORD *)result + 1);
  }
  return result;
}
