/*
 * XREFs of xxxMNCanClose @ 0x1C00A93A0
 * Callers:
 *     xxxDrawCaptionBar @ 0x1C000CB10 (xxxDrawCaptionBar.c)
 *     xxxDCETrackCaptionButton @ 0x1C000D010 (xxxDCETrackCaptionButton.c)
 *     ?xxxCommonGetTitleBarInfo@@YAXPEAUtagWND@@PEAUtagTITLEBARINFO@@@Z @ 0x1C00A8EB0 (-xxxCommonGetTitleBarInfo@@YAXPEAUtagWND@@PEAUtagTITLEBARINFO@@@Z.c)
 *     xxxCalcCaptionButton @ 0x1C024423C (xxxCalcCaptionButton.c)
 * Callees:
 *     ??1?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ @ 0x1C0021844 (--1-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ.c)
 *     ?DecrementCountAndTryFree@?$SmartObjStackRefBase@UtagMENU@@@@IEAAXXZ @ 0x1C006204C (-DecrementCountAndTryFree@-$SmartObjStackRefBase@UtagMENU@@@@IEAAXXZ.c)
 *     xxxGetSysMenuPtr @ 0x1C00A9918 (xxxGetSysMenuPtr.c)
 *     MNLookUpItem @ 0x1C00A9B2C (MNLookUpItem.c)
 *     ??8?$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z @ 0x1C00BFB98 (--8-$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z.c)
 *     ??4?$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z @ 0x1C0106A24 (--4-$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z.c)
 *     IsThreadCrossSessionAttached @ 0x1C01637A4 (IsThreadCrossSessionAttached.c)
 */

__int64 __fastcall xxxMNCanClose(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rdi
  char v5; // bl
  __int64 v6; // rsi
  struct _KTHREAD *CurrentThread; // r15
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 *ThreadWin32Thread; // rax
  __int64 v13; // rax
  __int64 v14; // rcx
  __int64 SysMenuPtr; // rax
  __int64 v16; // rsi
  unsigned int v17; // r12d
  __int64 v18; // rsi
  struct _KTHREAD *v19; // r14
  __int64 v20; // rbx
  __int64 *v21; // rax
  __int64 v22; // rbx
  char v23; // si
  struct _KTHREAD *v24; // r14
  __int64 v25; // rbx
  __int64 *v26; // rax
  _QWORD *v27; // rax
  __int64 v28; // r14
  struct _KTHREAD *v29; // rsi
  _QWORD *v30; // r13
  __int64 v31; // rbx
  __int64 v32; // rdx
  __int64 v33; // r8
  __int64 v34; // r9
  __int64 *v35; // rax
  int v36; // ecx
  _QWORD *v37; // rbx
  int v38; // r15d
  __int64 v39; // r10
  int v40; // ecx
  __int64 v41; // rsi
  __int64 v42; // rcx
  struct _KTHREAD *v43; // rsi
  __int64 v44; // rbx
  __int64 *v45; // rax
  _QWORD *v46; // rax
  __int64 v47; // rcx
  __int64 v48; // rcx
  struct _KTHREAD *v49; // rbx
  __int64 *v50; // rax
  _QWORD *v51; // rcx
  __int64 result; // rax
  __int64 *v53; // [rsp+28h] [rbp-19h] BYREF
  __int64 v54; // [rsp+30h] [rbp-11h] BYREF
  __int64 v55; // [rsp+38h] [rbp-9h]
  __int64 v56; // [rsp+40h] [rbp-1h] BYREF
  __int64 v57; // [rsp+48h] [rbp+7h] BYREF
  __int64 v58; // [rsp+50h] [rbp+Fh]
  __int64 *v59; // [rsp+58h] [rbp+17h]
  _QWORD v60[2]; // [rsp+60h] [rbp+1Fh] BYREF

  v4 = 0LL;
  v5 = 0;
  v6 = 0LL;
  CurrentThread = KeGetCurrentThread();
  if ( !(unsigned int)IsThreadCrossSessionAttached(a1, a2, a3, a4) )
  {
    ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
    if ( ThreadWin32Thread )
      v6 = *ThreadWin32Thread;
  }
  v54 = 0LL;
  v53 = (__int64 *)gSmartObjNullRef;
  v54 = *(_QWORD *)(v6 + 1472);
  *(_QWORD *)(v6 + 1472) = &v54;
  v13 = *(_QWORD *)(a1 + 136);
  v55 = 0LL;
  v14 = *(_QWORD *)(v13 + 8);
  if ( (*(_BYTE *)(v14 + 9) & 2) != 0 )
    goto LABEL_77;
  SysMenuPtr = xxxGetSysMenuPtr(a1);
  v14 = (__int64)v53;
  v16 = SysMenuPtr;
  v55 = 0LL;
  v17 = 1;
  if ( SysMenuPtr != *v53 )
  {
    v14 = (__int64)v53;
    if ( v53 != (__int64 *)gSmartObjNullRef )
    {
      --*((_DWORD *)v53 + 2);
      v14 = (__int64)v53;
      if ( !*((_DWORD *)v53 + 2) )
      {
        if ( *((_BYTE *)v53 + 12) )
          Win32FreeToPagedLookasideList(gpStackRefLookAside, v53);
      }
    }
    if ( v16 )
    {
      v53 = *(__int64 **)(v16 + 152);
      ++*((_DWORD *)v53 + 2);
    }
    else
    {
      v53 = (__int64 *)gSmartObjNullRef;
    }
    if ( v55 )
      goto LABEL_15;
  }
  if ( *v53 )
  {
LABEL_15:
    v18 = 0LL;
    v19 = KeGetCurrentThread();
    v20 = *v53;
    if ( !(unsigned int)IsThreadCrossSessionAttached(v14, v9, v10, v11) )
    {
      v21 = (__int64 *)PsGetThreadWin32Thread(v19);
      if ( v21 )
        v18 = *v21;
    }
    v60[0] = 0LL;
    v59 = (__int64 *)gSmartObjNullRef;
    if ( v20 )
    {
      v59 = *(__int64 **)(v20 + 152);
      ++*(_DWORD *)(*(_QWORD *)(v20 + 152) + 8LL);
    }
    v60[0] = *(_QWORD *)(v18 + 1472);
    *(_QWORD *)(v18 + 1472) = v60;
    v60[1] = v55;
    v22 = *v59;
    if ( *v59 != *v53 )
    {
      SmartObjStackRefBase<tagMENU>::DecrementCountAndTryFree((__int64 *)&v53);
      if ( v22 )
      {
        v53 = *(__int64 **)(v22 + 152);
        ++*((_DWORD *)v53 + 2);
      }
      else
      {
        v53 = (__int64 *)gSmartObjNullRef;
      }
    }
    if ( v55 || *v53 )
    {
      v23 = 0;
      v5 = 1;
      goto LABEL_28;
    }
    v5 = 1;
  }
  v23 = 1;
LABEL_28:
  if ( (v5 & 1) != 0 )
  {
    v24 = KeGetCurrentThread();
    v25 = 0LL;
    if ( !(unsigned int)IsThreadCrossSessionAttached(v14, v9, v10, v11) )
    {
      v26 = (__int64 *)PsGetThreadWin32Thread(v24);
      if ( v26 )
        v25 = *v26;
    }
    if ( v59 != (__int64 *)gSmartObjNullRef && !--*((_DWORD *)v59 + 2) )
    {
      if ( *((_BYTE *)v59 + 12) )
        Win32FreeToPagedLookasideList(gpStackRefLookAside, v59);
    }
    v27 = *(_QWORD **)(v25 + 1472);
    if ( v27 )
      *(_QWORD *)(v25 + 1472) = *v27;
  }
  if ( v23 )
    goto LABEL_77;
  v28 = v55;
  if ( !v55 )
    v28 = *v53;
  v29 = KeGetCurrentThread();
  v30 = 0LL;
  v31 = 0LL;
  if ( !(unsigned int)IsThreadCrossSessionAttached(v14, v9, v10, v11) )
  {
    v35 = (__int64 *)PsGetThreadWin32Thread(v29);
    if ( v35 )
      v31 = *v35;
  }
  v57 = 0LL;
  v56 = gSmartObjNullRef;
  v57 = *(_QWORD *)(v31 + 1472);
  *(_QWORD *)(v31 + 1472) = &v57;
  v58 = 0LL;
  if ( !v28 || (v36 = *(_DWORD *)(*(_QWORD *)(v28 + 40) + 44LL)) == 0 )
  {
    SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(&v56, v32, v33, v34);
    goto LABEL_70;
  }
  v37 = *(_QWORD **)(v28 + 88);
  v38 = 0;
  if ( v36 > 0 )
  {
    do
    {
      v39 = v37[2];
      v40 = *(_DWORD *)(*v37 + 8LL);
      if ( v39 )
      {
        if ( v40 == 61536 )
        {
          v58 = 0LL;
          SmartObjStackRefBase<tagMENU>::operator=(&v56, v28);
          v39 = v37[2];
          v30 = v37;
        }
        v41 = MNLookUpItem(v39, 61536LL, 0LL, 0LL);
        if ( v41 )
          goto LABEL_57;
      }
      else if ( v40 == 61536 )
      {
        v41 = (__int64)v37;
LABEL_57:
        SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(&v56, v32, v33, v34);
        if ( !v41 )
          goto LABEL_70;
        goto LABEL_76;
      }
      ++v38;
      v37 += 12;
    }
    while ( v38 < *(_DWORD *)(*(_QWORD *)(v28 + 40) + 44LL) );
  }
  if ( !(unsigned __int8)SmartObjStackRef<tagMENU>::operator==(&v56) )
  {
    v41 = (__int64)v30;
    goto LABEL_57;
  }
  v43 = KeGetCurrentThread();
  v44 = 0LL;
  if ( !(unsigned int)IsThreadCrossSessionAttached(v42, v32, v33, v34) )
  {
    v45 = (__int64 *)PsGetThreadWin32Thread(v43);
    if ( v45 )
      v44 = *v45;
  }
  if ( v56 != gSmartObjNullRef && !--*(_DWORD *)(v56 + 8) )
  {
    if ( *(_BYTE *)(v56 + 12) )
      Win32FreeToPagedLookasideList(gpStackRefLookAside, v56);
  }
  v46 = *(_QWORD **)(v44 + 1472);
  if ( v46 )
    *(_QWORD *)(v44 + 1472) = *v46;
LABEL_70:
  v47 = v55;
  if ( !v55 )
    v47 = *v53;
  v41 = MNLookUpItem(v47, 32864LL, 0LL, 0LL);
  if ( !v41 )
  {
    v48 = v55;
    if ( !v55 )
      v48 = *v53;
    v41 = MNLookUpItem(v48, 49264LL, 0LL, 0LL);
    if ( !v41 )
      goto LABEL_77;
  }
LABEL_76:
  v14 = *(unsigned int *)(*(_QWORD *)v41 + 4LL);
  if ( (v14 & 3) != 0 )
LABEL_77:
    v17 = 0;
  v49 = KeGetCurrentThread();
  if ( !(unsigned int)IsThreadCrossSessionAttached(v14, v9, v10, v11) )
  {
    v50 = (__int64 *)PsGetThreadWin32Thread(v49);
    if ( v50 )
      v4 = *v50;
  }
  if ( v53 != (__int64 *)gSmartObjNullRef && !--*((_DWORD *)v53 + 2) )
  {
    if ( *((_BYTE *)v53 + 12) )
      Win32FreeToPagedLookasideList(gpStackRefLookAside, v53);
  }
  v51 = *(_QWORD **)(v4 + 1472);
  result = v17;
  if ( v51 )
    *(_QWORD *)(v4 + 1472) = *v51;
  return result;
}
