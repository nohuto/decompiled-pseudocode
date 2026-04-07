/*
 * XREFs of ?GetScenarioGuid@CTopLevelWindow3D@@AEAAXW4WindowAnimationType@1@PEAU_GUID@@@Z @ 0x180039CB0
 * Callers:
 *     ?StartAnimation@CTopLevelWindow3D@@AEAAJW4WindowAnimationType@1@@Z @ 0x180012FC0 (-StartAnimation@CTopLevelWindow3D@@AEAAJW4WindowAnimationType@1@@Z.c)
 *     ?StopAnimation@CTopLevelWindow3D@@QEAAJXZ @ 0x1800198B0 (-StopAnimation@CTopLevelWindow3D@@QEAAJXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall CTopLevelWindow3D::GetScenarioGuid(__int64 a1, int a2, GUID *a3)
{
  int v3; // edx
  GUID v4; // xmm0
  int v5; // edx
  int v6; // edx
  int v7; // edx
  int v8; // edx

  v3 = a2 - 1;
  if ( v3 )
  {
    v5 = v3 - 1;
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
            if ( v8 == 1 )
              v4 = (GUID)xmmword_1800BECE8;
            else
              v4 = GUID_NULL;
          }
          else
          {
            v4 = (GUID)xmmword_1800BF158;
          }
        }
        else
        {
          v4 = (GUID)xmmword_1800BF138;
        }
      }
      else
      {
        v4 = (GUID)xmmword_1800BECF8;
      }
    }
    else
    {
      v4 = (GUID)xmmword_1800BF148;
    }
  }
  else
  {
    v4 = (GUID)xmmword_1800BECD8;
  }
  *a3 = v4;
}
