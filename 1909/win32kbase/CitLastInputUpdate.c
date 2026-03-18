/*
 * XREFs of CitLastInputUpdate @ 0x1C00389C0
 * Callers:
 *     <none>
 * Callees:
 *     ?CitpLastInputUpdate@@YAXGI@Z @ 0x1C0038708 (-CitpLastInputUpdate@@YAXGI@Z.c)
 */

void __fastcall CitLastInputUpdate(int a1, unsigned int a2)
{
  int v2; // ecx
  unsigned __int16 v3; // ax
  int v4; // ecx
  int v5; // ecx
  int v6; // ecx
  int v7; // ecx
  int v8; // ecx

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
            v8 = v7 - 2;
            if ( v8 )
            {
              if ( v8 == 4 )
                v3 = 256;
              else
                v3 = 0;
            }
            else
            {
              v3 = 8;
            }
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
