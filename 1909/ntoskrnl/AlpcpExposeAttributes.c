/*
 * XREFs of AlpcpExposeAttributes @ 0x1405DFFB0
 * Callers:
 *     AlpcpReceiveMessage @ 0x1405DF870 (AlpcpReceiveMessage.c)
 *     AlpcpProcessSynchronousRequest @ 0x1405E0F10 (AlpcpProcessSynchronousRequest.c)
 *     AlpcpCompleteDispatchMessage @ 0x1405E2BE0 (AlpcpCompleteDispatchMessage.c)
 *     AlpcpProcessConnectionRequest @ 0x14065930C (AlpcpProcessConnectionRequest.c)
 * Callees:
 *     memset @ 0x1401D77C0 (memset.c)
 *     AlpcpExposeWorkOnBehalfAttribute @ 0x1405E0410 (AlpcpExposeWorkOnBehalfAttribute.c)
 *     AlpcpExposeTokenAttribute @ 0x1405E0490 (AlpcpExposeTokenAttribute.c)
 *     AlpcpExposeHandleAttribute @ 0x1405E0630 (AlpcpExposeHandleAttribute.c)
 *     AlpcpUnlockBlob @ 0x1405E4F60 (AlpcpUnlockBlob.c)
 *     AlpcpLockForCachedReferenceBlob @ 0x14065E4F8 (AlpcpLockForCachedReferenceBlob.c)
 *     AlpcpDereferenceBlobEx @ 0x14065EDF0 (AlpcpDereferenceBlobEx.c)
 *     AlpcpReferenceBlob @ 0x14065F5C0 (AlpcpReferenceBlob.c)
 *     AlpcpExposeViewAttribute32 @ 0x1406C978C (AlpcpExposeViewAttribute32.c)
 *     AlpcpExposeContextAttribute32 @ 0x1406CC1C8 (AlpcpExposeContextAttribute32.c)
 *     AlpcpExposeHandleAttribute32 @ 0x1406CCD4C (AlpcpExposeHandleAttribute32.c)
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
  int v26; // r13d
  int v27; // ebp
  __int64 v28; // r8
  __int64 v29; // rdi
  int v30; // edx
  __int64 v31; // rcx
  __int64 v32; // r8
  __int64 v33; // rdi
  int v34; // r8d
  __int64 v35; // rax
  __int64 v36; // rcx
  __int64 v37; // r8
  __int64 v38; // rax
  __int64 v39; // rcx
  __int64 v40; // rdx
  ULONG_PTR v41; // rsi
  ULONG_PTR v42; // rdi
  int v43; // ebp
  __int64 v44; // rdi
  _QWORD *v45; // [rsp+20h] [rbp-38h]

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
    v26 = a4 & 0x40000000;
    if ( (a4 & 0x40000000) != 0 )
      result = AlpcpExposeViewAttribute32(a1, a3, a5 + (((__int64)a4 >> 63) & 0xC) + 8, a5 + 4);
    v27 = v8 & 0x20000000;
    if ( (v8 & 0x20000000) != 0 )
    {
      v28 = ((v8 >> 63) & 0xC) + 24;
      if ( !v26 )
        v28 = ((v8 >> 63) & 0xC) + 8;
      result = AlpcpExposeContextAttribute32(v10, a3, a5 + v28, a5 + 4);
    }
    v29 = (v8 >> 63) & 0xC;
    v30 = v8 & 0x10000000;
    if ( (v8 & 0x10000000) != 0 )
    {
      v31 = v29 + 24;
      if ( !v26 )
        v31 = v29 + 8;
      v32 = v31 + 20;
      if ( !v27 )
        v32 = v31;
      result = AlpcpExposeHandleAttribute32(v10, a3, a5 + v32, a5 + 4);
      v30 = v8 & 0x10000000;
    }
    v33 = v29 + 8;
    v34 = v8 & 0x8000000;
    if ( (v8 & 0x8000000) != 0 )
    {
      v35 = v33 + 16;
      if ( !v26 )
        v35 = v33;
      v36 = v35 + 20;
      if ( !v27 )
        v36 = v35;
      v37 = v36 + 16;
      if ( !v30 )
        v37 = v36;
      result = AlpcpExposeTokenAttribute(v10, a3, a5 + v37, a5 + 4);
      v34 = v8 & 0x8000000;
    }
    if ( (v8 & 0x2000000) != 0 )
    {
      v38 = v33 + 16;
      if ( !v26 )
        v38 = v33;
      v39 = v38 + 20;
      if ( !v27 )
        v39 = v38;
      v40 = v39 + 16;
      if ( (v8 & 0x10000000) == 0 )
        v40 = v39;
      v25 = v40 + 24;
      if ( !v34 )
        v25 = v40;
      return AlpcpExposeWorkOnBehalfAttribute(v10, a3, v25 + v5, v7);
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
      v45 = (_QWORD *)(a5 + (((__int64)a4 >> 63) & 0x18) + 8);
      result = *(_QWORD *)(a3 + 144);
      if ( result )
      {
        v41 = *(_QWORD *)(result + 16);
        AlpcpReferenceBlob(v41);
        v42 = *(_QWORD *)(*(_QWORD *)(a3 + 144) + 16LL);
        AlpcpLockForCachedReferenceBlob(v42);
        v43 = *(_DWORD *)(v42 + 48);
        AlpcpUnlockBlob(v42);
        AlpcpDereferenceBlobEx(v41);
        v44 = *(_QWORD *)(a3 + 144);
        memset(v45, 0, 0x20uLL);
        v45[2] = *(_QWORD *)(v44 + 40);
        result = *(_QWORD *)(v44 + 48);
        v45[3] = result;
        if ( (v43 & 1) != 0 )
          *(_DWORD *)v45 = 0x40000;
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
      return AlpcpExposeWorkOnBehalfAttribute(v10, a3, v25 + v5, v7);
    }
  }
  return result;
}
