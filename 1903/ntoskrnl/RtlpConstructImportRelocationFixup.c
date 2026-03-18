/*
 * XREFs of RtlpConstructImportRelocationFixup @ 0x140097C40
 * Callers:
 *     RtlApplyImportRelocationToPage @ 0x140097B24 (RtlApplyImportRelocationToPage.c)
 *     RtlApplyImportRelocationToImage @ 0x140187A3C (RtlApplyImportRelocationToImage.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401CC5F0 (_guard_dispatch_icall.c)
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
  int v12; // edi
  unsigned int v13; // ecx
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // rcx
  int v19; // edx
  __int64 v20; // rdi
  int v21; // edi
  __int64 result; // rax
  char v23; // al
  __int16 v24; // cx
  unsigned int v25; // r8d
  unsigned int v26; // edx
  int v27; // r9d
  unsigned __int64 v28; // rcx
  __int64 v29; // rdx
  __int64 v30; // r12
  __int64 v31; // rdx
  __int64 v32; // rcx
  unsigned int (__fastcall *v33)(__int64, __int64, __int64); // rax
  __int64 v34; // rcx
  unsigned int (__fastcall *v35)(__int64, __int64, __int64); // rax

  *(_QWORD *)a7 = 0LL;
  *(_DWORD *)(a7 + 8) = 0;
  *(_WORD *)(a7 + 12) = 0;
  if ( (*a4 & 0x1000) != 0 )
    v11 = 0x9090909090909090uLL;
  else
    v11 = 0xCCCCCCCCCCCCCCCCuLL;
  v12 = a5;
  *(_QWORD *)(a7 + 2) = v11;
  *(_DWORD *)(a7 + 10) = v11;
  if ( !a5 )
    goto LABEL_18;
  if ( a6 )
  {
    v28 = *a4;
    if ( (*a4 & 0xFFFFE000) != 0xFFFFE000 )
    {
      v29 = *(_QWORD *)(a2 + 16);
      if ( v29 )
      {
        v30 = *(int *)(v29 + 4 * ((unsigned __int64)(unsigned int)v28 >> 13));
      }
      else
      {
        v31 = *(_QWORD *)(a2 + 24);
        if ( !v31 )
          goto LABEL_35;
        v32 = *(_QWORD *)(v31 + 8 * (v28 >> 13));
        v33 = *(unsigned int (__fastcall **)(__int64, __int64, __int64))(a2 + 40);
        v30 = v32 - *(_QWORD *)(a2 + 32);
        if ( v33 )
        {
          if ( !v33(v32, v31, 0xFFFFFFFFLL) )
            goto LABEL_35;
        }
      }
      if ( v30 && v30 - (unsigned __int64)(unsigned int)(a1 + 12) + 0x80000000 <= 0xFFFFFFFF )
        goto LABEL_5;
    }
LABEL_35:
    v12 = 0;
  }
LABEL_5:
  if ( v12 )
  {
    *(_DWORD *)a7 = -1957953529;
    *(_BYTE *)(a7 + 4) = 21;
    v13 = *a4;
    v14 = *a4;
    if ( (*a4 & 0xFFFFE000) != 0xFFFFE000 )
    {
      v15 = *(unsigned int *)(a2 + 8);
      if ( (_DWORD)v15 )
      {
        v16 = v15 + 8 * ((unsigned __int64)v13 >> 13) - (unsigned int)(a1 + 7);
        *(_WORD *)a7 = 127;
        *(_WORD *)(a7 + 5) = v16;
        *(_BYTE *)(a7 + 8) = ((unsigned int)v15 + 8 * (v13 >> 13) - (a1 + 7)) >> 24;
        *(_BYTE *)(a7 + 7) = BYTE2(v16);
        v14 = *a4;
      }
    }
    if ( (v14 & 0xFFFFE000) != 0xFFFFE000 )
    {
      v17 = *(_QWORD *)(a2 + 16);
      if ( v17 )
      {
        v20 = *(int *)(v17 + 4 * ((unsigned __int64)(unsigned int)v14 >> 13));
        goto LABEL_15;
      }
      v18 = *(_QWORD *)(a2 + 24);
      if ( v18 )
      {
        v34 = *(_QWORD *)(v18 + 8 * ((unsigned __int64)(unsigned int)v14 >> 13));
        v35 = *(unsigned int (__fastcall **)(__int64, __int64, __int64))(a2 + 40);
        v20 = v34 - *(_QWORD *)(a2 + 32);
        if ( !v35 || v35(v34, v14, 0xFFFFFFFFLL) )
        {
LABEL_15:
          if ( v20 )
          {
            v19 = a1 + 12;
            if ( v20 - (unsigned __int64)(unsigned int)(a1 + 12) + 0x80000000 <= 0xFFFFFFFF )
              goto LABEL_13;
          }
        }
      }
    }
    v19 = a1 + 12;
    LODWORD(v20) = *(_DWORD *)a2 + *(_DWORD *)(a3 + 76);
LABEL_13:
    v21 = v20 - v19;
    *(_BYTE *)(a7 + 9) = ((*a4 & 0x1000) == 0) | 0xE8;
    *(_BYTE *)(a7 + 11) = BYTE1(v21);
    *(_BYTE *)(a7 + 12) = BYTE2(v21);
    result = 3968LL;
    *(_BYTE *)(a7 + 10) = v21;
    *(_WORD *)a7 |= 0xF80u;
    *(_BYTE *)(a7 + 13) = HIBYTE(v21);
    return result;
  }
LABEL_18:
  *(_WORD *)(a7 + 2) = -184;
  v23 = 21;
  if ( (*a4 & 0x1000) == 0 )
    v23 = 37;
  v24 = 7;
  *(_BYTE *)(a7 + 4) = v23;
  *(_WORD *)a7 = 7;
  v25 = *a4;
  v26 = *a4;
  if ( (*a4 & 0xFFFFE000) != 0xFFFFE000 )
  {
    v27 = *(_DWORD *)(a2 + 8);
    if ( v27 )
    {
      v24 = 127;
      *(_WORD *)a7 = 127;
      *(_WORD *)(a7 + 5) = v27 + 8 * ((unsigned __int64)v25 >> 13) - (a1 + 7);
      *(_BYTE *)(a7 + 8) = (v27 + 8 * (v25 >> 13) - (a1 + 7)) >> 24;
      *(_BYTE *)(a7 + 7) = (v27 + 8 * (v25 >> 13) - (a1 + 7)) >> 16;
      v26 = *a4;
    }
  }
  if ( (v26 & 0x1000) != 0 )
  {
    *(_DWORD *)(a7 + 9) = 4464399;
    *(_BYTE *)(a7 + 13) = 0;
  }
  result = 3968LL;
  *(_WORD *)a7 = v24 | 0xF80;
  return result;
}
