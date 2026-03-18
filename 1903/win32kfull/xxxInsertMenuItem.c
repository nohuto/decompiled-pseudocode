/*
 * XREFs of xxxInsertMenuItem @ 0x1C00BF1D0
 * Callers:
 *     NtUserThunkedMenuItemInfo @ 0x1C001B7C0 (NtUserThunkedMenuItemInfo.c)
 * Callees:
 *     ?MNAllocMenuItems@@YAHAEBV?$SmartObjStackRef@UtagMENU@@@@_N@Z @ 0x1C001FA58 (-MNAllocMenuItems@@YAHAEBV-$SmartObjStackRef@UtagMENU@@@@_N@Z.c)
 *     ?xxxRedrawForSetLPITEMInfo@@YAXAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@@Z @ 0x1C0020A88 (-xxxRedrawForSetLPITEMInfo@@YAXAEBV-$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@@Z.c)
 *     MNGetPopupFromMenu @ 0x1C0020C18 (MNGetPopupFromMenu.c)
 *     ??1?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ @ 0x1C0021844 (--1-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ.c)
 *     MNGetpItemIndex @ 0x1C0022308 (MNGetpItemIndex.c)
 *     ?SetLPITEMInfoNoRedraw@@YAHAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@PEAUtagMENUITEMINFOW@@PEAU_UNICODE_STRING@@PEAH@Z @ 0x1C002256C (-SetLPITEMInfoNoRedraw@@YAHAEBV-$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@PEAUtagMENUITEMINFOW@.c)
 *     MNIsUAHMenu @ 0x1C00229C0 (MNIsUAHMenu.c)
 *     MNFreeItem @ 0x1C0022A10 (MNFreeItem.c)
 *     MNLookUpItem @ 0x1C00A9B2C (MNLookUpItem.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C00BFAE8 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C00BFB44 (--1UserAtomicCheck@@QEAA@XZ.c)
 *     ??8?$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z @ 0x1C00BFB98 (--8-$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z.c)
 *     ?Init@?$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z @ 0x1C0106608 (-Init@-$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z.c)
 *     ??4?$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z @ 0x1C0106A24 (--4-$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z.c)
 *     ?Init@?$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z @ 0x1C011022C (-Init@-$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z.c)
 *     ??4?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAAAEAV0@QEAUtagPOPUPMENU@@@Z @ 0x1C01154C4 (--4-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAAAEAV0@QEAUtagPOPUPMENU@@@Z.c)
 *     ??8?$SmartObjStackRef@UtagMENU@@@@QEBA_NAEBV0@@Z @ 0x1C0126A98 (--8-$SmartObjStackRef@UtagMENU@@@@QEBA_NAEBV0@@Z.c)
 *     IsThreadCrossSessionAttached @ 0x1C01637A4 (IsThreadCrossSessionAttached.c)
 *     memmove @ 0x1C0166500 (memmove.c)
 *     memset @ 0x1C0166840 (memset.c)
 *     MakeMenuRtoL @ 0x1C0246900 (MakeMenuRtoL.c)
 *     xxxMNSetGapState @ 0x1C0246EC4 (xxxMNSetGapState.c)
 *     ?MNDeleteAdjustIndexes@@YAXPEAUtagMENUSTATE@@V?$SmartObjStackRef@UtagPOPUPMENU@@@@I@Z @ 0x1C0247300 (-MNDeleteAdjustIndexes@@YAXPEAUtagMENUSTATE@@V-$SmartObjStackRef@UtagPOPUPMENU@@@@I@Z.c)
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
  __int64 v16; // r9
  __int64 v17; // rcx
  __int64 v18; // rax
  _QWORD *v19; // rsi
  int v20; // edx
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
  __int64 v36; // r9
  __int64 *v37; // rax
  __int64 v38; // rcx
  _DWORD *v39; // rax
  __int64 v40; // rcx
  signed int v41; // eax
  __int64 *v42; // rcx
  __int64 v43; // rdx
  __int64 v44; // r8
  __int64 v45; // rax
  __int64 v46; // rcx
  size_t v47; // r15
  __int64 v48; // r10
  __int64 v49; // r9
  __int64 v50; // rcx
  __int64 v51; // rdx
  __int64 v52; // rcx
  __int64 v53; // r8
  __int64 v54; // r9
  __int64 v55; // rcx
  unsigned int v56; // r15d
  __int64 v57; // rsi
  __int64 v58; // r10
  __int64 v59; // rbx
  struct _KTHREAD *v60; // r12
  __int64 v61; // r15
  __int64 v62; // r8
  __int64 v63; // r9
  __int64 *v64; // rax
  __int64 v65; // rdx
  __int64 v66; // rcx
  __int64 v67; // r8
  __int64 v68; // rax
  __int64 v69; // rcx
  __int64 v70; // rcx
  __int64 v71; // rdx
  __int64 v72; // r8
  __int64 v73; // r9
  __int64 v74; // rdx
  __int64 v75; // r8
  __int64 v76; // r9
  __int64 *v78[2]; // [rsp+30h] [rbp-61h] BYREF
  __int64 v79; // [rsp+40h] [rbp-51h]
  _QWORD v80[2]; // [rsp+48h] [rbp-49h] BYREF
  __int64 *v81; // [rsp+58h] [rbp-39h] BYREF
  __int64 v82; // [rsp+60h] [rbp-31h] BYREF
  __int64 v83; // [rsp+68h] [rbp-29h]
  __int64 *v84; // [rsp+70h] [rbp-21h] BYREF
  __int64 v85; // [rsp+78h] [rbp-19h] BYREF
  __int64 v86; // [rsp+80h] [rbp-11h]
  __int64 v87; // [rsp+88h] [rbp-9h]
  char v88[8]; // [rsp+90h] [rbp-1h] BYREF
  _BYTE v89[72]; // [rsp+98h] [rbp+7h] BYREF
  __int64 v90; // [rsp+F0h] [rbp+5Fh] BYREF
  int v91; // [rsp+F8h] [rbp+67h] BYREF
  __int64 v92; // [rsp+108h] [rbp+77h]

  v92 = a4;
  CurrentThread = KeGetCurrentThread();
  v6 = 0;
  v7 = 0LL;
  v8 = a3;
  v9 = a2;
  v11 = 1;
  if ( !(unsigned int)IsThreadCrossSessionAttached(a1, a2, a3, a4) )
  {
    ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
    if ( ThreadWin32Thread )
      v7 = *ThreadWin32Thread;
  }
  v82 = 0LL;
  v81 = (__int64 *)gSmartObjNullRef;
  v82 = *(_QWORD *)(v7 + 1472);
  *(_QWORD *)(v7 + 1472) = &v82;
  v83 = 0LL;
  v84 = 0LL;
  SmartObjStackRefBase<tagPOPUPMENU>::Init(v80, 0LL);
  v13 = (_QWORD *)*a1;
  v91 = 0;
  v85 = 0LL;
  v14 = 0;
  v86 = 0LL;
  v87 = 0LL;
  SmartObjStackRefBase<tagMENU>::Init(v78, *v13);
  v17 = a1[2];
  v79 = v17;
  if ( v9 == -1 )
  {
    v19 = 0LL;
  }
  else
  {
    v18 = v83;
    if ( !v83 )
    {
      v17 = v79;
      v18 = *v81;
    }
    v90 = v18;
    if ( !v17 )
      v17 = *v78[0];
    v19 = MNLookUpItem(v17, v9, v8, &v90);
    v83 = 0LL;
    SmartObjStackRefBase<tagMENU>::operator=(&v81, v90);
    if ( v19 )
    {
      v79 = v83;
      SmartObjStackRefBase<tagMENU>::operator=(v78, *v81);
    }
    else
    {
      v9 = -1;
    }
  }
  if ( (*(_DWORD *)(*(_QWORD *)(*v78[0] + 40) + 40LL) & 1) == 0
    && *(_DWORD *)(*(_QWORD *)(*v78[0] + 40) + 44LL)
    && ((*(_DWORD *)(v92 + 4) & 0x80u) == 0 || (unsigned __int64)(*(_QWORD *)(v92 + 72) - 1LL) > 6) )
  {
    v20 = v9;
    v16 = v9;
    if ( v19 && !v8 )
    {
      v21 = v79;
      if ( !v79 )
        v21 = *v78[0];
      v20 = MNGetpItemIndex(v21, (__int64)v19);
    }
    if ( !v20 )
    {
      if ( *(_QWORD *)(**(_QWORD **)(*v78[0] + 88) + 96LL) == 1LL )
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
    if ( v20 == -1 )
      v20 = *(_DWORD *)(*(_QWORD *)(*v78[0] + 40) + 44LL);
    v24 = (unsigned int)(v20 - 1);
    v15 = *(_QWORD *)(*v78[0] + 88) + 96 * v24;
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
      if ( v9 != (_DWORD)v16 )
        v19 = (_QWORD *)(*(_QWORD *)(*v78[0] + 88) + 96LL * v9);
    }
  }
  v26 = *(unsigned int *)(*(_QWORD *)(*v78[0] + 40) + 44LL);
  v27 = *v78[0];
  if ( (unsigned int)v26 < *(_DWORD *)(*v78[0] + 60) )
    goto LABEL_115;
  if ( (unsigned int)MNAllocMenuItems(v78, 0) )
  {
    if ( v9 == -1 )
      goto LABEL_115;
    v28 = v83;
    if ( !v83 )
      v28 = *v81;
    v29 = v79;
    v90 = v28;
    if ( !v79 )
      v29 = *v78[0];
    v19 = MNLookUpItem(v29, v9, v8, &v90);
    v83 = 0LL;
    SmartObjStackRefBase<tagMENU>::operator=(&v81, v90);
    if ( (unsigned __int8)SmartObjStackRef<tagMENU>::operator==(v78, &v81) )
    {
LABEL_115:
      v30 = v79;
      if ( !v79 )
        v30 = *v78[0];
      v31 = KeGetCurrentThread();
      v32 = 0LL;
      if ( !(unsigned int)IsThreadCrossSessionAttached(v27, v26, v15, v16) )
      {
        v37 = (__int64 *)PsGetThreadWin32Thread(v31);
        if ( v37 )
          v32 = *v37;
      }
      v85 = *(_QWORD *)(v32 + 408);
      *(_QWORD *)(v32 + 408) = &v85;
      v86 = v30;
      if ( v30 )
        HMLockObject(v30);
      if ( v19 )
      {
        v38 = v79;
        if ( !v79 )
          v38 = *v78[0];
        v39 = MNGetPopupFromMenu(v38, &v84, v35, v36);
        SmartObjStackRefBase<tagPOPUPMENU>::operator=(v80, v39);
        if ( *(_QWORD *)v80[0] )
        {
          UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)v88);
          v40 = v79;
          if ( !v79 )
            v40 = *v78[0];
          v14 = MNGetpItemIndex(v40, (__int64)v19);
          if ( *(_DWORD *)(*(_QWORD *)v80[0] + 80LL) >= v14 )
            ++*(_DWORD *)(*(_QWORD *)v80[0] + 80LL);
          if ( (**(_DWORD **)v80[0] & 0x20) != 0 && *(_DWORD *)(*(_QWORD *)v80[0] + 84LL) >= v14 )
            ++*(_DWORD *)(*(_QWORD *)v80[0] + 84LL);
          if ( v84[8] == *(_QWORD *)(*(_QWORD *)v80[0] + 16LL) )
          {
            v41 = *((_DWORD *)v84 + 18);
            if ( v41 >= (int)v14 )
              *((_DWORD *)v84 + 18) = v41 + 1;
          }
          v42 = v84;
          if ( v84[10] == *(_QWORD *)(*(_QWORD *)v80[0] + 16LL) )
          {
            v43 = *((unsigned int *)v84 + 22);
            if ( (int)v43 >= (int)v14 )
            {
              *((_DWORD *)v84 + 22) = v43 + 1;
              if ( (_DWORD)v43 == v14 )
              {
                v44 = *((unsigned int *)v42 + 23);
                if ( (v44 & 1) != 0 )
                  xxxMNSetGapState(v42[10], v43, v44, 0LL);
              }
            }
          }
          UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)v88);
        }
      }
      v45 = ThreadUnlock1(v34, v33, v35);
      v79 = 0LL;
      SmartObjStackRefBase<tagMENU>::operator=(v78, v45);
      if ( !(unsigned __int8)SmartObjStackRef<tagMENU>::operator==(v78) )
      {
        ++*(_DWORD *)(*(_QWORD *)(*v78[0] + 40) + 44LL);
        v46 = *v78[0];
        if ( v19 )
        {
          v47 = *(_QWORD *)(*v78[0] + 88)
              + 96LL * (unsigned int)(*(_DWORD *)(*(_QWORD *)(v46 + 40) + 44LL) - 1)
              - (_QWORD)v19;
          if ( v47 )
          {
            memmove(
              (void *)v19[12],
              (const void *)*v19,
              **(_QWORD **)(*v78[0] + 88)
            + 112LL * (unsigned int)(*(_DWORD *)(*(_QWORD *)(*v78[0] + 40) + 44LL) - 1)
            - *v19);
            memmove(v19 + 12, v19, v47);
            v48 = ((__int64)v19 - *(_QWORD *)(*v78[0] + 88) + 96) / 96;
            while ( (unsigned int)v48 < *(_DWORD *)(*(_QWORD *)(*v78[0] + 40) + 44LL) )
            {
              v49 = 96LL * (int)v48;
              *(_QWORD *)(v49 + *(_QWORD *)(*v78[0] + 88)) = *(_QWORD *)(*v78[0] + 96) + 112LL * (unsigned int)v48;
              LODWORD(v48) = v48 + 1;
              *(_QWORD *)(*(_QWORD *)(*v78[0] + 88) + v49 + 8) = *(_QWORD *)(v49 + *(_QWORD *)(*v78[0] + 88))
                                                               - *(_QWORD *)(*(_QWORD *)(*v78[0] + 24) + 16LL);
            }
          }
        }
        else
        {
          v19 = (_QWORD *)(96LL * *(unsigned int *)(*(_QWORD *)(*v78[0] + 40) + 44LL) + *(_QWORD *)(v46 + 88) - 96LL);
        }
        *(_DWORD *)*v19 = 0;
        *(_DWORD *)(*v19 + 4LL) = 0;
        *(_DWORD *)(*v19 + 8LL) = 0;
        *(_QWORD *)(*v19 + 16LL) = 0LL;
        v19[2] = 0LL;
        *(_QWORD *)(*v19 + 24LL) = 0LL;
        *(_QWORD *)(*v19 + 32LL) = 0LL;
        *(_DWORD *)(*v19 + 48LL) = 0;
        *(_QWORD *)(*v19 + 56LL) = 0LL;
        *(_DWORD *)(*v19 + 64LL) = 0;
        *(_DWORD *)(*v19 + 68LL) = 0;
        *(_DWORD *)(*v19 + 72LL) = 0;
        *(_DWORD *)(*v19 + 76LL) = 0;
        *(_QWORD *)(*v19 + 96LL) = 0LL;
        *(_DWORD *)(*v19 + 104LL) = -1;
        *(_QWORD *)(*v19 + 40LL) = 0LL;
        v19[3] = 0LL;
        v19[11] = 0LL;
        v50 = v79;
        if ( !v79 )
          v50 = *v78[0];
        if ( (unsigned int)MNIsUAHMenu(v50) )
          memset((char *)v19 + 52, 0, 0x20uLL);
        if ( (unsigned int)SetLPITEMInfoNoRedraw(v78, v19, v92, a5, &v91) )
        {
          if ( !v91 )
            goto LABEL_104;
          v59 = v79;
          if ( !v79 )
            v59 = *v78[0];
          v60 = KeGetCurrentThread();
          v61 = 0LL;
          if ( !(unsigned int)IsThreadCrossSessionAttached(v52, v51, v53, v54) )
          {
            v64 = (__int64 *)PsGetThreadWin32Thread(v60);
            if ( v64 )
              v61 = *v64;
          }
          v85 = *(_QWORD *)(v61 + 408);
          *(_QWORD *)(v61 + 408) = &v85;
          v86 = v59;
          if ( v59 )
            HMLockObject(v59);
          xxxRedrawForSetLPITEMInfo(v78, (__int64)v19, v62, v63);
          v68 = ThreadUnlock1(v66, v65, v67);
          v79 = 0LL;
          SmartObjStackRefBase<tagMENU>::operator=(v78, v68);
          if ( !(unsigned __int8)SmartObjStackRef<tagMENU>::operator==(v78) )
          {
LABEL_104:
            v69 = v79;
            if ( !v79 )
              v69 = *v78[0];
            if ( (unsigned int)MNGetpItemIndex(v69, (__int64)v19) != -1
              && ((*(_DWORD *)(*(_QWORD *)(*v78[0] + 40) + 40LL) & 0x20) != 0 || (*(_DWORD *)*v19 & 0x2004) == 0x2000) )
            {
              *(_DWORD *)*v19 |= 0x6000u;
              v70 = v19[2];
              if ( v70 )
                MakeMenuRtoL(v70, 1LL);
            }
            goto LABEL_111;
          }
        }
        else
        {
          if ( *(_QWORD *)v80[0] )
          {
            SmartObjStackRefBase<tagPOPUPMENU>::Init(v89, *(_QWORD *)v80[0]);
            MNDeleteAdjustIndexes(v84, v89, v14);
          }
          v55 = v79;
          if ( !v79 )
            v55 = *v78[0];
          MNFreeItem(v55, (__int64)v19, 1);
          v26 = *v78[0];
          v56 = 96 * *(_DWORD *)(*(_QWORD *)(*v78[0] + 40) + 44LL) + *(_DWORD *)(*v78[0] + 88) - (_DWORD)v19 - 96;
          if ( 96 * *(_DWORD *)(*(_QWORD *)(*v78[0] + 40) + 44LL) + *(_DWORD *)(*v78[0] + 88) - (_DWORD)v19 != 96 )
          {
            memmove(
              (void *)*v19,
              (const void *)v19[12],
              (unsigned int)(112 * *(_DWORD *)(*(_QWORD *)(*v78[0] + 40) + 44LL)
                           + **(_DWORD **)(*v78[0] + 88)
                           - *((_DWORD *)v19 + 24)));
            memmove(v19, v19 + 12, v56);
            v57 = (__int64)v19 - *(_QWORD *)(*v78[0] + 88);
            v26 = (unsigned __int128)(v57 * (__int128)0x2AAAAAAAAAAAAAABLL) >> 64;
            v58 = v57 / 96;
            while ( (unsigned int)v58 < *(_DWORD *)(*(_QWORD *)(*v78[0] + 40) + 44LL) - 1 )
            {
              v16 = 96LL * (int)v58;
              *(_QWORD *)(v16 + *(_QWORD *)(*v78[0] + 88)) = *(_QWORD *)(*v78[0] + 96) + 112LL * (unsigned int)v58;
              v15 = *v78[0];
              v26 = *(_QWORD *)(v16 + *(_QWORD *)(*v78[0] + 88)) - *(_QWORD *)(*(_QWORD *)(*v78[0] + 24) + 16LL);
              LODWORD(v58) = v58 + 1;
              *(_QWORD *)(*(_QWORD *)(*v78[0] + 88) + v16 + 8) = v26;
            }
          }
          --*(_DWORD *)(*(_QWORD *)(*v78[0] + 40) + 44LL);
        }
        v11 = 0;
LABEL_111:
        v6 = v11;
      }
    }
  }
  SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v78, v26, v15, v16);
  SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v80, v71, v72, v73);
  SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(&v81, v74, v75, v76);
  return v6;
}
