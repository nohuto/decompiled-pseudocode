/*
 * XREFs of ?GetNextVidPnTargetInfo@DISPLAYDIAGNOSTICADAPTERDATA@@AEAAPEAVVIDPNTARGETINFO@@XZ @ 0x1C0024BE8
 * Callers:
 *     ?AddVidPnTargetInfo@DISPLAYDIAGNOSTICADAPTERDATA@@AEAAJPEAVDXGADAPTER@@@Z @ 0x1C0295104 (-AddVidPnTargetInfo@DISPLAYDIAGNOSTICADAPTERDATA@@AEAAJPEAVDXGADAPTER@@@Z.c)
 * Callees:
 *     <none>
 */

struct VIDPNTARGETINFO *__fastcall DISPLAYDIAGNOSTICADAPTERDATA::GetNextVidPnTargetInfo(
        DISPLAYDIAGNOSTICADAPTERDATA *this)
{
  __int64 v1; // rax

  v1 = *((unsigned int *)this + 251);
  if ( (unsigned int)v1 >= 4 )
    return 0LL;
  else
    return (DISPLAYDIAGNOSTICADAPTERDATA *)((char *)this + 16 * v1 + 940);
}
