/*
 * XREFs of ComputeFileviewCheckSum @ 0x1C0142960
 * Callers:
 *     GreGetUFI @ 0x1C0092E18 (GreGetUFI.c)
 *     ??0PFFMEMOBJ@@QEAA@IPEBGKKPEAUtagDESIGNVECTOR@@K_KPEAUHDEV__@@PEAUDHPDEV__@@PEAVPFT@@KKPEAU_FNTCHECKSUM@@PEAPEAU_FONTFILEVIEW@@PEAU_UNIVERSAL_FONT_ID@@H@Z @ 0x1C00F8AB4 (--0PFFMEMOBJ@@QEAA@IPEBGKKPEAUtagDESIGNVECTOR@@K_KPEAUHDEV__@@PEAUDHPDEV__@@PEAVPFT@@KKPEAU_FNTC.c)
 *     EngCloseFNTCache @ 0x1C011D8E8 (EngCloseFNTCache.c)
 *     InitFNTCache @ 0x1C0141490 (InitFNTCache.c)
 *     ?ComputeFileviewCheckSumInFontDriverAddressSpace@@YAKPEAPEAU_FONTFILEVIEW@@I@Z @ 0x1C02B34B4 (-ComputeFileviewCheckSumInFontDriverAddressSpace@@YAKPEAPEAU_FONTFILEVIEW@@I@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ComputeFileviewCheckSum(_DWORD *a1, unsigned int a2)
{
  unsigned int v2; // r8d
  _DWORD *v3; // rdx

  v2 = 0;
  v3 = &a1[(unsigned __int64)a2 >> 2];
  while ( a1 < v3 )
    v2 = *a1++ + 257 * v2;
  if ( v2 < 2 )
    return 2;
  return v2;
}
