/*
 * XREFs of vtfdLoadFontFileTE @ 0x1C02289B0
 * Callers:
 *     <none>
 * Callees:
 *     vtfdLoadFontFile @ 0x1C02299CC (vtfdLoadFontFile.c)
 */

PVOID __fastcall vtfdLoadFontFileTE(int a1, __int64 *a2, __int64 *a3, unsigned int *a4, __int64 a5)
{
  __int64 v5; // rbx
  __int64 v6; // rdi
  unsigned int v7; // esi
  PVOID v8; // rbx
  PVOID pv[3]; // [rsp+20h] [rbp-18h] BYREF

  pv[0] = 0LL;
  if ( a1 != 1 || a5 )
    return 0LL;
  v5 = *a2;
  v6 = *a3;
  v7 = *a4;
  EngAcquireSemaphore(ghsemVTFD);
  vtfdLoadFontFile(v5, v6, v7, pv);
  v8 = pv[0];
  EngReleaseSemaphore(ghsemVTFD);
  return v8;
}
