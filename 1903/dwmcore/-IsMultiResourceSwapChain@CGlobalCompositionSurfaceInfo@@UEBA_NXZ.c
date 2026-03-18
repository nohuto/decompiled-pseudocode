/*
 * XREFs of ?IsMultiResourceSwapChain@CGlobalCompositionSurfaceInfo@@UEBA_NXZ @ 0x18025D6F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall CGlobalCompositionSurfaceInfo::IsMultiResourceSwapChain(CGlobalCompositionSurfaceInfo *this)
{
  unsigned int v1; // r9d
  unsigned int v2; // edx
  __int64 v3; // r8
  bool v4; // cf
  bool v5; // zf

  v1 = *((_DWORD *)this + 36);
  v2 = 0;
  v3 = 0LL;
  if ( v1 )
  {
    while ( 1 )
    {
      if ( !*(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 15) + 8 * v3) + 296LL) )
      {
        v4 = ++v2 == 0;
        v5 = v2 == 1;
        if ( v2 > 1 )
          break;
      }
      v3 = (unsigned int)(v3 + 1);
      if ( (unsigned int)v3 >= v1 )
        goto LABEL_5;
    }
  }
  else
  {
LABEL_5:
    v4 = v2 == 0;
    v5 = v2 == 1;
  }
  return !v4 && !v5;
}
