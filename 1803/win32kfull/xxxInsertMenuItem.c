/*
 * XREFs of xxxInsertMenuItem @ 0x1C0023244
 * Callers:
 *     NtUserThunkedMenuItemInfo @ 0x1C0021080 (NtUserThunkedMenuItemInfo.c)
 * Callees:
 *     ?SetLPITEMInfoNoRedraw@@YAHAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@PEAUtagMENUITEMINFOW@@PEAU_UNICODE_STRING@@PEAH@Z @ 0x1C002133C (-SetLPITEMInfoNoRedraw@@YAHAEBV-$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@PEAUtagMENUITEMINFOW@.c)
 *     MNIsUAHMenu @ 0x1C002177C (MNIsUAHMenu.c)
 *     MNGetpItemIndex @ 0x1C00217A4 (MNGetpItemIndex.c)
 *     ?xxxRedrawForSetLPITEMInfo@@YAXAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@@Z @ 0x1C00217EC (-xxxRedrawForSetLPITEMInfo@@YAXAEBV-$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@@Z.c)
 *     MNGetPopupFromMenu @ 0x1C002196C (MNGetPopupFromMenu.c)
 *     ?Init@?$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z @ 0x1C0021B08 (-Init@-$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z.c)
 *     ??4?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAAAEAV0@QEAUtagPOPUPMENU@@@Z @ 0x1C0021B98 (--4-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAAAEAV0@QEAUtagPOPUPMENU@@@Z.c)
 *     ??1?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ @ 0x1C0021BC8 (--1-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ.c)
 *     MNFreeItem @ 0x1C00229EC (MNFreeItem.c)
 *     ??8?$SmartObjStackRef@UtagMENU@@@@QEBA_NAEBV0@@Z @ 0x1C002624C (--8-$SmartObjStackRef@UtagMENU@@@@QEBA_NAEBV0@@Z.c)
 *     ??8?$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z @ 0x1C00262C8 (--8-$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z.c)
 *     ??4?$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z @ 0x1C00262F8 (--4-$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z.c)
 *     ?Init@?$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z @ 0x1C00263B8 (-Init@-$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z.c)
 *     W32GetThreadWin32Thread @ 0x1C0026450 (W32GetThreadWin32Thread.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C0029B88 (--1UserAtomicCheck@@QEAA@XZ.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C0029BD8 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     MNLookUpItem @ 0x1C0039D7C (MNLookUpItem.c)
 *     ?MNAllocMenuItems@@YAHAEBV?$SmartObjStackRef@UtagMENU@@@@_N@Z @ 0x1C005E128 (-MNAllocMenuItems@@YAHAEBV-$SmartObjStackRef@UtagMENU@@@@_N@Z.c)
 *     memmove @ 0x1C013D380 (memmove.c)
 *     memset @ 0x1C013D6C0 (memset.c)
 *     MakeMenuRtoL @ 0x1C0205058 (MakeMenuRtoL.c)
 *     xxxMNSetGapState @ 0x1C02055B8 (xxxMNSetGapState.c)
 *     ?MNDeleteAdjustIndexes@@YAXPEAUtagMENUSTATE@@V?$SmartObjStackRef@UtagPOPUPMENU@@@@I@Z @ 0x1C02059AC (-MNDeleteAdjustIndexes@@YAXPEAUtagMENUSTATE@@V-$SmartObjStackRef@UtagPOPUPMENU@@@@I@Z.c)
 */

__int64 __fastcall xxxInsertMenuItem(_QWORD *a1, unsigned int a2, unsigned int a3, __int64 a4, unsigned __int16 *a5)
{
  int v8; // r14d
  __int64 ThreadWin32Thread; // rax
  unsigned int v10; // edi
  _QWORD *v11; // rdx
  unsigned int v12; // r13d
  __int64 v13; // rcx
  const void **v14; // rsi
  int v15; // edx
  unsigned int v16; // r9d
  __int64 v17; // rdx
  __int64 v18; // r8
  unsigned __int64 v19; // rcx
  __int64 v20; // rbx
  __int64 v21; // rax
  __int64 v22; // rdx
  __int64 v23; // r8
  __int64 *v24; // rcx
  __int64 v25; // rax
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // rcx
  __int64 v29; // rbx
  __int64 v30; // rax
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // r8
  __int64 v34; // rax
  __int64 v35; // rcx
  int v36; // ecx
  __int64 v37; // rdx
  __int64 v38; // rdx
  __int64 v40; // rax
  __int64 v41; // rcx
  __int64 v42; // rax
  __int64 v43; // rcx
  _DWORD *v44; // rax
  size_t v45; // r15
  __int64 v46; // r10
  __int64 v47; // r9
  __int64 v48; // rcx
  int v49; // eax
  __int64 v50; // rcx
  signed int v51; // eax
  __int64 *v52; // rcx
  __int64 v53; // rdx
  __int64 v54; // r8
  __int64 v55; // rcx
  unsigned int v56; // r15d
  __int64 v57; // rsi
  __int64 v58; // r10
  __int64 v59; // r9
  _DWORD *v60; // rcx
  __int64 *v61[2]; // [rsp+30h] [rbp-61h] BYREF
  __int64 v62; // [rsp+40h] [rbp-51h]
  _QWORD v63[2]; // [rsp+48h] [rbp-49h] BYREF
  __int64 *v64; // [rsp+58h] [rbp-39h] BYREF
  __int64 v65; // [rsp+60h] [rbp-31h] BYREF
  __int64 v66; // [rsp+68h] [rbp-29h]
  __int64 *v67; // [rsp+70h] [rbp-21h] BYREF
  char v68[8]; // [rsp+78h] [rbp-19h] BYREF
  __int64 v69; // [rsp+80h] [rbp-11h] BYREF
  __int64 v70; // [rsp+88h] [rbp-9h]
  _QWORD v71[9]; // [rsp+98h] [rbp+7h] BYREF
  __int64 v72; // [rsp+F0h] [rbp+5Fh] BYREF
  int v73; // [rsp+F8h] [rbp+67h] BYREF
  __int64 v74; // [rsp+108h] [rbp+77h]

  v74 = a4;
  v8 = 1;
  ThreadWin32Thread = W32GetThreadWin32Thread(KeGetCurrentThread());
  v10 = 0;
  v65 = 0LL;
  v64 = (__int64 *)gSmartObjNullRef;
  v65 = *(_QWORD *)(ThreadWin32Thread + 1456);
  *(_QWORD *)(ThreadWin32Thread + 1456) = &v65;
  v66 = 0LL;
  v67 = 0LL;
  SmartObjStackRefBase<tagPOPUPMENU>::Init(v63, 0LL);
  v11 = (_QWORD *)*a1;
  v12 = 0;
  v73 = 0;
  SmartObjStackRefBase<tagMENU>::Init(v61, *v11);
  v13 = a1[2];
  v62 = v13;
  if ( a2 == -1 )
  {
    v14 = 0LL;
  }
  else
  {
    v42 = v66;
    if ( !v66 )
    {
      v13 = v62;
      v42 = *v64;
    }
    v72 = v42;
    if ( !v13 )
      v13 = *v61[0];
    v14 = (const void **)MNLookUpItem(v13, a2, a3, &v72);
    v66 = 0LL;
    SmartObjStackRefBase<tagMENU>::operator=(&v64, v72);
    if ( v14 )
    {
      v62 = v66;
      SmartObjStackRefBase<tagMENU>::operator=(v61, *v64);
    }
    else
    {
      a2 = -1;
    }
  }
  if ( (*(_DWORD *)(*(_QWORD *)(*v61[0] + 40) + 40LL) & 1) == 0
    && *(_DWORD *)(*(_QWORD *)(*v61[0] + 40) + 44LL)
    && ((*(_DWORD *)(v74 + 4) & 0x80u) == 0 || (unsigned __int64)(*(_QWORD *)(v74 + 72) - 1LL) > 6) )
  {
    v15 = a2;
    v16 = a2;
    if ( v14 && !a3 )
    {
      v48 = v62;
      if ( !v62 )
        v48 = *v61[0];
      v15 = MNGetpItemIndex(v48, (__int64)v14);
    }
    if ( !v15 )
    {
      v49 = 1;
      if ( *(_QWORD *)(**(_QWORD **)(*v61[0] + 88) + 96LL) == 1LL )
        a2 = 1;
      else
        v49 = a3;
      a3 = v49;
LABEL_12:
      if ( a2 != v16 )
        v14 = (const void **)(*(_QWORD *)(*v61[0] + 88) + 96LL * a2);
      goto LABEL_14;
    }
    if ( v15 == -1 )
      v15 = *(_DWORD *)(*(_QWORD *)(*v61[0] + 40) + 44LL);
    v17 = (unsigned int)(v15 - 1);
    v18 = *(_QWORD *)(*v61[0] + 88) + 96 * v17;
    if ( (_DWORD)v17 )
    {
      do
      {
        v19 = *(_QWORD *)(*(_QWORD *)v18 + 96LL);
        if ( !v19 )
          break;
        if ( v19 >= 7 )
          break;
        v18 -= 96LL;
        a2 = v17;
        a3 = 1;
        LODWORD(v17) = v17 - 1;
      }
      while ( (_DWORD)v17 );
      goto LABEL_12;
    }
  }
LABEL_14:
  if ( *(_DWORD *)(*(_QWORD *)(*v61[0] + 40) + 44LL) < *(_DWORD *)(*v61[0] + 60) )
    goto LABEL_109;
  if ( (unsigned int)MNAllocMenuItems(v61, 0LL) )
  {
    if ( a2 == -1 )
      goto LABEL_109;
    v40 = v66;
    if ( !v66 )
      v40 = *v64;
    v41 = v62;
    v72 = v40;
    if ( !v62 )
      v41 = *v61[0];
    v14 = (const void **)MNLookUpItem(v41, a2, a3, &v72);
    v66 = 0LL;
    SmartObjStackRefBase<tagMENU>::operator=(&v64, v72);
    if ( (unsigned __int8)SmartObjStackRef<tagMENU>::operator==(v61, &v64) )
    {
LABEL_109:
      v20 = v62;
      if ( !v62 )
        v20 = *v61[0];
      v21 = W32GetThreadWin32Thread(KeGetCurrentThread());
      v69 = *(_QWORD *)(v21 + 408);
      v24 = &v69;
      *(_QWORD *)(v21 + 408) = &v69;
      v70 = v20;
      if ( v20 )
        _InterlockedAdd((volatile signed __int32 *)(v20 + 8), 1u);
      if ( v14 )
      {
        v43 = v62;
        if ( !v62 )
          v43 = *v61[0];
        v44 = MNGetPopupFromMenu(v43, &v67);
        SmartObjStackRefBase<tagPOPUPMENU>::operator=(v63, (__int64)v44);
        if ( *(_QWORD *)v63[0] )
        {
          UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)v68);
          v50 = v62;
          if ( !v62 )
            v50 = *v61[0];
          v12 = MNGetpItemIndex(v50, (__int64)v14);
          if ( *(_DWORD *)(*(_QWORD *)v63[0] + 80LL) >= v12 )
            ++*(_DWORD *)(*(_QWORD *)v63[0] + 80LL);
          if ( (**(_DWORD **)v63[0] & 0x20) != 0 && *(_DWORD *)(*(_QWORD *)v63[0] + 84LL) >= v12 )
            ++*(_DWORD *)(*(_QWORD *)v63[0] + 84LL);
          if ( v67[8] == *(_QWORD *)(*(_QWORD *)v63[0] + 16LL) )
          {
            v51 = *((_DWORD *)v67 + 18);
            if ( v51 >= (int)v12 )
              *((_DWORD *)v67 + 18) = v51 + 1;
          }
          v52 = v67;
          if ( v67[10] == *(_QWORD *)(*(_QWORD *)v63[0] + 16LL) )
          {
            v53 = *((unsigned int *)v67 + 22);
            if ( (int)v53 >= (int)v12 )
            {
              *((_DWORD *)v67 + 22) = v53 + 1;
              if ( (_DWORD)v53 == v12 )
              {
                v54 = *((unsigned int *)v52 + 23);
                if ( (v54 & 1) != 0 )
                  xxxMNSetGapState(v52[10], v53, v54, 0LL);
              }
            }
          }
          UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)v68);
        }
      }
      v25 = ThreadUnlock1(v24, v22, v23);
      v62 = 0LL;
      SmartObjStackRefBase<tagMENU>::operator=(v61, v25);
      if ( !(unsigned __int8)SmartObjStackRef<tagMENU>::operator==(v61) )
      {
        ++*(_DWORD *)(*(_QWORD *)(*v61[0] + 40) + 44LL);
        v27 = *v61[0];
        if ( v14 )
        {
          v45 = *(_QWORD *)(*v61[0] + 88)
              + 96LL * (unsigned int)(*(_DWORD *)(*(_QWORD *)(v27 + 40) + 44LL) - 1)
              - (_QWORD)v14;
          if ( v45 )
          {
            memmove(
              (void *)v14[12],
              *v14,
              **(_QWORD **)(*v61[0] + 88)
            + 112LL * (unsigned int)(*(_DWORD *)(*(_QWORD *)(*v61[0] + 40) + 44LL) - 1)
            - (_QWORD)*v14);
            memmove(v14 + 12, v14, v45);
            v46 = ((__int64)v14 - *(_QWORD *)(*v61[0] + 88) + 96) / 96;
            while ( (unsigned int)v46 < *(_DWORD *)(*(_QWORD *)(*v61[0] + 40) + 44LL) )
            {
              v47 = 96LL * (int)v46;
              *(_QWORD *)(v47 + *(_QWORD *)(*v61[0] + 88)) = *(_QWORD *)(*v61[0] + 96) + 112LL * (unsigned int)v46;
              LODWORD(v46) = v46 + 1;
              *(_QWORD *)(*(_QWORD *)(*v61[0] + 88) + v47 + 8) = *(_QWORD *)(v47 + *(_QWORD *)(*v61[0] + 88))
                                                               - *(_QWORD *)(*(_QWORD *)(*v61[0] + 24) + 16LL);
            }
          }
        }
        else
        {
          v14 = (const void **)(96LL * *(unsigned int *)(*(_QWORD *)(*v61[0] + 40) + 44LL) + *(_QWORD *)(v27 + 88)
                                                                                           - 96LL);
        }
        *(_DWORD *)*v14 = 0;
        *((_DWORD *)*v14 + 1) = 0;
        *((_DWORD *)*v14 + 2) = 0;
        *((_QWORD *)*v14 + 2) = 0LL;
        v14[2] = 0LL;
        *((_QWORD *)*v14 + 3) = 0LL;
        *((_QWORD *)*v14 + 4) = 0LL;
        *((_DWORD *)*v14 + 12) = 0;
        *((_QWORD *)*v14 + 7) = 0LL;
        *((_DWORD *)*v14 + 16) = 0;
        *((_DWORD *)*v14 + 17) = 0;
        *((_DWORD *)*v14 + 18) = 0;
        *((_DWORD *)*v14 + 19) = 0;
        *((_QWORD *)*v14 + 12) = 0LL;
        *((_DWORD *)*v14 + 26) = -1;
        *((_QWORD *)*v14 + 5) = 0LL;
        v14[3] = 0LL;
        v14[11] = 0LL;
        v28 = v62;
        if ( !v62 )
          v28 = *v61[0];
        if ( (unsigned int)MNIsUAHMenu(v28) )
          memset((char *)v14 + 52, 0, 0x20uLL);
        if ( (unsigned int)SetLPITEMInfoNoRedraw(v61, v14, v74, a5, &v73) )
        {
          if ( !v73 )
            goto LABEL_34;
          v29 = v62;
          if ( !v62 )
            v29 = *v61[0];
          v30 = W32GetThreadWin32Thread(KeGetCurrentThread());
          v69 = *(_QWORD *)(v30 + 408);
          *(_QWORD *)(v30 + 408) = &v69;
          v70 = v29;
          if ( v29 )
            _InterlockedAdd((volatile signed __int32 *)(v29 + 8), 1u);
          xxxRedrawForSetLPITEMInfo(v61, (__int64)v14);
          v34 = ThreadUnlock1(v32, v31, v33);
          v62 = 0LL;
          SmartObjStackRefBase<tagMENU>::operator=(v61, v34);
          if ( !(unsigned __int8)SmartObjStackRef<tagMENU>::operator==(v61) )
          {
LABEL_34:
            v35 = v62;
            if ( !v62 )
              v35 = *v61[0];
            if ( (unsigned int)MNGetpItemIndex(v35, (__int64)v14) != -1 )
            {
              if ( (*(_DWORD *)(*(_QWORD *)(*v61[0] + 40) + 40LL) & 0x20) != 0
                || (v36 = *(_DWORD *)*v14, (v36 & 0x2000) != 0) && (v36 & 4) == 0 )
              {
                *(_DWORD *)*v14 |= 0x6000u;
                v60 = v14[2];
                if ( v60 )
                  MakeMenuRtoL(v60, 1LL);
              }
            }
            goto LABEL_39;
          }
        }
        else
        {
          if ( *(_QWORD *)v63[0] )
          {
            SmartObjStackRefBase<tagPOPUPMENU>::Init(v71, *(_QWORD *)v63[0]);
            MNDeleteAdjustIndexes(v67, v71, v12);
          }
          v55 = v62;
          if ( !v62 )
            v55 = *v61[0];
          MNFreeItem(v55, v14, 1);
          v26 = *v61[0];
          v56 = 96 * *(_DWORD *)(*(_QWORD *)(*v61[0] + 40) + 44LL) + *(_DWORD *)(*v61[0] + 88) - (_DWORD)v14 - 96;
          if ( 96 * *(_DWORD *)(*(_QWORD *)(*v61[0] + 40) + 44LL) + *(_DWORD *)(*v61[0] + 88) - (_DWORD)v14 != 96 )
          {
            memmove(
              (void *)*v14,
              v14[12],
              (unsigned int)(112 * *(_DWORD *)(*(_QWORD *)(*v61[0] + 40) + 44LL)
                           + **(_DWORD **)(*v61[0] + 88)
                           - *((_DWORD *)v14 + 24)));
            memmove(v14, v14 + 12, v56);
            v57 = (__int64)v14 - *(_QWORD *)(*v61[0] + 88);
            v26 = (unsigned __int128)(v57 * (__int128)0x2AAAAAAAAAAAAAABLL) >> 64;
            v58 = v57 / 96;
            while ( (unsigned int)v58 < *(_DWORD *)(*(_QWORD *)(*v61[0] + 40) + 44LL) - 1 )
            {
              v59 = 96LL * (int)v58;
              *(_QWORD *)(v59 + *(_QWORD *)(*v61[0] + 88)) = *(_QWORD *)(*v61[0] + 96) + 112LL * (unsigned int)v58;
              v26 = *(_QWORD *)(v59 + *(_QWORD *)(*v61[0] + 88)) - *(_QWORD *)(*(_QWORD *)(*v61[0] + 24) + 16LL);
              LODWORD(v58) = v58 + 1;
              *(_QWORD *)(*(_QWORD *)(*v61[0] + 88) + v59 + 8) = v26;
            }
          }
          --*(_DWORD *)(*(_QWORD *)(*v61[0] + 40) + 44LL);
        }
        v8 = 0;
LABEL_39:
        v10 = v8;
      }
    }
  }
  SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v61, v26);
  SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v63, v37);
  SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(&v64, v38);
  return v10;
}
