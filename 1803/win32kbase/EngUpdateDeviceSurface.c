/*
 * XREFs of EngUpdateDeviceSurface @ 0x1C00C8050
 * Callers:
 *     <none>
 * Callees:
 *     ?vSetup@XCLIPOBJ@@QEAAXPEAVREGION@@AEAVERECTL@@H@Z @ 0x1C001DDB0 (-vSetup@XCLIPOBJ@@QEAAXPEAVREGION@@AEAVERECTL@@H@Z.c)
 *     ?bEmpty@ERECTL@@QEBAHXZ @ 0x1C001E2E0 (-bEmpty@ERECTL@@QEBAHXZ.c)
 *     ?vPushThreadGuardedObject@RGNMEMOBJ@@QEAAXXZ @ 0x1C0020670 (-vPushThreadGuardedObject@RGNMEMOBJ@@QEAAXXZ.c)
 *     ?vInitialize@RGNMEMOBJ@@QEAAXK@Z @ 0x1C0020784 (-vInitialize@RGNMEMOBJ@@QEAAXK@Z.c)
 *     ?bMerge@RGNOBJ@@QEAAHAEAV1@0E@Z @ 0x1C0020FD0 (-bMerge@RGNOBJ@@QEAAHAEAV1@0E@Z.c)
 *     ?bEqual@RGNOBJ@@QEAAHAEAV1@@Z @ 0x1C0021920 (-bEqual@RGNOBJ@@QEAAHAEAV1@@Z.c)
 *     ?bCopy@RGNOBJ@@QEAAHAEAV1@@Z @ 0x1C0021B60 (-bCopy@RGNOBJ@@QEAAHAEAV1@@Z.c)
 *     ?vSwap@RGNOBJ@@QEAAXPEAV1@@Z @ 0x1C0021CA0 (-vSwap@RGNOBJ@@QEAAXPEAV1@@Z.c)
 *     ?bOffset@RGNOBJ@@QEAAHPEAU_POINTL@@@Z @ 0x1C0021EC0 (-bOffset@RGNOBJ@@QEAAHPEAU_POINTL@@@Z.c)
 *     ?iComplexity@RGNOBJ@@QEBAJXZ @ 0x1C00220E8 (-iComplexity@RGNOBJ@@QEBAJXZ.c)
 *     W32GetThreadWin32Thread @ 0x1C0023134 (W32GetThreadWin32Thread.c)
 *     ?prgnVisSnap@DC@@QEBAPEAVREGION@@XZ @ 0x1C0025760 (-prgnVisSnap@DC@@QEBAPEAVREGION@@XZ.c)
 *     ??0SEMOBJSHARED@@QEAA@PEAUHSEMAPHORE__@@@Z @ 0x1C004199C (--0SEMOBJSHARED@@QEAA@PEAUHSEMAPHORE__@@@Z.c)
 *     ??1SEMOBJSHARED@@QEAA@XZ @ 0x1C00419D4 (--1SEMOBJSHARED@@QEAA@XZ.c)
 *     ?vDeleteREGION@REGION@@QEAAXXZ @ 0x1C004495C (-vDeleteREGION@REGION@@QEAAXXZ.c)
 *     ??1RGNMEMOBJTMP@@QEAA@XZ @ 0x1C0044A58 (--1RGNMEMOBJTMP@@QEAA@XZ.c)
 */

BOOL __stdcall EngUpdateDeviceSurface(SURFOBJ *pso, CLIPOBJ **ppco)
{
  BOOL v3; // ebx
  __int64 ThreadWin32Thread; // rax
  __int64 v6; // rdi
  unsigned int v7; // eax
  DC **v8; // rdi
  CLIPOBJ *v10; // r12
  DC *v11; // r14
  struct RGNOBJ *v12; // r15
  DC *v13; // rcx
  struct REGION *v14; // rax
  __int64 v15; // r10
  REGION *v16; // rcx
  struct REGION *v17; // rcx
  DC *v18; // rcx
  HDEV hdev; // rax
  struct REGION *v20; // rdx
  __int64 v21; // rdi
  struct _POINTL v22; // [rsp+20h] [rbp-40h] BYREF
  PERESOURCE v23; // [rsp+28h] [rbp-38h] BYREF
  PERESOURCE v24; // [rsp+30h] [rbp-30h] BYREF
  struct REGION *v25; // [rsp+38h] [rbp-28h] BYREF
  __int64 v26; // [rsp+40h] [rbp-20h] BYREF
  int v27; // [rsp+48h] [rbp-18h]
  REGION *v28; // [rsp+50h] [rbp-10h] BYREF
  int v29; // [rsp+58h] [rbp-8h]
  struct REGION *v30; // [rsp+B0h] [rbp+50h] BYREF
  __int64 v31; // [rsp+B8h] [rbp+58h] BYREF

  v3 = 1;
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  v6 = ThreadWin32Thread;
  if ( !ThreadWin32Thread || !*(_BYTE *)(ThreadWin32Thread + 328) || pso->iType != 1 )
    return 1;
  SEMOBJSHARED::SEMOBJSHARED((SEMOBJSHARED *)&v24, (HSEMAPHORE)ghsemVisRgnUniqueness);
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
  SEMOBJSHARED::~SEMOBJSHARED(&v24);
  if ( v3 || !ppco || !*ppco )
    return v3;
  SEMOBJSHARED::SEMOBJSHARED((SEMOBJSHARED *)&v23, ghsemVisRgnPublish);
  v8 = *(DC ***)(v6 + 312);
  if ( !v8 )
  {
    SEMOBJSHARED::~SEMOBJSHARED(&v23);
    return 1;
  }
  v10 = *ppco;
  v11 = *v8;
  v12 = (struct RGNOBJ *)((unsigned __int64)&(*ppco)[2].rclBounds.top & -(__int64)(*ppco != 0LL));
  v13 = *v8;
  v31 = *((_QWORD *)*v8 + 191);
  v14 = DC::prgnVisSnap(v13);
  v25 = v14;
  if ( v15 && v14 )
  {
    if ( (unsigned int)RGNOBJ::bEqual((RGNOBJ *)&v25, (struct RGNOBJ *)&v31) )
      goto LABEL_28;
    if ( !*((_QWORD *)v11 + 196) )
    {
      v29 = 0;
      RGNMEMOBJ::vInitialize((RGNMEMOBJ *)&v28, 0xD8u);
      v16 = v28;
      if ( v28 )
        *((_QWORD *)*v8 + 196) = v28;
      if ( v29 == 1 )
        REGION::vDeleteREGION(v16);
    }
    v17 = (struct REGION *)*((_QWORD *)*v8 + 196);
    v30 = v17;
    if ( !v17 )
      goto LABEL_38;
    if ( v17 == *(struct REGION **)v12 )
    {
LABEL_28:
      v3 = 1;
    }
    else if ( (unsigned int)RGNOBJ::bCopy((RGNOBJ *)&v30, (struct RGNOBJ *)&v31) )
    {
      v18 = *v8;
      v27 = 0;
      *((_QWORD *)v18 + 196) = v30;
      RGNMEMOBJ::vInitialize((RGNMEMOBJ *)&v26, 0xD8u);
      RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)&v26);
      if ( v26 )
      {
        if ( (*(_DWORD *)(*((_QWORD *)*v8 + 6) + 40LL) & 0x20000) != 0 )
        {
          hdev = pso->hdev;
          v22.x = -*((_DWORD *)hdev + 644);
          v22.y = -*((_DWORD *)hdev + 645);
          RGNOBJ::bOffset((int **)&v30, &v22);
        }
        if ( (unsigned int)RGNOBJ::bMerge((RGNOBJ *)&v26, v12, (struct RGNOBJ *)&v30, byte_1C019F761)
          && (unsigned int)RGNOBJ::iComplexity((RGNOBJ *)&v26) != 1 )
        {
          RGNOBJ::vSwap((RGNOBJ *)&v26, (struct RGNOBJ *)&v30);
          v20 = v30;
          *((_QWORD *)*v8 + 196) = v30;
          v21 = (__int64)*v8 + 2312;
          XCLIPOBJ::vSetup((XCLIPOBJ *)v21, v20, (struct ERECTL *)&v10->rclBounds, 1);
          if ( !ERECTL::bEmpty((ERECTL *)(v21 + 4)) )
          {
            *ppco = (CLIPOBJ *)v21;
            v3 = 1;
          }
        }
      }
      RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)&v26);
    }
  }
LABEL_38:
  SEMOBJSHARED::~SEMOBJSHARED(&v23);
  return v3;
}
