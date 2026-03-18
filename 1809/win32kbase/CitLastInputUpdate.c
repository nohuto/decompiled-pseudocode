/*
 * XREFs of CitLastInputUpdate @ 0x1C0185490
 * Callers:
 *     <none>
 * Callees:
 *     ?CitpLastInputUpdate@@YAXEI@Z @ 0x1C0035E94 (-CitpLastInputUpdate@@YAXEI@Z.c)
 */

void __fastcall CitLastInputUpdate(int a1, unsigned int a2)
{
  int v2; // ecx
  int v3; // ecx
  int v4; // ecx
  int v5; // ecx
  int v6; // ecx
  unsigned __int8 v7; // al

  v2 = a1 - 1;
  if ( v2 )
  {
    v3 = v2 - 1;
    if ( v3 )
    {
      v4 = v3 - 1;
      if ( v4 )
      {
        v5 = v4 - 1;
        if ( v5 )
        {
          v6 = v5 - 6;
          if ( v6 )
          {
            if ( v6 == 2 )
              v7 = 8;
            else
              v7 = 0;
          }
          else
          {
            v7 = 4;
          }
        }
        else
        {
          v7 = 32;
        }
      }
      else
      {
        v7 = 16;
      }
    }
    else
    {
      v7 = 2;
    }
  }
  else
  {
    v7 = 1;
  }
  CitpLastInputUpdate(v7, a2);
}
