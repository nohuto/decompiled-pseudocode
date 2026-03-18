/*
 * XREFs of ?LookUpFNTCacheTable@@YAHKPEAGPEAK1PEAPEAVPDEV@@1PEAPEAU_FONTFILEVIEW@@KPEAUtagDESIGNVECTOR@@K@Z @ 0x1C00BF124
 * Callers:
 *     UmfdLoadFontFileView @ 0x1C00BEA68 (UmfdLoadFontFileView.c)
 * Callees:
 *     SearchFNTCacheHlink @ 0x1C00BF210 (SearchFNTCacheHlink.c)
 *     ComputeFNTCacheFastCheckSum @ 0x1C00BF260 (ComputeFNTCacheFastCheckSum.c)
 */

__int64 __fastcall LookUpFNTCacheTable(
        int a1,
        unsigned __int16 *a2,
        unsigned int *a3,
        unsigned int *a4,
        struct PDEV **a5,
        unsigned int *a6,
        struct _FONTFILEVIEW **a7,
        unsigned int a8,
        struct tagDESIGNVECTOR *a9,
        unsigned int a10)
{
  struct PDEV **v10; // rsi
  unsigned int v11; // ebx
  bool v12; // zf
  unsigned int v15; // eax
  struct PDEV **v16; // r8
  unsigned int v17; // ecx

  v10 = a5;
  v11 = 0;
  v12 = qword_1C0326C58 == 0;
  *a3 = 0;
  *a4 = 0;
  *v10 = 0LL;
  if ( v12 )
    return 0LL;
  if ( a1 )
  {
    v15 = ComputeFNTCacheFastCheckSum(a1, (_DWORD)a2, (_DWORD)a7, a8, (__int64)a9, a10);
    v12 = (dword_1C0326C50 & 1) == 0;
    *a3 = v15;
    if ( !v12 )
    {
      a5 = 0LL;
      SearchFNTCacheHlink(v15, &a5);
      v16 = a5;
      if ( a5 )
      {
        if ( ((_DWORD)a5[3] & 1) == 0 )
        {
          *a4 = *((_DWORD *)a5 + 1);
          v11 = 1;
          v17 = *((unsigned __int16 *)v16 + 7);
          *v10 = (struct PDEV *)gaFntPDev[*((unsigned __int16 *)v16 + 6)];
          *a6 = v17;
        }
      }
    }
  }
  return v11;
}
