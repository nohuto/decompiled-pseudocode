/*
 * XREFs of EngUpdateDeviceSurface @ 0x1C00FC2F0
 * Callers:
 *     <none>
 * Callees:
 *     ?vSetup@XCLIPOBJ@@QEAAXPEAVREGION@@AEAVERECTL@@H@Z @ 0x1C0019D90 (-vSetup@XCLIPOBJ@@QEAAXPEAVREGION@@AEAVERECTL@@H@Z.c)
 *     ?prgnVisSnap@DC@@QEBAPEAVREGION@@XZ @ 0x1C001C5CC (-prgnVisSnap@DC@@QEBAPEAVREGION@@XZ.c)
 *     ?bMerge@RGNOBJ@@QEAAHAEAV1@0E@Z @ 0x1C001F140 (-bMerge@RGNOBJ@@QEAAHAEAV1@0E@Z.c)
 *     ?bCopy@RGNOBJ@@QEAAHAEAV1@@Z @ 0x1C001F9D0 (-bCopy@RGNOBJ@@QEAAHAEAV1@@Z.c)
 *     ?iComplexity@RGNOBJ@@QEBAJXZ @ 0x1C0023940 (-iComplexity@RGNOBJ@@QEBAJXZ.c)
 *     ??1RGNMEMOBJTMP@@QEAA@XZ @ 0x1C0023FE8 (--1RGNMEMOBJTMP@@QEAA@XZ.c)
 *     ??1RGNMEMOBJ@@QEAA@XZ @ 0x1C00240D0 (--1RGNMEMOBJ@@QEAA@XZ.c)
 *     ?vSwap@RGNOBJ@@QEAAXPEAV1@@Z @ 0x1C0024550 (-vSwap@RGNOBJ@@QEAAXPEAV1@@Z.c)
 *     W32GetThreadWin32Thread @ 0x1C0025170 (W32GetThreadWin32Thread.c)
 *     ??0RGNMEMOBJ@@QEAA@XZ @ 0x1C0025520 (--0RGNMEMOBJ@@QEAA@XZ.c)
 *     ?bOffset@RGNOBJ@@QEAAHPEAU_POINTL@@@Z @ 0x1C0029690 (-bOffset@RGNOBJ@@QEAAHPEAU_POINTL@@@Z.c)
 *     ?ReleaseLock@CPushLock@@QEBAXXZ @ 0x1C0034194 (-ReleaseLock@CPushLock@@QEBAXXZ.c)
 *     ?AcquireLockShared@CPushLock@@QEBAJXZ @ 0x1C0034260 (-AcquireLockShared@CPushLock@@QEBAJXZ.c)
 *     ??1SEMOBJSHARED@@QEAA@XZ @ 0x1C004A190 (--1SEMOBJSHARED@@QEAA@XZ.c)
 *     ??0SEMOBJSHARED@@QEAA@PEAUHSEMAPHORE__@@@Z @ 0x1C004A1D4 (--0SEMOBJSHARED@@QEAA@PEAUHSEMAPHORE__@@@Z.c)
 *     ?bEmpty@ERECTL@@QEBAHXZ @ 0x1C006969C (-bEmpty@ERECTL@@QEBAHXZ.c)
 *     ??0RGNMEMOBJTMP@@QEAA@XZ @ 0x1C007D424 (--0RGNMEMOBJTMP@@QEAA@XZ.c)
 *     ?bEqual@RGNOBJ@@QEAAHAEAV1@@Z @ 0x1C008D480 (-bEqual@RGNOBJ@@QEAAHAEAV1@@Z.c)
 */

BOOL __stdcall EngUpdateDeviceSurface(SURFOBJ *pso, CLIPOBJ **ppco)
{
  BOOL v3; // ebx
  __int64 ThreadWin32Thread; // rax
  __int64 v6; // rdi
  unsigned int v7; // eax
  DC **v8; // rdi
  DC *v10; // r12
  struct RGNOBJ *v11; // r15
  DC *v12; // rsi
  DC *v13; // rcx
  struct REGION *v14; // rax
  __int64 v15; // r10
  struct REGION *v16; // rax
  HDEV hdev; // rax
  struct REGION *v18; // rdx
  struct ERECTL *p_rclBounds; // r8
  __int64 v20; // rdi
  struct _POINTL v21; // [rsp+20h] [rbp-40h] BYREF
  PERESOURCE v22; // [rsp+28h] [rbp-38h] BYREF
  CLIPOBJ *v23; // [rsp+30h] [rbp-30h] BYREF
  struct REGION *v24; // [rsp+38h] [rbp-28h] BYREF
  _QWORD v25[2]; // [rsp+40h] [rbp-20h] BYREF
  REGION *v26[2]; // [rsp+50h] [rbp-10h] BYREF
  struct REGION *v27; // [rsp+B0h] [rbp+50h] BYREF
  __int64 v28; // [rsp+B8h] [rbp+58h] BYREF

  v3 = 1;
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  v6 = ThreadWin32Thread;
  if ( !ThreadWin32Thread || !*(_BYTE *)(ThreadWin32Thread + 328) || pso->iType != 1 )
    return 1;
  SEMOBJSHARED::SEMOBJSHARED((SEMOBJSHARED *)&v23, (HSEMAPHORE)ghsemVisRgnUniqueness);
  v7 = *(_DWORD *)(v6 + 336);
  if ( v7 != giVisRgnUniquenessStable )
  {
    if ( giVisRgnUniquenessStable > giVisRgnUniqueness )
    {
      if ( v7 <= giVisRgnUniqueness || v7 >= giVisRgnUniquenessStable )
        goto LABEL_12;
LABEL_11:
      v3 = 0;
      goto LABEL_12;
    }
    if ( v7 < giVisRgnUniquenessStable || v7 > giVisRgnUniqueness )
      goto LABEL_11;
  }
LABEL_12:
  SEMOBJSHARED::~SEMOBJSHARED((PERESOURCE *)&v23);
  if ( v3 || !ppco || !*ppco )
    return v3;
  SEMOBJSHARED::SEMOBJSHARED((SEMOBJSHARED *)&v22, ghsemVisRgnPublish);
  v8 = *(DC ***)(v6 + 312);
  if ( !v8 )
  {
    SEMOBJSHARED::~SEMOBJSHARED(&v22);
    return 1;
  }
  v10 = *v8;
  v23 = *ppco;
  v11 = (struct RGNOBJ *)((unsigned __int64)&v23[2].rclBounds.top & -(__int64)(v23 != 0LL));
  CPushLock::AcquireLockShared((DC *)((char *)v10 + 1112));
  v12 = *v8;
  v13 = *v8;
  v28 = *((_QWORD *)*v8 + 143);
  v14 = DC::prgnVisSnap(v13);
  v24 = v14;
  if ( v15 && v14 )
  {
    if ( (unsigned int)RGNOBJ::bEqual((RGNOBJ *)&v24, (struct RGNOBJ *)&v28) )
      goto LABEL_21;
    if ( !*((_QWORD *)v12 + 148) )
    {
      RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)v26);
      if ( v26[0] )
        *((REGION **)*v8 + 148) = v26[0];
      RGNMEMOBJ::~RGNMEMOBJ(v26);
      v12 = *v8;
    }
    v16 = (struct REGION *)*((_QWORD *)v12 + 148);
    v27 = v16;
    if ( !v16 )
      goto LABEL_37;
    if ( v16 == *(struct REGION **)v11 )
    {
LABEL_21:
      v3 = 1;
    }
    else if ( (unsigned int)RGNOBJ::bCopy((RGNOBJ *)&v27, (struct RGNOBJ *)&v28) )
    {
      *((_QWORD *)*v8 + 148) = v27;
      RGNMEMOBJTMP::RGNMEMOBJTMP((RGNMEMOBJTMP *)v25);
      if ( v25[0] )
      {
        if ( (*(_DWORD *)(*((_QWORD *)*v8 + 6) + 40LL) & 0x20000) != 0 )
        {
          hdev = pso->hdev;
          v21.x = -*((_DWORD *)hdev + 646);
          v21.y = -*((_DWORD *)hdev + 647);
          RGNOBJ::bOffset((int **)&v27, &v21);
        }
        if ( (unsigned int)RGNOBJ::bMerge((RGNOBJ *)v25, v11, (struct RGNOBJ *)&v27, byte_1C01CB285)
          && (unsigned int)RGNOBJ::iComplexity((RGNOBJ *)v25) != 1 )
        {
          RGNOBJ::vSwap((RGNOBJ *)v25, (struct RGNOBJ *)&v27);
          v18 = v27;
          p_rclBounds = (struct ERECTL *)&v23->rclBounds;
          *((_QWORD *)*v8 + 148) = v27;
          v20 = (__int64)*v8 + 1928;
          XCLIPOBJ::vSetup((XCLIPOBJ *)v20, v18, p_rclBounds, 1);
          if ( !ERECTL::bEmpty((ERECTL *)(v20 + 4)) )
          {
            *ppco = (CLIPOBJ *)v20;
            v3 = 1;
          }
        }
      }
      RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)v25);
    }
  }
LABEL_37:
  CPushLock::ReleaseLock((DC *)((char *)v10 + 1112));
  SEMOBJSHARED::~SEMOBJSHARED(&v22);
  return v3;
}
