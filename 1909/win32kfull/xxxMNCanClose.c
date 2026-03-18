/*
 * XREFs of xxxMNCanClose @ 0x1C004A180
 * Callers:
 *     xxxDCETrackCaptionButton @ 0x1C000C488 (xxxDCETrackCaptionButton.c)
 *     ?xxxCommonGetTitleBarInfo@@YAXPEAUtagWND@@PEAUtagTITLEBARINFO@@@Z @ 0x1C0049C90 (-xxxCommonGetTitleBarInfo@@YAXPEAUtagWND@@PEAUtagTITLEBARINFO@@@Z.c)
 *     xxxDrawCaptionBar @ 0x1C012F140 (xxxDrawCaptionBar.c)
 *     xxxCalcCaptionButton @ 0x1C0243AFC (xxxCalcCaptionButton.c)
 * Callees:
 *     ??1?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ @ 0x1C0038E70 (--1-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ.c)
 *     xxxGetSysMenuPtr @ 0x1C004A6F8 (xxxGetSysMenuPtr.c)
 *     MNLookUpItem @ 0x1C004A90C (MNLookUpItem.c)
 *     ??8?$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z @ 0x1C0061278 (--8-$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z.c)
 *     ?DecrementCountAndTryFree@?$SmartObjStackRefBase@UtagMENU@@@@IEAAXXZ @ 0x1C00AC274 (-DecrementCountAndTryFree@-$SmartObjStackRefBase@UtagMENU@@@@IEAAXXZ.c)
 *     ??4?$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z @ 0x1C00E0C84 (--4-$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z.c)
 *     IsThreadCrossSessionAttached @ 0x1C0164774 (IsThreadCrossSessionAttached.c)
 */

__int64 __fastcall xxxMNCanClose(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rdi
  char v4; // bl
  __int64 v5; // rsi
  struct _KTHREAD *CurrentThread; // r15
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 *ThreadWin32Thread; // rax
  __int64 v11; // rax
  __int64 *v12; // rcx
  __int64 SysMenuPtr; // rax
  __int64 v14; // rsi
  unsigned int v15; // r12d
  __int64 v16; // rsi
  struct _KTHREAD *v17; // r14
  __int64 v18; // rbx
  __int64 *v19; // rax
  __int64 v20; // rbx
  char v21; // si
  struct _KTHREAD *v22; // r14
  __int64 v23; // rbx
  __int64 *v24; // rax
  _QWORD *v25; // rax
  __int64 v26; // r14
  struct _KTHREAD *v27; // rsi
  _QWORD *v28; // r13
  __int64 v29; // rbx
  __int64 v30; // rdx
  __int64 v31; // r8
  __int64 *v32; // rax
  int v33; // ecx
  _QWORD *v34; // rbx
  int v35; // r15d
  __int64 v36; // r10
  int v37; // ecx
  __int64 v38; // rsi
  __int64 v39; // rcx
  struct _KTHREAD *v40; // rsi
  __int64 v41; // rbx
  __int64 *v42; // rax
  _QWORD *v43; // rax
  __int64 v44; // rcx
  __int64 v45; // rcx
  struct _KTHREAD *v46; // rbx
  __int64 *v47; // rax
  _QWORD *v48; // rcx
  __int64 result; // rax
  __int64 *v50; // [rsp+28h] [rbp-19h] BYREF
  __int64 v51; // [rsp+30h] [rbp-11h] BYREF
  __int64 v52; // [rsp+38h] [rbp-9h]
  __int64 v53; // [rsp+40h] [rbp-1h] BYREF
  __int64 v54; // [rsp+48h] [rbp+7h] BYREF
  __int64 v55; // [rsp+50h] [rbp+Fh]
  __int64 *v56; // [rsp+58h] [rbp+17h]
  _QWORD v57[2]; // [rsp+60h] [rbp+1Fh] BYREF

  v3 = 0LL;
  v4 = 0;
  v5 = 0LL;
  CurrentThread = KeGetCurrentThread();
  if ( !(unsigned int)IsThreadCrossSessionAttached(a1, a2, a3) )
  {
    ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
    if ( ThreadWin32Thread )
      v5 = *ThreadWin32Thread;
  }
  v51 = 0LL;
  v50 = (__int64 *)gSmartObjNullRef;
  v51 = *(_QWORD *)(v5 + 1472);
  *(_QWORD *)(v5 + 1472) = &v51;
  v11 = *(_QWORD *)(a1 + 136);
  v52 = 0LL;
  v12 = *(__int64 **)(v11 + 8);
  if ( (*((_BYTE *)v12 + 9) & 2) != 0 )
    goto LABEL_77;
  SysMenuPtr = xxxGetSysMenuPtr(a1);
  v12 = v50;
  v14 = SysMenuPtr;
  v52 = 0LL;
  v15 = 1;
  if ( SysMenuPtr != *v50 )
  {
    v12 = v50;
    if ( v50 != (__int64 *)gSmartObjNullRef )
    {
      --*((_DWORD *)v50 + 2);
      v12 = v50;
      if ( !*((_DWORD *)v50 + 2) )
      {
        if ( *((_BYTE *)v50 + 12) )
          Win32FreeToPagedLookasideList(gpStackRefLookAside, v50);
      }
    }
    if ( v14 )
    {
      v50 = *(__int64 **)(v14 + 152);
      ++*((_DWORD *)v50 + 2);
    }
    else
    {
      v50 = (__int64 *)gSmartObjNullRef;
    }
    if ( v52 )
      goto LABEL_15;
  }
  if ( *v50 )
  {
LABEL_15:
    v16 = 0LL;
    v17 = KeGetCurrentThread();
    v18 = *v50;
    if ( !(unsigned int)IsThreadCrossSessionAttached(v12, v8, v9) )
    {
      v19 = (__int64 *)PsGetThreadWin32Thread(v17);
      if ( v19 )
        v16 = *v19;
    }
    v57[0] = 0LL;
    v56 = (__int64 *)gSmartObjNullRef;
    if ( v18 )
    {
      v56 = *(__int64 **)(v18 + 152);
      ++*(_DWORD *)(*(_QWORD *)(v18 + 152) + 8LL);
    }
    v57[0] = *(_QWORD *)(v16 + 1472);
    *(_QWORD *)(v16 + 1472) = v57;
    v57[1] = v52;
    v20 = *v56;
    if ( *v56 != *v50 )
    {
      SmartObjStackRefBase<tagMENU>::DecrementCountAndTryFree(&v50);
      if ( v20 )
      {
        v50 = *(__int64 **)(v20 + 152);
        ++*((_DWORD *)v50 + 2);
      }
      else
      {
        v50 = (__int64 *)gSmartObjNullRef;
      }
    }
    if ( v52 || *v50 )
    {
      v21 = 0;
      v4 = 1;
      goto LABEL_28;
    }
    v4 = 1;
  }
  v21 = 1;
LABEL_28:
  if ( (v4 & 1) != 0 )
  {
    v22 = KeGetCurrentThread();
    v23 = 0LL;
    if ( !(unsigned int)IsThreadCrossSessionAttached(v12, v8, v9) )
    {
      v24 = (__int64 *)PsGetThreadWin32Thread(v22);
      if ( v24 )
        v23 = *v24;
    }
    if ( v56 != (__int64 *)gSmartObjNullRef && !--*((_DWORD *)v56 + 2) )
    {
      if ( *((_BYTE *)v56 + 12) )
        Win32FreeToPagedLookasideList(gpStackRefLookAside, v56);
    }
    v25 = *(_QWORD **)(v23 + 1472);
    if ( v25 )
      *(_QWORD *)(v23 + 1472) = *v25;
  }
  if ( v21 )
    goto LABEL_77;
  v26 = v52;
  if ( !v52 )
    v26 = *v50;
  v27 = KeGetCurrentThread();
  v28 = 0LL;
  v29 = 0LL;
  if ( !(unsigned int)IsThreadCrossSessionAttached(v12, v8, v9) )
  {
    v32 = (__int64 *)PsGetThreadWin32Thread(v27);
    if ( v32 )
      v29 = *v32;
  }
  v54 = 0LL;
  v53 = gSmartObjNullRef;
  v54 = *(_QWORD *)(v29 + 1472);
  *(_QWORD *)(v29 + 1472) = &v54;
  v55 = 0LL;
  if ( !v26 || (v33 = *(_DWORD *)(*(_QWORD *)(v26 + 40) + 44LL)) == 0 )
  {
    SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(&v53, v30, v31);
    goto LABEL_70;
  }
  v34 = *(_QWORD **)(v26 + 88);
  v35 = 0;
  if ( v33 > 0 )
  {
    do
    {
      v36 = v34[2];
      v37 = *(_DWORD *)(*v34 + 8LL);
      if ( v36 )
      {
        if ( v37 == 61536 )
        {
          v55 = 0LL;
          SmartObjStackRefBase<tagMENU>::operator=(&v53);
          v36 = v34[2];
          v28 = v34;
        }
        v38 = MNLookUpItem(v36, 61536LL, 0LL, 0LL);
        if ( v38 )
          goto LABEL_57;
      }
      else if ( v37 == 61536 )
      {
        v38 = (__int64)v34;
LABEL_57:
        SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(&v53, v30, v31);
        if ( !v38 )
          goto LABEL_70;
        goto LABEL_76;
      }
      ++v35;
      v34 += 12;
    }
    while ( v35 < *(_DWORD *)(*(_QWORD *)(v26 + 40) + 44LL) );
  }
  if ( !(unsigned __int8)SmartObjStackRef<tagMENU>::operator==(&v53) )
  {
    v38 = (__int64)v28;
    goto LABEL_57;
  }
  v40 = KeGetCurrentThread();
  v41 = 0LL;
  if ( !(unsigned int)IsThreadCrossSessionAttached(v39, v30, v31) )
  {
    v42 = (__int64 *)PsGetThreadWin32Thread(v40);
    if ( v42 )
      v41 = *v42;
  }
  if ( v53 != gSmartObjNullRef && !--*(_DWORD *)(v53 + 8) )
  {
    if ( *(_BYTE *)(v53 + 12) )
      Win32FreeToPagedLookasideList(gpStackRefLookAside, v53);
  }
  v43 = *(_QWORD **)(v41 + 1472);
  if ( v43 )
    *(_QWORD *)(v41 + 1472) = *v43;
LABEL_70:
  v44 = v52;
  if ( !v52 )
    v44 = *v50;
  v38 = MNLookUpItem(v44, 32864LL, 0LL, 0LL);
  if ( !v38 )
  {
    v45 = v52;
    if ( !v52 )
      v45 = *v50;
    v38 = MNLookUpItem(v45, 49264LL, 0LL, 0LL);
    if ( !v38 )
      goto LABEL_77;
  }
LABEL_76:
  v12 = (__int64 *)*(unsigned int *)(*(_QWORD *)v38 + 4LL);
  if ( ((unsigned __int8)v12 & 3) != 0 )
LABEL_77:
    v15 = 0;
  v46 = KeGetCurrentThread();
  if ( !(unsigned int)IsThreadCrossSessionAttached(v12, v8, v9) )
  {
    v47 = (__int64 *)PsGetThreadWin32Thread(v46);
    if ( v47 )
      v3 = *v47;
  }
  if ( v50 != (__int64 *)gSmartObjNullRef && !--*((_DWORD *)v50 + 2) )
  {
    if ( *((_BYTE *)v50 + 12) )
      Win32FreeToPagedLookasideList(gpStackRefLookAside, v50);
  }
  v48 = *(_QWORD **)(v3 + 1472);
  result = v15;
  if ( v48 )
    *(_QWORD *)(v3 + 1472) = *v48;
  return result;
}
