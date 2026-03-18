/*
 * XREFs of ?SetFloatProperty@CNineGridBrushMarshaler@DirectComposition@@UEAAJIMPEA_N@Z @ 0x1C008AFA0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CNineGridBrushMarshaler::SetFloatProperty(
        DirectComposition::CNineGridBrushMarshaler *this,
        int a2,
        float a3,
        bool *a4)
{
  unsigned int v4; // r8d
  int v6; // edx
  int v7; // edx
  int v8; // edx
  int v9; // edx
  int v10; // edx
  int v11; // edx
  int v12; // eax
  __int64 v13; // rcx

  v4 = 0;
  *a4 = 0;
  if ( a2 )
  {
    v6 = a2 - 1;
    if ( v6 )
    {
      v7 = v6 - 2;
      if ( v7 )
      {
        v8 = v7 - 1;
        if ( v8 )
        {
          v9 = v8 - 1;
          if ( v9 )
          {
            v10 = v9 - 1;
            if ( v10 )
            {
              v11 = v10 - 2;
              if ( v11 )
              {
                if ( v11 != 1 )
                  return (unsigned int)-1073741811;
                v12 = 2048;
                v13 = 76LL;
              }
              else
              {
                v12 = 128;
                v13 = 72LL;
              }
            }
            else
            {
              v12 = 4096;
              v13 = 84LL;
            }
          }
          else
          {
            v12 = 256;
            v13 = 80LL;
          }
        }
        else
        {
          v12 = 1024;
          v13 = 68LL;
        }
      }
      else
      {
        v12 = 64;
        v13 = 64LL;
      }
    }
    else
    {
      v12 = 0x2000;
      v13 = 92LL;
    }
  }
  else
  {
    v12 = 512;
    v13 = 88LL;
  }
  if ( (DirectComposition::CNineGridBrushMarshaler *)((char *)this + v13) )
  {
    *(float *)((char *)this + v13) = a3;
    *((_DWORD *)this + 4) |= v12;
    *a4 = 1;
  }
  return v4;
}
