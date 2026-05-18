/*
 * XREFs of sub_1800E2EFC @ 0x1800E2EFC
 * Callers:
 *     sub_1800C6E80 @ 0x1800C6E80 (sub_1800C6E80.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1800E2EFC(__int64 a1)
{
  unsigned int v2; // eax
  unsigned int v3; // eax
  unsigned int v4; // eax
  unsigned int v5; // eax
  unsigned int v6; // ecx
  unsigned int v7; // eax
  unsigned int v8; // eax
  unsigned int v9; // eax
  unsigned int v10; // eax
  unsigned int v11; // eax
  unsigned int v12; // eax
  unsigned int v13; // eax
  unsigned int v14; // eax
  unsigned int v15; // eax

  while ( _interlockedbittestandset((volatile signed __int32 *)(a1 + 48), 0) )
    ;
  v2 = *(_DWORD *)(a1 + 44);
  if ( v2 > 0x74 )
  {
    v10 = v2 - 117;
    if ( !v10 )
    {
      v6 = 6;
      goto LABEL_33;
    }
    v11 = v10 - 1;
    if ( !v11 )
    {
      v6 = 7;
      goto LABEL_33;
    }
    v12 = v11 - 1;
    if ( !v12 )
    {
      v6 = 8;
      goto LABEL_33;
    }
    v13 = v12 - 1;
    if ( !v13 )
    {
      v6 = 9;
      goto LABEL_33;
    }
    v14 = v13 - 1;
    if ( !v14 )
    {
      v6 = 10;
      goto LABEL_33;
    }
    v15 = v14 - 1;
    if ( !v15 )
    {
      v6 = 11;
      goto LABEL_33;
    }
    if ( v15 == 1 )
    {
      v6 = 12;
      goto LABEL_33;
    }
    goto LABEL_25;
  }
  if ( v2 == 116 )
  {
    v6 = 5;
    goto LABEL_33;
  }
  v3 = v2 - 96;
  if ( !v3 )
  {
    v6 = 13;
    goto LABEL_33;
  }
  v4 = v3 - 11;
  if ( !v4 )
  {
    v6 = 14;
    goto LABEL_33;
  }
  v5 = v4 - 2;
  if ( !v5 )
  {
    v6 = 15;
    goto LABEL_33;
  }
  v6 = 3;
  v7 = v5 - 3;
  if ( !v7 )
  {
    v6 = 1;
    goto LABEL_33;
  }
  v8 = v7 - 1;
  if ( !v8 )
  {
    v6 = 2;
    goto LABEL_33;
  }
  v9 = v8 - 1;
  if ( v9 )
  {
    if ( v9 == 1 )
    {
      v6 = 4;
      goto LABEL_33;
    }
LABEL_25:
    v6 = 0;
  }
LABEL_33:
  *(_DWORD *)(a1 + 48) = 0;
  return v6;
}
