/*
 * XREFs of StorEtwMiniportBugResetBrokenEvent @ 0x1C004C37C
 * Callers:
 *     StorTickEventQueue @ 0x1C000F0F0 (StorTickEventQueue.c)
 * Callees:
 *     McTemplateK0zquuujqqbr7x @ 0x1C004B344 (McTemplateK0zquuujqqbr7x.c)
 */

ULONG __fastcall StorEtwMiniportBugResetBrokenEvent(__int64 a1, char a2, __int64 a3)
{
  __int64 v3; // r9
  int v4; // r10d
  __int64 v5; // r14
  __int64 v7; // rbp
  unsigned __int8 v8; // r11
  int v9; // r15d
  __int64 v10; // r13
  ULONG result; // eax
  char v12; // di
  unsigned int v13; // esi
  unsigned int v14; // ebx
  __int64 v15; // rdx
  unsigned __int64 v16; // r11
  __int64 v17; // r8
  int v18; // edx
  int v19; // edx
  __int64 v20; // rdx
  unsigned __int64 v21; // rdx
  unsigned __int8 v22; // r11
  char v23; // si
  unsigned int v24; // r14d
  unsigned int v25; // edi
  __int64 v26; // rdx
  unsigned __int64 v27; // rbx
  __int64 v28; // r8
  int v29; // edx
  int v30; // edx
  __int64 v31; // rcx
  unsigned __int64 v32; // rdx

  v3 = *(_QWORD *)(a1 + 168);
  v4 = 0;
  v5 = a3;
  v7 = 0LL;
  v8 = *(_BYTE *)(v3 + 2);
  if ( v8 == 40 )
    v9 = *(_DWORD *)(v3 + 20);
  else
    v9 = v8;
  v10 = *(_QWORD *)(a1 + 224);
  result = *(_DWORD *)(v10 + 96);
  if ( !v9 )
  {
    if ( v8 != 40 )
    {
      v7 = v3 + 72;
      goto LABEL_26;
    }
    v12 = 0;
    if ( !*(_DWORD *)(v3 + 20) )
    {
      v13 = *(_DWORD *)(v3 + 56);
      v14 = 0;
      if ( v13 )
      {
        while ( 1 )
        {
          v15 = *(unsigned int *)(v3 + 4LL * v14 + 120);
          if ( (unsigned int)v15 >= 0x80 )
          {
            v16 = *(unsigned int *)(v3 + 16);
            if ( (unsigned int)v15 < (unsigned int)v16 )
              break;
          }
LABEL_23:
          if ( ++v14 >= v13 )
            goto LABEL_26;
        }
        v17 = (unsigned int)v15;
        v18 = *(_DWORD *)(v15 + v3) - 64;
        if ( v18 )
        {
          v19 = v18 - 1;
          if ( v19 )
          {
            if ( v19 == 1 && v17 + 40 <= v16 )
            {
              v20 = v17 + v3 + 32;
              if ( !*(_DWORD *)(v17 + v3 + 12) )
                v20 = v7;
              v7 = v20;
              goto LABEL_26;
            }
            goto LABEL_22;
          }
          v21 = v17 + 56;
        }
        else
        {
          v21 = v17 + 40;
        }
        if ( v21 <= v16 )
        {
          v12 = 1;
          if ( !*(_BYTE *)(v17 + v3 + 10) )
            goto LABEL_26;
          v7 = v17 + v3 + 24;
        }
LABEL_22:
        if ( v12 )
          goto LABEL_26;
        goto LABEL_23;
      }
    }
LABEL_26:
    if ( v7 )
    {
      v22 = 0;
      if ( *(_BYTE *)(v3 + 2) == 40 )
      {
        v23 = 0;
        if ( !*(_DWORD *)(v3 + 20) )
        {
          v24 = *(_DWORD *)(v3 + 56);
          v25 = 0;
          if ( v24 )
          {
            while ( 1 )
            {
              v26 = *(unsigned int *)(v3 + 4LL * v25 + 120);
              if ( (unsigned int)v26 >= 0x80 )
              {
                v27 = *(unsigned int *)(v3 + 16);
                if ( (unsigned int)v26 < (unsigned int)v27 )
                  break;
              }
LABEL_46:
              if ( ++v25 >= v24 )
                goto LABEL_36;
            }
            v28 = (unsigned int)v26;
            v29 = *(_DWORD *)(v26 + v3) - 64;
            if ( v29 )
            {
              v30 = v29 - 1;
              if ( v30 )
              {
                if ( v30 == 1 && v28 + 40 <= v27 )
                  goto LABEL_36;
                goto LABEL_45;
              }
              v32 = v28 + 56;
            }
            else
            {
              v32 = v28 + 40;
            }
            if ( v32 <= v27 )
            {
              v22 = *(_BYTE *)(v28 + v3 + 10);
              v23 = 1;
            }
LABEL_45:
            if ( v23 )
              goto LABEL_36;
            goto LABEL_46;
          }
LABEL_36:
          v5 = a3;
        }
      }
      else
      {
        v22 = *(_BYTE *)(v3 + 10);
      }
      v4 = v22;
    }
  }
  if ( (byte_1C0062744 & 4) != 0 )
  {
    v31 = v10 + 1976;
    LOBYTE(v31) = BYTE1(result);
    return McTemplateK0zquuujqqbr7x(
             v31,
             *(_QWORD *)(v10 + 24),
             (const GUID *)(a1 + 728),
             *(char **)(v5 + 8),
             *(_DWORD *)(*(_QWORD *)(v10 + 24) + 56LL),
             result,
             SBYTE1(result),
             SBYTE2(result),
             v10 + 1976,
             v9,
             v4,
             v7,
             a2);
  }
  return result;
}
