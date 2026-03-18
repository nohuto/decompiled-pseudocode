/*
 * XREFs of ttfdSemLoadFontFile @ 0x1C02172A0
 * Callers:
 *     <none>
 * Callees:
 *     bLoadFontFile @ 0x1C0219334 (bLoadFontFile.c)
 *     ttfdUnloadFontFileTTC @ 0x1C021BA7C (ttfdUnloadFontFileTTC.c)
 */

PVOID __fastcall ttfdSemLoadFontFile(
        int a1,
        __int64 *a2,
        __int64 *a3,
        int *a4,
        __int64 a5,
        unsigned __int16 a6,
        ULONG FastCheckSum)
{
  __int64 v7; // rbx
  __int64 v8; // rdi
  int v9; // esi
  PVOID v10; // rbx
  PVOID pv[3]; // [rsp+40h] [rbp-18h] BYREF

  pv[0] = 0LL;
  if ( a1 != 1 || a5 )
    return 0LL;
  v7 = *a2;
  v8 = *a3;
  v9 = *a4;
  EngAcquireSemaphore(ghsemTTFD);
  bLoadFontFile(v7, v8, v9, a6, FastCheckSum, (__int64)pv);
  v10 = pv[0];
  EngReleaseSemaphore(ghsemTTFD);
  return v10;
}
