/*
 * XREFs of CmpIncrementCachedSecurityRefcount @ 0x140651D00
 * Callers:
 *     CmpCheckKey @ 0x140651270 (CmpCheckKey.c)
 * Callees:
 *     <none>
 */

char __fastcall CmpIncrementCachedSecurityRefcount(__int64 a1, int a2)
{
  int v2; // eax
  __int16 v3; // si
  unsigned int v5; // ebx
  unsigned int v6; // edi
  unsigned int v7; // eax
  int v8; // r9d
  __int64 v9; // r11
  int v10; // ecx
  int v11; // edx
  __int64 v12; // rax
  unsigned int v14; // eax

  v2 = *(_DWORD *)(a1 + 1864);
  v3 = 0;
  if ( !v2 )
    return 0;
  v5 = v2 - 1;
  v6 = 0;
  v7 = *(_DWORD *)(a1 + 1872);
  if ( (v7 & 0x80000000) != 0 || v7 > v5 )
    v7 = v5 >> 1;
  v8 = a2 & 0x7FFFFFFF;
  if ( a2 < 0 )
    v8 = -v8;
  v9 = *(_QWORD *)(a1 + 1880);
  while ( 1 )
  {
    v10 = *(_DWORD *)(v9 + 16LL * v7) & 0x7FFFFFFF;
    if ( *(int *)(v9 + 16LL * v7) < 0 )
      v10 = -v10;
    v11 = v8 - v10;
    if ( v8 == v10 )
      break;
    if ( v3 )
    {
      if ( v3 == 1 )
      {
        if ( v11 < 0 || v6 == v5 )
          return 0;
        v3 = 2;
        v7 = v5;
      }
      else if ( v3 == 2 )
      {
        return 0;
      }
    }
    else
    {
      if ( v11 >= 0 )
      {
        v6 = v7;
        v7 = v5;
      }
      v5 = v7;
      v14 = v7 - v6;
      if ( v14 <= 1 )
      {
        v7 = v6;
        v3 = 1;
      }
      else
      {
        v7 = v6 + (v14 >> 1);
      }
    }
  }
  *(_DWORD *)(a1 + 1872) = v7;
  v12 = *(_QWORD *)(v9 + 16LL * v7 + 8);
  ++*(_DWORD *)(v12 + 28);
  return 1;
}
