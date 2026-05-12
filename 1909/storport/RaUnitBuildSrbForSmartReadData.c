/*
 * XREFs of RaUnitBuildSrbForSmartReadData @ 0x1C004525C
 * Callers:
 *     RaUnitSmartDataIoctl @ 0x1C0046560 (RaUnitSmartDataIoctl.c)
 * Callees:
 *     <none>
 */

char __fastcall RaUnitBuildSrbForSmartReadData(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        int a5,
        __int64 a6,
        int a7,
        char a8)
{
  __int64 v8; // r10
  __int64 v9; // rcx
  char v10; // al
  char v11; // bl
  unsigned int v12; // r10d
  __int64 v13; // rcx
  unsigned __int64 v14; // r11
  __int64 v15; // rdx
  int v16; // ecx
  int v17; // ecx
  unsigned __int64 v18; // rcx
  __int64 v19; // rdx
  char v20; // di
  unsigned int v21; // esi
  unsigned int v22; // ebx
  __int64 v23; // rcx
  unsigned __int64 v24; // r11
  __int64 v25; // r10
  int v26; // ecx
  int v27; // ecx
  __int64 v28; // rcx
  unsigned __int64 v29; // rcx
  char result; // al

  if ( a8 == 1 )
  {
    v8 = *(unsigned int *)(a3 + 52);
    *(_DWORD *)(a3 + 20) = 0;
    *(_BYTE *)(v8 + a3 + 8) = *(_BYTE *)(a1 + 96);
    *(_BYTE *)(v8 + a3 + 9) = *(_BYTE *)(a1 + 97);
    *(_BYTE *)(v8 + a3 + 10) = *(_BYTE *)(a1 + 98);
    *(_DWORD *)(a3 + 24) = 322;
    *(_QWORD *)(a3 + 64) = a4;
    *(_DWORD *)(a3 + 60) = 512;
    *(_QWORD *)(a3 + 80) = a2;
    *(_DWORD *)(a3 + 40) = *(_DWORD *)(a1 + 1288);
    v9 = a3 + *(unsigned int *)(a3 + 120);
    *(_DWORD *)v9 = 64;
    *(_DWORD *)(v9 + 4) = 32;
    *(_BYTE *)(v9 + 9) = -1;
    *(_QWORD *)(v9 + 16) = a6;
    v10 = *(_BYTE *)(a3 + 2);
  }
  else
  {
    *(_BYTE *)(a3 + 2) = 0;
    *(_WORD *)a3 = 88;
    *(_BYTE *)(a3 + 5) = *(_BYTE *)(a1 + 96);
    *(_BYTE *)(a3 + 6) = *(_BYTE *)(a1 + 97);
    *(_BYTE *)(a3 + 7) = *(_BYTE *)(a1 + 98);
    *(_DWORD *)(a3 + 12) = 322;
    *(_QWORD *)(a3 + 24) = a4;
    *(_DWORD *)(a3 + 16) = 512;
    *(_QWORD *)(a3 + 48) = a2;
    *(_DWORD *)(a3 + 20) = *(_DWORD *)(a1 + 1288);
    *(_QWORD *)(a3 + 32) = a6;
    v10 = 0;
    *(_BYTE *)(a3 + 11) = -1;
  }
  if ( v10 == 40 )
  {
    *(_WORD *)(a3 + 38) = 32;
    v11 = 0;
    if ( !*(_DWORD *)(a3 + 20) )
    {
      v12 = 0;
      if ( *(_DWORD *)(a3 + 56) )
      {
        while ( 1 )
        {
          v13 = *(unsigned int *)(a3 + 4LL * v12 + 120);
          if ( (unsigned int)v13 >= 0x80 )
          {
            v14 = *(unsigned int *)(a3 + 16);
            if ( (unsigned int)v13 < (unsigned int)v14 )
              break;
          }
LABEL_19:
          if ( ++v12 >= *(_DWORD *)(a3 + 56) )
            goto LABEL_20;
        }
        v15 = (unsigned int)v13;
        v16 = *(_DWORD *)(v13 + a3) - 64;
        if ( v16 )
        {
          v17 = v16 - 1;
          if ( v17 )
          {
            if ( v17 == 1 && v15 + 40 <= v14 )
              goto LABEL_20;
            goto LABEL_18;
          }
          v18 = v15 + 56;
        }
        else
        {
          v18 = v15 + 40;
        }
        if ( v18 <= v14 )
        {
          *(_BYTE *)(v15 + a3 + 10) = 16;
          v11 = 1;
        }
LABEL_18:
        if ( v11 )
          goto LABEL_20;
        goto LABEL_19;
      }
    }
LABEL_20:
    v10 = *(_BYTE *)(a3 + 2);
  }
  else
  {
    *(_WORD *)(a3 + 9) = 4128;
  }
  if ( v10 != 40 )
  {
    v19 = a3 + 72;
    goto LABEL_43;
  }
  v19 = 0LL;
  v20 = 0;
  if ( !*(_DWORD *)(a3 + 20) )
  {
    v21 = *(_DWORD *)(a3 + 56);
    v22 = 0;
    if ( v21 )
    {
      while ( 1 )
      {
        v23 = *(unsigned int *)(a3 + 4LL * v22 + 120);
        if ( (unsigned int)v23 >= 0x80 )
        {
          v24 = *(unsigned int *)(a3 + 16);
          if ( (unsigned int)v23 < (unsigned int)v24 )
            break;
        }
LABEL_40:
        if ( ++v22 >= v21 )
          goto LABEL_43;
      }
      v25 = (unsigned int)v23;
      v26 = *(_DWORD *)(v23 + a3) - 64;
      if ( v26 )
      {
        v27 = v26 - 1;
        if ( v27 )
        {
          if ( v27 == 1 && v25 + 40 <= v24 )
          {
            v28 = v25 + a3 + 32;
            if ( !*(_DWORD *)(v25 + a3 + 12) )
              v28 = v19;
            v19 = v28;
            goto LABEL_43;
          }
          goto LABEL_39;
        }
        v29 = v25 + 56;
      }
      else
      {
        v29 = v25 + 40;
      }
      if ( v29 <= v24 )
      {
        v20 = 1;
        if ( !*(_BYTE *)(v25 + a3 + 10) )
          goto LABEL_43;
        v19 = v25 + a3 + 24;
      }
LABEL_39:
      if ( v20 )
        goto LABEL_43;
      goto LABEL_40;
    }
  }
LABEL_43:
  *(_WORD *)(v19 + 1) = 0;
  result = *(_BYTE *)(v19 + 2) & 0x10 | 0xAF;
  *(_BYTE *)(v19 + 2) = result;
  *(_WORD *)v19 = 2181;
  *(_DWORD *)(v19 + 3) = 53248;
  *(_DWORD *)(v19 + 7) = 1325400064;
  *(_DWORD *)(v19 + 11) = -1342127616;
  *(_BYTE *)(v19 + 15) = 0;
  return result;
}
