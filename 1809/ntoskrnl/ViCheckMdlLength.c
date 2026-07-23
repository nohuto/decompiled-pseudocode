/*
 * XREFs of ViCheckMdlLength @ 0x14092DDBC
 * Callers:
 *     VfBuildScatterGatherList @ 0x14092B430 (VfBuildScatterGatherList.c)
 *     VfBuildScatterGatherListEx @ 0x14092B770 (VfBuildScatterGatherListEx.c)
 *     VfGetScatterGatherList @ 0x14092C360 (VfGetScatterGatherList.c)
 *     VfGetScatterGatherListEx @ 0x14092C6F0 (VfGetScatterGatherListEx.c)
 *     VfMapTransfer @ 0x14092CAB0 (VfMapTransfer.c)
 *     VfMapTransferEx @ 0x14092CC70 (VfMapTransferEx.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ViCheckMdlLength(__int64 *a1, unsigned __int64 a2, unsigned int a3)
{
  unsigned __int64 v4; // rax
  int v5; // eax
  unsigned int v6; // eax

  if ( !a3 )
    return 0LL;
  if ( a1 )
  {
    do
    {
      v4 = *((unsigned int *)a1 + 10);
      if ( a2 <= v4 )
        break;
      a1 = (__int64 *)*a1;
      a2 -= v4;
    }
    while ( a1 );
    while ( a1 && a3 )
    {
      v5 = *((_DWORD *)a1 + 10);
      a1 = (__int64 *)*a1;
      v6 = v5 - a2;
      if ( v6 >= a3 )
        v6 = a3;
      a3 -= v6;
      LODWORD(a2) = 0;
    }
  }
  return a3;
}
