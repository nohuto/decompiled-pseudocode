/*
 * XREFs of xxxDrawMenuBarUnderlines @ 0x1C0111460
 * Callers:
 *     xxxRealDefWindowProc @ 0x1C00A9FB8 (xxxRealDefWindowProc.c)
 *     xxxEndMenuLoop @ 0x1C021FD50 (xxxEndMenuLoop.c)
 * Callees:
 *     GetNonChildAncestor @ 0x1C001ACF8 (GetNonChildAncestor.c)
 *     PushW32ThreadLock @ 0x1C001EF30 (PushW32ThreadLock.c)
 *     GreSetTextColor @ 0x1C0022D4C (GreSetTextColor.c)
 *     MNIsOwnerDrawItem @ 0x1C00289B0 (MNIsOwnerDrawItem.c)
 *     PopAndFreeAlwaysW32ThreadLock @ 0x1C0037780 (PopAndFreeAlwaysW32ThreadLock.c)
 *     ??1?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ @ 0x1C0038E70 (--1-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ.c)
 *     GetDpiForSystem @ 0x1C004B4C4 (GetDpiForSystem.c)
 *     ??8?$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z @ 0x1C0061278 (--8-$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z.c)
 *     W32GetThreadWin32Thread @ 0x1C00AC2AC (W32GetThreadWin32Thread.c)
 *     ?Init@?$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z @ 0x1C00E0868 (-Init@-$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z.c)
 *     ??4?$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z @ 0x1C00E0C84 (--4-$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z.c)
 *     GetOemBitmapInfoForDpi @ 0x1C00EAC28 (GetOemBitmapInfoForDpi.c)
 *     GreSetViewportOrg @ 0x1C012897C (GreSetViewportOrg.c)
 *     ?GetDPIMETRICS@@YAPEBUtagDPIMETRICS@@PEAUtagWND@@@Z @ 0x1C0128B34 (-GetDPIMETRICS@@YAPEBUtagDPIMETRICS@@PEAUtagWND@@@Z.c)
 *     ?xxxSendMenuDrawItemMessage@@YAXPEAUHDC__@@IAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@HHPEAUtagWND@@@Z @ 0x1C0129B48 (-xxxSendMenuDrawItemMessage@@YAXPEAUHDC__@@IAEBV-$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@HHPE.c)
 *     MNGetpItemFromIndex @ 0x1C012A5A4 (MNGetpItemFromIndex.c)
 *     MNGetpItemIndex @ 0x1C012A92C (MNGetpItemIndex.c)
 *     GreSelectFont @ 0x1C012B530 (GreSelectFont.c)
 *     GetDPIMetrics @ 0x1C012C10C (GetDPIMetrics.c)
 *     GetAppCompatFlags2 @ 0x1C012DD40 (GetAppCompatFlags2.c)
 *     ThreadLockMenuNoModify @ 0x1C012F8A4 (ThreadLockMenuNoModify.c)
 *     CALL_LPK @ 0x1C0158514 (CALL_LPK.c)
 *     __security_check_cookie @ 0x1C0163A80 (__security_check_cookie.c)
 *     ?xxxDrawItemUnderline@@YAXAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@PEAUHDC__@@HHPEAGJ@Z @ 0x1C0249504 (-xxxDrawItemUnderline@@YAXAEBV-$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@PEAUHDC__@@HHPEAGJ@Z.c)
 *     xxxPSMTextOut @ 0x1C0252628 (xxxPSMTextOut.c)
 *     GetPrefixCount @ 0x1C025ACD8 (GetPrefixCount.c)
 *     xxxPSMGetTextExtent @ 0x1C025C810 (xxxPSMGetTextExtent.c)
 */

_QWORD *__fastcall xxxDrawMenuBarUnderlines(__int64 a1, int a2)
{
  int v2; // r12d
  __int64 v4; // rdx
  __int64 v5; // r8
  __int64 ThreadWin32Thread; // rax
  void *v7; // rdx
  __int64 v8; // r8
  __int64 NonChildAncestor; // rax
  struct tagWND *v10; // r13
  __int64 v12; // rdx
  BOOL v13; // r14d
  int v14; // ecx
  __int64 v15; // r15
  __int64 v16; // rdi
  __int64 DCEx; // rax
  __int64 v18; // rcx
  HDC v19; // rsi
  __int64 v20; // rdx
  __int64 v21; // r8
  __int64 v22; // r9
  __int64 v23; // rcx
  __int64 v24; // rcx
  __int64 v25; // rdx
  __int64 v26; // rcx
  int v27; // ebx
  __int64 v28; // r8
  const struct tagDPIMETRICS *DPIMETRICS; // rax
  __int64 v30; // rdx
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // r8
  _DWORD *v34; // rax
  int v35; // r15d
  unsigned int v36; // r12d
  __int64 v37; // r8
  __int64 v38; // r9
  __int64 v39; // rcx
  __int64 v40; // rcx
  int v41; // ebx
  unsigned int DpiForSystem; // eax
  int v43; // edx
  int v44; // ebx
  __int64 v45; // r8
  __int64 v46; // r9
  __int64 v47; // rcx
  _DWORD *v48; // rax
  unsigned int v49; // ecx
  __int64 v50; // rax
  _BYTE *v51; // rbx
  unsigned __int16 PrefixCount; // ax
  __int64 v53; // rdx
  __int64 v54; // rcx
  __int64 v55; // rdx
  __int64 v56; // rax
  __int64 v57; // rcx
  _QWORD v59[2]; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v60; // [rsp+60h] [rbp-A8h]
  __int64 v61; // [rsp+68h] [rbp-A0h]
  __int64 v62; // [rsp+70h] [rbp-98h]
  PCWSTR SourceString; // [rsp+78h] [rbp-90h]
  __int64 v64; // [rsp+80h] [rbp-88h]
  __int64 v65; // [rsp+88h] [rbp-80h]
  __int64 v66; // [rsp+90h] [rbp-78h]
  _QWORD v67[3]; // [rsp+98h] [rbp-70h] BYREF
  __int64 v68; // [rsp+B0h] [rbp-58h] BYREF
  __int64 v69; // [rsp+B8h] [rbp-50h]
  __int64 v70; // [rsp+C0h] [rbp-48h]
  _BYTE v71[512]; // [rsp+C8h] [rbp-40h] BYREF

  v2 = a2;
  SmartObjStackRefBase<tagMENU>::Init(v59, 0LL);
  v60 = 0LL;
  v68 = 0LL;
  v69 = 0LL;
  v70 = 0LL;
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v4, v5);
  v64 = 0LL;
  v66 = ThreadWin32Thread;
  if ( (gdwPUDFlags & 0x20000) == 0 )
  {
    v7 = gpdwCPUserPreferencesMask;
    v8 = (unsigned int)gpdwCPUserPreferencesMask & 0x80000020;
    if ( (_DWORD)v8 == 0x80000000 && (GetAppCompatFlags2(1024LL) & 2) == 0 )
    {
      NonChildAncestor = GetNonChildAncestor(a1);
      v10 = (struct tagWND *)NonChildAncestor;
      if ( NonChildAncestor )
      {
        if ( (*(_BYTE *)(*(_QWORD *)(NonChildAncestor + 40) + 16LL) & 1) != 0 )
        {
          v12 = *(_QWORD *)(NonChildAncestor + 168);
          v60 = 0LL;
          SmartObjStackRefBase<tagMENU>::operator=(v59, v12);
          if ( !SmartObjStackRef<tagMENU>::operator==((__int64)v59) )
          {
            v13 = ((unsigned int)gpdwCPUserPreferencesMask & 0x80020000) == 0x80020000
               && (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)v59[0] + 40LL) + 40LL) & 1) == 0;
            v14 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v59[0] + 40LL) + 40LL);
            if ( v2 )
            {
              if ( (v14 & 4) != 0 )
                return SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v59, (__int64)v7, v8);
              v15 = *(_QWORD *)(gpsi + 4752LL);
              *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v59[0] + 40LL) + 40LL) |= 4u;
            }
            else
            {
              if ( (v14 & 4) == 0 )
                return SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v59, (__int64)v7, v8);
              if ( *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v59[0] + 40LL) + 24LL) )
              {
                v15 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v59[0] + 40LL) + 24LL);
              }
              else if ( v13 )
              {
                v15 = *(_QWORD *)(gpsi + 4936LL);
              }
              else
              {
                v15 = *(_QWORD *)(gpsi + 4728LL);
              }
              *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v59[0] + 40LL) + 40LL) &= ~4u;
            }
            v62 = v15;
            v16 = *(_QWORD *)(*(_QWORD *)v59[0] + 88LL);
            DCEx = _GetDCEx(v10, 0LL, 65539LL);
            v18 = v60;
            v19 = (HDC)DCEx;
            if ( !v60 )
              v18 = *(_QWORD *)v59[0];
            ThreadLockMenuNoModify(v18, &v68);
            LODWORD(v61) = 0;
            if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v59[0] + 40LL) + 44LL) )
            {
              do
              {
                v23 = v60;
                if ( !v60 )
                  v23 = *(_QWORD *)v59[0];
                if ( (unsigned int)MNGetpItemIndex(v23, v16, v21, v22) == -1 )
                  break;
                v24 = v60;
                if ( !v60 )
                  v24 = *(_QWORD *)v59[0];
                v27 = MNIsOwnerDrawItem(v24, (_DWORD **)v16);
                v65 = *(_QWORD *)(v16 + 88);
                SourceString = *(PCWSTR *)(v16 + 24);
                if ( SourceString || v27 )
                {
                  if ( v27 )
                    DPIMETRICS = GetDPIMETRICS(v10);
                  else
                    DPIMETRICS = (const struct tagDPIMETRICS *)GetDPIMetrics(v26, v25, v28);
                  GreSelectFont(v19, *(_QWORD *)DPIMETRICS);
                  GreSetViewportOrg(v19);
                  if ( v2 && (*(_DWORD *)(*(_QWORD *)v16 + 4LL) & 0x100) != 0 )
                    v30 = *(_QWORD *)(gpsi + 4904LL);
                  else
                    v30 = v15;
                  GreSelectBrush(v19, v30);
                  if ( v27 )
                  {
                    xxxSendMenuDrawItemMessage((_DWORD)v19, 1, (unsigned int)v59, v16, 0, 0, 0LL);
                  }
                  else
                  {
                    v34 = (_DWORD *)GetDPIMetrics(v32, v31, v33);
                    v35 = v34[5];
                    if ( *(_DWORD *)(*(_QWORD *)v16 + 76LL) - v34[3] - v35 != 1 )
                      v35 += (unsigned int)(*(_DWORD *)(*(_QWORD *)v16 + 76LL) - v34[3] - v35 - 1) >> 1;
                    v36 = v34[2];
                    if ( (**(_DWORD **)v16 & 0x2000) != 0 )
                    {
                      xxxPSMGetTextExtent(v19);
                      v39 = v60;
                      if ( !v60 )
                        v39 = *(_QWORD *)v59[0];
                      if ( (unsigned int)MNGetpItemIndex(v39, v16, v37, v38) == -1 || v65 != *(_QWORD *)(v16 + 88) )
                        break;
                      v41 = *(_DWORD *)(*(_QWORD *)v16 + 72LL);
                      DpiForSystem = GetDpiForSystem(v40, v20, v21);
                      v36 = v41 - *((__int16 *)GetOemBitmapInfoForDpi(63LL, DpiForSystem) + 2) - v64 + v36 - 2;
                    }
                    if ( (unsigned int)CALL_LPK(v66) )
                    {
                      if ( a2 )
                      {
                        v43 = *(_DWORD *)(gpsi + 4596LL);
                      }
                      else if ( v13 )
                      {
                        v43 = *(_DWORD *)(gpsi + 4688LL);
                      }
                      else
                      {
                        v43 = *(_DWORD *)(gpsi + 4584LL);
                      }
                      v44 = GreSetTextColor(v19, v43);
                      xxxPSMTextOut(v19, v36, v35, SourceString, *(_DWORD *)(*(_QWORD *)v16 + 48LL), 0x200000);
                      v47 = v60;
                      if ( !v60 )
                        v47 = *(_QWORD *)v59[0];
                      if ( (unsigned int)MNGetpItemIndex(v47, v16, v45, v46) == -1 || v65 != *(_QWORD *)(v16 + 88) )
                        break;
                      GreSetTextColor(v19, v44);
                    }
                    else
                    {
                      memset(v67, 0, sizeof(v67));
                      v48 = *(_DWORD **)v16;
                      v49 = *(_DWORD *)(*(_QWORD *)v16 + 48LL);
                      if ( v49 < 0xFF )
                      {
                        v51 = v71;
                      }
                      else
                      {
                        v50 = Win32AllocPool(2LL * (v49 + 1), 1953657685LL);
                        v51 = (_BYTE *)v50;
                        if ( !v50 )
                          break;
                        PushW32ThreadLock(v50, v67, (__int64)Win32FreePool);
                        v48 = *(_DWORD **)v16;
                      }
                      PrefixCount = GetPrefixCount(SourceString, (unsigned int)v48[12], v51, (unsigned int)v48[12]);
                      xxxDrawItemUnderline(v59, v16, v19, v36, v35, v51, PrefixCount);
                      if ( v51 != v71 )
                        PopAndFreeAlwaysW32ThreadLock((__int64)v67, v53, v28);
                    }
                    v2 = a2;
                  }
                }
                v54 = v60;
                v55 = (unsigned int)(v61 + 1);
                LODWORD(v61) = v61 + 1;
                if ( !v60 )
                  v54 = *(_QWORD *)v59[0];
                v56 = MNGetpItemFromIndex(v54, v55, v28);
                v15 = v62;
                v16 = v56;
              }
              while ( (unsigned int)v20 < *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v59[0] + 40LL) + 44LL) );
            }
            v57 = *(_QWORD *)(v69 + 40);
            *(_DWORD *)(v57 + 40) &= ~0x200u;
            ThreadUnlock1(v57, v20, v21);
            _ReleaseDC(v19);
          }
        }
      }
    }
  }
  return SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v59, (__int64)v7, v8);
}
