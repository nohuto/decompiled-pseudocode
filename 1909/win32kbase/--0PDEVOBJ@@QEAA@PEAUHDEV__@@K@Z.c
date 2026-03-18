/*
 * XREFs of ??0PDEVOBJ@@QEAA@PEAUHDEV__@@K@Z @ 0x1C01216B4
 * Callers:
 *     ?DrvCreateCloneHDEV@@YAPEAUHDEV__@@PEAU1@K@Z @ 0x1C012781C (-DrvCreateCloneHDEV@@YAPEAUHDEV__@@PEAU1@K@Z.c)
 * Callees:
 *     GreCreateSemaphoreInternal @ 0x1C0010864 (GreCreateSemaphoreInternal.c)
 *     GreDeleteSemaphore @ 0x1C00109E0 (GreDeleteSemaphore.c)
 *     Win32FreePool @ 0x1C0012E40 (Win32FreePool.c)
 *     PALLOCMEM2 @ 0x1C0012FFC (PALLOCMEM2.c)
 *     ?vDestructor@DEVLOCKOBJ@@QEAAXXZ @ 0x1C0017A44 (-vDestructor@DEVLOCKOBJ@@QEAAXXZ.c)
 *     EngAcquireSemaphore @ 0x1C002BB10 (EngAcquireSemaphore.c)
 *     ?vUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C003FD3C (-vUnlockFast@XDCOBJ@@QEAAXXZ.c)
 *     ?Free@PDEV@@SAXPEAV1@H@Z @ 0x1C00684F0 (-Free@PDEV@@SAXPEAV1@H@Z.c)
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C0070850 (EtwTraceGreLockReleaseSemaphore.c)
 *     EtwTraceGreLockAcquireSemaphoreExclusive @ 0x1C0072010 (EtwTraceGreLockAcquireSemaphoreExclusive.c)
 *     ?Allocate@PDEV@@SAPEAV1@H@Z @ 0x1C009F430 (-Allocate@PDEV@@SAPEAV1@H@Z.c)
 *     ?vLock@DEVLOCKOBJ@@QEAAXAEAVPDEVOBJ@@@Z @ 0x1C00AE4E4 (-vLock@DEVLOCKOBJ@@QEAAXAEAVPDEVOBJ@@@Z.c)
 *     ?InitializeClientReferenceCount@PDEV@@QEAAXXZ @ 0x1C00B416C (-InitializeClientReferenceCount@PDEV@@QEAAXXZ.c)
 *     memmove @ 0x1C00BF740 (memmove.c)
 */

PDEVOBJ *__fastcall PDEVOBJ::PDEVOBJ(PDEVOBJ *this, char *a2)
{
  struct PDEV *v4; // rax
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // rbx
  HDEV v8; // rax
  _OWORD *v9; // rcx
  __int128 v10; // xmm1
  HDEV v11; // rcx
  _OWORD *v12; // rax
  __int128 v13; // xmm1
  __int64 v14; // rax
  __int64 v15; // rax
  unsigned int v16; // r14d
  void *v17; // rcx
  __int64 v18; // rdx
  void *v19; // rcx
  void *v20; // rcx
  void *v21; // rcx
  __int64 v22; // rdx
  HDEV v23; // rcx
  _OWORD *v24; // rax
  __int128 v25; // xmm1
  __int64 SemaphoreInternal; // rax
  __int64 v27; // rax
  __int64 v28; // rdx
  signed __int32 v29; // ett
  signed __int32 v30; // ett
  _QWORD *v31; // rax
  __int64 v32; // r8
  __int64 v33; // rcx
  _QWORD *v34; // rax
  __int64 v35; // rcx
  __int64 v36; // rax
  _BYTE v38[32]; // [rsp+20h] [rbp-50h] BYREF
  _QWORD v39[2]; // [rsp+40h] [rbp-30h] BYREF
  __int16 v40; // [rsp+50h] [rbp-20h]
  char *v41; // [rsp+A0h] [rbp+30h] BYREF

  v41 = a2;
  *(_QWORD *)this = 0LL;
  if ( !a2 || (*((_DWORD *)a2 + 10) & 1) == 0 )
    return this;
  v39[0] = 0LL;
  v39[1] = 0LL;
  v40 = 256;
  DEVLOCKOBJ::vLock((DEVLOCKOBJ *)v38, (struct PDEVOBJ *)&v41);
  v4 = PDEV::Allocate(0);
  *(_QWORD *)this = v4;
  if ( v4 )
  {
    v5 = 2LL;
    *((_QWORD *)v4 + 224) = *((_QWORD *)a2 + 224);
    v6 = 2LL;
    *(_QWORD *)(*(_QWORD *)this + 24LL) = *(_QWORD *)this;
    *(_DWORD *)(*(_QWORD *)this + 1784LL) = 1348756854;
    v7 = *(_QWORD *)this;
    *(_QWORD *)(*(_QWORD *)this + 1728LL) = *((_QWORD *)a2 + 216);
    *(_QWORD *)(*(_QWORD *)this + 1736LL) = *((_QWORD *)a2 + 217);
    *(_QWORD *)(*(_QWORD *)this + 1744LL) = *((_QWORD *)a2 + 218);
    *(_QWORD *)(*(_QWORD *)this + 1752LL) = *((_QWORD *)a2 + 219);
    *(_QWORD *)(*(_QWORD *)this + 1760LL) = *((_QWORD *)a2 + 220);
    *(_QWORD *)(*(_QWORD *)this + 1768LL) = *((_QWORD *)a2 + 221);
    *(_QWORD *)(*(_QWORD *)this + 1776LL) = *((_QWORD *)a2 + 222);
    *(_QWORD *)(*(_QWORD *)this + 1800LL) = *((_QWORD *)a2 + 225);
    *(_QWORD *)(*(_QWORD *)this + 1808LL) = *((_QWORD *)a2 + 226);
    *(_QWORD *)(*(_QWORD *)this + 1816LL) = *((_QWORD *)a2 + 227);
    v8 = (HDEV)(a2 + 1824);
    v9 = (_OWORD *)(*(_QWORD *)this + 1824LL);
    do
    {
      *v9 = *(_OWORD *)v8;
      v9[1] = *((_OWORD *)v8 + 1);
      v9[2] = *((_OWORD *)v8 + 2);
      v9[3] = *((_OWORD *)v8 + 3);
      v9[4] = *((_OWORD *)v8 + 4);
      v9[5] = *((_OWORD *)v8 + 5);
      v9[6] = *((_OWORD *)v8 + 6);
      v9 += 8;
      v10 = *((_OWORD *)v8 + 7);
      v8 += 32;
      *(v9 - 1) = v10;
      --v6;
    }
    while ( v6 );
    *v9 = *(_OWORD *)v8;
    v9[1] = *((_OWORD *)v8 + 1);
    v9[2] = *((_OWORD *)v8 + 2);
    *((_QWORD *)v9 + 6) = *((_QWORD *)v8 + 6);
    v11 = (HDEV)(a2 + 2136);
    v12 = (_OWORD *)(*(_QWORD *)this + 2136LL);
    do
    {
      *v12 = *(_OWORD *)v11;
      v12[1] = *((_OWORD *)v11 + 1);
      v12[2] = *((_OWORD *)v11 + 2);
      v12[3] = *((_OWORD *)v11 + 3);
      v12[4] = *((_OWORD *)v11 + 4);
      v12[5] = *((_OWORD *)v11 + 5);
      v12[6] = *((_OWORD *)v11 + 6);
      v12 += 8;
      v13 = *((_OWORD *)v11 + 7);
      v11 += 32;
      *(v12 - 1) = v13;
      --v5;
    }
    while ( v5 );
    *v12 = *(_OWORD *)v11;
    v12[1] = *((_OWORD *)v11 + 1);
    v12[2] = *((_OWORD *)v11 + 2);
    v12[3] = *((_OWORD *)v11 + 3);
    v14 = *(_QWORD *)this;
    *(_OWORD *)(v14 + 2456) = *(_OWORD *)(a2 + 2456);
    *(_OWORD *)(v14 + 2472) = *(_OWORD *)(a2 + 2472);
    *(_OWORD *)(v14 + 2488) = *(_OWORD *)(a2 + 2488);
    *(_OWORD *)(v14 + 2504) = *(_OWORD *)(a2 + 2504);
    *(_OWORD *)(v14 + 2520) = *(_OWORD *)(a2 + 2520);
    *(_OWORD *)(v14 + 2536) = *(_OWORD *)(a2 + 2536);
    *(_QWORD *)(*(_QWORD *)this + 2560LL) = *((_QWORD *)a2 + 320);
    *(_QWORD *)(*(_QWORD *)this + 2568LL) = *((_QWORD *)a2 + 321);
    *(_QWORD *)(*(_QWORD *)this + 2576LL) = *((_QWORD *)a2 + 322);
    *(_QWORD *)(*(_QWORD *)this + 2584LL) = *((_QWORD *)a2 + 323);
    *(_DWORD *)(*(_QWORD *)this + 2644LL) = *((_DWORD *)a2 + 661);
    *(_QWORD *)(*(_QWORD *)this + 2648LL) = *((_QWORD *)a2 + 331);
    *(_QWORD *)(*(_QWORD *)this + 2656LL) = *((_QWORD *)a2 + 332);
    *(_QWORD *)(*(_QWORD *)this + 2672LL) = *((_QWORD *)a2 + 334);
    *(_QWORD *)(*(_QWORD *)this + 2680LL) = *((_QWORD *)a2 + 335);
    *(_QWORD *)(*(_QWORD *)this + 2664LL) = *((_QWORD *)a2 + 333);
    *(_DWORD *)(*(_QWORD *)this + 3552LL) = *((_DWORD *)a2 + 888);
    v15 = *((_QWORD *)a2 + 324);
    if ( v15 )
    {
      v16 = *(unsigned __int16 *)(v15 + 68) + *(unsigned __int16 *)(v15 + 70);
      *(_QWORD *)(*(_QWORD *)this + 2592LL) = PALLOCMEM2(v16, 0x76656447u, 0);
      v17 = *(void **)(*(_QWORD *)this + 2592LL);
      if ( !v17 )
        goto LABEL_36;
      memmove(v17, *((const void **)a2 + 324), v16);
    }
    v18 = 1456LL;
    *(_DWORD *)(*(_QWORD *)this + 44LL) = *((_DWORD *)a2 + 11);
    *(_QWORD *)(*(_QWORD *)this + 72LL) = *((_QWORD *)a2 + 9);
    *(_QWORD *)(*(_QWORD *)this + 1432LL) = *((_QWORD *)a2 + 179);
    *(_QWORD *)(*(_QWORD *)this + 1440LL) = *((_QWORD *)a2 + 180);
    *(_QWORD *)(*(_QWORD *)this + 1448LL) = *((_QWORD *)a2 + 181);
    *(_QWORD *)(*(_QWORD *)this + 2552LL) = *((_QWORD *)a2 + 319);
    do
    {
      *(_QWORD *)(v18 + *(_QWORD *)this) = *(_QWORD *)&a2[v18];
      v18 += 8LL;
    }
    while ( v18 < 1504 );
    *(_QWORD *)(*(_QWORD *)this + 1504LL) = *((_QWORD *)a2 + 188);
    if ( *((_QWORD *)a2 + 211) )
    {
      *(_QWORD *)(*(_QWORD *)this + 1688LL) = PALLOCMEM2(0x600uLL, 0x6D636947u, 0);
      v19 = *(void **)(*(_QWORD *)this + 1688LL);
      if ( !v19 )
        goto LABEL_36;
      memmove(v19, *((const void **)a2 + 211), 0x600uLL);
    }
    if ( *((_QWORD *)a2 + 212) )
    {
      *(_QWORD *)(*(_QWORD *)this + 1696LL) = PALLOCMEM2(0x600uLL, 0x61676947u, 0);
      v20 = *(void **)(*(_QWORD *)this + 1696LL);
      if ( !v20 )
        goto LABEL_36;
      memmove(v20, *((const void **)a2 + 212), 0x600uLL);
    }
    if ( *((_QWORD *)a2 + 213) )
    {
      *(_QWORD *)(*(_QWORD *)this + 1704LL) = PALLOCMEM2(0x600uLL, 0x676F6947u, 0);
      v21 = *(void **)(*(_QWORD *)this + 1704LL);
      if ( !v21 )
        goto LABEL_36;
      memmove(v21, *((const void **)a2 + 213), 0x600uLL);
    }
    v22 = 6LL;
    *(_QWORD *)(*(_QWORD *)this + 1720LL) = *((_QWORD *)a2 + 215);
    *(_QWORD *)(*(_QWORD *)this + 2600LL) = *((_QWORD *)a2 + 325);
    *(_DWORD *)(*(_QWORD *)this + 2608LL) = *((_DWORD *)a2 + 652);
    *(_DWORD *)(*(_QWORD *)this + 2612LL) = *((_DWORD *)a2 + 653);
    v23 = (HDEV)(a2 + 2688);
    v24 = (_OWORD *)(*(_QWORD *)this + 2688LL);
    do
    {
      *v24 = *(_OWORD *)v23;
      v24[1] = *((_OWORD *)v23 + 1);
      v24[2] = *((_OWORD *)v23 + 2);
      v24[3] = *((_OWORD *)v23 + 3);
      v24[4] = *((_OWORD *)v23 + 4);
      v24[5] = *((_OWORD *)v23 + 5);
      v24[6] = *((_OWORD *)v23 + 6);
      v24 += 8;
      v25 = *((_OWORD *)v23 + 7);
      v23 += 32;
      *(v24 - 1) = v25;
      --v22;
    }
    while ( v22 );
    *v24 = *(_OWORD *)v23;
    v24[1] = *((_OWORD *)v23 + 1);
    v24[2] = *((_OWORD *)v23 + 2);
    v24[3] = *((_OWORD *)v23 + 3);
    if ( *((_DWORD *)a2 + 292) )
    {
      *(_QWORD *)(*(_QWORD *)this + 2800LL) = *((_QWORD *)a2 + 161);
      *(_QWORD *)(*(_QWORD *)this + 2808LL) = *((_QWORD *)a2 + 162);
      *(_QWORD *)(*(_QWORD *)this + 2832LL) = *((_QWORD *)a2 + 164);
      *(_QWORD *)(*(_QWORD *)this + 2840LL) = *((_QWORD *)a2 + 165);
      *(_QWORD *)(*(_QWORD *)this + 2848LL) = *((_QWORD *)a2 + 166);
      *(_QWORD *)(*(_QWORD *)this + 2872LL) = *((_QWORD *)a2 + 167);
      *(_QWORD *)(*(_QWORD *)this + 2936LL) = *((_QWORD *)a2 + 168);
      *(_QWORD *)(*(_QWORD *)this + 3280LL) = *((_QWORD *)a2 + 169);
      *(_QWORD *)(*(_QWORD *)this + 3256LL) = *((_QWORD *)a2 + 170);
      *(_QWORD *)(*(_QWORD *)this + 3248LL) = *((_QWORD *)a2 + 171);
      *(_QWORD *)(*(_QWORD *)this + 3232LL) = *((_QWORD *)a2 + 172);
      *(_QWORD *)(*(_QWORD *)this + 3240LL) = *((_QWORD *)a2 + 174);
      *(_QWORD *)(*(_QWORD *)this + 3008LL) = *((_QWORD *)a2 + 173);
      *(_QWORD *)(*(_QWORD *)this + 3408LL) = *((_QWORD *)a2 + 175);
    }
    PDEV::InitializeClientReferenceCount(*(PDEV **)this);
    *(_DWORD *)(*(_QWORD *)this + 12LL) = 1;
    *(_DWORD *)(*(_QWORD *)this + 40LL) = *((_DWORD *)a2 + 10) & 0x60001;
    SemaphoreInternal = GreCreateSemaphoreInternal(0);
    *(_QWORD *)(*(_QWORD *)this + 48LL) = SemaphoreInternal;
    if ( SemaphoreInternal )
    {
      v27 = GreCreateSemaphoreInternal(0);
      *(_QWORD *)(*(_QWORD *)this + 56LL) = v27;
      if ( v27 )
      {
        v28 = *(_QWORD *)this;
        _m_prefetchw((const void *)(*(_QWORD *)this + 40LL));
        do
          v29 = *(_DWORD *)(v28 + 40);
        while ( v29 != _InterlockedCompareExchange((volatile signed __int32 *)(v28 + 40), v29 & 0xFFFFFFBF, v29) );
        *(_QWORD *)(*(_QWORD *)this + 64LL) = GreCreateSemaphoreInternal(0);
        if ( *(_QWORD *)(*(_QWORD *)this + 64LL) )
        {
          _m_prefetchw((const void *)(v7 + 40));
          do
            v30 = *(_DWORD *)(v7 + 40);
          while ( v30 != _InterlockedCompareExchange((volatile signed __int32 *)(v7 + 40), v30 | 0x80000, v30) );
          v31 = (_QWORD *)(*(_QWORD *)this + 2624LL);
          v31[1] = v31;
          *v31 = v31;
          EngAcquireSemaphore((HSEMAPHORE)ghsemDriverMgmt);
          EtwTraceGreLockAcquireSemaphoreExclusive((__int64)L"ghsemDriverMgmt", (int)ghsemDriverMgmt, 13);
          **(_QWORD **)this = gppdevList;
          gppdevList = *(struct PDEV **)this;
          EtwTraceGreLockReleaseSemaphore((__int64)L"ghsemDriverMgmt", (__int64)ghsemDriverMgmt, v32);
          if ( ghsemDriverMgmt )
          {
            ExReleaseResourceAndLeaveCriticalRegion(ghsemDriverMgmt);
            PsLeavePriorityRegion(v33);
          }
          v34 = (_QWORD *)(*(_QWORD *)this + 3528LL);
          v34[1] = v34;
          *v34 = v34;
          goto LABEL_49;
        }
      }
    }
LABEL_36:
    v35 = *(_QWORD *)this;
    if ( *(_QWORD *)(*(_QWORD *)this + 56LL) )
    {
      GreDeleteSemaphore(*(PERESOURCE *)(*(_QWORD *)this + 56LL));
      v35 = *(_QWORD *)this;
    }
    if ( *(_QWORD *)(v35 + 48) )
    {
      GreDeleteSemaphore(*(PERESOURCE *)(v35 + 48));
      v35 = *(_QWORD *)this;
    }
    if ( *(_QWORD *)(v35 + 2592) )
    {
      Win32FreePool(*(_QWORD *)(v35 + 2592));
      v35 = *(_QWORD *)this;
    }
    if ( *(_QWORD *)(v35 + 1688) )
    {
      Win32FreePool(*(_QWORD *)(v35 + 1688));
      *(_QWORD *)(*(_QWORD *)this + 1688LL) = 0LL;
      v35 = *(_QWORD *)this;
    }
    if ( *(_QWORD *)(v35 + 1696) )
    {
      Win32FreePool(*(_QWORD *)(v35 + 1696));
      *(_QWORD *)(*(_QWORD *)this + 1696LL) = 0LL;
      v35 = *(_QWORD *)this;
    }
    if ( *(_QWORD *)(v35 + 1704) )
    {
      Win32FreePool(*(_QWORD *)(v35 + 1704));
      *(_QWORD *)(*(_QWORD *)this + 1704LL) = 0LL;
      v35 = *(_QWORD *)this;
    }
    PDEV::Free((struct PDEV *)v35);
    *(_QWORD *)this = 0LL;
  }
LABEL_49:
  DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)v38);
  v36 = v39[0];
  if ( v39[0] )
  {
    if ( (_BYTE)v40 )
    {
      *(_DWORD *)(v39[0] + 40LL) &= ~2u;
      v36 = v39[0];
      LOBYTE(v40) = 0;
    }
    if ( v36 )
      XDCOBJ::vUnlockFast((XDCOBJ *)v39);
  }
  return this;
}
