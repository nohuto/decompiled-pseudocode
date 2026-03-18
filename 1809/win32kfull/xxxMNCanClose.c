/*
 * XREFs of xxxMNCanClose @ 0x1C0020A70
 * Callers:
 *     ?xxxCommonGetTitleBarInfo@@YAXPEAUtagWND@@PEAUtagTITLEBARINFO@@@Z @ 0x1C0020584 (-xxxCommonGetTitleBarInfo@@YAXPEAUtagWND@@PEAUtagTITLEBARINFO@@@Z.c)
 *     xxxDrawCaptionBar @ 0x1C00A7DE8 (xxxDrawCaptionBar.c)
 *     xxxDCETrackCaptionButton @ 0x1C00BAAFC (xxxDCETrackCaptionButton.c)
 *     xxxCalcCaptionButton @ 0x1C022B200 (xxxCalcCaptionButton.c)
 * Callees:
 *     xxxGetSysMenuPtr @ 0x1C0020FE8 (xxxGetSysMenuPtr.c)
 *     MNLookUpItem @ 0x1C0021208 (MNLookUpItem.c)
 *     ??1?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ @ 0x1C0022768 (--1-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ.c)
 *     ?DecrementCountAndTryFree@?$SmartObjStackRefBase@UtagMENU@@@@IEAAXXZ @ 0x1C0065E94 (-DecrementCountAndTryFree@-$SmartObjStackRefBase@UtagMENU@@@@IEAAXXZ.c)
 *     ??8?$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z @ 0x1C0069C30 (--8-$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z.c)
 *     ??4?$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z @ 0x1C00FE500 (--4-$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z.c)
 *     IsThreadCrossSessionAttached @ 0x1C015BC14 (IsThreadCrossSessionAttached.c)
 */

__int64 __fastcall xxxMNCanClose(__int64 a1, __int64 a2)
{
  __int64 v2; // rdi
  char v3; // bl
  __int64 v4; // rsi
  struct _KTHREAD *CurrentThread; // r15
  __int64 v7; // rdx
  __int64 *ThreadWin32Thread; // rax
  __int64 v9; // rax
  __int64 *v10; // rcx
  __int64 SysMenuPtr; // rax
  __int64 v12; // rsi
  unsigned int v13; // r12d
  __int64 v14; // rsi
  struct _KTHREAD *v15; // r14
  __int64 v16; // rbx
  __int64 *v17; // rax
  __int64 v18; // rbx
  char v19; // si
  struct _KTHREAD *v20; // r14
  __int64 v21; // rbx
  __int64 *v22; // rax
  _QWORD *v23; // rax
  __int64 v24; // r14
  struct _KTHREAD *v25; // rsi
  _QWORD *v26; // r13
  __int64 v27; // rbx
  __int64 *v28; // rax
  int v29; // ecx
  _QWORD *v30; // rbx
  int v31; // r15d
  __int64 v32; // r10
  int v33; // ecx
  __int64 v34; // rsi
  __int64 v35; // rdx
  __int64 v36; // rcx
  struct _KTHREAD *v37; // rsi
  __int64 v38; // rbx
  __int64 *v39; // rax
  _QWORD *v40; // rax
  __int64 v41; // rcx
  __int64 v42; // rcx
  struct _KTHREAD *v43; // rbx
  __int64 *v44; // rax
  _QWORD *v45; // rcx
  __int64 result; // rax
  __int64 *v47; // [rsp+28h] [rbp-19h] BYREF
  __int64 v48; // [rsp+30h] [rbp-11h] BYREF
  __int64 v49; // [rsp+38h] [rbp-9h]
  __int64 v50; // [rsp+40h] [rbp-1h] BYREF
  __int64 v51; // [rsp+48h] [rbp+7h] BYREF
  __int64 v52; // [rsp+50h] [rbp+Fh]
  __int64 *v53; // [rsp+58h] [rbp+17h]
  _QWORD v54[2]; // [rsp+60h] [rbp+1Fh] BYREF

  v2 = 0LL;
  v3 = 0;
  v4 = 0LL;
  CurrentThread = KeGetCurrentThread();
  if ( !(unsigned int)IsThreadCrossSessionAttached(a1, a2) )
  {
    ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
    if ( ThreadWin32Thread )
      v4 = *ThreadWin32Thread;
  }
  v48 = 0LL;
  v47 = (__int64 *)gSmartObjNullRef;
  v48 = *(_QWORD *)(v4 + 1448);
  *(_QWORD *)(v4 + 1448) = &v48;
  v9 = *(_QWORD *)(a1 + 112);
  v49 = 0LL;
  v10 = *(__int64 **)(v9 + 8);
  if ( (*((_BYTE *)v10 + 9) & 2) != 0 )
    goto LABEL_77;
  SysMenuPtr = xxxGetSysMenuPtr(a1);
  v10 = v47;
  v12 = SysMenuPtr;
  v49 = 0LL;
  v13 = 1;
  if ( SysMenuPtr != *v47 )
  {
    v10 = v47;
    if ( v47 != (__int64 *)gSmartObjNullRef )
    {
      --*((_DWORD *)v47 + 2);
      v10 = v47;
      if ( !*((_DWORD *)v47 + 2) )
      {
        if ( *((_BYTE *)v47 + 12) )
          Win32FreeToPagedLookasideList(gpStackRefLookAside, v47);
      }
    }
    if ( v12 )
    {
      v47 = *(__int64 **)(v12 + 152);
      ++*((_DWORD *)v47 + 2);
    }
    else
    {
      v47 = (__int64 *)gSmartObjNullRef;
    }
    if ( v49 )
      goto LABEL_15;
  }
  if ( *v47 )
  {
LABEL_15:
    v14 = 0LL;
    v15 = KeGetCurrentThread();
    v16 = *v47;
    if ( !(unsigned int)IsThreadCrossSessionAttached(v10, v7) )
    {
      v17 = (__int64 *)PsGetThreadWin32Thread(v15);
      if ( v17 )
        v14 = *v17;
    }
    v54[0] = 0LL;
    v53 = (__int64 *)gSmartObjNullRef;
    if ( v16 )
    {
      v53 = *(__int64 **)(v16 + 152);
      ++*(_DWORD *)(*(_QWORD *)(v16 + 152) + 8LL);
    }
    v54[0] = *(_QWORD *)(v14 + 1448);
    *(_QWORD *)(v14 + 1448) = v54;
    v54[1] = v49;
    v18 = *v53;
    if ( *v53 != *v47 )
    {
      SmartObjStackRefBase<tagMENU>::DecrementCountAndTryFree(&v47);
      if ( v18 )
      {
        v47 = *(__int64 **)(v18 + 152);
        ++*((_DWORD *)v47 + 2);
      }
      else
      {
        v47 = (__int64 *)gSmartObjNullRef;
      }
    }
    if ( v49 || *v47 )
    {
      v19 = 0;
      v3 = 1;
      goto LABEL_28;
    }
    v3 = 1;
  }
  v19 = 1;
LABEL_28:
  if ( (v3 & 1) != 0 )
  {
    v20 = KeGetCurrentThread();
    v21 = 0LL;
    if ( !(unsigned int)IsThreadCrossSessionAttached(v10, v7) )
    {
      v22 = (__int64 *)PsGetThreadWin32Thread(v20);
      if ( v22 )
        v21 = *v22;
    }
    if ( v53 != (__int64 *)gSmartObjNullRef && !--*((_DWORD *)v53 + 2) )
    {
      if ( *((_BYTE *)v53 + 12) )
        Win32FreeToPagedLookasideList(gpStackRefLookAside, v53);
    }
    v23 = *(_QWORD **)(v21 + 1448);
    if ( v23 )
      *(_QWORD *)(v21 + 1448) = *v23;
  }
  if ( v19 )
    goto LABEL_77;
  v24 = v49;
  if ( !v49 )
    v24 = *v47;
  v25 = KeGetCurrentThread();
  v26 = 0LL;
  v27 = 0LL;
  if ( !(unsigned int)IsThreadCrossSessionAttached(v10, v7) )
  {
    v28 = (__int64 *)PsGetThreadWin32Thread(v25);
    if ( v28 )
      v27 = *v28;
  }
  v51 = 0LL;
  v50 = gSmartObjNullRef;
  v51 = *(_QWORD *)(v27 + 1448);
  *(_QWORD *)(v27 + 1448) = &v51;
  v52 = 0LL;
  if ( !v24 || (v29 = *(_DWORD *)(*(_QWORD *)(v24 + 40) + 44LL)) == 0 )
  {
    SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(&v50);
    goto LABEL_70;
  }
  v30 = *(_QWORD **)(v24 + 88);
  v31 = 0;
  if ( v29 > 0 )
  {
    do
    {
      v32 = v30[2];
      v33 = *(_DWORD *)(*v30 + 8LL);
      if ( v32 )
      {
        if ( v33 == 61536 )
        {
          v52 = 0LL;
          SmartObjStackRefBase<tagMENU>::operator=(&v50);
          v32 = v30[2];
          v26 = v30;
        }
        v34 = MNLookUpItem(v32, 61536LL, 0LL, 0LL);
        if ( v34 )
          goto LABEL_57;
      }
      else if ( v33 == 61536 )
      {
        v34 = (__int64)v30;
LABEL_57:
        SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(&v50);
        if ( !v34 )
          goto LABEL_70;
        goto LABEL_76;
      }
      ++v31;
      v30 += 12;
    }
    while ( v31 < *(_DWORD *)(*(_QWORD *)(v24 + 40) + 44LL) );
  }
  if ( !(unsigned __int8)SmartObjStackRef<tagMENU>::operator==(&v50) )
  {
    v34 = (__int64)v26;
    goto LABEL_57;
  }
  v37 = KeGetCurrentThread();
  v38 = 0LL;
  if ( !(unsigned int)IsThreadCrossSessionAttached(v36, v35) )
  {
    v39 = (__int64 *)PsGetThreadWin32Thread(v37);
    if ( v39 )
      v38 = *v39;
  }
  if ( v50 != gSmartObjNullRef && !--*(_DWORD *)(v50 + 8) )
  {
    if ( *(_BYTE *)(v50 + 12) )
      Win32FreeToPagedLookasideList(gpStackRefLookAside, v50);
  }
  v40 = *(_QWORD **)(v38 + 1448);
  if ( v40 )
    *(_QWORD *)(v38 + 1448) = *v40;
LABEL_70:
  v41 = v49;
  if ( !v49 )
    v41 = *v47;
  v34 = MNLookUpItem(v41, 32864LL, 0LL, 0LL);
  if ( !v34 )
  {
    v42 = v49;
    if ( !v49 )
      v42 = *v47;
    v34 = MNLookUpItem(v42, 49264LL, 0LL, 0LL);
    if ( !v34 )
      goto LABEL_77;
  }
LABEL_76:
  v10 = (__int64 *)*(unsigned int *)(*(_QWORD *)v34 + 4LL);
  if ( ((unsigned __int8)v10 & 3) != 0 )
LABEL_77:
    v13 = 0;
  v43 = KeGetCurrentThread();
  if ( !(unsigned int)IsThreadCrossSessionAttached(v10, v7) )
  {
    v44 = (__int64 *)PsGetThreadWin32Thread(v43);
    if ( v44 )
      v2 = *v44;
  }
  if ( v47 != (__int64 *)gSmartObjNullRef && !--*((_DWORD *)v47 + 2) )
  {
    if ( *((_BYTE *)v47 + 12) )
      Win32FreeToPagedLookasideList(gpStackRefLookAside, v47);
  }
  v45 = *(_QWORD **)(v2 + 1448);
  result = v13;
  if ( v45 )
    *(_QWORD *)(v2 + 1448) = *v45;
  return result;
}
