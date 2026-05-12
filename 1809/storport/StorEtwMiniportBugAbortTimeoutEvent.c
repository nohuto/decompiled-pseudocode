/*
 * XREFs of StorEtwMiniportBugAbortTimeoutEvent @ 0x1C004D578
 * Callers:
 *     StorTickEventQueue @ 0x1C000FFE0 (StorTickEventQueue.c)
 * Callees:
 *     McTemplateK0quuujqqqbr7 @ 0x1C004C3A8 (McTemplateK0quuujqqqbr7.c)
 */

ULONG __fastcall StorEtwMiniportBugAbortTimeoutEvent(__int64 a1)
{
  __int64 v1; // rax
  int v2; // r9d
  __int64 v4; // rbp
  int v5; // ecx
  __int64 *v6; // r8
  __int64 v7; // r8
  unsigned __int8 v8; // r11
  int v9; // r15d
  __int64 v10; // r12
  ULONG result; // eax
  char v12; // si
  unsigned int v13; // r14d
  unsigned int v14; // edi
  __int64 v15; // rdx
  unsigned __int64 v16; // rbx
  __int64 v17; // r10
  int v18; // edx
  int v19; // edx
  __int64 v20; // rdx
  unsigned __int64 v21; // rdx
  unsigned __int8 v22; // r10
  char v23; // si
  unsigned int v24; // r14d
  unsigned int v25; // edi
  __int64 v26; // rdx
  unsigned __int64 v27; // rbx
  __int64 v28; // r11
  int v29; // edx
  int v30; // edx
  unsigned __int64 v31; // rdx
  struct _MCGEN_TRACE_CONTEXT *v32; // rcx
  char v33; // [rsp+A0h] [rbp+8h]

  v1 = *(_QWORD *)(a1 + 168);
  v2 = 0;
  v4 = 0LL;
  if ( *(_BYTE *)(v1 + 2) == 40 )
  {
    v5 = *(_DWORD *)(v1 + 40);
    v6 = *(__int64 **)(v1 + 64);
  }
  else
  {
    v5 = *(_DWORD *)(v1 + 20);
    v6 = *(__int64 **)(v1 + 24);
  }
  v7 = *v6;
  v33 = v5;
  v8 = *(_BYTE *)(v7 + 2);
  if ( v8 == 40 )
    v9 = *(_DWORD *)(v7 + 20);
  else
    v9 = v8;
  v10 = *(_QWORD *)(a1 + 224);
  result = *(_DWORD *)(v10 + 96);
  if ( !v9 )
  {
    if ( v8 != 40 )
    {
      v4 = v7 + 72;
      goto LABEL_29;
    }
    v12 = 0;
    if ( !*(_DWORD *)(v7 + 20) )
    {
      v13 = *(_DWORD *)(v7 + 56);
      v14 = 0;
      if ( v13 )
      {
        while ( 1 )
        {
          v15 = *(unsigned int *)(v7 + 4LL * v14 + 120);
          if ( (unsigned int)v15 >= 0x80 )
          {
            v16 = *(unsigned int *)(v7 + 16);
            if ( (unsigned int)v15 < (unsigned int)v16 )
              break;
          }
LABEL_26:
          if ( ++v14 >= v13 )
            goto LABEL_29;
        }
        v17 = (unsigned int)v15;
        v18 = *(_DWORD *)(v15 + v7) - 64;
        if ( v18 )
        {
          v19 = v18 - 1;
          if ( v19 )
          {
            if ( v19 == 1 && v17 + 40 <= v16 )
            {
              v20 = v17 + v7 + 32;
              if ( !*(_DWORD *)(v17 + v7 + 12) )
                v20 = v4;
              v4 = v20;
              goto LABEL_29;
            }
            goto LABEL_25;
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
          if ( !*(_BYTE *)(v17 + v7 + 10) )
            goto LABEL_29;
          v4 = v17 + v7 + 24;
        }
LABEL_25:
        if ( v12 )
          goto LABEL_29;
        goto LABEL_26;
      }
    }
LABEL_29:
    if ( v4 )
    {
      v22 = 0;
      if ( v8 == 40 )
      {
        v23 = 0;
        if ( *(_DWORD *)(v7 + 20) )
        {
          v22 = 0;
        }
        else
        {
          v24 = *(_DWORD *)(v7 + 56);
          v25 = 0;
          if ( v24 )
          {
            while ( 1 )
            {
              v26 = *(unsigned int *)(v7 + 4LL * v25 + 120);
              if ( (unsigned int)v26 >= 0x80 )
              {
                v27 = *(unsigned int *)(v7 + 16);
                if ( (unsigned int)v26 < (unsigned int)v27 )
                  break;
              }
LABEL_45:
              if ( ++v25 >= v24 )
                goto LABEL_49;
            }
            v28 = (unsigned int)v26;
            v29 = *(_DWORD *)(v26 + v7) - 64;
            if ( v29 )
            {
              v30 = v29 - 1;
              if ( v30 )
              {
                if ( v30 == 1 && v28 + 40 <= v27 )
                  goto LABEL_49;
                goto LABEL_44;
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
LABEL_44:
            if ( v23 )
              goto LABEL_49;
            goto LABEL_45;
          }
        }
      }
      else
      {
        v22 = *(_BYTE *)(v7 + 10);
      }
LABEL_49:
      v2 = v22;
    }
  }
  if ( (byte_1C00617E3 & 0x20) != 0 )
  {
    v32 = (struct _MCGEN_TRACE_CONTEXT *)(v10 + 1976);
    LOBYTE(v32) = BYTE1(result);
    return McTemplateK0quuujqqqbr7(
             v32,
             *(_QWORD *)(v10 + 24),
             (const GUID *)(a1 + 728),
             *(_DWORD *)(*(_QWORD *)(v10 + 24) + 56LL),
             result,
             SBYTE1(result),
             SBYTE2(result),
             v10 + 1976,
             v33,
             v9,
             v2,
             v4);
  }
  return result;
}
