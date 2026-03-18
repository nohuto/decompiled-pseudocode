/*
 * XREFs of ?FindHWRenderAdapterByLuid@@YAJPEAVDXGADAPTER@@PEAX@Z @ 0x1C0243F60
 * Callers:
 *     <none>
 * Callees:
 *     ?Assign@DXGADAPTER_REFERENCE@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C000BE40 (-Assign@DXGADAPTER_REFERENCE@@QEAAXPEAVDXGADAPTER@@@Z.c)
 */

__int64 __fastcall FindHWRenderAdapterByLuid(struct DXGADAPTER *a1, DXGADAPTER ***a2)
{
  DXGADAPTER **v3; // rdx

  if ( !*a2[1]
    && *((_DWORD *)a1 + 44) == 1
    && !*((_BYTE *)a1 + 2465)
    && (g_VgpuReplaceWarp || !*((_BYTE *)a1 + 185))
    && !*((_BYTE *)a1 + 2465) )
  {
    if ( *((_QWORD *)a1 + 320) )
    {
      if ( (*((_DWORD *)a1 + 77) & 0x10) == 0 )
      {
        v3 = *a2;
        if ( *(_DWORD *)*a2 == *((_DWORD *)a1 + 69) && *((_DWORD *)v3 + 1) == *((_DWORD *)a1 + 70) )
          DXGADAPTER_REFERENCE::Assign(a2[1], a1);
      }
    }
  }
  return 0LL;
}
