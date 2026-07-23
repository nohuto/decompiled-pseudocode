/*
 * XREFs of RtlCreateRetpolineRelocationInformation @ 0x1402F6FB8
 * Callers:
 *     MiCreateRetpolineRelocationInformation @ 0x140854D60 (MiCreateRetpolineRelocationInformation.c)
 * Callees:
 *     memmove @ 0x1401D1640 (memmove.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     RtlSizeOfRetpolineRelocationEntry @ 0x1402F7648 (RtlSizeOfRetpolineRelocationEntry.c)
 *     RtlpCopyRetpolineRelocationBlockEntryArray @ 0x1402F7F0C (RtlpCopyRetpolineRelocationBlockEntryArray.c)
 *     RtlpScanRetpolineIndexForEndStraddle @ 0x1402F7FB8 (RtlpScanRetpolineIndexForEndStraddle.c)
 */

__int64 __fastcall RtlCreateRetpolineRelocationInformation(
        unsigned int a1,
        unsigned int a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        char *a6,
        unsigned int a7,
        void *a8,
        unsigned int a9)
{
  unsigned __int64 v11; // r10
  size_t v13; // r8
  size_t v14; // rbx
  unsigned int v15; // ecx
  unsigned __int8 v16; // r9
  _DWORD *v17; // rbx
  unsigned __int64 v18; // rdx
  _DWORD *v19; // r14
  unsigned __int64 v20; // r8
  _DWORD *v21; // r13
  unsigned __int64 v22; // r10
  __int64 v23; // rax
  int v24; // r12d
  __int64 v25; // rax
  unsigned int v26; // r15d
  __int64 v27; // rax
  unsigned int v28; // edi
  char *v29; // rsi
  unsigned int v30; // eax
  const void *v31; // r11
  char *v32; // rsi
  _WORD *v33; // rax
  _WORD *v34; // rdi
  unsigned int v36; // [rsp+30h] [rbp-50h] BYREF
  unsigned int v37; // [rsp+34h] [rbp-4Ch] BYREF
  unsigned int v38; // [rsp+38h] [rbp-48h]
  _DWORD *v39; // [rsp+40h] [rbp-40h]
  _DWORD *v40; // [rsp+48h] [rbp-38h]
  _DWORD *v41; // [rsp+50h] [rbp-30h]
  __int64 v42; // [rsp+58h] [rbp-28h] BYREF
  unsigned __int64 v43; // [rsp+60h] [rbp-20h]
  unsigned __int64 v44; // [rsp+68h] [rbp-18h]
  unsigned __int64 v45; // [rsp+70h] [rbp-10h]
  __int64 v47; // [rsp+C8h] [rbp+48h] BYREF

  v11 = (unsigned __int64)a1 >> 12;
  v13 = 4 * (a2 + 3 * v11);
  if ( a7 < v13 )
    return 3221225507LL;
  v14 = 8 * v11;
  if ( a9 < 8 * v11 )
    return 3221225507LL;
  memset(a6, 0, v13);
  memset(a8, 0, v14);
  v15 = 0;
  v41 = 0LL;
  v16 = 0;
  v38 = 0;
  v42 = 0LL;
  LOBYTE(a7) = 0;
  if ( a3 )
  {
    v17 = (_DWORD *)(a3 + 12);
    v18 = a3 + 12 + *(unsigned int *)(a3 + 8);
  }
  else
  {
    v17 = 0LL;
    v18 = 0LL;
  }
  v43 = v18;
  if ( a4 )
  {
    v19 = (_DWORD *)(a4 + 12);
    v20 = a4 + 12 + *(unsigned int *)(a4 + 8);
  }
  else
  {
    v19 = 0LL;
    v20 = 0LL;
  }
  v44 = v20;
  if ( a5 )
  {
    v21 = (_DWORD *)(a5 + 12);
    v22 = a5 + 12 + *(unsigned int *)(a5 + 8);
  }
  else
  {
    v21 = 0LL;
    v22 = 0LL;
  }
  v45 = v22;
  if ( a1 )
  {
    do
    {
      if ( (unsigned __int64)v17 < v18 && *v17 == v15 )
      {
        v23 = (unsigned int)v17[1];
        v39 = v17;
        v17 = (_DWORD *)((char *)v17 + v23);
        v24 = v23 - 8;
      }
      else
      {
        v39 = 0LL;
        v24 = 0;
      }
      LODWORD(v47) = v24;
      if ( (unsigned __int64)v19 < v20 && *v19 == v15 )
      {
        v25 = (unsigned int)v19[1];
        v40 = v19;
        v19 = (_DWORD *)((char *)v19 + v25);
        v26 = v25 - 8;
      }
      else
      {
        v40 = 0LL;
        v26 = 0;
      }
      v36 = v26;
      if ( (unsigned __int64)v21 < v22 && *v21 == v15 )
      {
        v27 = (unsigned int)v21[1];
        v41 = v21;
        v21 = (_DWORD *)((char *)v21 + v27);
        v28 = v27 - 8;
      }
      else
      {
        v28 = 0;
      }
      v37 = v28;
      if ( v16 || v24 || v26 || v28 )
      {
        v29 = a6;
        *((_WORD *)a6 + 3) = v16;
        if ( v16 )
        {
          v30 = RtlSizeOfRetpolineRelocationEntry(v16);
          memmove(v29 + 8, v31, v30);
        }
        v32 = v29 + 12;
        if ( v24 )
        {
          RtlpCopyRetpolineRelocationBlockEntryArray(v32, (__int64)&v47);
          LOWORD(v24) = v47;
          v32 += (unsigned int)v47;
        }
        if ( v26 )
        {
          RtlpCopyRetpolineRelocationBlockEntryArray(v32, (__int64)&v36);
          LOWORD(v26) = v36;
          v32 += v36;
        }
        if ( v28 )
        {
          RtlpCopyRetpolineRelocationBlockEntryArray(v32, (__int64)&v37);
          LOWORD(v28) = v37;
          v32 += v37;
        }
        v33 = a6;
        a6 = v32;
        v33[2] = v28;
        v34 = v33;
        *v33 = v24;
        v33[1] = v26;
        RtlpScanRetpolineIndexForEndStraddle(v33, &a7, &v42);
        v15 = v38;
        v16 = a7;
        v20 = v44;
        v22 = v45;
        *((_QWORD *)a8 + ((unsigned __int64)v38 >> 12)) = v34;
        v18 = v43;
      }
      v15 += 4096;
      v38 = v15;
    }
    while ( v15 < a1 );
  }
  return 0LL;
}
