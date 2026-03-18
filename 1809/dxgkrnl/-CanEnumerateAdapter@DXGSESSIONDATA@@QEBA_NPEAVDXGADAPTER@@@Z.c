/*
 * XREFs of ?CanEnumerateAdapter@DXGSESSIONDATA@@QEBA_NPEAVDXGADAPTER@@@Z @ 0x1C000E73C
 * Callers:
 *     ?IterateAdaptersWithCallback@DXGGLOBAL@@QEAAJP6AJPEAVDXGADAPTER@@PEAX@Z1W4_ITERATE_ADAPTER_FLAGS@@@Z @ 0x1C00E0E98 (-IterateAdaptersWithCallback@DXGGLOBAL@@QEAAJP6AJPEAVDXGADAPTER@@PEAX@Z1W4_ITERATE_ADAPTER_FLAGS.c)
 * Callees:
 *     <none>
 */

char __fastcall DXGSESSIONDATA::CanEnumerateAdapter(DXGSESSIONDATA *this, struct DXGADAPTER *a2)
{
  if ( !*((_BYTE *)this + 18491) )
    return (*((_DWORD *)a2 + 77) & 0x10) != 0;
  if ( *((_BYTE *)this + 18490) )
    return *((_BYTE *)a2 + 2476) != 0;
  return 1;
}
