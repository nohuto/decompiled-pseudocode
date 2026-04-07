/*
 * XREFs of ?GetAnimationIds@CTopLevelWindow3D@@AEAAJW4WindowAnimationType@1@PEAH1@Z @ 0x18000ED48
 * Callers:
 *     ?StartAnimation@CTopLevelWindow3D@@AEAAJW4WindowAnimationType@1@@Z @ 0x18000DFD0 (-StartAnimation@CTopLevelWindow3D@@AEAAJW4WindowAnimationType@1@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18004FBC4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CTopLevelWindow3D::GetAnimationIds(__int64 a1, int a2, _DWORD *a3, _DWORD *a4)
{
  unsigned int v4; // ebx
  int v5; // edx
  int v6; // edx
  int v7; // edx
  int v8; // edx
  int v9; // edx
  void *v11; // [rsp+28h] [rbp-10h]

  v4 = 0;
  v5 = a2 - 1;
  if ( v5 )
  {
    v6 = v5 - 1;
    if ( v6 )
    {
      v7 = v6 - 1;
      if ( v7 )
      {
        v8 = v7 - 1;
        if ( v8 )
        {
          v9 = v8 - 1;
          if ( v9 )
          {
            if ( v9 != 1 )
            {
              v4 = -2147024809;
              MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024809, 0x89u, v11);
              return v4;
            }
            *a3 = 50;
          }
          else
          {
            *a3 = 53;
          }
        }
        else
        {
          *a3 = 54;
        }
      }
      else
      {
        *a3 = 51;
      }
    }
    else
    {
      *a3 = 52;
    }
  }
  else
  {
    *a3 = 49;
  }
  *a4 = 1;
  return v4;
}
