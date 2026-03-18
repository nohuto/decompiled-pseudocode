/*
 * XREFs of ?vLockShadow@PANSURFLOCK@@QEAAXPEAU_RECTL@@PEAU_CLIPOBJ@@H@Z @ 0x1C02911E8
 * Callers:
 *     ??0PANSURFLOCK@@QEAA@PEAU_PANDEV@@PEAPEAU_SURFOBJ@@PEAU_RECTL@@PEAHPEAU_CLIPOBJ@@@Z @ 0x1C028ED44 (--0PANSURFLOCK@@QEAA@PEAU_PANDEV@@PEAPEAU_SURFOBJ@@PEAU_RECTL@@PEAHPEAU_CLIPOBJ@@@Z.c)
 *     ?PanSynchronize@@YAXPEAUDHPDEV__@@PEAU_RECTL@@@Z @ 0x1C0290470 (-PanSynchronize@@YAXPEAUDHPDEV__@@PEAU_RECTL@@@Z.c)
 * Callees:
 *     ?vOrder@ERECTL@@QEAAXXZ @ 0x1C00589F4 (-vOrder@ERECTL@@QEAAXXZ.c)
 *     ?bEmpty@ERECTL@@QEBAHXZ @ 0x1C005A41C (-bEmpty@ERECTL@@QEBAHXZ.c)
 *     ??XERECTL@@QEAAAEAV0@AEBU_RECTL@@@Z @ 0x1C00600A4 (--XERECTL@@QEAAAEAV0@AEBU_RECTL@@@Z.c)
 *     memset @ 0x1C0166840 (memset.c)
 *     ?ShadowUnLockWait@@YAXPEAU_PANDEV@@@Z @ 0x1C0290A74 (-ShadowUnLockWait@@YAXPEAU_PANDEV@@@Z.c)
 */

void __fastcall PANSURFLOCK::vLockShadow(PANSURFLOCK *this, struct _RECTL *a2, struct _CLIPOBJ *a3, int a4)
{
  LONG top; // ecx
  LONG left; // r8d
  LONG v8; // eax
  LONG v9; // eax
  LONG right; // ecx
  LONG v11; // eax
  LONG bottom; // ecx
  LONG v13; // eax
  __int64 v14; // rax
  __int64 v15; // rcx
  __int64 v16; // rcx
  unsigned int v17; // r9d
  unsigned int v18; // r8d
  __int64 v19; // rsi
  __int64 v20; // rdi
  char *v21; // r15
  __int64 v22; // r12
  __int64 v23; // rax
  __int64 i; // r14
  __int64 v25; // rdi
  __int64 v26; // rsi
  HSEMAPHORE v27; // rcx
  int v28; // eax
  __int64 j; // rdi
  __int64 v30; // rsi
  char *v31; // r14
  __int64 v32; // [rsp+30h] [rbp-30h]
  __int64 v33; // [rsp+38h] [rbp-28h]
  char *v34; // [rsp+40h] [rbp-20h] BYREF
  int v35; // [rsp+48h] [rbp-18h]
  int v36; // [rsp+4Ch] [rbp-14h]
  __int128 v37; // [rsp+50h] [rbp-10h] BYREF
  __int64 v38; // [rsp+A0h] [rbp+40h]
  __int64 v39; // [rsp+B0h] [rbp+50h]

  v37 = 0uLL;
  if ( a3 && a3->iDComplexity )
  {
    top = a3->rclBounds.top;
    left = a3->rclBounds.left;
    v8 = a2->left;
    if ( left > a2->left )
      v8 = left;
    LODWORD(v37) = v8;
    v9 = a2->top;
    if ( top > v9 )
      v9 = top;
    right = a3->rclBounds.right;
    DWORD1(v37) = v9;
    v11 = a2->right;
    if ( right < v11 )
      v11 = right;
    bottom = a3->rclBounds.bottom;
    DWORD2(v37) = v11;
    v13 = a2->bottom;
    if ( bottom < v13 )
      v13 = bottom;
    HIDWORD(v37) = v13;
  }
  else
  {
    v37 = (__int128)*a2;
  }
  ERECTL::vOrder((ERECTL *)&v37);
  v14 = *((_QWORD *)this + 2);
  v34 = 0LL;
  v15 = *(_QWORD *)(v14 + 64);
  v35 = *(_DWORD *)(v15 + 32);
  v36 = *(_DWORD *)(v15 + 36);
  ERECTL::operator*=((int *)&v37, (int *)&v34);
  memset((char *)this + 24, 0, 0x51uLL);
  if ( !ERECTL::bEmpty((ERECTL *)&v37) )
  {
    v16 = *((_QWORD *)this + 2);
    v17 = *(_DWORD *)(v16 + 768);
    v18 = *(_DWORD *)(v16 + 772);
    v19 = (int)((unsigned int)v37 / v17);
    v32 = v19;
    v20 = (int)(DWORD1(v37) / v18);
    v33 = v20;
    v39 = (int)(HIDWORD(v37) / v18 + 1);
    v38 = (int)(DWORD2(v37) / v17 + 1);
    v21 = (char *)this + 9 * v20 + 24;
    v34 = v21;
    v22 = 8 * (v19 + 9 * v20) + 120;
    *(_QWORD *)&v37 = v22;
LABEL_15:
    KeWaitForSingleObject((PVOID)(*(_QWORD *)(*((_QWORD *)this + 2) + 784LL) + 32LL), UserRequest, 0, 0, 0LL);
    v23 = v39;
    for ( i = v20; i < v23; ++i )
    {
      v25 = v19;
      if ( v19 < v38 )
      {
        v26 = v22;
        while ( 1 )
        {
          v27 = *(HSEMAPHORE *)(v26 + *((_QWORD *)this + 2));
          v28 = a4 ? EngAcquireSemaphoreSharedNoWait(v27) : EngAcquireSemaphoreNoWait(v27);
          if ( v28 != 1 )
            break;
          v21[v25] = 1;
          v26 += 8LL;
          if ( ++v25 >= v38 )
          {
            v19 = v32;
            v23 = v39;
            goto LABEL_25;
          }
        }
        for ( j = 87LL; j >= 15; j -= 9LL )
        {
          v30 = 8LL;
          v31 = (char *)this + j;
          do
          {
            if ( v31[v30 + 9] == 1 )
            {
              EngReleaseSemaphore(*(HSEMAPHORE *)(*((_QWORD *)this + 2) + 8 * (j + v30)));
              v31[v30 + 9] = 0;
            }
            --v30;
          }
          while ( v30 >= 0 );
        }
        ShadowUnLockWait(*((struct _PANDEV **)this + 2));
        memset((char *)this + 24, 0, 0x51uLL);
        v19 = v32;
        v20 = v33;
        v21 = v34;
        v22 = v37;
        goto LABEL_15;
      }
LABEL_25:
      v22 += 72LL;
      v21 += 9;
    }
    KeReleaseMutex((PRKMUTEX)(*(_QWORD *)(*((_QWORD *)this + 2) + 784LL) + 32LL), 0);
  }
}
