/*
 * XREFs of xxxInsertMenuItem @ 0x1C00608B0
 * Callers:
 *     NtUserThunkedMenuItemInfo @ 0x1C0129140 (NtUserThunkedMenuItemInfo.c)
 * Callees:
 *     ?SetLPITEMInfoNoRedraw@@YAHAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@PEAUtagMENUITEMINFOW@@PEAU_UNICODE_STRING@@PEAH@Z @ 0x1C00289DC (-SetLPITEMInfoNoRedraw@@YAHAEBV-$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@PEAUtagMENUITEMINFOW@.c)
 *     MNIsUAHMenu @ 0x1C0028E30 (MNIsUAHMenu.c)
 *     MNFreeItem @ 0x1C0028E80 (MNFreeItem.c)
 *     ??1?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ @ 0x1C0038E70 (--1-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ.c)
 *     MNLookUpItem @ 0x1C004A90C (MNLookUpItem.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C00611C8 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C0061224 (--1UserAtomicCheck@@QEAA@XZ.c)
 *     ??8?$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z @ 0x1C0061278 (--8-$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z.c)
 *     ?Init@?$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z @ 0x1C00E0868 (-Init@-$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z.c)
 *     ??4?$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z @ 0x1C00E0C84 (--4-$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z.c)
 *     ?MNAllocMenuItems@@YAHAEBV?$SmartObjStackRef@UtagMENU@@@@_N@Z @ 0x1C00E25A8 (-MNAllocMenuItems@@YAHAEBV-$SmartObjStackRef@UtagMENU@@@@_N@Z.c)
 *     ?Init@?$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z @ 0x1C00EB5EC (-Init@-$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z.c)
 *     ??4?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAAAEAV0@QEAUtagPOPUPMENU@@@Z @ 0x1C00EFC04 (--4-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAAAEAV0@QEAUtagPOPUPMENU@@@Z.c)
 *     ??8?$SmartObjStackRef@UtagMENU@@@@QEBA_NAEBV0@@Z @ 0x1C01021C8 (--8-$SmartObjStackRef@UtagMENU@@@@QEBA_NAEBV0@@Z.c)
 *     MNGetpItemIndex @ 0x1C012A92C (MNGetpItemIndex.c)
 *     ?xxxRedrawForSetLPITEMInfo@@YAXAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@@Z @ 0x1C012CEC0 (-xxxRedrawForSetLPITEMInfo@@YAXAEBV-$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@@Z.c)
 *     MNGetPopupFromMenu @ 0x1C012D050 (MNGetPopupFromMenu.c)
 *     IsThreadCrossSessionAttached @ 0x1C0164774 (IsThreadCrossSessionAttached.c)
 *     memmove @ 0x1C0168100 (memmove.c)
 *     memset @ 0x1C0168440 (memset.c)
 *     MakeMenuRtoL @ 0x1C02461C0 (MakeMenuRtoL.c)
 *     xxxMNSetGapState @ 0x1C0246784 (xxxMNSetGapState.c)
 *     ?MNDeleteAdjustIndexes@@YAXPEAUtagMENUSTATE@@V?$SmartObjStackRef@UtagPOPUPMENU@@@@I@Z @ 0x1C0246BC0 (-MNDeleteAdjustIndexes@@YAXPEAUtagMENUSTATE@@V-$SmartObjStackRef@UtagPOPUPMENU@@@@I@Z.c)
 */

__int64 __fastcall xxxInsertMenuItem(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4, unsigned __int16 *a5)
{
  struct _KTHREAD *CurrentThread; // r12
  unsigned int v6; // edi
  __int64 v7; // rsi
  unsigned int v8; // r15d
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
  char v22; // cl
  int v23; // eax
  __int64 v24; // rdx
  unsigned __int64 v25; // rcx
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // rax
  __int64 v29; // rcx
  __int64 v30; // rbx
  struct _KTHREAD *v31; // r13
  __int64 v32; // r15
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // r8
  __int64 *v36; // rax
  __int64 v37; // rcx
  __int64 v38; // rax
  __int64 v39; // r8
  __int64 v40; // r9
  __int64 v41; // rcx
  signed int v42; // eax
  __int64 v43; // rcx
  __int64 v44; // rdx
  __int64 v45; // r8
  __int64 v46; // rcx
  size_t v47; // r15
  __int64 v48; // r10
  __int64 v49; // r9
  __int64 v50; // rcx
  __int64 v51; // rdx
  __int64 v52; // rcx
  __int64 v53; // r9
  __int64 v54; // rcx
  unsigned int v55; // r15d
  __int64 v56; // rsi
  __int64 v57; // r10
  __int64 v58; // r9
  __int64 v59; // rbx
  struct _KTHREAD *v60; // r12
  __int64 v61; // r15
  __int64 *v62; // rax
  __int64 v63; // rdx
  __int64 v64; // rcx
  __int64 v65; // r8
  __int64 v66; // rcx
  __int64 v67; // rcx
  __int64 v68; // rdx
  __int64 v69; // r8
  __int64 v70; // rdx
  __int64 v71; // r8
  _QWORD *v73[2]; // [rsp+30h] [rbp-61h] BYREF
  __int64 v74; // [rsp+40h] [rbp-51h]
  _QWORD v75[2]; // [rsp+48h] [rbp-49h] BYREF
  __int64 *v76; // [rsp+58h] [rbp-39h] BYREF
  __int64 v77; // [rsp+60h] [rbp-31h] BYREF
  __int64 v78; // [rsp+68h] [rbp-29h]
  __int64 v79; // [rsp+70h] [rbp-21h] BYREF
  __int64 v80; // [rsp+78h] [rbp-19h] BYREF
  __int64 v81; // [rsp+80h] [rbp-11h]
  __int64 v82; // [rsp+88h] [rbp-9h]
  char v83[8]; // [rsp+90h] [rbp-1h] BYREF
  _BYTE v84[72]; // [rsp+98h] [rbp+7h] BYREF
  __int64 v85; // [rsp+F0h] [rbp+5Fh] BYREF
  int v86; // [rsp+F8h] [rbp+67h] BYREF
  __int64 v87; // [rsp+108h] [rbp+77h]

  v87 = a4;
  CurrentThread = KeGetCurrentThread();
  v6 = 0;
  v7 = 0LL;
  v8 = a3;
  v9 = a2;
  v11 = 1;
  if ( !(unsigned int)IsThreadCrossSessionAttached(a1, a2, a3) )
  {
    ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
    if ( ThreadWin32Thread )
      v7 = *ThreadWin32Thread;
  }
  v77 = 0LL;
  v76 = (__int64 *)gSmartObjNullRef;
  v77 = *(_QWORD *)(v7 + 1472);
  *(_QWORD *)(v7 + 1472) = &v77;
  v78 = 0LL;
  v79 = 0LL;
  SmartObjStackRefBase<tagPOPUPMENU>::Init(v75);
  v13 = (_QWORD *)*a1;
  v86 = 0;
  v80 = 0LL;
  v14 = 0;
  v81 = 0LL;
  v82 = 0LL;
  SmartObjStackRefBase<tagMENU>::Init(v73, *v13);
  v16 = a1[2];
  v74 = v16;
  if ( v9 == -1 )
  {
    v18 = 0LL;
  }
  else
  {
    v17 = v78;
    if ( !v78 )
    {
      v16 = v74;
      v17 = *v76;
    }
    v85 = v17;
    if ( !v16 )
      v16 = *v73[0];
    v18 = MNLookUpItem(v16, v9, v8, &v85);
    v78 = 0LL;
    SmartObjStackRefBase<tagMENU>::operator=(&v76);
    if ( v18 )
    {
      v74 = v78;
      SmartObjStackRefBase<tagMENU>::operator=(v73);
    }
    else
    {
      v9 = -1;
    }
  }
  if ( (*(_DWORD *)(*(_QWORD *)(*v73[0] + 40LL) + 40LL) & 1) == 0
    && *(_DWORD *)(*(_QWORD *)(*v73[0] + 40LL) + 44LL)
    && ((*(_DWORD *)(v87 + 4) & 0x80u) == 0 || (unsigned __int64)(*(_QWORD *)(v87 + 72) - 1LL) > 6) )
  {
    v19 = v9;
    v20 = v9;
    if ( v18 && !v8 )
    {
      v21 = v74;
      if ( !v74 )
        v21 = *v73[0];
      v19 = MNGetpItemIndex(v21, v18, v15, v9);
    }
    if ( !v19 )
    {
      if ( *(_QWORD *)(**(_QWORD **)(*v73[0] + 88LL) + 96LL) == 1LL )
      {
        v22 = 1;
        v9 = 1;
      }
      else
      {
        v22 = 0;
      }
      v23 = 1;
      if ( !v22 )
        v23 = v8;
      v8 = v23;
      goto LABEL_35;
    }
    if ( v19 == -1 )
      v19 = *(_DWORD *)(*(_QWORD *)(*v73[0] + 40LL) + 44LL);
    v24 = v19 - 1;
    v15 = *(_QWORD *)(*v73[0] + 88LL) + 96 * v24;
    if ( (_DWORD)v24 )
    {
      do
      {
        v25 = *(_QWORD *)(*(_QWORD *)v15 + 96LL);
        if ( !v25 )
          break;
        if ( v25 >= 7 )
          break;
        v15 -= 96LL;
        v9 = v24;
        v8 = 1;
        LODWORD(v24) = v24 - 1;
      }
      while ( (_DWORD)v24 );
LABEL_35:
      if ( v9 != v20 )
        v18 = (_QWORD *)(*(_QWORD *)(*v73[0] + 88LL) + 96LL * v9);
    }
  }
  v26 = *(unsigned int *)(*(_QWORD *)(*v73[0] + 40LL) + 44LL);
  v27 = *v73[0];
  if ( (unsigned int)v26 < *(_DWORD *)(*v73[0] + 60LL) )
    goto LABEL_115;
  if ( (unsigned int)MNAllocMenuItems(v73, 0LL, v15) )
  {
    if ( v9 == -1 )
      goto LABEL_115;
    v28 = v78;
    if ( !v78 )
      v28 = *v76;
    v29 = v74;
    v85 = v28;
    if ( !v74 )
      v29 = *v73[0];
    v18 = MNLookUpItem(v29, v9, v8, &v85);
    v78 = 0LL;
    SmartObjStackRefBase<tagMENU>::operator=(&v76);
    if ( (unsigned __int8)SmartObjStackRef<tagMENU>::operator==(v73, &v76) )
    {
LABEL_115:
      v30 = v74;
      if ( !v74 )
        v30 = *v73[0];
      v31 = KeGetCurrentThread();
      v32 = 0LL;
      if ( !(unsigned int)IsThreadCrossSessionAttached(v27, v26, v15) )
      {
        v36 = (__int64 *)PsGetThreadWin32Thread(v31);
        if ( v36 )
          v32 = *v36;
      }
      v80 = *(_QWORD *)(v32 + 408);
      *(_QWORD *)(v32 + 408) = &v80;
      v81 = v30;
      if ( v30 )
        HMLockObject(v30);
      if ( v18 )
      {
        v37 = v74;
        if ( !v74 )
          v37 = *v73[0];
        v38 = MNGetPopupFromMenu(v37, &v79);
        SmartObjStackRefBase<tagPOPUPMENU>::operator=(v75, v38);
        if ( *(_QWORD *)v75[0] )
        {
          UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)v83);
          v41 = v74;
          if ( !v74 )
            v41 = *v73[0];
          v14 = MNGetpItemIndex(v41, v18, v39, v40);
          if ( *(_DWORD *)(*(_QWORD *)v75[0] + 80LL) >= v14 )
            ++*(_DWORD *)(*(_QWORD *)v75[0] + 80LL);
          if ( (**(_DWORD **)v75[0] & 0x20) != 0 && *(_DWORD *)(*(_QWORD *)v75[0] + 84LL) >= v14 )
            ++*(_DWORD *)(*(_QWORD *)v75[0] + 84LL);
          if ( *(_QWORD *)(v79 + 64) == *(_QWORD *)(*(_QWORD *)v75[0] + 16LL) )
          {
            v42 = *(_DWORD *)(v79 + 72);
            if ( v42 >= (int)v14 )
              *(_DWORD *)(v79 + 72) = v42 + 1;
          }
          v43 = v79;
          if ( *(_QWORD *)(v79 + 80) == *(_QWORD *)(*(_QWORD *)v75[0] + 16LL) )
          {
            v44 = *(unsigned int *)(v79 + 88);
            if ( (int)v44 >= (int)v14 )
            {
              *(_DWORD *)(v79 + 88) = v44 + 1;
              if ( (_DWORD)v44 == v14 )
              {
                v45 = *(unsigned int *)(v43 + 92);
                if ( (v45 & 1) != 0 )
                  xxxMNSetGapState(*(_QWORD *)(v43 + 80), v44, v45, 0LL);
              }
            }
          }
          UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)v83);
        }
      }
      ThreadUnlock1(v34, v33, v35);
      v74 = 0LL;
      SmartObjStackRefBase<tagMENU>::operator=(v73);
      if ( !(unsigned __int8)SmartObjStackRef<tagMENU>::operator==(v73) )
      {
        ++*(_DWORD *)(*(_QWORD *)(*v73[0] + 40LL) + 44LL);
        v46 = *v73[0];
        if ( v18 )
        {
          v47 = *(_QWORD *)(*v73[0] + 88LL)
              + 96LL * (unsigned int)(*(_DWORD *)(*(_QWORD *)(v46 + 40) + 44LL) - 1)
              - (_QWORD)v18;
          if ( v47 )
          {
            memmove(
              (void *)v18[12],
              (const void *)*v18,
              **(_QWORD **)(*v73[0] + 88LL)
            + 112LL * (unsigned int)(*(_DWORD *)(*(_QWORD *)(*v73[0] + 40LL) + 44LL) - 1)
            - *v18);
            memmove(v18 + 12, v18, v47);
            v48 = ((__int64)v18 - *(_QWORD *)(*v73[0] + 88LL) + 96) / 96;
            while ( (unsigned int)v48 < *(_DWORD *)(*(_QWORD *)(*v73[0] + 40LL) + 44LL) )
            {
              v49 = 96LL * (int)v48;
              *(_QWORD *)(v49 + *(_QWORD *)(*v73[0] + 88LL)) = *(_QWORD *)(*v73[0] + 96LL) + 112LL * (unsigned int)v48;
              LODWORD(v48) = v48 + 1;
              *(_QWORD *)(*(_QWORD *)(*v73[0] + 88LL) + v49 + 8) = *(_QWORD *)(v49 + *(_QWORD *)(*v73[0] + 88LL))
                                                                 - *(_QWORD *)(*(_QWORD *)(*v73[0] + 24LL) + 16LL);
            }
          }
        }
        else
        {
          v18 = (_QWORD *)(96LL * *(unsigned int *)(*(_QWORD *)(*v73[0] + 40LL) + 44LL) + *(_QWORD *)(v46 + 88) - 96LL);
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
        v50 = v74;
        if ( !v74 )
          v50 = *v73[0];
        if ( (unsigned int)MNIsUAHMenu(v50) )
          memset((char *)v18 + 52, 0, 0x20uLL);
        if ( (unsigned int)SetLPITEMInfoNoRedraw(v73, v18, v87, a5, &v86) )
        {
          if ( !v86 )
            goto LABEL_104;
          v59 = v74;
          if ( !v74 )
            v59 = *v73[0];
          v60 = KeGetCurrentThread();
          v61 = 0LL;
          if ( !(unsigned int)IsThreadCrossSessionAttached(v52, v51, v15) )
          {
            v62 = (__int64 *)PsGetThreadWin32Thread(v60);
            if ( v62 )
              v61 = *v62;
          }
          v80 = *(_QWORD *)(v61 + 408);
          *(_QWORD *)(v61 + 408) = &v80;
          v81 = v59;
          if ( v59 )
            HMLockObject(v59);
          xxxRedrawForSetLPITEMInfo(v73, v18);
          ThreadUnlock1(v64, v63, v65);
          v74 = 0LL;
          SmartObjStackRefBase<tagMENU>::operator=(v73);
          if ( !(unsigned __int8)SmartObjStackRef<tagMENU>::operator==(v73) )
          {
LABEL_104:
            v66 = v74;
            if ( !v74 )
              v66 = *v73[0];
            if ( (unsigned int)MNGetpItemIndex(v66, v18, v15, v53) != -1
              && ((*(_DWORD *)(*(_QWORD *)(*v73[0] + 40LL) + 40LL) & 0x20) != 0 || (*(_DWORD *)*v18 & 0x2004) == 0x2000) )
            {
              *(_DWORD *)*v18 |= 0x6000u;
              v67 = v18[2];
              if ( v67 )
                MakeMenuRtoL(v67, 1LL);
            }
            goto LABEL_111;
          }
        }
        else
        {
          if ( *(_QWORD *)v75[0] )
          {
            SmartObjStackRefBase<tagPOPUPMENU>::Init(v84);
            MNDeleteAdjustIndexes(v79, v84, v14);
          }
          v54 = v74;
          if ( !v74 )
            v54 = *v73[0];
          MNFreeItem(v54, (__int64)v18, 1);
          v26 = *v73[0];
          v55 = 96 * *(_DWORD *)(*(_QWORD *)(*v73[0] + 40LL) + 44LL) + *(_DWORD *)(*v73[0] + 88LL) - (_DWORD)v18 - 96;
          if ( 96 * *(_DWORD *)(*(_QWORD *)(*v73[0] + 40LL) + 44LL) + *(_DWORD *)(*v73[0] + 88LL) - (_DWORD)v18 != 96 )
          {
            memmove(
              (void *)*v18,
              (const void *)v18[12],
              (unsigned int)(112 * *(_DWORD *)(*(_QWORD *)(*v73[0] + 40LL) + 44LL)
                           + **(_DWORD **)(*v73[0] + 88LL)
                           - *((_DWORD *)v18 + 24)));
            memmove(v18, v18 + 12, v55);
            v56 = (__int64)v18 - *(_QWORD *)(*v73[0] + 88LL);
            v26 = (unsigned __int128)(v56 * (__int128)0x2AAAAAAAAAAAAAABLL) >> 64;
            v57 = v56 / 96;
            while ( (unsigned int)v57 < *(_DWORD *)(*(_QWORD *)(*v73[0] + 40LL) + 44LL) - 1 )
            {
              v58 = 96LL * (int)v57;
              *(_QWORD *)(v58 + *(_QWORD *)(*v73[0] + 88LL)) = *(_QWORD *)(*v73[0] + 96LL) + 112LL * (unsigned int)v57;
              v15 = *v73[0];
              v26 = *(_QWORD *)(v58 + *(_QWORD *)(*v73[0] + 88LL)) - *(_QWORD *)(*(_QWORD *)(*v73[0] + 24LL) + 16LL);
              LODWORD(v57) = v57 + 1;
              *(_QWORD *)(*(_QWORD *)(*v73[0] + 88LL) + v58 + 8) = v26;
            }
          }
          --*(_DWORD *)(*(_QWORD *)(*v73[0] + 40LL) + 44LL);
        }
        v11 = 0;
LABEL_111:
        v6 = v11;
      }
    }
  }
  SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v73, v26, v15);
  SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v75, v68, v69);
  SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(&v76, v70, v71);
  return v6;
}
