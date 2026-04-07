/*
 * XREFs of ?GetAnimationIds@CTopLevelWindow3D@@AEAAJW4WindowAnimationType@1@PEAH1@Z @ 0x18003A8E0
 * Callers:
 *     ?StartAnimation@CTopLevelWindow3D@@AEAAJW4WindowAnimationType@1@@Z @ 0x180012FC0 (-StartAnimation@CTopLevelWindow3D@@AEAAJW4WindowAnimationType@1@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18004E04C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CTopLevelWindow3D::GetAnimationIds(__int64 a1, int a2, _DWORD *a3, _DWORD *a4)
{
  unsigned int v4; // ebx
  int v5; // edx
  int v7; // edx
  int v8; // edx
  int v9; // edx
  int v10; // edx

  v4 = 0;
  v5 = a2 - 1;
  if ( v5 )
  {
    v7 = v5 - 1;
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
            if ( v10 != 1 )
            {
              v4 = -2147024809;
              MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024809, 0x88u);
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
