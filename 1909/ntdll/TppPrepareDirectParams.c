/*
 * XREFs of TppPrepareDirectParams @ 0x1800356E0
 * Callers:
 *     TppWorkerThread @ 0x180033CE0 (TppWorkerThread.c)
 * Callees:
 *     TppUpdatePoolNodeStatus @ 0x180031A38 (TppUpdatePoolNodeStatus.c)
 *     RtlReleaseSRWLockExclusive @ 0x180035C30 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180039340 (RtlAcquireSRWLockExclusive.c)
 *     RtlFreeHeap @ 0x180040690 (RtlFreeHeap.c)
 *     NtReleaseWorkerFactoryWorker @ 0x18009FBA0 (NtReleaseWorkerFactoryWorker.c)
 *     memmove @ 0x1800A3A80 (memmove.c)
 */

__int64 __fastcall TppPrepareDirectParams(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        unsigned int a4,
        __int64 a5,
        char *a6)
{
  __int64 v6; // r12
  __int64 v8; // r10
  __int64 v9; // rdx
  char v10; // r11
  int v12; // r9d
  int v13; // ebp
  unsigned __int64 v14; // r13
  unsigned int v15; // esi
  __int64 v16; // rcx
  _RTL_SRWLOCK *v17; // rax
  bool v18; // r14
  bool v19; // r11
  signed __int64 v20; // rax
  unsigned __int8 v21; // di
  char v22; // si
  int v23; // r9d
  char v24; // r10
  unsigned int v25; // r8d
  signed __int64 v26; // rtt
  __int64 result; // rax
  unsigned __int64 *v28; // rdi
  _RTL_SRWLOCK *v29; // rcx
  unsigned __int64 *v30; // rdi
  _QWORD *v31; // rax
  unsigned __int64 **v32; // rdx
  _RTL_SRWLOCK *v33; // rcx
  _QWORD *v34; // rcx
  __int64 ***v35; // rax
  __int64 v36; // rax
  __int64 *v37; // rcx
  signed __int32 v38; // edx
  int v39; // r8d
  unsigned int v40; // esi
  __int64 v41; // rax
  __int64 v42; // rdi
  unsigned int i; // esi
  __int64 *v44; // rax
  __int64 *v45; // rcx
  __int64 **v46; // rdx
  __int64 *v47; // rdx
  __int64 v48; // r8
  __int64 **v49; // rax
  unsigned int j; // esi
  __int64 v51; // rax
  __int64 v52; // rdi
  unsigned int v53; // esi
  unsigned int v54; // edi
  unsigned int v55; // edi
  __int64 v56; // [rsp+0h] [rbp-A8h] BYREF
  __int64 v57; // [rsp+20h] [rbp-88h]
  unsigned int v58; // [rsp+28h] [rbp-80h]
  __int64 *v59; // [rsp+30h] [rbp-78h] BYREF
  __int64 **v60; // [rsp+38h] [rbp-70h]
  PRTL_SRWLOCK SRWLock; // [rsp+40h] [rbp-68h]
  unsigned __int64 *v62; // [rsp+48h] [rbp-60h]
  __int64 v63; // [rsp+50h] [rbp-58h]
  _QWORD *v64; // [rsp+58h] [rbp-50h]
  _QWORD *v65; // [rsp+60h] [rbp-48h]
  char v66; // [rsp+B0h] [rbp+8h]
  signed __int64 v67; // [rsp+B0h] [rbp+8h]
  char v68; // [rsp+B8h] [rbp+10h]

  v6 = 0LL;
  v8 = a4;
  v9 = a1 + 304;
  LODWORD(v57) = 0;
  v10 = 0;
  v63 = a1 + 304;
  v66 = 0;
  v68 = 0;
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
    v60 = &v59;
    v15 = a3;
    v59 = (__int64 *)&v59;
    *(_DWORD *)(v14 + 8) += a3 - 1;
    do
    {
      v16 = a2 + 32LL * --v15;
      v17 = *(_RTL_SRWLOCK **)v16;
      v62 = (unsigned __int64 *)v17;
      if ( v17 )
      {
        if ( v10 )
        {
          v28 = (unsigned __int64 *)(a2 + 56LL * v15);
          SRWLock = v17 + 4;
          memmove(v28, (const void *)(a2 + 32LL * v15), 0x20uLL);
          v29 = SRWLock;
          v28[6] = v14;
          RtlAcquireSRWLockExclusive(v29);
          v30 = v28 + 4;
          v31 = v62 + 5;
          v65 = v62 + 5;
          v32 = (unsigned __int64 **)v62[6];
          v64 = (_QWORD *)v62[5];
          if ( *v32 != v62 + 5 )
            goto LABEL_61;
          v33 = SRWLock;
          *v30 = (unsigned __int64)v31;
          v30[1] = (unsigned __int64)v32;
          *v32 = v30;
          v31[1] = v30;
          RtlReleaseSRWLockExclusive(v33);
          v12 = v57 + 1;
          LODWORD(v57) = v57 + 1;
          if ( v64 == v65 )
          {
            v34 = v60;
            v35 = (__int64 ***)(v62 + 2);
            if ( *v60 != (__int64 *)&v59 )
LABEL_61:
              __fastfail(3u);
            v62[3] = (unsigned __int64)v60;
            *v35 = &v59;
            ++v13;
            *v34 = v35;
            v60 = (__int64 **)v35;
          }
          v10 = v66;
          v9 = v63;
        }
        else
        {
          v10 = 1;
          v66 = 1;
          *(_OWORD *)v9 = *(_OWORD *)v16;
          *(_OWORD *)(v9 + 16) = *(_OWORD *)(v16 + 16);
        }
      }
      else
      {
        v68 = 1;
      }
    }
    while ( v15 );
    if ( v12 != a3 - 1 && _InterlockedExchangeAdd((volatile signed __int32 *)(v14 + 8), 0xFFFFFFFF) == 1 )
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, TppHeapTag + 3145728, *(PVOID *)v14);
    if ( v13 )
    {
      v36 = (__int64)(v59 - 2);
      v37 = &v56 + 4;
      v38 = -2;
      if ( v59 - 2 != v37 )
      {
        do
        {
          v39 = *(_DWORD *)(v36 + 8);
          v6 |= 1LL << v39;
          if ( v38 != -1 )
          {
            if ( v38 == -2 )
            {
              v38 = *(_DWORD *)(v36 + 8);
            }
            else if ( v38 != v39 )
            {
              v38 = -1;
            }
          }
          v36 = *(_QWORD *)(v36 + 16) - 16LL;
        }
        while ( (__int64 *)v36 != v37 );
      }
      TppUpdatePoolNodeStatus(a5, v38);
      v57 = v6;
      if ( (_DWORD)v6 )
      {
        v40 = v6;
        do
        {
          v41 = *(_QWORD *)(a5 + 24);
          _BitScanForward((unsigned int *)&v42, v40);
          v58 = v42;
          RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)(v41 + 8 * (v42 + 2 * (v42 + 1))));
          v40 &= ~(1 << v42);
        }
        while ( v40 );
      }
      for ( i = HIDWORD(v57); i; i &= ~(1 << v54) )
      {
        _BitScanForward(&v54, i);
        v58 = v54;
        RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)(*(_QWORD *)(a5 + 24) + 8 * (v54 + 32 + 2 * (v54 + 32 + 1LL))));
      }
      while ( 1 )
      {
        v44 = v59;
        if ( v59 == (__int64 *)&v59 )
          break;
        v45 = (__int64 *)*v59;
        if ( *(__int64 **)(*v59 + 8) != v59 )
          goto LABEL_61;
        v46 = (__int64 **)v59[1];
        if ( *v46 != v59 )
          goto LABEL_61;
        *v46 = v45;
        v45[1] = (__int64)v46;
        v47 = v44;
        v48 = *(_QWORD *)(a5 + 24) + 24LL * *((unsigned int *)v44 - 2);
        v49 = *(__int64 ***)(v48 + 8);
        if ( *v49 != (__int64 *)v48 )
          goto LABEL_61;
        *v47 = v48;
        v47[1] = (__int64)v49;
        *v49 = v47;
        *(_QWORD *)(v48 + 8) = v47;
      }
      v57 = v6;
      if ( HIDWORD(v6) )
      {
        v53 = HIDWORD(v57);
        do
        {
          _BitScanReverse(&v55, v53);
          v58 = v55;
          RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)(*(_QWORD *)(a5 + 24) + 8 * (v55 + 32 + 2 * (v55 + 32 + 1LL))));
          v53 &= ~(1 << v55);
        }
        while ( v53 );
      }
      for ( j = v57; j; j &= ~(1 << v52) )
      {
        v51 = *(_QWORD *)(a5 + 24);
        _BitScanReverse((unsigned int *)&v52, j);
        v58 = v52;
        RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)(v51 + 8 * (v52 + 2 * (v52 + 1))));
      }
    }
    v18 = v66;
    v19 = v68;
  }
  _m_prefetchw((const void *)(a5 + 8));
  v20 = *(_QWORD *)(a5 + 8);
  LODWORD(v67) = v20;
  do
  {
    v21 = *(_BYTE *)(a5 + 376);
    v22 = 0;
    v23 = v13 + HIDWORD(v20);
    v24 = 0;
    HIDWORD(v67) = v13 + HIDWORD(v20);
    if ( !v21 )
    {
      v25 = v67 ^ (unsigned __int16)(v67 ^ (v67 - 1));
      LODWORD(v67) = v25;
      if ( v19 )
      {
        v25 = (unsigned __int16)v25 | ((HIWORD(v25) - 1) << 16);
        LODWORD(v67) = v25;
      }
      if ( !v18 )
      {
        if ( v23 )
        {
          HIDWORD(v67) = --v23;
        }
        else
        {
          v22 = 1;
          v25 ^= (unsigned __int16)(v25 ^ (v25 + 1));
          LODWORD(v67) = v25;
        }
      }
      if ( (v13 || v19) && v23 && (v25 & 0xFFFF0000) == 0 )
      {
        v24 = 1;
        LODWORD(v67) = v25 + 0x10000;
      }
    }
    v26 = v20;
    v20 = _InterlockedCompareExchange64((volatile signed __int64 *)(a5 + 8), v67, v20);
    LODWORD(v67) = v20;
  }
  while ( v26 != v20 );
  if ( v24 )
    NtReleaseWorkerFactoryWorker(*(HANDLE *)(a5 + 56));
  result = v21;
  *a6 = v22;
  return result;
}
