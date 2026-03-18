/*
 * XREFs of ?CitpBitmapUpdateForTimeRange@@YAXPEAU_CIT_BITMAP@@IIII@Z @ 0x1C00842E0
 * Callers:
 *     ?CitpSetForegroundProcess@@YAHPEAU_CIT_IMPACT_CONTEXT@@IPEAUtagPROCESSINFO@@PEAUtagWND@@PEAUtagMONITOR@@PEAUtagSHELL_INPUT_USAGE_DATA_INFO@@@Z @ 0x1C00836E0 (-CitpSetForegroundProcess@@YAHPEAU_CIT_IMPACT_CONTEXT@@IPEAUtagPROCESSINFO@@PEAUtagWND@@PEAUtagM.c)
 * Callees:
 *     ?CitpBitmapUpdateBits@@YAXPEAU_CIT_BITMAP@@II@Z @ 0x1C0084338 (-CitpBitmapUpdateBits@@YAXPEAU_CIT_BITMAP@@II@Z.c)
 */

void __fastcall CitpBitmapUpdateForTimeRange(struct _CIT_BITMAP *a1, int a2, int a3, int a4, unsigned int a5)
{
  unsigned int v7; // ecx
  unsigned int v8; // r9d
  unsigned int v9; // eax
  unsigned int v10; // r8d
  unsigned int v11; // edx

  if ( *((_QWORD *)a1 + 1) )
  {
    v7 = 8 * *((_DWORD *)a1 + 2);
    v8 = (a2 - a4) / a5;
    v9 = (a3 - a4) / a5;
    v10 = v7 - 1;
    if ( v9 < v7 )
      v10 = v9;
    v11 = v10;
    if ( v8 <= v10 )
      v11 = v8;
    CitpBitmapUpdateBits(a1, v11, v10);
  }
}
