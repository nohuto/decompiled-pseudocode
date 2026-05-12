/*
 * XREFs of IsZonedWriteRequest @ 0x1C00120AC
 * Callers:
 *     RaidAdapterPostScatterGatherExecute @ 0x1C0004650 (RaidAdapterPostScatterGatherExecute.c)
 *     RaUnitAsyncError @ 0x1C000B704 (RaUnitAsyncError.c)
 *     RaidZoneWriteGroupListSearchRequest @ 0x1C0038908 (RaidZoneWriteGroupListSearchRequest.c)
 * Callees:
 *     <none>
 */

bool __fastcall IsZonedWriteRequest(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v5; // rdx
  __int64 v6; // rdx
  unsigned __int8 v7; // di
  _BYTE *v9; // rbx
  char v10; // r11
  unsigned int v11; // esi
  __int64 v12; // r10
  __int64 v13; // rcx
  unsigned __int64 v14; // r9
  __int64 v15; // r8
  int v16; // ecx
  int v17; // ecx
  _BYTE *v18; // rcx
  unsigned __int64 v19; // rcx
  char v20; // al
  char v21; // r11
  unsigned int v22; // esi
  __int64 i; // r9
  __int64 v24; // rcx
  unsigned __int64 v25; // r10
  __int64 v26; // r8
  int v27; // ecx
  int v28; // ecx
  int v29; // eax

  if ( a3 )
    a2 = *(_QWORD *)(a3 + 160);
  if ( !a2 )
    return 0;
  if ( !a1 )
    return 0;
  if ( !*(_BYTE *)(a1 + 129) )
    return 0;
  v5 = *(_QWORD *)(a2 + 184);
  if ( *(_BYTE *)v5 != 15 )
    return 0;
  v6 = *(_QWORD *)(v5 + 8);
  v7 = *(_BYTE *)(v6 + 2);
  if ( v7 == 40 ? *(_DWORD *)(v6 + 20) : v7 )
    return 0;
  if ( v7 != 40 )
  {
    v9 = (_BYTE *)(v6 + 72);
    v20 = *(_BYTE *)(v6 + 2);
    goto LABEL_33;
  }
  v9 = 0LL;
  v10 = 0;
  if ( *(_DWORD *)(v6 + 20) )
    goto LABEL_31;
  v11 = *(_DWORD *)(v6 + 56);
  v12 = 0LL;
  if ( !v11 )
    goto LABEL_31;
  while ( 1 )
  {
    v13 = *(unsigned int *)(v6 + 4 * v12 + 120);
    if ( (unsigned int)v13 >= 0x80 )
    {
      v14 = *(unsigned int *)(v6 + 16);
      if ( (unsigned int)v13 < (unsigned int)v14 )
        break;
    }
LABEL_30:
    v12 = (unsigned int)(v12 + 1);
    if ( (unsigned int)v12 >= v11 )
      goto LABEL_31;
  }
  v15 = (unsigned int)v13;
  v16 = *(_DWORD *)(v13 + v6) - 64;
  if ( !v16 )
  {
    v19 = v15 + 40;
LABEL_26:
    if ( v19 <= v14 )
    {
      v10 = 1;
      if ( !*(_BYTE *)(v15 + v6 + 10) )
        goto LABEL_31;
      v9 = (_BYTE *)(v15 + v6 + 24);
    }
LABEL_29:
    if ( v10 )
      goto LABEL_31;
    goto LABEL_30;
  }
  v17 = v16 - 1;
  if ( !v17 )
  {
    v19 = v15 + 56;
    goto LABEL_26;
  }
  if ( v17 != 1 || v15 + 40 > v14 )
    goto LABEL_29;
  v18 = (_BYTE *)(v15 + v6 + 32);
  if ( !*(_DWORD *)(v15 + v6 + 12) )
    v18 = v9;
  v9 = v18;
LABEL_31:
  v20 = *(_BYTE *)(v6 + 2);
LABEL_33:
  if ( v20 == 40 )
  {
    v21 = 0;
    if ( !*(_DWORD *)(v6 + 20) )
    {
      v22 = *(_DWORD *)(v6 + 56);
      for ( i = 0LL; (unsigned int)i < v22; i = (unsigned int)(i + 1) )
      {
        v24 = *(unsigned int *)(v6 + 4 * i + 120);
        if ( (unsigned int)v24 >= 0x80 )
        {
          v25 = *(unsigned int *)(v6 + 16);
          if ( (unsigned int)v24 < (unsigned int)v25 )
          {
            v26 = (unsigned int)v24;
            v27 = *(_DWORD *)(v24 + v6) - 64;
            if ( v27 )
            {
              v28 = v27 - 1;
              if ( v28 )
              {
                if ( v28 == 1 && v26 + 40 <= v25 )
                  break;
              }
              else if ( v26 + 56 <= v25 )
              {
                v21 = 1;
              }
            }
            else if ( v26 + 40 <= v25 )
            {
              v21 = 1;
            }
            if ( v21 )
              break;
          }
        }
      }
    }
  }
  if ( !v9 || ((*v9 - 10) & 0x5F) != 0 || !*(_DWORD *)(a1 + 580) )
    return 0;
  v29 = v7 == 40 ? *(_DWORD *)(v6 + 24) : *(_DWORD *)(v6 + 12);
  return (v29 & 0x1000) != 0;
}
