/*
 * XREFs of ?FindFirstHWRenderAdapter@@YAJPEAVDXGADAPTER@@PEAX@Z @ 0x1C0156660
 * Callers:
 *     <none>
 * Callees:
 *     ?Assign@DXGADAPTER_REFERENCE@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C000BC50 (-Assign@DXGADAPTER_REFERENCE@@QEAAXPEAVDXGADAPTER@@@Z.c)
 */

__int64 __fastcall FindFirstHWRenderAdapter(struct DXGADAPTER *a1, void *a2)
{
  __int64 v3; // r8
  int v4; // edx

  v3 = **((_QWORD **)a2 + 1);
  if ( (!v3 || (*(_DWORD *)(v3 + 308) & 1) == 0)
    && *((_DWORD *)a1 + 44) == 1
    && (g_VgpuReplaceWarp || !*((_BYTE *)a1 + 185)) )
  {
    v4 = *((_DWORD *)a1 + 606);
    if ( (v4 & 4) == 0
      && !*((_BYTE *)a1 + 2465)
      && *((_QWORD *)a1 + 320)
      && (*((_DWORD *)a1 + 77) & 0x10) == 0
      && (*((int *)a1 + 613) < 2600 || (v4 & 8) == 0) )
    {
      DXGADAPTER_REFERENCE::Assign(*((DXGADAPTER ***)a2 + 1), a1);
    }
  }
  return 0LL;
}
