/*
 * XREFs of ?bTryLockShadowR@MULTIPANSURFLOCK@@QEAAHPEAU_RECTL@@PEAU_CLIPOBJ@@@Z @ 0x1C027A8DC
 * Callers:
 *     ??0MULTIPANSURFLOCK@@QEAA@PEAU_PANDEV@@PEAPEAU_SURFOBJ@@1PEAU_RECTL@@2PEAHPEAU_CLIPOBJ@@@Z @ 0x1C027881C (--0MULTIPANSURFLOCK@@QEAA@PEAU_PANDEV@@PEAPEAU_SURFOBJ@@1PEAU_RECTL@@2PEAHPEAU_CLIPOBJ@@@Z.c)
 * Callees:
 *     ?bEmpty@ERECTL@@QEBAHXZ @ 0x1C004EF64 (-bEmpty@ERECTL@@QEBAHXZ.c)
 *     ??XERECTL@@QEAAAEAV0@AEBU_RECTL@@@Z @ 0x1C00539F4 (--XERECTL@@QEAAAEAV0@AEBU_RECTL@@@Z.c)
 *     ?vOrder@ERECTL@@QEAAXXZ @ 0x1C009E31C (-vOrder@ERECTL@@QEAAXXZ.c)
 *     memset @ 0x1C0163640 (memset.c)
 *     ?ShadowUnLockWait@@YAXPEAU_PANDEV@@@Z @ 0x1C027A714 (-ShadowUnLockWait@@YAXPEAU_PANDEV@@@Z.c)
 *     ?vUnLockShadowR@MULTIPANSURFLOCK@@QEAAXXZ @ 0x1C027B728 (-vUnLockShadowR@MULTIPANSURFLOCK@@QEAAXXZ.c)
 */

__int64 __fastcall MULTIPANSURFLOCK::bTryLockShadowR(MULTIPANSURFLOCK *this, struct _RECTL *a2, struct _CLIPOBJ *a3)
{
  __int64 v4; // rsi
  unsigned int v5; // edi
  __int64 v6; // rdx
  __int64 v7; // rax
  __int64 v8; // rax
  int v9; // ecx
  __int64 v10; // rax
  __int64 v11; // rcx
  signed int v12; // eax
  __int64 v13; // rcx
  __int64 v14; // r13
  int v15; // eax
  __int64 v16; // rcx
  int v17; // r14d
  __int64 v18; // r12
  int v19; // eax
  int v20; // r15d
  __int64 v21; // rcx
  int v22; // r14d
  __int64 v23; // rsi
  __int64 v24; // rdx
  __int64 v25; // rax
  __int64 v26; // rcx
  char *v27; // r12
  __int64 v28; // r13
  __int64 v29; // rax
  __int64 v30; // r14
  __int64 v31; // r15
  __int64 v32; // rcx
  __int64 v33; // rcx
  __int64 i; // rsi
  __int64 v36; // r14
  char *v37; // r15
  __int64 v38; // rax
  struct _PANDEV *v39; // rcx
  signed __int32 v40[8]; // [rsp+0h] [rbp-50h] BYREF
  __int128 v41; // [rsp+30h] [rbp-20h] BYREF
  __int64 v42; // [rsp+40h] [rbp-10h] BYREF
  int v43; // [rsp+48h] [rbp-8h]
  int v44; // [rsp+4Ch] [rbp-4h]
  __int64 v45; // [rsp+90h] [rbp+40h]
  __int64 v46; // [rsp+A0h] [rbp+50h]
  __int64 v47; // [rsp+A8h] [rbp+58h]

  v41 = (__int128)*a2;
  ERECTL::vOrder((ERECTL *)&v41);
  v4 = *((_QWORD *)this + 4);
  v5 = 0;
  v6 = v4;
  if ( v4 )
  {
    v7 = *((_QWORD *)this + 4);
  }
  else
  {
    v6 = *((_QWORD *)this + 5);
    v7 = v6;
  }
  v8 = *(_QWORD *)(v7 + 64);
  v42 = 0LL;
  v9 = *(_DWORD *)(v8 + 32);
  v10 = *(_QWORD *)(v6 + 64);
  v43 = v9;
  v44 = *(_DWORD *)(v10 + 36);
  ERECTL::operator*=((int *)&v41, (int *)&v42);
  if ( ERECTL::bEmpty((ERECTL *)&v41) )
    return 1;
  v11 = v4;
  if ( !v4 )
    v11 = *((_QWORD *)this + 5);
  v12 = (unsigned int)v41 / *(_DWORD *)(v11 + 768);
  v13 = v4;
  v14 = v12;
  if ( !v4 )
    v13 = *((_QWORD *)this + 5);
  v15 = DWORD2(v41) / *(_DWORD *)(v13 + 768);
  v16 = v4;
  v17 = v15;
  if ( !v4 )
    v16 = *((_QWORD *)this + 5);
  v18 = DWORD1(v41) / *(_DWORD *)(v16 + 772);
  if ( !v4 )
    v4 = *((_QWORD *)this + 5);
  v19 = HIDWORD(v41) / *(_DWORD *)(v4 + 772);
  *((_BYTE *)this + 48) = 1;
  v20 = v19 + 1;
  memset((char *)this + 50, 0, 0x51uLL);
  v21 = *((_QWORD *)this + 4);
  v22 = v17 + 1;
  if ( !v21 )
    v21 = *((_QWORD *)this + 5);
  KeWaitForSingleObject((PVOID)(*(_QWORD *)(v21 + 784) + 32LL), UserRequest, 0, 0, 0LL);
  v23 = v18;
  v24 = v22;
  v45 = v22;
  v46 = v20;
  if ( v18 >= v20 )
  {
LABEL_24:
    v33 = *((_QWORD *)this + 4);
    if ( !v33 )
      v33 = *((_QWORD *)this + 5);
    KeReleaseMutex((PRKMUTEX)(*(_QWORD *)(v33 + 784) + 32LL), 0);
    return 1;
  }
  v25 = 9 * v18;
  v26 = v14;
  v47 = v14;
  v27 = (char *)this + 9 * v18 + 50;
  v28 = 8 * (v14 + v25) + 120;
  v29 = v20;
  while ( 1 )
  {
    v30 = v26;
    if ( v26 < v24 )
      break;
LABEL_23:
    ++v23;
    v28 += 72LL;
    v27 += 9;
    if ( v23 >= v29 )
      goto LABEL_24;
  }
  v31 = v28;
  while ( 1 )
  {
    v32 = *((_QWORD *)this + 4);
    if ( !v32 )
      v32 = *((_QWORD *)this + 5);
    if ( (unsigned int)EngAcquireSemaphoreSharedNoWait(*(_QWORD *)(v31 + v32)) != 1 )
      break;
    v24 = v45;
    v31 += 8LL;
    v27[v30++] = 1;
    if ( v30 >= v45 )
    {
      v26 = v47;
      v29 = v46;
      goto LABEL_23;
    }
  }
  for ( i = 87LL; i >= 15; i -= 9LL )
  {
    v36 = 8LL;
    v37 = (char *)this + i;
    do
    {
      if ( v37[v36 + 116] == 1 )
      {
        v38 = *((_QWORD *)this + 4);
        if ( !v38 )
          v38 = *((_QWORD *)this + 5);
        EngReleaseSemaphore(*(HSEMAPHORE *)(v38 + 8 * (i + v36)));
        v37[v36 + 116] = 0;
      }
      --v36;
    }
    while ( v36 >= 0 );
  }
  memset((char *)this + 131, 0, 0x51uLL);
  _InterlockedOr(v40, 0);
  MULTIPANSURFLOCK::vUnLockShadowR(this);
  v39 = (struct _PANDEV *)*((_QWORD *)this + 4);
  if ( !v39 )
    v39 = (struct _PANDEV *)*((_QWORD *)this + 5);
  ShadowUnLockWait(v39);
  memset((char *)this + 50, 0, 0x51uLL);
  *((_BYTE *)this + 48) = 0;
  return v5;
}
