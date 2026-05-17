/*
 * XREFs of sub_1800356E0 @ 0x1800356E0
 * Callers:
 *     sub_180033CE0 @ 0x180033CE0 (sub_180033CE0.c)
 * Callees:
 *     sub_180031A38 @ 0x180031A38 (sub_180031A38.c)
 *     RtlReleaseSRWLockExclusive @ 0x180035C30 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180039340 (RtlAcquireSRWLockExclusive.c)
 *     RtlFreeHeap @ 0x180040690 (RtlFreeHeap.c)
 *     ZwReleaseWorkerFactoryWorker @ 0x18009F3F0 (ZwReleaseWorkerFactoryWorker.c)
 *     memmove @ 0x1800A32C0 (memmove.c)
 */

__int64 __fastcall sub_1800356E0(__int64 a1, __int64 a2, __int64 a3, unsigned int a4, __int64 a5, char *a6)
{
  __int64 v6; // r12
  __int64 v8; // r10
  __int64 v9; // rdx
  char v10; // r11
  int v11; // r15d
  int v12; // r9d
  int v13; // ebp
  __int64 v14; // r13
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
  _QWORD *v28; // rcx
  _QWORD *v29; // rdi
  _QWORD *v30; // rax
  _QWORD *v31; // rdx
  _QWORD *v32; // rcx
  _QWORD *v33; // rcx
  _QWORD *v34; // rax
  __int64 v35; // rax
  _QWORD *v36; // rcx
  signed __int32 v37; // edx
  int v38; // r8d
  unsigned int v39; // esi
  __int64 v40; // rax
  __int64 v41; // rdi
  unsigned int i; // esi
  _QWORD *v43; // rax
  __int64 v44; // rcx
  _QWORD *v45; // rdx
  _QWORD *v46; // rax
  unsigned int j; // esi
  __int64 v48; // rax
  __int64 v49; // rdi
  unsigned int v50; // esi
  unsigned int v51; // edi
  unsigned int v52; // edi
  __int64 v53; // [rsp+0h] [rbp-A8h] BYREF
  __int64 v54; // [rsp+20h] [rbp-88h]
  unsigned int v55; // [rsp+28h] [rbp-80h]
  _QWORD *v56; // [rsp+30h] [rbp-78h] BYREF
  _QWORD **v57; // [rsp+38h] [rbp-70h]
  _QWORD *v58; // [rsp+40h] [rbp-68h]
  _QWORD *v59; // [rsp+48h] [rbp-60h]
  __int64 v60; // [rsp+50h] [rbp-58h]
  _QWORD *v61; // [rsp+58h] [rbp-50h]
  _QWORD *v62; // [rsp+60h] [rbp-48h]
  char v63; // [rsp+B0h] [rbp+8h]
  signed __int64 v64; // [rsp+B0h] [rbp+8h]
  char v65; // [rsp+B8h] [rbp+10h]

  v6 = 0LL;
  v8 = a4;
  v9 = a1 + 304;
  LODWORD(v54) = 0;
  v10 = 0;
  v60 = a1 + 304;
  v63 = 0;
  v65 = 0;
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
    v57 = &v56;
    v15 = a3;
    v56 = &v56;
    *(_DWORD *)(v14 + 8) += a3 - 1;
    do
    {
      v16 = a2 + 32LL * --v15;
      a3 = v15;
      v17 = *(_QWORD **)v16;
      v59 = v17;
      if ( v17 )
      {
        if ( v10 )
        {
          v27 = (_QWORD *)(a2 + 56LL * v15);
          v58 = v17 + 4;
          memmove(v27, (const void *)(a2 + 32LL * v15), 0x20uLL);
          v28 = v58;
          v27[6] = v14;
          RtlAcquireSRWLockExclusive(v28);
          v29 = v27 + 4;
          v30 = v59 + 5;
          v62 = v59 + 5;
          v31 = (_QWORD *)v59[6];
          v61 = (_QWORD *)v59[5];
          if ( (_QWORD *)*v31 != v59 + 5 )
            goto LABEL_61;
          v32 = v58;
          *v29 = v30;
          v29[1] = v31;
          *v31 = v29;
          v30[1] = v29;
          RtlReleaseSRWLockExclusive(v32);
          v12 = v54 + 1;
          LODWORD(v54) = v54 + 1;
          if ( v61 == v62 )
          {
            v33 = v57;
            v34 = v59 + 2;
            if ( *v57 != &v56 )
LABEL_61:
              __fastfail(3u);
            v59[3] = v57;
            *v34 = &v56;
            ++v13;
            *v33 = v34;
            v57 = (_QWORD **)v34;
          }
          v10 = v63;
          v9 = v60;
        }
        else
        {
          v10 = 1;
          v63 = 1;
          *(_OWORD *)v9 = *(_OWORD *)v16;
          *(_OWORD *)(v9 + 16) = *(_OWORD *)(v16 + 16);
        }
      }
      else
      {
        v65 = 1;
      }
    }
    while ( v15 );
    if ( v12 != v11 - 1 && _InterlockedExchangeAdd((volatile signed __int32 *)(v14 + 8), 0xFFFFFFFF) == 1 )
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, (unsigned int)(dword_180166080 + 3145728), *(_QWORD *)v14);
    if ( v13 )
    {
      v35 = (__int64)(v56 - 2);
      v36 = &v53 + 4;
      v37 = -2;
      if ( v56 - 2 != v36 )
      {
        do
        {
          v38 = *(_DWORD *)(v35 + 8);
          v6 |= 1LL << v38;
          if ( v37 != -1 )
          {
            if ( v37 == -2 )
            {
              v37 = *(_DWORD *)(v35 + 8);
            }
            else if ( v37 != v38 )
            {
              v37 = -1;
            }
          }
          v35 = *(_QWORD *)(v35 + 16) - 16LL;
        }
        while ( (_QWORD *)v35 != v36 );
      }
      sub_180031A38(a5, v37);
      v54 = v6;
      if ( (_DWORD)v6 )
      {
        v39 = v6;
        do
        {
          v40 = *(_QWORD *)(a5 + 24);
          _BitScanForward((unsigned int *)&v41, v39);
          v55 = v41;
          RtlAcquireSRWLockExclusive(v40 + 8 * (v41 + 2 * (v41 + 1)));
          v39 &= ~(1 << v41);
        }
        while ( v39 );
      }
      for ( i = HIDWORD(v54); i; i &= ~(1 << v51) )
      {
        _BitScanForward(&v51, i);
        v55 = v51;
        RtlAcquireSRWLockExclusive(*(_QWORD *)(a5 + 24) + 8 * (v51 + 32 + 2 * (v51 + 32 + 1LL)));
      }
      while ( 1 )
      {
        v43 = v56;
        if ( v56 == &v56 )
          break;
        v44 = *v56;
        if ( *(_QWORD **)(*v56 + 8LL) != v56 )
          goto LABEL_61;
        v45 = (_QWORD *)v56[1];
        if ( (_QWORD *)*v45 != v56 )
          goto LABEL_61;
        *v45 = v44;
        *(_QWORD *)(v44 + 8) = v45;
        v9 = (__int64)v43;
        a3 = *(_QWORD *)(a5 + 24) + 24LL * *((unsigned int *)v43 - 2);
        v46 = *(_QWORD **)(a3 + 8);
        if ( *v46 != a3 )
          goto LABEL_61;
        *(_QWORD *)v9 = a3;
        *(_QWORD *)(v9 + 8) = v46;
        *v46 = v9;
        *(_QWORD *)(a3 + 8) = v9;
      }
      v54 = v6;
      if ( HIDWORD(v6) )
      {
        v50 = HIDWORD(v54);
        do
        {
          _BitScanReverse(&v52, v50);
          v55 = v52;
          RtlReleaseSRWLockExclusive(*(_QWORD *)(a5 + 24) + 8 * (v52 + 32 + 2 * (v52 + 32 + 1LL)));
          v50 &= ~(1 << v52);
        }
        while ( v50 );
      }
      for ( j = v54; j; j &= ~(1 << v49) )
      {
        v48 = *(_QWORD *)(a5 + 24);
        _BitScanReverse((unsigned int *)&v49, j);
        v55 = v49;
        RtlReleaseSRWLockExclusive(v48 + 8 * (v49 + 2 * (v49 + 1)));
      }
    }
    v18 = v63;
    v19 = v65;
  }
  _m_prefetchw((const void *)(a5 + 8));
  v20 = *(_QWORD *)(a5 + 8);
  LODWORD(v64) = v20;
  do
  {
    v21 = *(_BYTE *)(a5 + 376);
    v22 = 0;
    v23 = (unsigned int)(v13 + HIDWORD(v20));
    v24 = 0;
    HIDWORD(v64) = v13 + HIDWORD(v20);
    if ( !v21 )
    {
      v9 = (unsigned int)v64;
      a3 = (unsigned int)v64 ^ (unsigned __int16)(v64 ^ (v64 - 1));
      LODWORD(v64) = v64 ^ (unsigned __int16)(v64 ^ (v64 - 1));
      if ( v19 )
      {
        v9 = (WORD1(a3) - 1) << 16;
        a3 = (unsigned __int16)a3 | ((WORD1(a3) - 1) << 16);
        LODWORD(v64) = a3;
      }
      if ( !v18 )
      {
        if ( (_DWORD)v23 )
        {
          v23 = (unsigned int)(v23 - 1);
          HIDWORD(v64) = v23;
        }
        else
        {
          v22 = 1;
          a3 = (unsigned __int16)(a3 ^ (a3 + 1)) ^ (unsigned int)a3;
          LODWORD(v64) = a3;
        }
      }
      if ( (v13 || v19) && (_DWORD)v23 && (a3 & 0xFFFF0000) == 0 )
      {
        a3 = (unsigned int)(a3 + 0x10000);
        v24 = 1;
        LODWORD(v64) = a3;
      }
    }
    v25 = v20;
    v20 = _InterlockedCompareExchange64((volatile signed __int64 *)(a5 + 8), v64, v20);
    LODWORD(v64) = v20;
  }
  while ( v25 != v20 );
  if ( v24 )
    ZwReleaseWorkerFactoryWorker(*(_QWORD *)(a5 + 56), v9, a3, v23);
  result = v21;
  *a6 = v22;
  return result;
}
