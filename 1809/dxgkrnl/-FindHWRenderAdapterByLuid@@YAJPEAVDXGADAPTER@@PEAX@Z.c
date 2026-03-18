/*
 * XREFs of ?FindHWRenderAdapterByLuid@@YAJPEAVDXGADAPTER@@PEAX@Z @ 0x1C0144730
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall FindHWRenderAdapterByLuid(struct DXGADAPTER *a1, _QWORD *a2)
{
  if ( !*a2
    && *((_DWORD *)a1 + 44) == 1
    && (g_VgpuReplaceWarp || !*((_BYTE *)a1 + 185))
    && !*((_BYTE *)a1 + 2429)
    && *((_QWORD *)a1 + 316)
    && (*((_DWORD *)a1 + 77) & 0x10) == 0
    && *((_DWORD *)a2 + 4) == *((_DWORD *)a1 + 69)
    && *((_DWORD *)a2 + 5) == *((_DWORD *)a1 + 70) )
  {
    _InterlockedIncrement64((volatile signed __int64 *)a1 + 3);
    a2[1] = -1LL;
    *a2 = a1;
  }
  return 0LL;
}
