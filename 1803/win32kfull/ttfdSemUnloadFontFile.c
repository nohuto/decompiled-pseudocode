/*
 * XREFs of ttfdSemUnloadFontFile @ 0x1C0217850
 * Callers:
 *     <none>
 * Callees:
 *     ttfdUnloadFontFileTTC @ 0x1C021BA7C (ttfdUnloadFontFileTTC.c)
 */

__int64 __fastcall ttfdSemUnloadFontFile(PVOID pv)
{
  unsigned int v3; // [rsp+20h] [rbp-18h]

  EngAcquireSemaphore(ghsemTTFD);
  v3 = ttfdUnloadFontFileTTC(pv);
  EngReleaseSemaphore(ghsemTTFD);
  return v3;
}
