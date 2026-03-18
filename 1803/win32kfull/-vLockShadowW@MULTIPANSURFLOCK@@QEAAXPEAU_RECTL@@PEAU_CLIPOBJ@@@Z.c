/*
 * XREFs of ?vLockShadowW@MULTIPANSURFLOCK@@QEAAXPEAU_RECTL@@PEAU_CLIPOBJ@@@Z @ 0x1C0267378
 * Callers:
 *     ??0MULTIPANSURFLOCK@@QEAA@PEAU_PANDEV@@PEAPEAU_SURFOBJ@@1PEAU_RECTL@@2PEAHPEAU_CLIPOBJ@@@Z @ 0x1C0264CD0 (--0MULTIPANSURFLOCK@@QEAA@PEAU_PANDEV@@PEAPEAU_SURFOBJ@@1PEAU_RECTL@@2PEAHPEAU_CLIPOBJ@@@Z.c)
 * Callees:
 *     ?vOrder@ERECTL@@QEAAXXZ @ 0x1C00A512C (-vOrder@ERECTL@@QEAAXXZ.c)
 *     ??XERECTL@@QEAAAEAV0@AEBU_RECTL@@@Z @ 0x1C00A51E0 (--XERECTL@@QEAAAEAV0@AEBU_RECTL@@@Z.c)
 *     ?bEmpty@ERECTL@@QEBAHXZ @ 0x1C00A524C (-bEmpty@ERECTL@@QEBAHXZ.c)
 *     memset @ 0x1C013D6C0 (memset.c)
 *     ?ShadowUnLockWait@@YAXPEAU_PANDEV@@@Z @ 0x1C0266A54 (-ShadowUnLockWait@@YAXPEAU_PANDEV@@@Z.c)
 */

void __fastcall MULTIPANSURFLOCK::vLockShadowW(MULTIPANSURFLOCK *this, struct _RECTL *a2, struct _CLIPOBJ *a3)
{
  LONG top; // ecx
  LONG left; // eax
  LONG v6; // eax
  LONG right; // ecx
  LONG v8; // eax
  LONG bottom; // ecx
  LONG v10; // eax
  __int64 v11; // rbx
  __int64 v12; // rdx
  __int64 v13; // rax
  __int64 v14; // rax
  int v15; // ecx
  __int64 v16; // rax
  __int64 v17; // rcx
  signed int v18; // eax
  __int64 v19; // rcx
  __int64 v20; // r15
  int v21; // eax
  __int64 v22; // rcx
  int v23; // r14d
  __int64 v24; // rsi
  int v25; // eax
  int v26; // ebx
  __int64 v27; // r13
  __int64 v28; // rax
  __int64 v29; // rbx
  __int64 v30; // rax
  char *v31; // rsi
  __int64 v32; // r12
  __int64 v33; // rcx
  __int64 v34; // rax
  __int64 v35; // r14
  __int64 v36; // rcx
  char *v37; // r15
  __int64 v38; // rbx
  __int64 v39; // rsi
  __int64 v40; // rcx
  __int64 i; // rbx
  __int64 v42; // rsi
  char *v43; // r14
  __int64 v44; // rax
  struct _PANDEV *v45; // rcx
  __int64 v46; // rcx
  char *v47; // [rsp+30h] [rbp-20h] BYREF
  int v48; // [rsp+38h] [rbp-18h]
  int v49; // [rsp+3Ch] [rbp-14h]
  __int128 v50; // [rsp+40h] [rbp-10h] BYREF
  __int64 v51; // [rsp+90h] [rbp+40h]
  __int64 v52; // [rsp+A0h] [rbp+50h]
  __int64 v53; // [rsp+A8h] [rbp+58h]

  if ( a3 && a3->iDComplexity )
  {
    top = a3->rclBounds.top;
    left = a2->left;
    if ( a3->rclBounds.left > a2->left )
      left = a3->rclBounds.left;
    LODWORD(v50) = left;
    v6 = a2->top;
    if ( top > v6 )
      v6 = top;
    right = a3->rclBounds.right;
    DWORD1(v50) = v6;
    v8 = a2->right;
    if ( right < v8 )
      v8 = right;
    bottom = a3->rclBounds.bottom;
    DWORD2(v50) = v8;
    v10 = a2->bottom;
    if ( bottom < v10 )
      v10 = bottom;
    HIDWORD(v50) = v10;
  }
  else
  {
    v50 = (__int128)*a2;
  }
  ERECTL::vOrder((ERECTL *)&v50);
  v11 = *((_QWORD *)this + 4);
  v12 = v11;
  if ( v11 )
  {
    v13 = *((_QWORD *)this + 4);
  }
  else
  {
    v12 = *((_QWORD *)this + 5);
    v13 = v12;
  }
  v14 = *(_QWORD *)(v13 + 64);
  v47 = 0LL;
  v15 = *(_DWORD *)(v14 + 32);
  v16 = *(_QWORD *)(v12 + 64);
  v48 = v15;
  v49 = *(_DWORD *)(v16 + 36);
  ERECTL::operator*=((int *)&v50, (int *)&v47);
  if ( !ERECTL::bEmpty((ERECTL *)&v50) )
  {
    v17 = v11;
    if ( !v11 )
      v17 = *((_QWORD *)this + 5);
    v18 = (unsigned int)v50 / *(_DWORD *)(v17 + 768);
    v19 = v11;
    v20 = v18;
    if ( !v11 )
      v19 = *((_QWORD *)this + 5);
    v21 = DWORD2(v50) / *(_DWORD *)(v19 + 768);
    v22 = v11;
    v23 = v21;
    if ( !v11 )
      v22 = *((_QWORD *)this + 5);
    v24 = DWORD1(v50) / *(_DWORD *)(v22 + 772);
    if ( !v11 )
      v11 = *((_QWORD *)this + 5);
    v25 = HIDWORD(v50) / *(_DWORD *)(v11 + 772);
    *((_BYTE *)this + 49) = 1;
    v26 = v25;
    memset((char *)this + 131, 0, 0x51uLL);
    v27 = v20;
    v28 = v26 + 1;
    v29 = v24;
    v52 = v28;
    v51 = v23 + 1;
    v30 = 9 * v24;
    v53 = v24;
    v31 = (char *)this + 9 * v24 + 131;
    v47 = v31;
    v32 = 8 * (v20 + v30) + 120;
    *(_QWORD *)&v50 = v32;
LABEL_25:
    v33 = *((_QWORD *)this + 4);
    if ( !v33 )
      v33 = *((_QWORD *)this + 5);
    KeWaitForSingleObject((PVOID)(*(_QWORD *)(v33 + 784) + 32LL), UserRequest, 0, 0, 0LL);
    v34 = v51;
    v35 = v29;
    v36 = v52;
    v37 = v31;
    while ( v35 < v36 )
    {
      v38 = v27;
      if ( v27 < v34 )
      {
        v39 = v32;
        while ( 1 )
        {
          v40 = *((_QWORD *)this + 4);
          if ( !v40 )
            v40 = *((_QWORD *)this + 5);
          if ( !EngAcquireSemaphoreNoWait(*(HSEMAPHORE *)(v39 + v40)) )
            break;
          v37[v38] = 1;
          v39 += 8LL;
          v34 = v51;
          if ( ++v38 >= v51 )
          {
            v36 = v52;
            goto LABEL_36;
          }
        }
        for ( i = 87LL; i >= 15; i -= 9LL )
        {
          v42 = 8LL;
          v43 = (char *)this + i;
          do
          {
            if ( v43[v42 + 116] == 1 )
            {
              v44 = *((_QWORD *)this + 4);
              if ( !v44 )
                v44 = *((_QWORD *)this + 5);
              EngReleaseSemaphore(*(HSEMAPHORE *)(v44 + 8 * (i + v42)));
              v43[v42 + 116] = 0;
            }
            --v42;
          }
          while ( v42 >= 0 );
        }
        v45 = (struct _PANDEV *)*((_QWORD *)this + 4);
        if ( !v45 )
          v45 = (struct _PANDEV *)*((_QWORD *)this + 5);
        ShadowUnLockWait(v45);
        memset((char *)this + 131, 0, 0x51uLL);
        v29 = v53;
        v31 = v47;
        v32 = v50;
        goto LABEL_25;
      }
LABEL_36:
      ++v35;
      v32 += 72LL;
      v37 += 9;
    }
    v46 = *((_QWORD *)this + 4);
    if ( !v46 )
      v46 = *((_QWORD *)this + 5);
    KeReleaseMutex((PRKMUTEX)(*(_QWORD *)(v46 + 784) + 32LL), 0);
  }
}
