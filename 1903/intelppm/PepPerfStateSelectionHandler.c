/*
 * XREFs of PepPerfStateSelectionHandler @ 0x1C000FAB0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall PepPerfStateSelectionHandler(
        __int64 a1,
        unsigned int a2,
        unsigned int a3,
        unsigned int a4,
        int a5,
        int a6,
        char a7,
        _DWORD *a8,
        unsigned __int64 *a9)
{
  unsigned __int8 v10; // bl
  __int64 v11; // rdx
  unsigned __int8 v12; // r11
  unsigned __int8 v13; // r10
  unsigned __int8 v14; // cl
  __int64 v15; // r9
  __int64 v16; // rdx
  unsigned __int8 v17; // r10
  unsigned __int8 v18; // r8
  __int64 v19; // r9

  v10 = 0;
  v11 = *(_QWORD *)(a1 + 8);
  v12 = 0;
  v13 = *(_BYTE *)(v11 + 32);
  if ( v13 )
  {
    while ( *(_DWORD *)(*(_QWORD *)(v11 + 40) + 24LL * v12 + 8) > a4 )
    {
      if ( ++v12 >= v13 )
        goto LABEL_6;
    }
    v10 = v12;
  }
LABEL_6:
  v14 = v13 - 1;
  if ( v13 )
  {
    v15 = *(_QWORD *)(v11 + 40);
    while ( *(_DWORD *)(v15 + 24LL * v13 - 16) < a3
         || (a7 & 1) == 0 && *(_DWORD *)(v15 + 24LL * v13 - 24) < *(_DWORD *)(v11 + 8) )
    {
      if ( !--v13 )
        goto LABEL_14;
    }
    v14 = v13 - 1;
  }
LABEL_14:
  v16 = *(_QWORD *)(v11 + 40);
  v17 = v10;
  if ( v14 >= v10 )
    v17 = v14;
  if ( (a7 & 2) != 0 )
  {
    v18 = v10 - 1;
    do
      v19 = v16 + 24LL * ++v18;
    while ( *(_DWORD *)(v19 + 8) > a2 && v18 < v17 );
  }
  else
  {
    v18 = v17 + 1;
    do
      v19 = v16 + 24LL * --v18;
    while ( *(_DWORD *)(v19 + 8) < a2 && v18 > v10 );
  }
  if ( a9 )
  {
    *a9 = v18 | (unsigned __int64)((v17 | (v10 << 8)) << 8);
    if ( a8 )
      *a8 = *(_DWORD *)(v19 + 4);
  }
  return *(unsigned int *)(v19 + 8);
}
