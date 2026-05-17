/*
 * XREFs of TppPrepareDirectParams @ 0x180017430
 * Callers:
 *     TppWorkerThread @ 0x180016320 (TppWorkerThread.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180015B60 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180015FF0 (RtlAcquireSRWLockExclusive.c)
 *     RtlFreeHeap @ 0x180017E40 (RtlFreeHeap.c)
 *     TppUpdatePoolNodeStatus @ 0x1800856FC (TppUpdatePoolNodeStatus.c)
 *     NtReleaseWorkerFactoryWorker @ 0x1800A2FD0 (NtReleaseWorkerFactoryWorker.c)
 *     memmove @ 0x1800A6DC0 (memmove.c)
 */

__int64 __fastcall TppPrepareDirectParams(__int64 a1, __int64 a2, __int64 a3, unsigned int a4, __int64 a5, char *a6)
{
  __int64 v6; // r15
  __int64 v8; // r10
  unsigned __int64 v9; // rdx
  char v10; // r11
  int v11; // r13d
  int v12; // r9d
  int v13; // ebp
  __int64 v14; // r12
  unsigned int v15; // esi
  __int64 v16; // rcx
  _QWORD *v17; // rax
  bool v18; // r14
  bool v19; // r11
  signed __int64 v20; // rax
  unsigned __int8 v21; // di
  char v22; // si
  __int64 v23; // r9
  char v24; // r10
  signed __int64 v25; // rtt
  __int64 result; // rax
  _QWORD *v27; // rdi
  unsigned __int64 v28; // rcx
  unsigned __int64 v29; // rdx
  unsigned __int64 *v30; // r8
  __int64 v31; // r9
  _QWORD *v32; // rdi
  _QWORD *v33; // rax
  _QWORD *v34; // rdx
  volatile signed __int64 *v35; // rcx
  _QWORD *v36; // rcx
  _QWORD *v37; // rax
  __int64 v38; // rax
  _QWORD *v39; // rcx
  __int64 v40; // rdx
  __int64 v41; // r9
  unsigned int v42; // esi
  __int64 v43; // rax
  __int64 v44; // rdi
  unsigned int i; // esi
  _QWORD *v46; // rax
  __int64 v47; // rcx
  _QWORD *v48; // rdx
  unsigned __int64 *v49; // rax
  unsigned int j; // esi
  __int64 v51; // rax
  __int64 v52; // rdi
  unsigned int v53; // esi
  unsigned int v54; // edi
  unsigned __int64 v55; // rdx
  unsigned int v56; // edi
  __int64 v57; // [rsp+0h] [rbp-A8h] BYREF
  __int64 v58; // [rsp+20h] [rbp-88h]
  unsigned int v59; // [rsp+28h] [rbp-80h]
  _QWORD *v60; // [rsp+30h] [rbp-78h] BYREF
  _QWORD **v61; // [rsp+38h] [rbp-70h]
  volatile signed __int64 *v62; // [rsp+40h] [rbp-68h]
  _QWORD *v63; // [rsp+48h] [rbp-60h]
  unsigned __int64 v64; // [rsp+50h] [rbp-58h]
  _QWORD *v65; // [rsp+58h] [rbp-50h]
  _QWORD *v66; // [rsp+60h] [rbp-48h]
  char v67; // [rsp+B0h] [rbp+8h]
  signed __int64 v68; // [rsp+B0h] [rbp+8h]
  char v69; // [rsp+B8h] [rbp+10h]

  v6 = 0LL;
  v8 = a4;
  v9 = a1 + 304;
  LODWORD(v58) = 0;
  v10 = 0;
  v64 = a1 + 304;
  v67 = 0;
  v69 = 0;
  v11 = a3;
  v12 = 0;
  v13 = 0;
  if ( a2 == a1 + 304 )
  {
    v18 = *(_QWORD *)v9 != 0LL;
    v19 = *(_QWORD *)v9 == 0LL;
  }
  else
  {
    *(_QWORD *)v9 = 0LL;
    v14 = a2 + 56 * v8;
    v61 = &v60;
    v15 = a3;
    v60 = &v60;
    *(_DWORD *)(v14 + 8) += a3 - 1;
    do
    {
      v16 = a2 + 32LL * --v15;
      a3 = v15;
      v17 = *(_QWORD **)v16;
      v63 = v17;
      if ( v17 )
      {
        if ( v10 )
        {
          v27 = (_QWORD *)(a2 + 56LL * v15);
          v62 = v17 + 4;
          memmove(v27, (const void *)(a2 + 32LL * v15), 0x20uLL);
          v28 = (unsigned __int64)v62;
          v27[6] = v14;
          RtlAcquireSRWLockExclusive(v28, v29, v30, v31);
          v32 = v27 + 4;
          v33 = v63 + 5;
          v66 = v63 + 5;
          v34 = (_QWORD *)v63[6];
          v65 = (_QWORD *)v63[5];
          if ( (_QWORD *)*v34 != v63 + 5 )
            goto LABEL_61;
          v35 = v62;
          *v32 = v33;
          v32[1] = v34;
          *v34 = v32;
          v33[1] = v32;
          RtlReleaseSRWLockExclusive(v35);
          v12 = v58 + 1;
          LODWORD(v58) = v58 + 1;
          if ( v65 == v66 )
          {
            v36 = v61;
            v37 = v63 + 2;
            if ( *v61 != &v60 )
LABEL_61:
              __fastfail(3u);
            v63[3] = v61;
            *v37 = &v60;
            ++v13;
            *v36 = v37;
            v61 = (_QWORD **)v37;
          }
          v10 = v67;
          v9 = v64;
        }
        else
        {
          v10 = 1;
          v67 = 1;
          *(_OWORD *)v9 = *(_OWORD *)v16;
          *(_OWORD *)(v9 + 16) = *(_OWORD *)(v16 + 16);
        }
      }
      else
      {
        v69 = 1;
      }
    }
    while ( v15 );
    if ( v12 != v11 - 1 && _InterlockedExchangeAdd((volatile signed __int32 *)(v14 + 8), 0xFFFFFFFF) == 1 )
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, (unsigned int)(TppHeapTag + 3145728), *(_QWORD *)v14);
    if ( v13 )
    {
      v38 = (__int64)(v60 - 2);
      v39 = &v57 + 4;
      v40 = 4294967294LL;
      if ( v60 - 2 != v39 )
      {
        do
        {
          a3 = *(unsigned int *)(v38 + 8);
          v6 |= 1LL << a3;
          if ( (_DWORD)v40 != -1 )
          {
            if ( (_DWORD)v40 == -2 )
            {
              v40 = (unsigned int)a3;
            }
            else if ( (_DWORD)v40 != (_DWORD)a3 )
            {
              v40 = 0xFFFFFFFFLL;
            }
          }
          v38 = *(_QWORD *)(v38 + 16) - 16LL;
        }
        while ( (_QWORD *)v38 != v39 );
      }
      TppUpdatePoolNodeStatus(a5, v40, a3);
      v58 = v6;
      if ( (_DWORD)v6 )
      {
        v42 = v6;
        do
        {
          v43 = *(_QWORD *)(a5 + 24);
          _BitScanForward((unsigned int *)&v44, v42);
          v59 = v44;
          RtlAcquireSRWLockExclusive(v43 + 8 * (v44 + 2 * (v44 + 1)), v9, (unsigned __int64 *)a3, v41);
          v42 &= ~(1 << v44);
        }
        while ( v42 );
      }
      for ( i = HIDWORD(v58); i; i &= ~(1 << v54) )
      {
        _BitScanForward(&v54, i);
        v59 = v54;
        v55 = v54 + 32 + 2 * (v54 + 32 + 1LL);
        RtlAcquireSRWLockExclusive(*(_QWORD *)(a5 + 24) + 8 * v55, v55, (unsigned __int64 *)a3, v41);
      }
      while ( 1 )
      {
        v46 = v60;
        if ( v60 == &v60 )
          break;
        v47 = *v60;
        if ( *(_QWORD **)(*v60 + 8LL) != v60 )
          goto LABEL_61;
        v48 = (_QWORD *)v60[1];
        if ( (_QWORD *)*v48 != v60 )
          goto LABEL_61;
        *v48 = v47;
        *(_QWORD *)(v47 + 8) = v48;
        v9 = (unsigned __int64)v46;
        a3 = *(_QWORD *)(a5 + 24) + 24LL * *((unsigned int *)v46 - 2);
        v49 = *(unsigned __int64 **)(a3 + 8);
        if ( *v49 != a3 )
          goto LABEL_61;
        *(_QWORD *)v9 = a3;
        *(_QWORD *)(v9 + 8) = v49;
        *v49 = v9;
        *(_QWORD *)(a3 + 8) = v9;
      }
      v58 = v6;
      if ( HIDWORD(v6) )
      {
        v53 = HIDWORD(v58);
        do
        {
          _BitScanReverse(&v56, v53);
          v59 = v56;
          RtlReleaseSRWLockExclusive((volatile signed __int64 *)(*(_QWORD *)(a5 + 24)
                                                               + 8 * (v56 + 32 + 2 * (v56 + 32 + 1LL))));
          v53 &= ~(1 << v56);
        }
        while ( v53 );
      }
      for ( j = v58; j; j &= ~(1 << v52) )
      {
        v51 = *(_QWORD *)(a5 + 24);
        _BitScanReverse((unsigned int *)&v52, j);
        v59 = v52;
        RtlReleaseSRWLockExclusive((volatile signed __int64 *)(v51 + 8 * (v52 + 2 * (v52 + 1))));
      }
    }
    v18 = v67;
    v19 = v69;
  }
  _m_prefetchw((const void *)(a5 + 8));
  v20 = *(_QWORD *)(a5 + 8);
  LODWORD(v68) = v20;
  do
  {
    v21 = *(_BYTE *)(a5 + 376);
    v22 = 0;
    v23 = (unsigned int)(v13 + HIDWORD(v20));
    v24 = 0;
    HIDWORD(v68) = v13 + HIDWORD(v20);
    if ( !v21 )
    {
      v9 = (unsigned int)v68;
      a3 = (unsigned int)v68 ^ (unsigned __int16)(v68 ^ (v68 - 1));
      LODWORD(v68) = v68 ^ (unsigned __int16)(v68 ^ (v68 - 1));
      if ( v19 )
      {
        v9 = (WORD1(a3) - 1) << 16;
        a3 = (unsigned __int16)a3 | ((WORD1(a3) - 1) << 16);
        LODWORD(v68) = a3;
      }
      if ( !v18 )
      {
        if ( (_DWORD)v23 )
        {
          v23 = (unsigned int)(v23 - 1);
          HIDWORD(v68) = v23;
        }
        else
        {
          v22 = 1;
          a3 = (unsigned __int16)(a3 ^ (a3 + 1)) ^ (unsigned int)a3;
          LODWORD(v68) = a3;
        }
      }
      if ( (v13 || v19) && (_DWORD)v23 && (a3 & 0xFFFF0000) == 0 )
      {
        a3 = (unsigned int)(a3 + 0x10000);
        v24 = 1;
        LODWORD(v68) = a3;
      }
    }
    v25 = v20;
    v20 = _InterlockedCompareExchange64((volatile signed __int64 *)(a5 + 8), v68, v20);
    LODWORD(v68) = v20;
  }
  while ( v25 != v20 );
  if ( v24 )
    NtReleaseWorkerFactoryWorker(*(_QWORD *)(a5 + 56), v9, a3, v23);
  result = v21;
  *a6 = v22;
  return result;
}
