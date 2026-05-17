/*
 * XREFs of RtlRbInsertNodeEx @ 0x18001F940
 * Callers:
 *     RtlpHpSegFreeRangeInsert @ 0x18001DF80 (RtlpHpSegFreeRangeInsert.c)
 *     RtlpHpVsFreeChunkInsert @ 0x18001E2D8 (RtlpHpVsFreeChunkInsert.c)
 *     RtlpHpVsChunkSplit @ 0x18001E480 (RtlpHpVsChunkSplit.c)
 *     LdrpInsertModuleToIndexLockHeld @ 0x1800207B8 (LdrpInsertModuleToIndexLockHeld.c)
 *     EtwpInsertRegistration @ 0x180020A4C (EtwpInsertRegistration.c)
 *     LdrpCheckForRetryLoading @ 0x18002ADB8 (LdrpCheckForRetryLoading.c)
 *     EtwpInsertGuidEntry @ 0x180050E5C (EtwpInsertGuidEntry.c)
 *     RtlpHpVaMgrFree @ 0x180063908 (RtlpHpVaMgrFree.c)
 *     RtlpHpLargeAlloc @ 0x18006657C (RtlpHpLargeAlloc.c)
 *     LdrpAddRedirectedFunction @ 0x1800D7210 (LdrpAddRedirectedFunction.c)
 * Callees:
 *     <none>
 */

char __fastcall RtlRbInsertNodeEx(unsigned __int64 a1, unsigned __int64 a2, bool a3, _QWORD *a4)
{
  unsigned __int64 v4; // r14
  unsigned __int64 v5; // r11
  bool v7; // di
  char v8; // cl
  char v9; // r9
  __int64 v10; // rax
  unsigned __int64 v11; // rcx
  unsigned __int64 v12; // rax
  __int64 v13; // rcx
  char v14; // bl
  unsigned __int64 v15; // r8
  char v16; // r9
  __int64 v17; // rcx
  BOOL v18; // eax
  _BOOL8 v19; // rcx
  _BOOL8 v20; // rbp
  __int64 v21; // rax
  unsigned __int64 v22; // rax
  int v23; // r9d
  __int64 v24; // rax
  __int64 v25; // rax
  unsigned __int64 v26; // rax
  unsigned __int64 *v27; // rdi
  unsigned __int64 v28; // rcx
  unsigned __int64 v29; // rax
  unsigned __int64 v30; // rcx
  __int64 v31; // rbx
  unsigned __int64 v32; // rax
  unsigned __int64 v33; // rax
  unsigned __int64 v34; // rcx
  unsigned __int64 v35; // rax
  unsigned __int64 v36; // r11
  __int64 v37; // rbp
  unsigned __int64 v38; // rax
  int v39; // r9d
  __int64 *v40; // rsi
  __int64 v41; // rax
  unsigned __int64 v42; // rcx
  __int64 v43; // rax
  unsigned __int64 v44; // rax
  __int64 v45; // rax
  unsigned __int64 v46; // rax
  __int64 v47; // rcx
  __int64 v48; // rbx
  unsigned __int64 v49; // rax
  unsigned __int64 v50; // rax
  unsigned __int64 v51; // rcx

  v4 = 0LL;
  v5 = (unsigned __int64)a4;
  *a4 = 0LL;
  a4[1] = 0LL;
  v7 = a3;
  v8 = *(_BYTE *)(a1 + 8);
  v9 = v8 & 1;
  if ( !a2 )
  {
    v10 = v5 ^ a1;
    if ( v9 )
    {
      *(_QWORD *)a1 = v10;
      v8 = *(_BYTE *)(a1 + 8);
    }
    else
    {
      *(_QWORD *)a1 = v5;
    }
    if ( (v8 & 1) != 0 )
    {
      *(_QWORD *)(a1 + 8) = v10;
      LOBYTE(v10) = v10 | 1;
      *(_BYTE *)(a1 + 8) = v10;
    }
    else
    {
      *(_QWORD *)(a1 + 8) = v5;
    }
    *(_QWORD *)(v5 + 16) = 0LL;
    return v10;
  }
  v11 = v5;
  if ( v9 )
    v11 = v5 ^ a2;
  *(_QWORD *)(a2 + 8LL * a3) = v11;
  v12 = a2;
  if ( (*(_BYTE *)(a1 + 8) & 1) != 0 )
    v12 = v5 ^ a2;
  v10 = v12 | 1;
  *(_QWORD *)(v5 + 16) = v10;
  if ( !a3 )
  {
    v13 = *(_QWORD *)(a1 + 8);
    if ( (v13 & 1) != 0 )
      v10 = v13 == 1 ? 0LL : v13 ^ (a1 | 1);
    else
      v10 = *(_QWORD *)(a1 + 8);
    if ( a2 == v10 )
    {
      if ( (v13 & 1) != 0 )
      {
        *(_QWORD *)(a1 + 8) = v5 ^ a1;
        LOBYTE(v10) = v5 ^ a1 | 1;
        *(_BYTE *)(a1 + 8) = v10;
      }
      else
      {
        *(_QWORD *)(a1 + 8) = v5;
      }
    }
  }
  if ( (*(_BYTE *)(a2 + 16) & 1) != 0 )
  {
    v14 = *(_BYTE *)(a1 + 8);
    while ( 1 )
    {
      v15 = *(_QWORD *)(a2 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
      v16 = v14 & 1;
      if ( (v14 & 1) != 0 && v15 )
        v15 ^= a2;
      v17 = *(_QWORD *)v15;
      if ( v16 && v17 )
        v17 ^= v15;
      v18 = v17 != a2;
      v19 = v17 == a2;
      v20 = v18;
      v21 = *(_QWORD *)(v15 + 8 * v19);
      if ( v16 )
      {
        if ( !v21 )
          break;
        v21 ^= v15;
      }
      if ( !v21 || (*(_BYTE *)(v21 + 16) & 1) == 0 )
        break;
      *(_BYTE *)(a2 + 16) &= ~1u;
      v5 = v15;
      *(_BYTE *)(v21 + 16) &= ~1u;
      v10 = *(_QWORD *)(v15 + 16);
      a2 = v10 & 0xFFFFFFFFFFFFFFFCuLL;
      if ( (*(_BYTE *)(a1 + 8) & 1) != 0 )
      {
        if ( !a2 )
          return v10;
        a2 ^= v15;
      }
      if ( a2 )
      {
        *(_BYTE *)(v15 + 16) = v10 | 1;
        v14 = *(_BYTE *)(a1 + 8);
        v10 = *(_QWORD *)a2;
        if ( (v14 & 1) != 0 && v10 )
          v10 ^= a2;
        v7 = v15 != v10;
        if ( (*(_BYTE *)(a2 + 16) & 1) != 0 )
          continue;
      }
      return v10;
    }
    if ( v7 == v20 )
    {
LABEL_85:
      v36 = *(_QWORD *)a1;
      if ( (*(_QWORD *)(a1 + 8) & 1) != 0 )
      {
        if ( v36 )
          v36 ^= a1;
        else
          v36 = 0LL;
      }
      v37 = (unsigned int)v20 ^ 1;
      v38 = *(_QWORD *)(a2 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
      v39 = *(_QWORD *)(a1 + 8) & 1;
      if ( (*(_QWORD *)(a1 + 8) & 1) != 0 && v38 )
        v38 ^= a2;
      if ( v38 != v15 )
        goto LABEL_145;
      v40 = (__int64 *)(v15 + 8 * ((unsigned int)v37 ^ 1LL));
      v41 = *v40;
      if ( (*(_QWORD *)(a1 + 8) & 1) != 0 && v41 )
        v41 ^= v15;
      if ( v41 != a2 )
        goto LABEL_145;
      v42 = *(_QWORD *)(v15 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
      if ( (*(_QWORD *)(a1 + 8) & 1) != 0 )
      {
        if ( !v42 )
          goto LABEL_101;
        v42 ^= v15;
      }
      if ( v42 )
      {
        v43 = *(_QWORD *)(v42 + 8);
        if ( (*(_QWORD *)(a1 + 8) & 1) != 0 && v43 )
          v43 ^= v42;
        if ( v43 == v15 )
        {
          v44 = v42 ^ a2;
          if ( (*(_QWORD *)(a1 + 8) & 1) == 0 )
            v44 = a2;
          *(_QWORD *)(v42 + 8) = v44;
        }
        else
        {
          v45 = *(_QWORD *)v42;
          if ( (*(_QWORD *)(a1 + 8) & 1) != 0 && v45 )
            v45 ^= v42;
          if ( v45 != v15 )
            goto LABEL_145;
          v46 = v42 ^ a2;
          if ( (*(_QWORD *)(a1 + 8) & 1) == 0 )
            v46 = a2;
          *(_QWORD *)v42 = v46;
        }
LABEL_117:
        if ( v39 && v42 )
          v42 ^= a2;
        *(_QWORD *)(a2 + 16) &= 3uLL;
        *(_QWORD *)(a2 + 16) |= v42;
        v47 = *(_QWORD *)(a2 + 8 * v37);
        if ( v39 )
        {
          if ( !v47 )
            goto LABEL_131;
          v47 ^= a2;
        }
        if ( v47 )
        {
          v48 = *(_QWORD *)(v47 + 16);
          v49 = v48 & 0xFFFFFFFFFFFFFFFCuLL;
          if ( v39 && v49 )
            v49 ^= v47;
          if ( v49 == a2 )
          {
            v50 = v47 ^ v15;
            if ( !v39 )
              v50 = v15;
            *(_QWORD *)(v47 + 16) = v48 & 3 | v50;
            goto LABEL_131;
          }
LABEL_145:
          __fastfail(0x1Du);
        }
LABEL_131:
        if ( v39 && v47 )
          v47 ^= v15;
        *v40 = v47;
        v51 = v15 ^ a2;
        v10 = v15 ^ a2;
        if ( !v39 )
          v10 = v15;
        *(_QWORD *)(a2 + 8 * v37) = v10;
        *(_QWORD *)(v15 + 16) &= 3uLL;
        if ( !v39 )
          v51 = a2;
        *(_QWORD *)(v15 + 16) |= v51;
        if ( (*(_BYTE *)(a1 + 8) & 1) != 0 )
        {
          LOBYTE(v10) = v36 ^ a1;
          if ( v36 )
            v4 = v36 ^ a1;
        }
        else
        {
          v4 = v36;
        }
        *(_QWORD *)a1 = v4;
        *(_BYTE *)(v15 + 16) |= 1u;
        *(_BYTE *)(a2 + 16) &= ~1u;
        return v10;
      }
LABEL_101:
      if ( v36 != v15 )
        goto LABEL_145;
      v36 = a2;
      goto LABEL_117;
    }
    v22 = *(_QWORD *)(v5 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
    v23 = v14 & 1;
    if ( (v14 & 1) != 0 && v22 )
      v22 ^= v5;
    if ( v22 != a2 )
      goto LABEL_145;
    v24 = *(_QWORD *)(a2 + 8 * v19);
    if ( (v14 & 1) != 0 && v24 )
      v24 ^= a2;
    if ( v24 != v5 )
      goto LABEL_145;
    v25 = *(_QWORD *)(v15 + 8 * v20);
    if ( (v14 & 1) != 0 && v25 )
      v25 ^= v15;
    if ( v25 != a2 )
      goto LABEL_145;
    v26 = *(_QWORD *)(a2 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
    if ( (v14 & 1) != 0 && v26 )
      v26 ^= a2;
    if ( v26 != v15 )
      goto LABEL_145;
    v27 = (unsigned __int64 *)(v5 + 8 * v20);
    v28 = v15 ^ v5;
    v29 = v15 ^ v5;
    if ( (v14 & 1) == 0 )
      v29 = v5;
    *(_QWORD *)(v15 + 8 * v20) = v29;
    *(_QWORD *)(v5 + 16) &= 3uLL;
    if ( (v14 & 1) == 0 )
      v28 = v15;
    *(_QWORD *)(v5 + 16) |= v28;
    v30 = *v27;
    if ( (v14 & 1) != 0 )
    {
      if ( !v30 )
      {
LABEL_77:
        if ( v23 && v30 )
          v30 ^= a2;
        *(_QWORD *)(a2 + 8 * !v20) = v30;
        v34 = a2 ^ v5;
        v35 = a2 ^ v5;
        if ( !v23 )
          v35 = a2;
        *v27 = v35;
        *(_QWORD *)(a2 + 16) &= 3uLL;
        if ( !v23 )
          v34 = v5;
        *(_QWORD *)(a2 + 16) |= v34;
        a2 = v5;
        goto LABEL_85;
      }
      v30 ^= v5;
    }
    if ( v30 )
    {
      v31 = *(_QWORD *)(v30 + 16);
      v32 = v31 & 0xFFFFFFFFFFFFFFFCuLL;
      if ( v23 && v32 )
        v32 ^= v30;
      if ( v32 != v5 )
        goto LABEL_145;
      v33 = a2 ^ v30;
      if ( !v23 )
        v33 = a2;
      *(_QWORD *)(v30 + 16) = v31 & 3 | v33;
    }
    goto LABEL_77;
  }
  return v10;
}
