/*
 * XREFs of VidSchCaptureLogs @ 0x1C00CACA0
 * Callers:
 *     <none>
 * Callees:
 *     ?VidSchiAsyncReCreateSchedulingLog@@YAXPEAU_VIDSCH_NODE@@@Z @ 0x1C00341D8 (-VidSchiAsyncReCreateSchedulingLog@@YAXPEAU_VIDSCH_NODE@@@Z.c)
 */

__int64 __fastcall VidSchCaptureLogs(__int64 a1)
{
  __int64 i; // rbx
  __int64 *v3; // rdi
  __int64 v4; // rdi
  __int64 result; // rax

  for ( i = 0LL; (unsigned int)i < *(_DWORD *)(a1 + 68); i = (unsigned int)(i + 1) )
  {
    v3 = *(__int64 **)(a1 + 616);
    if ( (unsigned int)i < *(_DWORD *)(a1 + 688) )
      v3 += i;
    v4 = *v3;
    if ( v4 )
    {
      result = *(unsigned int *)(v4 + 12);
      if ( (result & 2) != 0 )
      {
        VidSchiAsyncReCreateSchedulingLog((struct _VIDSCH_NODE *)v4);
        while ( 1 )
        {
          result = *(unsigned int *)(v4 + 11160);
          if ( !(_DWORD)result )
            break;
          KeWaitForSingleObject((PVOID)(v4 + 11168), Executive, 0, 0, 0LL);
        }
      }
    }
  }
  return result;
}
