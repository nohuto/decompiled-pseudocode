/*
 * XREFs of RtlpConvertToAutoInheritSecurityObject @ 0x1800E8824
 * Callers:
 *     RtlConvertToAutoInheritSecurityObject @ 0x1800D8E30 (RtlConvertToAutoInheritSecurityObject.c)
 * Callees:
 *     RtlAllocateHeap @ 0x18000F2A0 (RtlAllocateHeap.c)
 *     RtlFreeHeap @ 0x180017E40 (RtlFreeHeap.c)
 *     RtlValidSecurityDescriptor @ 0x1800410A0 (RtlValidSecurityDescriptor.c)
 *     memmove @ 0x1800A6DC0 (memmove.c)
 *     RtlpConvertAclToAutoInherit @ 0x1800E7FE8 (RtlpConvertAclToAutoInherit.c)
 */

__int64 __fastcall RtlpConvertToAutoInheritSecurityObject(
        __int64 a1,
        __int64 a2,
        __int64 *a3,
        __int64 a4,
        char a5,
        _DWORD *a6)
{
  __int64 v6; // r13
  int v10; // edi
  __int16 v11; // cx
  void *v12; // rax
  void *v13; // rax
  unsigned __int16 *v14; // r15
  _WORD *v15; // r8
  _WORD *v16; // rax
  unsigned __int16 *v17; // rdx
  __int64 v18; // rcx
  __int16 v19; // r12
  __int64 v20; // rax
  unsigned __int16 *v21; // rsi
  _WORD *v22; // r9
  _WORD *v23; // r8
  unsigned __int16 *v24; // rdx
  __int64 v25; // rcx
  __int16 v26; // di
  unsigned int v27; // r13d
  unsigned int v28; // ecx
  unsigned int v29; // r14d
  unsigned int v30; // r15d
  __int64 v31; // rbx
  __int64 Heap; // rax
  void *v33; // r12
  char *v34; // rbx
  int v35; // ecx
  int v36; // ecx
  int v37; // r14d
  int v38; // ecx
  int v39; // ecx
  __int64 v40; // rdi
  char *v41; // rbx
  char v43; // [rsp+58h] [rbp-29h]
  __int64 v44; // [rsp+60h] [rbp-21h] BYREF
  void *Src; // [rsp+68h] [rbp-19h]
  void *v46; // [rsp+70h] [rbp-11h]
  unsigned __int16 *v47; // [rsp+78h] [rbp-9h] BYREF
  unsigned __int16 *v48; // [rsp+80h] [rbp-1h] BYREF
  void *v49; // [rsp+88h] [rbp+7h]
  void *ProcessHeap; // [rsp+90h] [rbp+Fh]
  char v51; // [rsp+E0h] [rbp+5Fh]

  v6 = 0LL;
  v47 = 0LL;
  v43 = 0;
  v48 = 0LL;
  ProcessHeap = NtCurrentPeb()->ProcessHeap;
  v51 = 0;
  if ( !RtlValidSecurityDescriptor(a2) )
    goto LABEL_2;
  v11 = *(_WORD *)(a2 + 2);
  if ( v11 >= 0 )
  {
    v12 = *(void **)(a2 + 8);
  }
  else
  {
    if ( !*(_DWORD *)(a2 + 4) )
    {
LABEL_2:
      v10 = -1073741703;
      goto LABEL_119;
    }
    v12 = (void *)(a2 + *(unsigned int *)(a2 + 4));
  }
  v49 = v12;
  if ( !v12 )
    goto LABEL_2;
  if ( v11 >= 0 )
  {
    v13 = *(void **)(a2 + 16);
  }
  else
  {
    if ( !*(_DWORD *)(a2 + 8) )
    {
      v46 = 0LL;
      goto LABEL_14;
    }
    v13 = (void *)(a2 + *(unsigned int *)(a2 + 8));
  }
  v46 = v13;
LABEL_14:
  if ( (v11 & 0x10) == 0 )
    goto LABEL_47;
  if ( v11 >= 0 )
  {
    v14 = *(unsigned __int16 **)(a2 + 24);
  }
  else
  {
    if ( !*(_DWORD *)(a2 + 12) )
      goto LABEL_47;
    v14 = (unsigned __int16 *)(a2 + *(unsigned int *)(a2 + 12));
  }
  Src = v14;
  if ( !v14 )
  {
LABEL_47:
    v19 = v11 & 0x2010 | 0x800;
    if ( a1 )
    {
      if ( (*(_BYTE *)(a1 + 2) & 0x10) == 0 )
        goto LABEL_56;
      if ( *(__int16 *)(a1 + 2) < 0 )
      {
        if ( *(_DWORD *)(a1 + 12) )
        {
          v20 = a1 + *(unsigned int *)(a1 + 12);
          goto LABEL_54;
        }
LABEL_56:
        v14 = v47;
        Src = v47;
        goto LABEL_57;
      }
      v20 = *(_QWORD *)(a1 + 24);
    }
    else
    {
      v20 = 0LL;
    }
LABEL_54:
    if ( v20 )
      v19 = v11 & 0x10 | 0x2800;
    goto LABEL_56;
  }
  if ( (v11 & 0x800) == 0 && (v11 & 0x2000) == 0 && a1 )
  {
    if ( v11 >= 0 )
    {
      v15 = *(_WORD **)(a2 + 16);
    }
    else if ( *(_DWORD *)(a2 + 8) )
    {
      v15 = (_WORD *)(a2 + *(unsigned int *)(a2 + 8));
    }
    else
    {
      v15 = 0LL;
    }
    if ( v11 >= 0 )
    {
      v16 = *(_WORD **)(a2 + 8);
    }
    else if ( *(_DWORD *)(a2 + 4) )
    {
      v16 = (_WORD *)(a2 + *(unsigned int *)(a2 + 4));
    }
    else
    {
      v16 = 0LL;
    }
    if ( v11 >= 0 )
    {
      v17 = *(unsigned __int16 **)(a2 + 24);
    }
    else if ( *(_DWORD *)(a2 + 12) )
    {
      v17 = (unsigned __int16 *)(a2 + *(unsigned int *)(a2 + 12));
    }
    else
    {
      v17 = 0LL;
    }
    if ( (*(_BYTE *)(a1 + 2) & 0x10) == 0 )
      goto LABEL_39;
    if ( *(__int16 *)(a1 + 2) >= 0 )
    {
      v18 = *(_QWORD *)(a1 + 24);
      goto LABEL_44;
    }
    if ( *(_DWORD *)(a1 + 12) )
      v18 = a1 + *(unsigned int *)(a1 + 12);
    else
LABEL_39:
      v18 = 0LL;
LABEL_44:
    v10 = RtlpConvertAclToAutoInherit(v18, v17, a4, a5, v16, v15, a6, (unsigned __int64 *)&v47, &v44);
    if ( v10 < 0 )
      goto LABEL_119;
    v11 = *(_WORD *)(a2 + 2);
    v43 = 1;
    v19 = 2 * (v44 & 0x1400 | (2 * (v44 & 8 | 4)));
    goto LABEL_56;
  }
  v19 = v11 & 0x2010 | 0x800;
LABEL_57:
  if ( (v11 & 4) == 0
    || (v11 >= 0
      ? (v21 = *(unsigned __int16 **)(a2 + 32))
      : *(_DWORD *)(a2 + 16)
      ? (v21 = (unsigned __int16 *)(a2 + *(unsigned int *)(a2 + 16)))
      : (v21 = 0LL),
        !v21) )
  {
    v26 = v11 & 4 | 0x1400;
    goto LABEL_93;
  }
  if ( (v11 & 0x400) != 0 || (v11 & 0x1000) != 0 || !a1 )
  {
    v26 = v11 & 0x1004 | 0x400;
LABEL_94:
    v27 = (4 * *((unsigned __int8 *)v49 + 1) + 11) & 0xFFFFFFFC;
    if ( v46 )
      v28 = (4 * *((unsigned __int8 *)v46 + 1) + 11) & 0xFFFFFFFC;
    else
      v28 = 0;
    if ( v14 )
      v29 = (v14[1] + 3) & 0xFFFFFFFC;
    else
      v29 = 0;
    if ( v21 )
      v30 = (v21[1] + 3) & 0xFFFFFFFC;
    else
      v30 = 0;
    v31 = (__int64)ProcessHeap;
    Heap = RtlAllocateHeap((__int64)ProcessHeap, NtdllBaseTag + 1310720, v28 + v30 + v29 + v27 + 20);
    v44 = Heap;
    if ( Heap )
    {
      v34 = (char *)(Heap + 20);
      *(_QWORD *)Heap = 0LL;
      *(_QWORD *)(Heap + 8) = 0LL;
      *(_DWORD *)(Heap + 16) = 0;
      *(_BYTE *)Heap = 1;
      *(_WORD *)(Heap + 2) |= v19 | 0x8000;
      v33 = Src;
      if ( Src )
      {
        memmove((void *)(Heap + 20), Src, *((unsigned __int16 *)Src + 1));
        v35 = (int)v34;
        v34 += v29;
        Heap = v44;
        v36 = v35 - v44;
      }
      else
      {
        v36 = 0;
      }
      *(_DWORD *)(Heap + 12) = v36;
      v37 = Heap;
      *(_WORD *)(Heap + 2) |= v26;
      if ( v21 )
      {
        memmove(v34, v21, v21[1]);
        v38 = (int)v34;
        v34 += v30;
        Heap = v44;
        v39 = v38 - v37;
      }
      else
      {
        v39 = 0;
      }
      *(_DWORD *)(Heap + 16) = v39;
      memmove(v34, v49, 4LL * *((unsigned __int8 *)v49 + 1) + 8);
      v40 = v44;
      *(_DWORD *)(v44 + 4) = (_DWORD)v34 - v37;
      v41 = &v34[v27];
      if ( v46 )
      {
        memmove(v41, v46, 4LL * *((unsigned __int8 *)v46 + 1) + 8);
        *(_DWORD *)(v40 + 8) = (_DWORD)v41 - v37;
      }
      v31 = (__int64)ProcessHeap;
      v10 = 0;
    }
    else
    {
      v33 = Src;
      v10 = -1073741801;
    }
    if ( v51 )
      RtlFreeHeap(v31, 0, (unsigned __int64)v21);
    v6 = v44;
    goto LABEL_117;
  }
  if ( v11 >= 0 )
  {
    v22 = *(_WORD **)(a2 + 16);
  }
  else if ( *(_DWORD *)(a2 + 8) )
  {
    v22 = (_WORD *)(a2 + *(unsigned int *)(a2 + 8));
  }
  else
  {
    v22 = 0LL;
  }
  if ( v11 >= 0 )
  {
    v23 = *(_WORD **)(a2 + 8);
  }
  else if ( *(_DWORD *)(a2 + 4) )
  {
    v23 = (_WORD *)(a2 + *(unsigned int *)(a2 + 4));
  }
  else
  {
    v23 = 0LL;
  }
  if ( (v11 & 4) == 0 )
    goto LABEL_78;
  if ( v11 >= 0 )
  {
    v24 = *(unsigned __int16 **)(a2 + 32);
  }
  else
  {
    if ( !*(_DWORD *)(a2 + 16) )
    {
LABEL_78:
      v24 = 0LL;
      goto LABEL_83;
    }
    v24 = (unsigned __int16 *)(a2 + *(unsigned int *)(a2 + 16));
  }
LABEL_83:
  if ( (*(_BYTE *)(a1 + 2) & 4) == 0 )
  {
LABEL_84:
    v25 = 0LL;
    goto LABEL_89;
  }
  if ( *(__int16 *)(a1 + 2) >= 0 )
  {
    v25 = *(_QWORD *)(a1 + 32);
  }
  else
  {
    if ( !*(_DWORD *)(a1 + 16) )
      goto LABEL_84;
    v25 = a1 + *(unsigned int *)(a1 + 16);
  }
LABEL_89:
  v10 = RtlpConvertAclToAutoInherit(v25, v24, a4, a5, v23, v22, a6, (unsigned __int64 *)&v48, &v44);
  if ( v10 >= 0 )
  {
    v51 = 1;
    v26 = v44 & 0x1408 | 4;
LABEL_93:
    v21 = v48;
    goto LABEL_94;
  }
  v33 = Src;
LABEL_117:
  if ( v43 )
    RtlFreeHeap((__int64)ProcessHeap, 0, (unsigned __int64)v33);
LABEL_119:
  *a3 = v6;
  return (unsigned int)v10;
}
