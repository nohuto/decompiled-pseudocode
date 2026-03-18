/*
 * XREFs of xxxInsertMenuItem @ 0x1C0069348
 * Callers:
 *     NtUserThunkedMenuItemInfo @ 0x1C006A1B0 (NtUserThunkedMenuItemInfo.c)
 * Callees:
 *     MNLookUpItem @ 0x1C0021208 (MNLookUpItem.c)
 *     ??1?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ @ 0x1C0022768 (--1-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C004152C (--1UserAtomicCheck@@QEAA@XZ.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C0041580 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     ??8?$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z @ 0x1C0069C30 (--8-$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z.c)
 *     MNFreeItem @ 0x1C0069C4C (MNFreeItem.c)
 *     ?xxxRedrawForSetLPITEMInfo@@YAXAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@@Z @ 0x1C006A6D4 (-xxxRedrawForSetLPITEMInfo@@YAXAEBV-$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@@Z.c)
 *     MNGetPopupFromMenu @ 0x1C006A864 (MNGetPopupFromMenu.c)
 *     MNGetpItemIndex @ 0x1C006AA14 (MNGetpItemIndex.c)
 *     ?SetLPITEMInfoNoRedraw@@YAHAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@PEAUtagMENUITEMINFOW@@PEAU_UNICODE_STRING@@PEAH@Z @ 0x1C006AA5C (-SetLPITEMInfoNoRedraw@@YAHAEBV-$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@PEAUtagMENUITEMINFOW@.c)
 *     MNIsUAHMenu @ 0x1C006AEB0 (MNIsUAHMenu.c)
 *     ?Init@?$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z @ 0x1C00FBDF8 (-Init@-$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z.c)
 *     ??4?$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z @ 0x1C00FE500 (--4-$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z.c)
 *     ?MNAllocMenuItems@@YAHAEBV?$SmartObjStackRef@UtagMENU@@@@_N@Z @ 0x1C00FFA64 (-MNAllocMenuItems@@YAHAEBV-$SmartObjStackRef@UtagMENU@@@@_N@Z.c)
 *     ?Init@?$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z @ 0x1C0102A84 (-Init@-$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z.c)
 *     ??4?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAAAEAV0@QEAUtagPOPUPMENU@@@Z @ 0x1C010CEAC (--4-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAAAEAV0@QEAUtagPOPUPMENU@@@Z.c)
 *     ??8?$SmartObjStackRef@UtagMENU@@@@QEBA_NAEBV0@@Z @ 0x1C011DEC4 (--8-$SmartObjStackRef@UtagMENU@@@@QEBA_NAEBV0@@Z.c)
 *     IsThreadCrossSessionAttached @ 0x1C015BC14 (IsThreadCrossSessionAttached.c)
 *     memmove @ 0x1C0163300 (memmove.c)
 *     memset @ 0x1C0163640 (memset.c)
 *     MakeMenuRtoL @ 0x1C022E148 (MakeMenuRtoL.c)
 *     xxxMNSetGapState @ 0x1C022E6BC (xxxMNSetGapState.c)
 *     ?MNDeleteAdjustIndexes@@YAXPEAUtagMENUSTATE@@V?$SmartObjStackRef@UtagPOPUPMENU@@@@I@Z @ 0x1C022EAD4 (-MNDeleteAdjustIndexes@@YAXPEAUtagMENUSTATE@@V-$SmartObjStackRef@UtagPOPUPMENU@@@@I@Z.c)
 */

__int64 __fastcall xxxInsertMenuItem(_QWORD *a1, __int64 a2, int a3, __int64 a4, __int64 a5)
{
  struct _KTHREAD *CurrentThread; // r12
  unsigned int v6; // edi
  __int64 v7; // rsi
  unsigned int v9; // ebx
  int v11; // r14d
  __int64 *ThreadWin32Thread; // rax
  _QWORD *v13; // rdx
  unsigned int v14; // r12d
  __int64 v15; // r8
  __int64 v16; // rcx
  __int64 v17; // rax
  _QWORD *v18; // rsi
  unsigned int v19; // edx
  unsigned int v20; // r9d
  __int64 v21; // rcx
  int v22; // eax
  __int64 v23; // rdx
  unsigned __int64 v24; // rcx
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // rax
  __int64 v28; // rcx
  __int64 v29; // rbx
  struct _KTHREAD *v30; // r13
  __int64 v31; // r15
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 *v34; // rax
  __int64 v35; // rcx
  __int64 v36; // rax
  __int64 v37; // rcx
  signed int v38; // eax
  __int64 v39; // rcx
  __int64 v40; // rdx
  __int64 v41; // r8
  __int64 v42; // rcx
  size_t v43; // r15
  __int64 v44; // r10
  __int64 v45; // r9
  __int64 v46; // rdx
  __int64 v47; // rcx
  __int64 v48; // rcx
  unsigned int v49; // r15d
  __int64 v50; // rsi
  __int64 v51; // r10
  __int64 v52; // r9
  __int64 v53; // rbx
  struct _KTHREAD *v54; // r12
  __int64 v55; // r15
  __int64 *v56; // rax
  __int64 v57; // rdx
  __int64 v58; // rcx
  __int64 v59; // rcx
  __int64 v60; // rcx
  __int64 v61; // rdx
  __int64 v62; // rdx
  _QWORD v64[2]; // [rsp+30h] [rbp-61h] BYREF
  __int64 v65; // [rsp+40h] [rbp-51h]
  _QWORD v66[2]; // [rsp+48h] [rbp-49h] BYREF
  __int64 *v67; // [rsp+58h] [rbp-39h] BYREF
  __int64 v68; // [rsp+60h] [rbp-31h] BYREF
  __int64 v69; // [rsp+68h] [rbp-29h]
  __int64 v70; // [rsp+70h] [rbp-21h] BYREF
  char v71[8]; // [rsp+78h] [rbp-19h] BYREF
  __int64 v72; // [rsp+80h] [rbp-11h] BYREF
  __int64 v73; // [rsp+88h] [rbp-9h]
  _BYTE v74[72]; // [rsp+98h] [rbp+7h] BYREF
  __int64 v75; // [rsp+F0h] [rbp+5Fh] BYREF
  int v76; // [rsp+F8h] [rbp+67h] BYREF
  __int64 v77; // [rsp+108h] [rbp+77h]

  v77 = a4;
  CurrentThread = KeGetCurrentThread();
  v6 = 0;
  v7 = 0LL;
  v9 = a2;
  v11 = 1;
  if ( !(unsigned int)IsThreadCrossSessionAttached(a1, a2) )
  {
    ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
    if ( ThreadWin32Thread )
      v7 = *ThreadWin32Thread;
  }
  v68 = 0LL;
  v67 = (__int64 *)gSmartObjNullRef;
  v68 = *(_QWORD *)(v7 + 1448);
  *(_QWORD *)(v7 + 1448) = &v68;
  v69 = 0LL;
  v70 = 0LL;
  SmartObjStackRefBase<tagPOPUPMENU>::Init(v66);
  v13 = (_QWORD *)*a1;
  v14 = 0;
  v76 = 0;
  SmartObjStackRefBase<tagMENU>::Init(v64, *v13);
  v16 = a1[2];
  v65 = v16;
  if ( v9 == -1 )
  {
    v18 = 0LL;
  }
  else
  {
    v17 = v69;
    if ( !v69 )
    {
      v16 = v65;
      v17 = *v67;
    }
    v75 = v17;
    if ( !v16 )
      v16 = *(_QWORD *)v64[0];
    v18 = MNLookUpItem(v16, v9, a3, &v75);
    v69 = 0LL;
    SmartObjStackRefBase<tagMENU>::operator=(&v67);
    if ( v18 )
    {
      v65 = v69;
      SmartObjStackRefBase<tagMENU>::operator=(v64);
    }
    else
    {
      v9 = -1;
    }
  }
  if ( (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)v64[0] + 40LL) + 40LL) & 1) == 0
    && *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v64[0] + 40LL) + 44LL)
    && ((*(_DWORD *)(v77 + 4) & 0x80u) == 0 || (unsigned __int64)(*(_QWORD *)(v77 + 72) - 1LL) > 6) )
  {
    v19 = v9;
    v20 = v9;
    if ( v18 && !a3 )
    {
      v21 = v65;
      if ( !v65 )
        v21 = *(_QWORD *)v64[0];
      v19 = MNGetpItemIndex(v21, v18);
    }
    if ( !v19 )
    {
      v22 = 1;
      if ( *(_QWORD *)(**(_QWORD **)(*(_QWORD *)v64[0] + 88LL) + 96LL) == 1LL )
        v9 = 1;
      else
        v22 = a3;
      a3 = v22;
      goto LABEL_33;
    }
    if ( v19 == -1 )
      v19 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v64[0] + 40LL) + 44LL);
    v23 = v19 - 1;
    v15 = *(_QWORD *)(*(_QWORD *)v64[0] + 88LL) + 96 * v23;
    if ( (_DWORD)v23 )
    {
      do
      {
        v24 = *(_QWORD *)(*(_QWORD *)v15 + 96LL);
        if ( !v24 )
          break;
        if ( v24 >= 7 )
          break;
        v15 -= 96LL;
        v9 = v23;
        a3 = 1;
        LODWORD(v23) = v23 - 1;
      }
      while ( (_DWORD)v23 );
LABEL_33:
      if ( v9 != v20 )
        v18 = (_QWORD *)(*(_QWORD *)(*(_QWORD *)v64[0] + 88LL) + 96LL * v9);
    }
  }
  v25 = *(unsigned int *)(*(_QWORD *)(*(_QWORD *)v64[0] + 40LL) + 44LL);
  v26 = *(_QWORD *)v64[0];
  if ( (unsigned int)v25 < *(_DWORD *)(*(_QWORD *)v64[0] + 60LL) )
    goto LABEL_111;
  if ( (unsigned int)MNAllocMenuItems(v64, 0LL, v15) )
  {
    if ( v9 == -1 )
      goto LABEL_111;
    v27 = v69;
    if ( !v69 )
      v27 = *v67;
    v28 = v65;
    v75 = v27;
    if ( !v65 )
      v28 = *(_QWORD *)v64[0];
    v18 = MNLookUpItem(v28, v9, a3, &v75);
    v69 = 0LL;
    SmartObjStackRefBase<tagMENU>::operator=(&v67);
    if ( (unsigned __int8)SmartObjStackRef<tagMENU>::operator==(v64, &v67) )
    {
LABEL_111:
      v29 = v65;
      if ( !v65 )
        v29 = *(_QWORD *)v64[0];
      v30 = KeGetCurrentThread();
      v31 = 0LL;
      if ( !(unsigned int)IsThreadCrossSessionAttached(v26, v25) )
      {
        v34 = (__int64 *)PsGetThreadWin32Thread(v30);
        if ( v34 )
          v31 = *v34;
      }
      v72 = *(_QWORD *)(v31 + 416);
      *(_QWORD *)(v31 + 416) = &v72;
      v73 = v29;
      if ( v29 )
        _InterlockedAdd((volatile signed __int32 *)(v29 + 8), 1u);
      if ( v18 )
      {
        v35 = v65;
        if ( !v65 )
          v35 = *(_QWORD *)v64[0];
        v36 = MNGetPopupFromMenu(v35, &v70);
        SmartObjStackRefBase<tagPOPUPMENU>::operator=(v66, v36);
        if ( *(_QWORD *)v66[0] )
        {
          UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)v71);
          v37 = v65;
          if ( !v65 )
            v37 = *(_QWORD *)v64[0];
          v14 = MNGetpItemIndex(v37, v18);
          if ( *(_DWORD *)(*(_QWORD *)v66[0] + 80LL) >= v14 )
            ++*(_DWORD *)(*(_QWORD *)v66[0] + 80LL);
          if ( (**(_DWORD **)v66[0] & 0x20) != 0 && *(_DWORD *)(*(_QWORD *)v66[0] + 84LL) >= v14 )
            ++*(_DWORD *)(*(_QWORD *)v66[0] + 84LL);
          if ( *(_QWORD *)(v70 + 64) == *(_QWORD *)(*(_QWORD *)v66[0] + 16LL) )
          {
            v38 = *(_DWORD *)(v70 + 72);
            if ( v38 >= (int)v14 )
              *(_DWORD *)(v70 + 72) = v38 + 1;
          }
          v39 = v70;
          if ( *(_QWORD *)(v70 + 80) == *(_QWORD *)(*(_QWORD *)v66[0] + 16LL) )
          {
            v40 = *(unsigned int *)(v70 + 88);
            if ( (int)v40 >= (int)v14 )
            {
              *(_DWORD *)(v70 + 88) = v40 + 1;
              if ( (_DWORD)v40 == v14 )
              {
                v41 = *(unsigned int *)(v39 + 92);
                if ( (v41 & 1) != 0 )
                  xxxMNSetGapState(*(_QWORD *)(v39 + 80), v40, v41, 0LL);
              }
            }
          }
          UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)v71);
        }
      }
      ThreadUnlock1(v33, v32);
      v65 = 0LL;
      SmartObjStackRefBase<tagMENU>::operator=(v64);
      if ( !(unsigned __int8)SmartObjStackRef<tagMENU>::operator==(v64) )
      {
        ++*(_DWORD *)(*(_QWORD *)(*(_QWORD *)v64[0] + 40LL) + 44LL);
        v42 = *(_QWORD *)v64[0];
        if ( v18 )
        {
          v43 = *(_QWORD *)(*(_QWORD *)v64[0] + 88LL)
              + 96LL * (unsigned int)(*(_DWORD *)(*(_QWORD *)(v42 + 40) + 44LL) - 1)
              - (_QWORD)v18;
          if ( v43 )
          {
            memmove(
              (void *)v18[12],
              (const void *)*v18,
              **(_QWORD **)(*(_QWORD *)v64[0] + 88LL)
            + 112LL * (unsigned int)(*(_DWORD *)(*(_QWORD *)(*(_QWORD *)v64[0] + 40LL) + 44LL) - 1)
            - *v18);
            memmove(v18 + 12, v18, v43);
            v44 = ((__int64)v18 - *(_QWORD *)(*(_QWORD *)v64[0] + 88LL) + 96) / 96;
            while ( (unsigned int)v44 < *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v64[0] + 40LL) + 44LL) )
            {
              v45 = 96LL * (int)v44;
              *(_QWORD *)(v45 + *(_QWORD *)(*(_QWORD *)v64[0] + 88LL)) = *(_QWORD *)(*(_QWORD *)v64[0] + 96LL)
                                                                       + 112LL * (unsigned int)v44;
              LODWORD(v44) = v44 + 1;
              *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v64[0] + 88LL) + v45 + 8) = *(_QWORD *)(v45
                                                                                       + *(_QWORD *)(*(_QWORD *)v64[0] + 88LL))
                                                                           - *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v64[0] + 24LL)
                                                                                       + 16LL);
            }
          }
        }
        else
        {
          v18 = (_QWORD *)(96LL * *(unsigned int *)(*(_QWORD *)(*(_QWORD *)v64[0] + 40LL) + 44LL)
                         + *(_QWORD *)(v42 + 88)
                         - 96LL);
        }
        *(_DWORD *)*v18 = 0;
        *(_DWORD *)(*v18 + 4LL) = 0;
        *(_DWORD *)(*v18 + 8LL) = 0;
        *(_QWORD *)(*v18 + 16LL) = 0LL;
        v18[2] = 0LL;
        *(_QWORD *)(*v18 + 24LL) = 0LL;
        *(_QWORD *)(*v18 + 32LL) = 0LL;
        *(_DWORD *)(*v18 + 48LL) = 0;
        *(_QWORD *)(*v18 + 56LL) = 0LL;
        *(_DWORD *)(*v18 + 64LL) = 0;
        *(_DWORD *)(*v18 + 68LL) = 0;
        *(_DWORD *)(*v18 + 72LL) = 0;
        *(_DWORD *)(*v18 + 76LL) = 0;
        *(_QWORD *)(*v18 + 96LL) = 0LL;
        *(_DWORD *)(*v18 + 104LL) = -1;
        *(_QWORD *)(*v18 + 40LL) = 0LL;
        v18[3] = 0LL;
        v18[11] = 0LL;
        if ( (unsigned int)MNIsUAHMenu() )
          memset((char *)v18 + 52, 0, 0x20uLL);
        if ( (unsigned int)SetLPITEMInfoNoRedraw((unsigned int)v64, (_DWORD)v18, v77, a5, (__int64)&v76) )
        {
          if ( !v76 )
            goto LABEL_100;
          v53 = v65;
          if ( !v65 )
            v53 = *(_QWORD *)v64[0];
          v54 = KeGetCurrentThread();
          v55 = 0LL;
          if ( !(unsigned int)IsThreadCrossSessionAttached(v47, v46) )
          {
            v56 = (__int64 *)PsGetThreadWin32Thread(v54);
            if ( v56 )
              v55 = *v56;
          }
          v72 = *(_QWORD *)(v55 + 416);
          *(_QWORD *)(v55 + 416) = &v72;
          v73 = v53;
          if ( v53 )
            _InterlockedAdd((volatile signed __int32 *)(v53 + 8), 1u);
          xxxRedrawForSetLPITEMInfo(v64, v18);
          ThreadUnlock1(v58, v57);
          v65 = 0LL;
          SmartObjStackRefBase<tagMENU>::operator=(v64);
          if ( !(unsigned __int8)SmartObjStackRef<tagMENU>::operator==(v64) )
          {
LABEL_100:
            v59 = v65;
            if ( !v65 )
              v59 = *(_QWORD *)v64[0];
            if ( (unsigned int)MNGetpItemIndex(v59, v18) != -1
              && ((*(_DWORD *)(*(_QWORD *)(*(_QWORD *)v64[0] + 40LL) + 40LL) & 0x20) != 0
               || (*(_DWORD *)*v18 & 0x2004) == 0x2000) )
            {
              *(_DWORD *)*v18 |= 0x6000u;
              v60 = v18[2];
              if ( v60 )
                MakeMenuRtoL(v60, 1LL);
            }
            goto LABEL_107;
          }
        }
        else
        {
          if ( *(_QWORD *)v66[0] )
          {
            SmartObjStackRefBase<tagPOPUPMENU>::Init(v74);
            MNDeleteAdjustIndexes(v70, v74, v14);
          }
          v48 = v65;
          if ( !v65 )
            v48 = *(_QWORD *)v64[0];
          MNFreeItem(v48, v18, 1LL);
          v25 = *(_QWORD *)v64[0];
          v49 = 96 * *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v64[0] + 40LL) + 44LL)
              + *(_DWORD *)(*(_QWORD *)v64[0] + 88LL)
              - (_DWORD)v18
              - 96;
          if ( 96 * *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v64[0] + 40LL) + 44LL)
             + *(_DWORD *)(*(_QWORD *)v64[0] + 88LL)
             - (_DWORD)v18 != 96 )
          {
            memmove(
              (void *)*v18,
              (const void *)v18[12],
              (unsigned int)(112 * *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v64[0] + 40LL) + 44LL)
                           + **(_DWORD **)(*(_QWORD *)v64[0] + 88LL)
                           - *((_DWORD *)v18 + 24)));
            memmove(v18, v18 + 12, v49);
            v50 = (__int64)v18 - *(_QWORD *)(*(_QWORD *)v64[0] + 88LL);
            v25 = (unsigned __int128)(v50 * (__int128)0x2AAAAAAAAAAAAAABLL) >> 64;
            v51 = v50 / 96;
            while ( (unsigned int)v51 < *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v64[0] + 40LL) + 44LL) - 1 )
            {
              v52 = 96LL * (int)v51;
              *(_QWORD *)(v52 + *(_QWORD *)(*(_QWORD *)v64[0] + 88LL)) = *(_QWORD *)(*(_QWORD *)v64[0] + 96LL)
                                                                       + 112LL * (unsigned int)v51;
              v25 = *(_QWORD *)(v52 + *(_QWORD *)(*(_QWORD *)v64[0] + 88LL))
                  - *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v64[0] + 24LL) + 16LL);
              LODWORD(v51) = v51 + 1;
              *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v64[0] + 88LL) + v52 + 8) = v25;
            }
          }
          --*(_DWORD *)(*(_QWORD *)(*(_QWORD *)v64[0] + 40LL) + 44LL);
        }
        v11 = 0;
LABEL_107:
        v6 = v11;
      }
    }
  }
  SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v64, v25);
  SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v66, v61);
  SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(&v67, v62);
  return v6;
}
