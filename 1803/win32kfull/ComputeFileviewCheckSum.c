/*
 * XREFs of ComputeFileviewCheckSum @ 0x1C005665C
 * Callers:
 *     EngCloseFNTCache @ 0x1C004F588 (EngCloseFNTCache.c)
 *     InitFNTCache @ 0x1C0056070 (InitFNTCache.c)
 *     ?ComputeFileviewCheckSumInFontDriverAddressSpace@@YAKPEAPEAU_FONTFILEVIEW@@I@Z @ 0x1C0056514 (-ComputeFileviewCheckSumInFontDriverAddressSpace@@YAKPEAPEAU_FONTFILEVIEW@@I@Z.c)
 *     ??0PFFMEMOBJ@@QEAA@IPEAGKKPEAUtagDESIGNVECTOR@@K_KPEAUHDEV__@@PEAUDHPDEV__@@PEAVPFT@@KKPEAU_FNTCHECKSUM@@PEAPEAU_FONTFILEVIEW@@PEAU_UNIVERSAL_FONT_ID@@@Z @ 0x1C00C6A8C (--0PFFMEMOBJ@@QEAA@IPEAGKKPEAUtagDESIGNVECTOR@@K_KPEAUHDEV__@@PEAUDHPDEV__@@PEAVPFT@@KKPEAU_FNTC.c)
 *     GreGetUFI @ 0x1C012913C (GreGetUFI.c)
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
