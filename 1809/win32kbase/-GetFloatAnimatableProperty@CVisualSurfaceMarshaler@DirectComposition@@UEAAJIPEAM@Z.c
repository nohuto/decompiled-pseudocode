/*
 * XREFs of ?GetFloatAnimatableProperty@CVisualSurfaceMarshaler@DirectComposition@@UEAAJIPEAM@Z @ 0x1C017D960
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CVisualSurfaceMarshaler::GetFloatAnimatableProperty(
        DirectComposition::CVisualSurfaceMarshaler *this,
        int a2,
        float *a3)
{
  unsigned int v3; // r9d
  int v4; // edx
  int v5; // edx
  int v6; // edx
  int v7; // eax

  v3 = 0;
  v4 = a2 - 2;
  if ( !v4 )
  {
    *a3 = *((float *)this + 12);
    return v3;
  }
  v5 = v4 - 1;
  if ( !v5 )
  {
    v7 = *((_DWORD *)this + 13);
    goto LABEL_9;
  }
  v6 = v5 - 1;
  if ( !v6 )
  {
    v7 = *((_DWORD *)this + 14);
    goto LABEL_9;
  }
  if ( v6 == 1 )
  {
    v7 = *((_DWORD *)this + 15);
LABEL_9:
    *(_DWORD *)a3 = v7;
    return v3;
  }
  return (unsigned int)-1073741811;
}
