/*
 * XREFs of IsZonedWriteRequest @ 0x1C0016238
 * Callers:
 *     RaidUnitCompleteRequest @ 0x1C000B940 (RaidUnitCompleteRequest.c)
 *     RaUnitAsyncError @ 0x1C000D9D4 (RaUnitAsyncError.c)
 *     RaidUpdateZoneIoReceiveWithStatus @ 0x1C0026588 (RaidUpdateZoneIoReceiveWithStatus.c)
 *     RaidUpdateZoneIoSubmission @ 0x1C00267C4 (RaidUpdateZoneIoSubmission.c)
 *     RaidUpdateZoneIoMetadata @ 0x1C002727C (RaidUpdateZoneIoMetadata.c)
 * Callees:
 *     PortSrbGetLbaFromCdb @ 0x1C00526EC (PortSrbGetLbaFromCdb.c)
 */

char __fastcall IsZonedWriteRequest(__int64 a1, __int64 a2, __int64 a3, _DWORD *a4)
{
  __int64 v6; // rdx
  __int64 v7; // rdx
  unsigned __int8 v8; // bp
  _BYTE *v10; // rdi
  char v11; // r11
  unsigned int v12; // ebx
  __int64 v13; // r10
  __int64 v14; // rcx
  unsigned __int64 v15; // r9
  __int64 v16; // r8
  int v17; // ecx
  int v18; // ecx
  _BYTE *v19; // rcx
  char v20; // al
  unsigned __int64 v21; // rcx
  unsigned __int8 v22; // r8
  char v23; // bl
  unsigned int v24; // r14d
  __int64 v25; // r11
  __int64 v26; // rcx
  unsigned __int64 v27; // r10
  __int64 v28; // r9
  int v29; // ecx
  int v30; // ecx
  unsigned __int64 v31; // rcx
  int v32; // eax

  if ( a3 )
    a2 = *(_QWORD *)(a3 + 160);
  if ( !a2 )
    return 0;
  if ( !a1 )
    return 0;
  if ( !*(_BYTE *)(a1 + 129) )
    return 0;
  v6 = *(_QWORD *)(a2 + 184);
  if ( *(_BYTE *)v6 != 15 )
    return 0;
  v7 = *(_QWORD *)(v6 + 8);
  v8 = *(_BYTE *)(v7 + 2);
  if ( v8 == 40 ? *(_DWORD *)(v7 + 20) : v8 )
    return 0;
  if ( v8 != 40 )
  {
    v10 = (_BYTE *)(v7 + 72);
    v20 = *(_BYTE *)(v7 + 2);
    goto LABEL_33;
  }
  v10 = 0LL;
  v11 = 0;
  if ( *(_DWORD *)(v7 + 20) )
    goto LABEL_23;
  v12 = *(_DWORD *)(v7 + 56);
  v13 = 0LL;
  if ( !v12 )
    goto LABEL_23;
  while ( 1 )
  {
    v14 = *(unsigned int *)(v7 + 4 * v13 + 120);
    if ( (unsigned int)v14 >= 0x80 )
    {
      v15 = *(unsigned int *)(v7 + 16);
      if ( (unsigned int)v14 < (unsigned int)v15 )
        break;
    }
LABEL_30:
    v13 = (unsigned int)(v13 + 1);
    if ( (unsigned int)v13 >= v12 )
      goto LABEL_23;
  }
  v16 = (unsigned int)v14;
  v17 = *(_DWORD *)(v14 + v7) - 64;
  if ( !v17 )
  {
    v21 = v16 + 40;
LABEL_26:
    if ( v21 <= v15 )
    {
      v11 = 1;
      if ( !*(_BYTE *)(v16 + v7 + 10) )
        goto LABEL_23;
      v10 = (_BYTE *)(v16 + v7 + 24);
    }
LABEL_29:
    if ( v11 )
      goto LABEL_23;
    goto LABEL_30;
  }
  v18 = v17 - 1;
  if ( !v18 )
  {
    v21 = v16 + 56;
    goto LABEL_26;
  }
  if ( v18 != 1 || v16 + 40 > v15 )
    goto LABEL_29;
  v19 = (_BYTE *)(v16 + v7 + 32);
  if ( !*(_DWORD *)(v16 + v7 + 12) )
    v19 = v10;
  v10 = v19;
LABEL_23:
  v20 = *(_BYTE *)(v7 + 2);
LABEL_33:
  v22 = 0;
  if ( v20 == 40 )
  {
    v23 = 0;
    if ( *(_DWORD *)(v7 + 20) )
    {
      v22 = 0;
    }
    else
    {
      v24 = *(_DWORD *)(v7 + 56);
      v25 = 0LL;
      if ( v24 )
      {
        while ( 1 )
        {
          v26 = *(unsigned int *)(v7 + 4 * v25 + 120);
          if ( (unsigned int)v26 >= 0x80 )
          {
            v27 = *(unsigned int *)(v7 + 16);
            if ( (unsigned int)v26 < (unsigned int)v27 )
              break;
          }
LABEL_48:
          v25 = (unsigned int)(v25 + 1);
          if ( (unsigned int)v25 >= v24 )
            goto LABEL_52;
        }
        v28 = (unsigned int)v26;
        v29 = *(_DWORD *)(v26 + v7) - 64;
        if ( v29 )
        {
          v30 = v29 - 1;
          if ( v30 )
          {
            if ( v30 == 1 && v28 + 40 <= v27 )
              goto LABEL_52;
            goto LABEL_47;
          }
          v31 = v28 + 56;
        }
        else
        {
          v31 = v28 + 40;
        }
        if ( v31 <= v27 )
        {
          v22 = *(_BYTE *)(v28 + v7 + 10);
          v23 = 1;
        }
LABEL_47:
        if ( v23 )
          goto LABEL_52;
        goto LABEL_48;
      }
    }
  }
  else
  {
    v22 = *(_BYTE *)(v7 + 10);
  }
LABEL_52:
  if ( !v10 || ((*v10 - 10) & 0x5F) != 0 || !*(_DWORD *)(a1 + 812) )
    return 0;
  v32 = v8 == 40 ? *(_DWORD *)(v7 + 24) : *(_DWORD *)(v7 + 12);
  if ( (v32 & 0x1000) == 0 || !*(_QWORD *)(a1 + 3280) )
    return 0;
  if ( a4 )
    *a4 = (unsigned __int64)*(unsigned int *)(a1 + 812) * PortSrbGetLbaFromCdb(v10, v22) / *(_QWORD *)(a1 + 3256);
  return 1;
}
