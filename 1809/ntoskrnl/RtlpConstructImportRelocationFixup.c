/*
 * XREFs of RtlpConstructImportRelocationFixup @ 0x1402F7990
 * Callers:
 *     RtlApplyImportRelocationToImage @ 0x1402F6D34 (RtlApplyImportRelocationToImage.c)
 *     RtlApplyImportRelocationToPage @ 0x1402F6DD8 (RtlApplyImportRelocationToPage.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 */

__int64 __fastcall RtlpConstructImportRelocationFixup(
        int a1,
        __int64 a2,
        __int64 a3,
        unsigned int *a4,
        int a5,
        int a6,
        __int64 a7)
{
  unsigned __int64 v11; // rax
  int v12; // ebp
  __int64 v13; // r8
  unsigned __int64 v14; // rcx
  __int64 v15; // rdx
  __int64 v16; // rdi
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 (__fastcall *v19)(__int64, __int64, __int64, __int64); // rax
  int v20; // eax
  unsigned __int64 v21; // rdx
  unsigned int v22; // ecx
  __int64 v23; // rdx
  __int64 v24; // rdx
  __int64 v25; // rdi
  __int64 v26; // rdx
  __int64 v27; // rcx
  unsigned int (__fastcall *v28)(__int64, __int64, __int64, __int64); // rax
  int v29; // edx
  int v30; // edi
  __int64 result; // rax
  __int16 v32; // cx
  unsigned int v33; // r8d
  unsigned int v34; // edx
  int v35; // r9d

  *(_QWORD *)a7 = 0LL;
  *(_DWORD *)(a7 + 8) = 0;
  *(_WORD *)(a7 + 12) = 0;
  v11 = 0xCCCCCCCCCCCCCCCCuLL;
  if ( (*a4 & 0x1000) != 0 )
    v11 = 0x9090909090909090uLL;
  v12 = a5;
  *(_QWORD *)(a7 + 2) = v11;
  *(_DWORD *)(a7 + 10) = v11;
  v13 = 0x80000000LL;
  if ( !a5 )
    goto LABEL_32;
  if ( !a6 )
    goto LABEL_16;
  v14 = *a4;
  if ( (*a4 & 0xFFFFE000) == 0xFFFFE000 )
    goto LABEL_15;
  v15 = *(_QWORD *)(a2 + 16);
  if ( v15 )
  {
    v16 = *(int *)(v15 + 4 * ((unsigned __int64)(unsigned int)v14 >> 13));
    goto LABEL_11;
  }
  v17 = *(_QWORD *)(a2 + 24);
  if ( !v17 )
  {
LABEL_15:
    v12 = 0;
    goto LABEL_16;
  }
  v18 = *(_QWORD *)(v17 + 8 * (v14 >> 13));
  v19 = *(__int64 (__fastcall **)(__int64, __int64, __int64, __int64))(a2 + 40);
  v16 = v18 - *(_QWORD *)(a2 + 32);
  if ( v19 )
  {
    v20 = v19(v18, v17, 0x80000000LL, 4294959104LL);
    v13 = 0x80000000LL;
    v16 &= -(__int64)(v20 != 0);
  }
LABEL_11:
  if ( !v16 )
    goto LABEL_15;
  if ( v16 - (unsigned __int64)(unsigned int)(a1 + 12) + 0x80000000 > 0xFFFFFFFF )
    v16 = 0LL;
  if ( !v16 )
    goto LABEL_15;
LABEL_16:
  if ( v12 )
  {
    *(_DWORD *)a7 = -1957953529;
    *(_BYTE *)(a7 + 4) = 21;
    v21 = *a4;
    v22 = *a4;
    if ( (v21 & 0xFFFFE000) != 0xFFFFE000 )
    {
      v13 = *(unsigned int *)(a2 + 8);
      if ( (_DWORD)v13 )
      {
        v23 = v13 + 8 * (v21 >> 13) - (unsigned int)(a1 + 7);
        *(_WORD *)a7 = 127;
        *(_WORD *)(a7 + 5) = v23;
        *(_BYTE *)(a7 + 8) = BYTE3(v23);
        *(_BYTE *)(a7 + 7) = BYTE2(v23);
        v22 = *a4;
      }
    }
    if ( (v22 & 0xFFFFE000) != 0xFFFFE000 )
    {
      v24 = *(_QWORD *)(a2 + 16);
      if ( v24 )
      {
        v25 = *(int *)(v24 + 4 * ((unsigned __int64)v22 >> 13));
        goto LABEL_26;
      }
      v26 = *(_QWORD *)(a2 + 24);
      if ( v26 )
      {
        v27 = *(_QWORD *)(v26 + 8 * ((unsigned __int64)v22 >> 13));
        v28 = *(unsigned int (__fastcall **)(__int64, __int64, __int64, __int64))(a2 + 40);
        v25 = v27 - *(_QWORD *)(a2 + 32);
        if ( v28 )
          v25 &= -(__int64)(v28(v27, v26, v13, 4294959104LL) != 0);
LABEL_26:
        if ( v25 )
        {
          v29 = a1 + 12;
          if ( v25 - (unsigned __int64)(unsigned int)(a1 + 12) + 0x80000000 > 0xFFFFFFFF )
            v25 = 0LL;
          if ( v25 )
            goto LABEL_31;
        }
      }
    }
    v29 = a1 + 12;
    LODWORD(v25) = *(_DWORD *)a2 + *(_DWORD *)(a3 + 76);
LABEL_31:
    v30 = v25 - v29;
    *(_BYTE *)(a7 + 9) = ((*a4 & 0x1000) == 0) | 0xE8;
    *(_BYTE *)(a7 + 11) = BYTE1(v30);
    *(_BYTE *)(a7 + 12) = BYTE2(v30);
    result = 3968LL;
    *(_BYTE *)(a7 + 10) = v30;
    *(_WORD *)a7 |= 0xF80u;
    *(_BYTE *)(a7 + 13) = HIBYTE(v30);
    return result;
  }
LABEL_32:
  *(_WORD *)(a7 + 2) = -184;
  *(_BYTE *)(a7 + 4) = (*a4 & 0x1000) != 0 ? 21 : 37;
  v32 = 7;
  *(_WORD *)a7 = 7;
  v33 = *a4;
  v34 = *a4;
  if ( (*a4 & 0xFFFFE000) != 0xFFFFE000 )
  {
    v35 = *(_DWORD *)(a2 + 8);
    if ( v35 )
    {
      v32 = 127;
      *(_WORD *)a7 = 127;
      *(_WORD *)(a7 + 5) = v35 + 8 * ((unsigned __int64)v33 >> 13) - (a1 + 7);
      *(_BYTE *)(a7 + 8) = (v35 + 8 * (v33 >> 13) - (a1 + 7)) >> 24;
      *(_BYTE *)(a7 + 7) = (v35 + 8 * (v33 >> 13) - (a1 + 7)) >> 16;
      v34 = *a4;
    }
  }
  if ( (v34 & 0x1000) != 0 )
  {
    *(_DWORD *)(a7 + 9) = 4464399;
    *(_BYTE *)(a7 + 13) = 0;
  }
  result = 3968LL;
  *(_WORD *)a7 = v32 | 0xF80;
  return result;
}
