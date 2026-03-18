/*
 * XREFs of ?SetFloatProperty@CVisualSurfaceMarshaler@DirectComposition@@UEAAJIMPEA_N@Z @ 0x1C017DA70
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CVisualSurfaceMarshaler::SetFloatProperty(
        DirectComposition::CVisualSurfaceMarshaler *this,
        int a2,
        float a3,
        bool *a4)
{
  int v4; // edx
  int v5; // edx
  int v6; // edx
  int v7; // eax
  bool v8; // zf

  v4 = a2 - 2;
  if ( v4 )
  {
    v5 = v4 - 1;
    if ( v5 )
    {
      v6 = v5 - 1;
      if ( v6 )
      {
        if ( v6 != 1 )
          return 0LL;
        v7 = *((_DWORD *)this + 4) | 0x400;
        *((float *)this + 15) = a3;
      }
      else
      {
        v7 = *((_DWORD *)this + 4) | 0x200;
        *((float *)this + 14) = a3;
      }
    }
    else
    {
      v7 = *((_DWORD *)this + 4) | 0x100;
      *((float *)this + 13) = a3;
    }
  }
  else
  {
    v7 = *((_DWORD *)this + 4) | 0x80;
    *((float *)this + 12) = a3;
  }
  v8 = *((_QWORD *)this + 5) == 0LL;
  *((_DWORD *)this + 4) = v7;
  if ( !v8 )
  {
    *((_BYTE *)this + 80) = 0;
    *((_DWORD *)this + 4) = v7 | 0x40;
  }
  *a4 = 1;
  return 0LL;
}
