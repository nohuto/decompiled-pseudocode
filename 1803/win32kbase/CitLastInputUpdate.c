/*
 * XREFs of CitLastInputUpdate @ 0x1C003FA80
 * Callers:
 *     ?UpdateInputGlobals@CInputGlobals@@QEAA_N_KW4_LINP_SOURCE@@GKK@Z @ 0x1C01215E0 (-UpdateInputGlobals@CInputGlobals@@QEAA_N_KW4_LINP_SOURCE@@GKK@Z.c)
 * Callees:
 *     ?CitpLastInputUpdate@@YAXEI@Z @ 0x1C003FAAC (-CitpLastInputUpdate@@YAXEI@Z.c)
 */

void __fastcall CitLastInputUpdate(int a1, unsigned int a2)
{
  int v2; // ecx
  unsigned __int8 v3; // al
  int v4; // ecx
  int v5; // ecx
  int v6; // ecx
  int v7; // ecx

  v2 = a1 - 1;
  if ( v2 )
  {
    v4 = v2 - 1;
    if ( v4 )
    {
      v5 = v4 - 1;
      if ( v5 )
      {
        v6 = v5 - 1;
        if ( v6 )
        {
          v7 = v6 - 6;
          if ( v7 )
          {
            if ( v7 == 2 )
              v3 = 8;
            else
              v3 = 0;
          }
          else
          {
            v3 = 4;
          }
        }
        else
        {
          v3 = 32;
        }
      }
      else
      {
        v3 = 16;
      }
    }
    else
    {
      v3 = 2;
    }
  }
  else
  {
    v3 = 1;
  }
  CitpLastInputUpdate(v3, a2);
}
