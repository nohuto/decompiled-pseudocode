/*
 * XREFs of AlpcpExposeAttributes @ 0x1406341B0
 * Callers:
 *     AlpcpProcessConnectionRequest @ 0x1406146BC (AlpcpProcessConnectionRequest.c)
 *     AlpcpReceiveMessage @ 0x1406332D0 (AlpcpReceiveMessage.c)
 *     AlpcpProcessSynchronousRequest @ 0x140634A50 (AlpcpProcessSynchronousRequest.c)
 *     AlpcpCompleteDispatchMessage @ 0x1406366C0 (AlpcpCompleteDispatchMessage.c)
 * Callees:
 *     memset @ 0x1401D1980 (memset.c)
 *     AlpcpLockForCachedReferenceBlob @ 0x140617E4C (AlpcpLockForCachedReferenceBlob.c)
 *     AlpcpReferenceBlob @ 0x140619428 (AlpcpReferenceBlob.c)
 *     AlpcpDereferenceBlobEx @ 0x140619C70 (AlpcpDereferenceBlobEx.c)
 *     AlpcpExposeWorkOnBehalfAttribute @ 0x140634690 (AlpcpExposeWorkOnBehalfAttribute.c)
 *     AlpcpExposeTokenAttribute @ 0x140634700 (AlpcpExposeTokenAttribute.c)
 *     AlpcpExposeHandleAttribute @ 0x140634888 (AlpcpExposeHandleAttribute.c)
 *     AlpcpUnlockBlob @ 0x140638060 (AlpcpUnlockBlob.c)
 *     AlpcpExposeViewAttribute @ 0x1406A67FC (AlpcpExposeViewAttribute.c)
 *     AlpcpExposeContextAttribute32 @ 0x1406AAFA4 (AlpcpExposeContextAttribute32.c)
 */

__int64 __fastcall AlpcpExposeAttributes(__int64 a1, int a2, __int64 a3, int a4, __int64 a5)
{
  __int64 v5; // rsi
  __int64 result; // rax
  _DWORD *v7; // r12
  __int64 v8; // r14
  __int64 v10; // r15
  int v11; // r13d
  int v12; // ebp
  __int64 v13; // rcx
  __int64 v14; // rax
  int v15; // eax
  __int64 v16; // rax
  int v17; // edx
  __int64 v18; // rcx
  int v19; // r8d
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // rdi
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // rax
  __int64 v26; // r8
  int v27; // ebp
  _DWORD *v28; // rdi
  int v29; // r10d
  __int64 v30; // r8
  int v31; // r8d
  __int64 v32; // rcx
  __int64 v33; // r13
  _DWORD *v34; // r13
  __int64 v35; // rcx
  __int64 v36; // rdx
  __int64 v37; // rax
  __int64 v38; // rdi
  __int64 v39; // rcx
  __int64 v40; // rax
  __int64 v41; // rcx
  __int64 v42; // r8
  ULONG_PTR v43; // rsi
  ULONG_PTR v44; // rdi
  int v45; // ebp
  __int64 v46; // rdi
  _QWORD *v47; // [rsp+20h] [rbp-58h]
  int v48; // [rsp+28h] [rbp-50h] BYREF
  int v49; // [rsp+30h] [rbp-48h]
  int v50; // [rsp+38h] [rbp-40h]
  unsigned int v51; // [rsp+3Ch] [rbp-3Ch]
  unsigned int v52; // [rsp+40h] [rbp-38h]

  v5 = a5;
  result = 0LL;
  *(_DWORD *)(a5 + 4) = 0;
  v7 = (_DWORD *)(a5 + 4);
  v8 = a4;
  v10 = a1;
  if ( a2 < 0 )
  {
    if ( a4 < 0 && *(_QWORD *)(a3 + 136) )
    {
      *(_DWORD *)(a5 + 8) = 0;
      result = *(_QWORD *)(a3 + 136);
      a1 = *(unsigned int *)(result + 8);
      *(_DWORD *)(a5 + 16) = a1;
      *v7 |= 0x80000000;
    }
    v27 = a4 & 0x40000000;
    if ( (a4 & 0x40000000) != 0 )
    {
      v28 = (_DWORD *)(a5 + (((__int64)a4 >> 63) & 0xC) + 8);
      result = AlpcpExposeViewAttribute(a1, a3, &v48, a5 + 4);
      if ( (*v7 & 0x40000000) != 0 )
      {
        *v28 = v48;
        v28[1] = v49;
        v28[2] = v50;
        result = v52;
        v28[3] = v52;
      }
    }
    v29 = v8 & 0x20000000;
    if ( (v8 & 0x20000000) != 0 )
    {
      v30 = ((v8 >> 63) & 0xC) + 24;
      if ( !v27 )
        v30 = ((v8 >> 63) & 0xC) + 8;
      result = AlpcpExposeContextAttribute32(v10, a3, a5 + v30, a5 + 4);
    }
    v31 = v8 & 0x10000000;
    if ( (v8 & 0x10000000) != 0 )
    {
      v32 = ((v8 >> 63) & 0xC) + 24;
      if ( !v27 )
        v32 = ((v8 >> 63) & 0xC) + 8;
      v33 = v32 + 20;
      if ( !v29 )
        v33 = v32;
      v34 = (_DWORD *)(a5 + v33);
      result = AlpcpExposeHandleAttribute(v10, a3, &v48, a5 + 4);
      v29 = v8 & 0x20000000;
      v31 = v8 & 0x10000000;
      if ( (*v7 & 0x10000000) != 0 )
      {
        *v34 = v48;
        v34[1] = v49;
        v34[2] = v50;
        result = v51;
        v34[3] = v51;
      }
    }
    if ( (v8 & 0x8000000) != 0 )
    {
      v35 = ((v8 >> 63) & 0xC) + 24;
      if ( !v27 )
        v35 = ((v8 >> 63) & 0xC) + 8;
      v36 = v35 + 20;
      if ( !v29 )
        v36 = v35;
      v37 = v36 + 16;
      if ( !v31 )
        v37 = v36;
      result = AlpcpExposeTokenAttribute(v10, a3, v37 + a5, a5 + 4);
    }
    if ( (v8 & 0x2000000) != 0 )
    {
      v38 = (v8 >> 63) & 0xC;
      v39 = v38 + 24;
      if ( !v27 )
        v39 = v38 + 8;
      v40 = v39 + 20;
      if ( (v8 & 0x20000000) == 0 )
        v40 = v39;
      v41 = v40 + 16;
      if ( (v8 & 0x10000000) == 0 )
        v41 = v40;
      v42 = v41 + 24;
      if ( (v8 & 0x8000000) == 0 )
        v42 = v41;
      v26 = a5 + v42;
      return AlpcpExposeWorkOnBehalfAttribute(v10, a3, v26, v7);
    }
  }
  else
  {
    if ( a4 < 0 && *(_QWORD *)(a3 + 136) )
    {
      *(_DWORD *)(a5 + 8) = 0;
      result = *(_QWORD *)(a3 + 136);
      *(_QWORD *)(a5 + 24) = *(_QWORD *)(result + 8);
      *v7 |= 0x80000000;
    }
    v11 = a4 & 0x40000000;
    if ( (a4 & 0x40000000) != 0 )
    {
      v47 = (_QWORD *)(a5 + (((__int64)a4 >> 63) & 0x18) + 8);
      result = *(_QWORD *)(a3 + 144);
      if ( result )
      {
        v43 = *(_QWORD *)(result + 16);
        AlpcpReferenceBlob(v43);
        v44 = *(_QWORD *)(*(_QWORD *)(a3 + 144) + 16LL);
        AlpcpLockForCachedReferenceBlob(v44);
        v45 = *(_DWORD *)(v44 + 48);
        AlpcpUnlockBlob(v44);
        AlpcpDereferenceBlobEx(v43, 1);
        v46 = *(_QWORD *)(a3 + 144);
        memset(v47, 0, 0x20uLL);
        v47[2] = *(_QWORD *)(v46 + 40);
        result = *(_QWORD *)(v46 + 48);
        v47[3] = result;
        if ( (v45 & 1) != 0 )
          *(_DWORD *)v47 = 0x40000;
        *v7 |= 0x40000000u;
        v5 = a5;
      }
    }
    v12 = v8 & 0x20000000;
    if ( (v8 & 0x20000000) != 0 )
    {
      v13 = ((v8 >> 63) & 0x18) + 40;
      if ( !v11 )
        v13 = ((v8 >> 63) & 0x18) + 8;
      if ( *(_QWORD *)(a3 + 56) == v10 || *(_QWORD *)(a3 + 64) == v10 )
        v14 = *(_QWORD *)(a3 + 128);
      else
        v14 = *(_QWORD *)(a3 + 120);
      *(_QWORD *)(v13 + v5) = v14;
      if ( *(_QWORD *)(a3 + 56) == v10 || *(_QWORD *)(a3 + 64) == v10 )
        v15 = *(_DWORD *)(a3 + 72);
      else
        v15 = *(_DWORD *)(a3 + 44);
      *(_DWORD *)(v13 + v5 + 16) = v15;
      if ( (*(_DWORD *)(v10 + 416) & 6) == 4 )
        v16 = *(_QWORD *)(a3 + 104);
      else
        v16 = *(_QWORD *)(a3 + 112);
      *(_QWORD *)(v13 + v5 + 8) = v16;
      *(_DWORD *)(v13 + v5 + 20) = *(_DWORD *)(a3 + 264);
      result = *(unsigned int *)(a3 + 272);
      *(_DWORD *)(v13 + v5 + 24) = result;
      if ( a5 != -4 && *(_QWORD *)(v13 + v5) )
        *v7 |= 0x20000000u;
    }
    v17 = v8 & 0x10000000;
    if ( (v8 & 0x10000000) != 0 )
    {
      v18 = ((v8 >> 63) & 0x18) + 40;
      if ( !v11 )
        v18 = ((v8 >> 63) & 0x18) + 8;
      if ( v12 )
        v18 += 32LL;
      result = AlpcpExposeHandleAttribute(v10, a3, v18 + v5, v7);
      v17 = v8 & 0x10000000;
    }
    v19 = v8 & 0x8000000;
    if ( (v8 & 0x8000000) != 0 )
    {
      v20 = ((v8 >> 63) & 0x18) + 40;
      if ( !v11 )
        v20 = ((v8 >> 63) & 0x18) + 8;
      if ( v12 )
        v20 += 32LL;
      v21 = v20 + 24;
      if ( !v17 )
        v21 = v20;
      result = AlpcpExposeTokenAttribute(v10, a3, v5 + v21, v7);
      v19 = v8 & 0x8000000;
    }
    if ( (v8 & 0x2000000) != 0 )
    {
      v22 = (v8 >> 63) & 0x18;
      v23 = v22 + 40;
      if ( !v11 )
        v23 = v22 + 8;
      if ( v12 )
        v23 += 32LL;
      v24 = v23 + 24;
      if ( (v8 & 0x10000000) == 0 )
        v24 = v23;
      v25 = v24 + 24;
      if ( !v19 )
        v25 = v24;
      v26 = v25 + v5;
      return AlpcpExposeWorkOnBehalfAttribute(v10, a3, v26, v7);
    }
  }
  return result;
}
