/*
 * XREFs of EtwpParsePoolTagFilter @ 0x1408C2594
 * Callers:
 *     EtwStartAutoLogger @ 0x140743058 (EtwStartAutoLogger.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall EtwpParsePoolTagFilter(__int64 a1, __int64 a2)
{
  __int16 *v2; // r10
  int v3; // r9d
  int v4; // r8d
  __int16 v5; // r11
  int v6; // eax
  __int16 v7; // cx
  __int64 v8; // rax
  __int64 v9; // rcx
  int v11; // [rsp+8h] [rbp+8h]

  v2 = *(__int16 **)(a1 + 8);
  v11 = 0;
  v3 = 1;
  v4 = 0;
  v5 = 0;
  v6 = 0;
  v7 = *v2;
  if ( !*v2 )
    return 0LL;
  do
  {
    if ( v3 == 1 )
    {
      v8 = v5;
      if ( v7 == 42 )
        v3 = 2;
      ++v5;
      *((_BYTE *)&v11 + v8) = v7;
      v6 = v11;
      if ( v5 == 4 )
        v3 = 2;
    }
    else
    {
      if ( v7 != 59 || (unsigned __int16)v4 >= 4u )
        return 0LL;
      v9 = (unsigned __int16)v4;
      v5 = 0;
      LOWORD(v4) = v4 + 1;
      v11 = 0;
      v3 = 1;
      *(_DWORD *)(a2 + 4 * v9) = v6;
      v6 = 0;
    }
    v7 = *++v2;
  }
  while ( *v2 );
  if ( v3 != 2 || (unsigned __int16)v4 >= 4u )
    return 0LL;
  *(_DWORD *)(a2 + 4LL * (unsigned __int16)v4) = v6;
  return (unsigned int)(v4 + 1);
}
