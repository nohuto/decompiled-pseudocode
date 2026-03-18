/*
 * XREFs of ??0PDEVOBJ@@QEAA@PEAUHDEV__@@K@Z @ 0x1C00F7354
 * Callers:
 *     ?DrvCreateCloneHDEV@@YAPEAUHDEV__@@PEAU1@K@Z @ 0x1C01016DC (-DrvCreateCloneHDEV@@YAPEAUHDEV__@@PEAU1@K@Z.c)
 * Callees:
 *     ??1DEVLOCKOBJ@@QEAA@XZ @ 0x1C001C878 (--1DEVLOCKOBJ@@QEAA@XZ.c)
 *     Win32FreePool @ 0x1C001D8F0 (Win32FreePool.c)
 *     PALLOCMEM2 @ 0x1C0025778 (PALLOCMEM2.c)
 *     GreReleaseSemaphoreInternal @ 0x1C0029CE0 (GreReleaseSemaphoreInternal.c)
 *     EngAcquireSemaphore @ 0x1C0029E50 (EngAcquireSemaphore.c)
 *     GreDeleteSemaphore @ 0x1C002D330 (GreDeleteSemaphore.c)
 *     GreCreateSemaphore @ 0x1C002D3D0 (GreCreateSemaphore.c)
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C005E110 (EtwTraceGreLockReleaseSemaphore.c)
 *     ?Allocate@PDEV@@SAPEAV1@_KH@Z @ 0x1C005F588 (-Allocate@PDEV@@SAPEAV1@_KH@Z.c)
 *     EtwTraceGreLockAcquireSemaphoreExclusive @ 0x1C005FBC0 (EtwTraceGreLockAcquireSemaphoreExclusive.c)
 *     ?Free@PDEV@@SAXPEAV1@H@Z @ 0x1C0060C7C (-Free@PDEV@@SAXPEAV1@H@Z.c)
 *     ?InitializeClientReferenceCount@PDEV@@QEAAXXZ @ 0x1C0061E28 (-InitializeClientReferenceCount@PDEV@@QEAAXXZ.c)
 *     ??0DEVLOCKOBJ@@QEAA@AEAVPDEVOBJ@@@Z @ 0x1C00A0594 (--0DEVLOCKOBJ@@QEAA@AEAVPDEVOBJ@@@Z.c)
 *     memmove @ 0x1C00AF880 (memmove.c)
 */

PDEVOBJ *__fastcall PDEVOBJ::PDEVOBJ(PDEVOBJ *this, char *a2)
{
  __int64 v4; // rdx
  __int64 v5; // r8
  HDEV v6; // rax
  _OWORD *v7; // rcx
  __int128 v8; // xmm1
  HDEV v9; // rcx
  _OWORD *v10; // rax
  __int128 v11; // xmm1
  __int64 v12; // rax
  __int64 v13; // rax
  unsigned int v14; // ebp
  void *v15; // rcx
  __int64 v16; // rdx
  void *v17; // rcx
  void *v18; // rcx
  void *v19; // rcx
  __int64 v20; // rdx
  HDEV v21; // rcx
  _OWORD *v22; // rax
  __int128 v23; // xmm1
  __int64 v24; // rcx
  __int64 v25; // rax
  unsigned int v26; // ebp
  void *v27; // rcx
  PDEV *v28; // rcx
  _BYTE v30[112]; // [rsp+20h] [rbp-88h] BYREF
  char *v31; // [rsp+B0h] [rbp+8h] BYREF

  v31 = a2;
  *(_QWORD *)this = 0LL;
  if ( a2 && (*((_DWORD *)a2 + 10) & 1) != 0 )
  {
    DEVLOCKOBJ::DEVLOCKOBJ((DEVLOCKOBJ *)v30, (struct PDEVOBJ *)&v31);
    if ( gdwDirectDrawContext + 3580 > gdwDirectDrawContext )
      *(_QWORD *)this = PDEV::Allocate(gdwDirectDrawContext + 3580LL, 0);
    if ( !*(_QWORD *)this )
      goto LABEL_49;
    v4 = 2LL;
    *(_QWORD *)(*(_QWORD *)this + 1792LL) = *((_QWORD *)a2 + 224);
    v5 = 2LL;
    *(_QWORD *)(*(_QWORD *)this + 24LL) = *(_QWORD *)this;
    *(_DWORD *)(*(_QWORD *)this + 1784LL) = 1348756854;
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
    v6 = (HDEV)(a2 + 1824);
    v7 = (_OWORD *)(*(_QWORD *)this + 1824LL);
    do
    {
      *v7 = *(_OWORD *)v6;
      v7[1] = *((_OWORD *)v6 + 1);
      v7[2] = *((_OWORD *)v6 + 2);
      v7[3] = *((_OWORD *)v6 + 3);
      v7[4] = *((_OWORD *)v6 + 4);
      v7[5] = *((_OWORD *)v6 + 5);
      v7[6] = *((_OWORD *)v6 + 6);
      v7 += 8;
      v8 = *((_OWORD *)v6 + 7);
      v6 += 32;
      *(v7 - 1) = v8;
      --v5;
    }
    while ( v5 );
    *v7 = *(_OWORD *)v6;
    v7[1] = *((_OWORD *)v6 + 1);
    v7[2] = *((_OWORD *)v6 + 2);
    *((_QWORD *)v7 + 6) = *((_QWORD *)v6 + 6);
    v9 = (HDEV)(a2 + 2136);
    v10 = (_OWORD *)(*(_QWORD *)this + 2136LL);
    do
    {
      *v10 = *(_OWORD *)v9;
      v10[1] = *((_OWORD *)v9 + 1);
      v10[2] = *((_OWORD *)v9 + 2);
      v10[3] = *((_OWORD *)v9 + 3);
      v10[4] = *((_OWORD *)v9 + 4);
      v10[5] = *((_OWORD *)v9 + 5);
      v10[6] = *((_OWORD *)v9 + 6);
      v10 += 8;
      v11 = *((_OWORD *)v9 + 7);
      v9 += 32;
      *(v10 - 1) = v11;
      --v4;
    }
    while ( v4 );
    *v10 = *(_OWORD *)v9;
    v10[1] = *((_OWORD *)v9 + 1);
    v10[2] = *((_OWORD *)v9 + 2);
    v10[3] = *((_OWORD *)v9 + 3);
    v12 = *(_QWORD *)this;
    *(_OWORD *)(v12 + 2456) = *(_OWORD *)(a2 + 2456);
    *(_OWORD *)(v12 + 2472) = *(_OWORD *)(a2 + 2472);
    *(_OWORD *)(v12 + 2488) = *(_OWORD *)(a2 + 2488);
    *(_OWORD *)(v12 + 2504) = *(_OWORD *)(a2 + 2504);
    *(_OWORD *)(v12 + 2520) = *(_OWORD *)(a2 + 2520);
    *(_OWORD *)(v12 + 2536) = *(_OWORD *)(a2 + 2536);
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
    *(_DWORD *)(*(_QWORD *)this + 3528LL) = *((_DWORD *)a2 + 882);
    *(_QWORD *)(*(_QWORD *)this + 3560LL) = 0LL;
    v13 = *((_QWORD *)a2 + 324);
    if ( v13 )
    {
      v14 = *(unsigned __int16 *)(v13 + 68) + *(unsigned __int16 *)(v13 + 70);
      *(_QWORD *)(*(_QWORD *)this + 2592LL) = PALLOCMEM2(v14, 1986356295LL, 0);
      v15 = *(void **)(*(_QWORD *)this + 2592LL);
      if ( !v15 )
        goto LABEL_34;
      memmove(v15, *((const void **)a2 + 324), v14);
    }
    v16 = 1456LL;
    *(_DWORD *)(*(_QWORD *)this + 44LL) = *((_DWORD *)a2 + 11);
    *(_QWORD *)(*(_QWORD *)this + 72LL) = *((_QWORD *)a2 + 9);
    *(_QWORD *)(*(_QWORD *)this + 1432LL) = *((_QWORD *)a2 + 179);
    *(_QWORD *)(*(_QWORD *)this + 1440LL) = *((_QWORD *)a2 + 180);
    *(_QWORD *)(*(_QWORD *)this + 1448LL) = *((_QWORD *)a2 + 181);
    *(_QWORD *)(*(_QWORD *)this + 2552LL) = *((_QWORD *)a2 + 319);
    do
    {
      *(_QWORD *)(v16 + *(_QWORD *)this) = *(_QWORD *)&a2[v16];
      v16 += 8LL;
    }
    while ( v16 < 1504 );
    *(_QWORD *)(*(_QWORD *)this + 1504LL) = *((_QWORD *)a2 + 188);
    if ( *((_QWORD *)a2 + 211) )
    {
      *(_QWORD *)(*(_QWORD *)this + 1688LL) = PALLOCMEM2(0x600uLL, 1835231559LL, 0);
      v17 = *(void **)(*(_QWORD *)this + 1688LL);
      if ( !v17 )
        goto LABEL_34;
      memmove(v17, *((const void **)a2 + 211), 0x600uLL);
    }
    if ( !*((_QWORD *)a2 + 212) )
    {
LABEL_21:
      if ( !*((_QWORD *)a2 + 213) )
      {
LABEL_24:
        v20 = 6LL;
        *(_QWORD *)(*(_QWORD *)this + 1720LL) = *((_QWORD *)a2 + 215);
        *(_QWORD *)(*(_QWORD *)this + 2600LL) = *((_QWORD *)a2 + 325);
        *(_DWORD *)(*(_QWORD *)this + 2608LL) = *((_DWORD *)a2 + 652);
        *(_DWORD *)(*(_QWORD *)this + 2612LL) = *((_DWORD *)a2 + 653);
        v21 = (HDEV)(a2 + 2688);
        v22 = (_OWORD *)(*(_QWORD *)this + 2688LL);
        do
        {
          *v22 = *(_OWORD *)v21;
          v22[1] = *((_OWORD *)v21 + 1);
          v22[2] = *((_OWORD *)v21 + 2);
          v22[3] = *((_OWORD *)v21 + 3);
          v22[4] = *((_OWORD *)v21 + 4);
          v22[5] = *((_OWORD *)v21 + 5);
          v22[6] = *((_OWORD *)v21 + 6);
          v22 += 8;
          v23 = *((_OWORD *)v21 + 7);
          v21 += 32;
          *(v22 - 1) = v23;
          --v20;
        }
        while ( v20 );
        *v22 = *(_OWORD *)v21;
        v22[1] = *((_OWORD *)v21 + 1);
        v22[2] = *((_OWORD *)v21 + 2);
        v22[3] = *((_OWORD *)v21 + 3);
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
        v24 = *((_QWORD *)a2 + 445);
        if ( v24 )
        {
          v25 = -1LL;
          do
            ++v25;
          while ( *(_WORD *)(v24 + 2 * v25) );
          v26 = 2 * v25 + 2;
          *(_QWORD *)(*(_QWORD *)this + 3560LL) = PALLOCMEM2(v26, 1886221639LL, 1);
          v27 = *(void **)(*(_QWORD *)this + 3560LL);
          if ( v27 )
            memmove(v27, *((const void **)a2 + 445), v26);
        }
        PDEV::InitializeClientReferenceCount(*(PDEV **)this);
        *(_DWORD *)(*(_QWORD *)this + 12LL) = 1;
        *(_DWORD *)(*(_QWORD *)this + 40LL) = *((_DWORD *)a2 + 10) & 0x60001;
        GreCreateSemaphore();
      }
      *(_QWORD *)(*(_QWORD *)this + 1704LL) = PALLOCMEM2(0x600uLL, 1735354695LL, 0);
      v19 = *(void **)(*(_QWORD *)this + 1704LL);
      if ( v19 )
      {
        memmove(v19, *((const void **)a2 + 213), 0x600uLL);
        goto LABEL_24;
      }
      goto LABEL_34;
    }
    *(_QWORD *)(*(_QWORD *)this + 1696LL) = PALLOCMEM2(0x600uLL, 1634167111LL, 0);
    v18 = *(void **)(*(_QWORD *)this + 1696LL);
    if ( v18 )
    {
      memmove(v18, *((const void **)a2 + 212), 0x600uLL);
      goto LABEL_21;
    }
LABEL_34:
    v28 = *(PDEV **)this;
    if ( *(_QWORD *)(*(_QWORD *)this + 56LL) )
    {
      GreDeleteSemaphore(*(PERESOURCE *)(*(_QWORD *)this + 56LL));
      v28 = *(PDEV **)this;
    }
    if ( *((_QWORD *)v28 + 6) )
    {
      GreDeleteSemaphore(*((PERESOURCE *)v28 + 6));
      v28 = *(PDEV **)this;
    }
    if ( *((_QWORD *)v28 + 445) )
    {
      Win32FreePool(*((_QWORD *)v28 + 445));
      *(_QWORD *)(*(_QWORD *)this + 3560LL) = 0LL;
      v28 = *(PDEV **)this;
    }
    if ( *((_QWORD *)v28 + 324) )
    {
      Win32FreePool(*((_QWORD *)v28 + 324));
      v28 = *(PDEV **)this;
    }
    if ( *((_QWORD *)v28 + 211) )
    {
      Win32FreePool(*((_QWORD *)v28 + 211));
      *(_QWORD *)(*(_QWORD *)this + 1688LL) = 0LL;
      v28 = *(PDEV **)this;
    }
    if ( *((_QWORD *)v28 + 212) )
    {
      Win32FreePool(*((_QWORD *)v28 + 212));
      *(_QWORD *)(*(_QWORD *)this + 1696LL) = 0LL;
      v28 = *(PDEV **)this;
    }
    if ( *((_QWORD *)v28 + 213) )
    {
      Win32FreePool(*((_QWORD *)v28 + 213));
      *(_QWORD *)(*(_QWORD *)this + 1704LL) = 0LL;
      v28 = *(PDEV **)this;
    }
    PDEV::Free(v28, 0);
    *(_QWORD *)this = 0LL;
LABEL_49:
    DEVLOCKOBJ::~DEVLOCKOBJ((DEVLOCKOBJ *)v30);
  }
  return this;
}
