/*
 * XREFs of ?vLockShadowW@MULTIPANSURFLOCK@@QEAAXPEAU_RECTL@@PEAU_CLIPOBJ@@@Z @ 0x1C0290E44
 * Callers:
 *     ??0MULTIPANSURFLOCK@@QEAA@PEAU_PANDEV@@PEAPEAU_SURFOBJ@@1PEAU_RECTL@@2PEAHPEAU_CLIPOBJ@@@Z @ 0x1C028E524 (--0MULTIPANSURFLOCK@@QEAA@PEAU_PANDEV@@PEAPEAU_SURFOBJ@@1PEAU_RECTL@@2PEAHPEAU_CLIPOBJ@@@Z.c)
 * Callees:
 *     ?vOrder@ERECTL@@QEAAXXZ @ 0x1C00A22F8 (-vOrder@ERECTL@@QEAAXXZ.c)
 *     ?bEmpty@ERECTL@@QEBAHXZ @ 0x1C00A3D1C (-bEmpty@ERECTL@@QEBAHXZ.c)
 *     ??XERECTL@@QEAAAEAV0@AEBU_RECTL@@@Z @ 0x1C00A9DD4 (--XERECTL@@QEAAAEAV0@AEBU_RECTL@@@Z.c)
 *     memset @ 0x1C0168440 (memset.c)
 *     ?vUnLockShadowWAndWait@MULTIPANSURFLOCK@@QEAAXXZ @ 0x1C029159C (-vUnLockShadowWAndWait@MULTIPANSURFLOCK@@QEAAXXZ.c)
 */

void __fastcall MULTIPANSURFLOCK::vLockShadowW(MULTIPANSURFLOCK *this, struct _RECTL *a2, struct _CLIPOBJ *a3)
{
  LONG top; // ecx
  LONG left; // r8d
  LONG v7; // eax
  LONG v8; // eax
  LONG right; // ecx
  LONG v10; // eax
  LONG bottom; // ecx
  LONG v12; // eax
  __int64 v13; // rbx
  __int64 v14; // rdx
  __int64 v15; // rax
  __int64 v16; // rax
  int v17; // ecx
  __int64 v18; // rax
  __int64 v19; // rcx
  signed int v20; // eax
  __int64 v21; // rcx
  __int64 v22; // r15
  int v23; // eax
  __int64 v24; // rcx
  int v25; // r14d
  __int64 v26; // rsi
  int v27; // eax
  int v28; // ebx
  __int64 v29; // r13
  __int64 v30; // rax
  __int64 v31; // rbx
  __int64 v32; // rax
  char *v33; // rsi
  __int64 v34; // r12
  __int64 v35; // rcx
  __int64 v36; // rax
  __int64 v37; // r14
  __int64 v38; // rcx
  char *v39; // r15
  __int64 v40; // rbx
  __int64 v41; // rsi
  __int64 v42; // rcx
  __int64 v43; // rcx
  char *v44; // [rsp+30h] [rbp-20h] BYREF
  int v45; // [rsp+38h] [rbp-18h]
  int v46; // [rsp+3Ch] [rbp-14h]
  __int128 v47; // [rsp+40h] [rbp-10h] BYREF
  __int64 v48; // [rsp+90h] [rbp+40h]
  __int64 v49; // [rsp+A0h] [rbp+50h]
  __int64 v50; // [rsp+A8h] [rbp+58h]

  v47 = 0uLL;
  if ( a3 && a3->iDComplexity )
  {
    top = a3->rclBounds.top;
    left = a3->rclBounds.left;
    v7 = a2->left;
    if ( left > a2->left )
      v7 = left;
    LODWORD(v47) = v7;
    v8 = a2->top;
    if ( top > v8 )
      v8 = top;
    right = a3->rclBounds.right;
    DWORD1(v47) = v8;
    v10 = a2->right;
    if ( right < v10 )
      v10 = right;
    bottom = a3->rclBounds.bottom;
    DWORD2(v47) = v10;
    v12 = a2->bottom;
    if ( bottom < v12 )
      v12 = bottom;
    HIDWORD(v47) = v12;
  }
  else
  {
    v47 = (__int128)*a2;
  }
  ERECTL::vOrder((ERECTL *)&v47);
  v13 = *((_QWORD *)this + 4);
  v14 = v13;
  if ( v13 )
  {
    v15 = *((_QWORD *)this + 4);
  }
  else
  {
    v14 = *((_QWORD *)this + 5);
    v15 = v14;
  }
  v16 = *(_QWORD *)(v15 + 64);
  v44 = 0LL;
  v17 = *(_DWORD *)(v16 + 32);
  v18 = *(_QWORD *)(v14 + 64);
  v45 = v17;
  v46 = *(_DWORD *)(v18 + 36);
  ERECTL::operator*=((int *)&v47, (int *)&v44);
  if ( !ERECTL::bEmpty((ERECTL *)&v47) )
  {
    v19 = v13;
    if ( !v13 )
      v19 = *((_QWORD *)this + 5);
    v20 = (unsigned int)v47 / *(_DWORD *)(v19 + 768);
    v21 = v13;
    v22 = v20;
    if ( !v13 )
      v21 = *((_QWORD *)this + 5);
    v23 = DWORD2(v47) / *(_DWORD *)(v21 + 768);
    v24 = v13;
    v25 = v23;
    if ( !v13 )
      v24 = *((_QWORD *)this + 5);
    v26 = DWORD1(v47) / *(_DWORD *)(v24 + 772);
    if ( !v13 )
      v13 = *((_QWORD *)this + 5);
    v27 = HIDWORD(v47) / *(_DWORD *)(v13 + 772);
    *((_BYTE *)this + 49) = 1;
    v28 = v27;
    memset((char *)this + 131, 0, 0x51uLL);
    v29 = v22;
    v30 = v28 + 1;
    v31 = v26;
    v49 = v30;
    v48 = v25 + 1;
    v32 = 9 * v26;
    v50 = v26;
    v33 = (char *)this + 9 * v26 + 131;
    v44 = v33;
    v34 = 8 * (v22 + v32) + 120;
    *(_QWORD *)&v47 = v34;
LABEL_25:
    v35 = *((_QWORD *)this + 4);
    if ( !v35 )
      v35 = *((_QWORD *)this + 5);
    KeWaitForSingleObject((PVOID)(*(_QWORD *)(v35 + 784) + 32LL), UserRequest, 0, 0, 0LL);
    v36 = v48;
    v37 = v31;
    v38 = v49;
    v39 = v33;
    while ( v37 < v38 )
    {
      v40 = v29;
      if ( v29 < v36 )
      {
        v41 = v34;
        while ( 1 )
        {
          v42 = *((_QWORD *)this + 4);
          if ( !v42 )
            v42 = *((_QWORD *)this + 5);
          if ( !EngAcquireSemaphoreNoWait(*(HSEMAPHORE *)(v41 + v42)) )
            break;
          v39[v40] = 1;
          v41 += 8LL;
          v36 = v48;
          if ( ++v40 >= v48 )
          {
            v38 = v49;
            goto LABEL_36;
          }
        }
        MULTIPANSURFLOCK::vUnLockShadowWAndWait(this);
        memset((char *)this + 131, 0, 0x51uLL);
        v31 = v50;
        v33 = v44;
        v34 = v47;
        goto LABEL_25;
      }
LABEL_36:
      ++v37;
      v34 += 72LL;
      v39 += 9;
    }
    v43 = *((_QWORD *)this + 4);
    if ( !v43 )
      v43 = *((_QWORD *)this + 5);
    KeReleaseMutex((PRKMUTEX)(*(_QWORD *)(v43 + 784) + 32LL), 0);
  }
}
