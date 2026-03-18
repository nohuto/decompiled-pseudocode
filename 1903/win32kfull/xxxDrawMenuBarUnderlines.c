/*
 * XREFs of xxxDrawMenuBarUnderlines @ 0x1C01373E0
 * Callers:
 *     xxxRealDefWindowProc @ 0x1C0060288 (xxxRealDefWindowProc.c)
 *     xxxEndMenuLoop @ 0x1C0220290 (xxxEndMenuLoop.c)
 * Callees:
 *     GetOemBitmapInfoForDpi @ 0x1C000BAC8 (GetOemBitmapInfoForDpi.c)
 *     PushW32ThreadLock @ 0x1C001F0A0 (PushW32ThreadLock.c)
 *     ??1?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ @ 0x1C0021844 (--1-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ.c)
 *     MNGetpItemFromIndex @ 0x1C0021DE0 (MNGetpItemFromIndex.c)
 *     MNGetpItemIndex @ 0x1C0022308 (MNGetpItemIndex.c)
 *     MNIsOwnerDrawItem @ 0x1C0022540 (MNIsOwnerDrawItem.c)
 *     GreSetTextColor @ 0x1C002D630 (GreSetTextColor.c)
 *     W32GetThreadWin32Thread @ 0x1C0062084 (W32GetThreadWin32Thread.c)
 *     GetNonChildAncestor @ 0x1C008C668 (GetNonChildAncestor.c)
 *     GreSelectFont @ 0x1C008CDF0 (GreSelectFont.c)
 *     GetDPIMetrics @ 0x1C00912E8 (GetDPIMetrics.c)
 *     GetAppCompatFlags2 @ 0x1C0092010 (GetAppCompatFlags2.c)
 *     PopAndFreeAlwaysW32ThreadLock @ 0x1C0096A50 (PopAndFreeAlwaysW32ThreadLock.c)
 *     GetDpiForSystem @ 0x1C00AA6E4 (GetDpiForSystem.c)
 *     ??8?$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z @ 0x1C00BFB98 (--8-$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z.c)
 *     ?xxxSendMenuDrawItemMessage@@YAXPEAUHDC__@@IAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@HHPEAUtagWND@@@Z @ 0x1C00F9924 (-xxxSendMenuDrawItemMessage@@YAXPEAUHDC__@@IAEBV-$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@HHPE.c)
 *     GreSetViewportOrg @ 0x1C00F9D68 (GreSetViewportOrg.c)
 *     ?GetDPIMETRICS@@YAPEBUtagDPIMETRICS@@PEAUtagWND@@@Z @ 0x1C00FBE48 (-GetDPIMETRICS@@YAPEBUtagDPIMETRICS@@PEAUtagWND@@@Z.c)
 *     ThreadLockMenuNoModify @ 0x1C00FC34C (ThreadLockMenuNoModify.c)
 *     ?Init@?$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z @ 0x1C0106608 (-Init@-$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z.c)
 *     ??4?$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z @ 0x1C0106A24 (--4-$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z.c)
 *     CALL_LPK @ 0x1C0157754 (CALL_LPK.c)
 *     __security_check_cookie @ 0x1C0162AB0 (__security_check_cookie.c)
 *     ?xxxDrawItemUnderline@@YAXAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@PEAUHDC__@@HHPEAGJ@Z @ 0x1C0249C44 (-xxxDrawItemUnderline@@YAXAEBV-$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@PEAUHDC__@@HHPEAGJ@Z.c)
 *     xxxPSMTextOut @ 0x1C0252D68 (xxxPSMTextOut.c)
 *     GetPrefixCount @ 0x1C025B410 (GetPrefixCount.c)
 *     xxxPSMGetTextExtent @ 0x1C025CF40 (xxxPSMGetTextExtent.c)
 */

_QWORD *__fastcall xxxDrawMenuBarUnderlines(__int64 a1, int a2)
{
  int v2; // r12d
  __int64 v4; // rdx
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 ThreadWin32Thread; // rax
  void *v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 NonChildAncestor; // rax
  struct tagWND *v12; // r13
  __int64 v14; // rdx
  BOOL v15; // r14d
  int v16; // ecx
  __int64 v17; // r15
  __int64 v18; // rdi
  __int64 DCEx; // rax
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 v22; // rcx
  HDC v23; // rsi
  __int64 v24; // rdx
  __int64 v25; // r8
  __int64 v26; // rcx
  __int64 v27; // rcx
  __int64 v28; // rdx
  int v29; // ebx
  __int64 v30; // r8
  __int64 v31; // r9
  __int64 *DPIMETRICS; // rax
  int v33; // r8d
  int v34; // edx
  __int64 *v35; // rax
  __int64 v36; // rdx
  _DWORD *v37; // rax
  int v38; // r15d
  unsigned int v39; // r12d
  __int64 v40; // rcx
  __int64 v41; // rcx
  __int64 v42; // r9
  int v43; // ebx
  unsigned int DpiForSystem; // eax
  int v45; // edx
  int v46; // ebx
  __int64 v47; // rcx
  _DWORD *v48; // rax
  unsigned int v49; // ecx
  __int64 v50; // rax
  __int64 v51; // r9
  _BYTE *v52; // rbx
  unsigned __int16 PrefixCount; // ax
  __int64 v54; // rdx
  __int64 v55; // r8
  __int64 v56; // r9
  __int64 v57; // rcx
  unsigned int v58; // edx
  __int64 v59; // rax
  __int64 v60; // rcx
  __int64 *v62[2]; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v63; // [rsp+60h] [rbp-A8h]
  __int64 v64; // [rsp+68h] [rbp-A0h]
  __int64 v65; // [rsp+70h] [rbp-98h]
  PCWSTR SourceString; // [rsp+78h] [rbp-90h]
  __int64 v67; // [rsp+80h] [rbp-88h]
  __int64 v68; // [rsp+88h] [rbp-80h]
  __int64 v69; // [rsp+90h] [rbp-78h]
  _QWORD v70[3]; // [rsp+98h] [rbp-70h] BYREF
  __int64 v71; // [rsp+B0h] [rbp-58h] BYREF
  __int64 v72; // [rsp+B8h] [rbp-50h]
  __int64 v73; // [rsp+C0h] [rbp-48h]
  _BYTE v74[512]; // [rsp+C8h] [rbp-40h] BYREF

  v2 = a2;
  SmartObjStackRefBase<tagMENU>::Init(v62, 0LL);
  v63 = 0LL;
  v71 = 0LL;
  v72 = 0LL;
  v73 = 0LL;
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v4, v5, v6);
  v67 = 0LL;
  v69 = ThreadWin32Thread;
  if ( (gdwPUDFlags & 0x20000) == 0 )
  {
    v8 = gpdwCPUserPreferencesMask;
    v9 = (unsigned int)gpdwCPUserPreferencesMask & 0x80000020;
    if ( (_DWORD)v9 == 0x80000000 && (GetAppCompatFlags2(1024LL, (__int64)gpdwCPUserPreferencesMask, v9, v10) & 2) == 0 )
    {
      NonChildAncestor = GetNonChildAncestor(a1);
      v12 = (struct tagWND *)NonChildAncestor;
      if ( NonChildAncestor )
      {
        if ( (*(_BYTE *)(*(_QWORD *)(NonChildAncestor + 40) + 16LL) & 1) != 0 )
        {
          v14 = *(_QWORD *)(NonChildAncestor + 168);
          v63 = 0LL;
          SmartObjStackRefBase<tagMENU>::operator=(v62, v14);
          if ( !SmartObjStackRef<tagMENU>::operator==((__int64)v62) )
          {
            v15 = ((unsigned int)gpdwCPUserPreferencesMask & 0x80020000) == 0x80020000
               && (*(_DWORD *)(*(_QWORD *)(*v62[0] + 40) + 40LL) & 1) == 0;
            v16 = *(_DWORD *)(*(_QWORD *)(*v62[0] + 40) + 40LL);
            if ( v2 )
            {
              if ( (v16 & 4) != 0 )
                return SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(
                         v62,
                         (__int64)v8,
                         v9,
                         v10);
              v17 = *(_QWORD *)(gpsi + 4752LL);
              *(_DWORD *)(*(_QWORD *)(*v62[0] + 40) + 40LL) |= 4u;
            }
            else
            {
              if ( (v16 & 4) == 0 )
                return SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(
                         v62,
                         (__int64)v8,
                         v9,
                         v10);
              if ( *(_QWORD *)(*(_QWORD *)(*v62[0] + 40) + 24LL) )
              {
                v17 = *(_QWORD *)(*(_QWORD *)(*v62[0] + 40) + 24LL);
              }
              else if ( v15 )
              {
                v17 = *(_QWORD *)(gpsi + 4936LL);
              }
              else
              {
                v17 = *(_QWORD *)(gpsi + 4728LL);
              }
              *(_DWORD *)(*(_QWORD *)(*v62[0] + 40) + 40LL) &= ~4u;
            }
            v65 = v17;
            v18 = *(_QWORD *)(*v62[0] + 88);
            DCEx = _GetDCEx(v12, 0LL, 65539LL);
            v22 = v63;
            v23 = (HDC)DCEx;
            if ( !v63 )
              v22 = *v62[0];
            ThreadLockMenuNoModify(v22, &v71, v20, v21);
            LODWORD(v64) = 0;
            if ( *(_DWORD *)(*(_QWORD *)(*v62[0] + 40) + 44LL) )
            {
              do
              {
                v26 = v63;
                if ( !v63 )
                  v26 = *v62[0];
                if ( (unsigned int)MNGetpItemIndex(v26, v18) == -1 )
                  break;
                v27 = v63;
                if ( !v63 )
                  v27 = *v62[0];
                v29 = MNIsOwnerDrawItem(v27, (_DWORD **)v18);
                v68 = *(_QWORD *)(v18 + 88);
                SourceString = *(PCWSTR *)(v18 + 24);
                if ( SourceString || v29 )
                {
                  if ( v29 )
                  {
                    DPIMETRICS = (__int64 *)GetDPIMETRICS(v12, v28, v30, v31);
                    GreSelectFont((__int64)v23, *DPIMETRICS);
                    v33 = 0;
                    v34 = 0;
                  }
                  else
                  {
                    v35 = (__int64 *)GetDPIMetrics();
                    GreSelectFont((__int64)v23, *v35);
                    v33 = *(_DWORD *)(*(_QWORD *)v18 + 68LL);
                    v34 = *(_DWORD *)(*(_QWORD *)v18 + 64LL);
                  }
                  GreSetViewportOrg(v23, v34, v33);
                  if ( v2 && (*(_DWORD *)(*(_QWORD *)v18 + 4LL) & 0x100) != 0 )
                    v36 = *(_QWORD *)(gpsi + 4904LL);
                  else
                    v36 = v17;
                  GreSelectBrush(v23, v36);
                  if ( v29 )
                  {
                    xxxSendMenuDrawItemMessage((__int64)v23, 1, v62, v18, 0, 0, 0LL);
                  }
                  else
                  {
                    v37 = (_DWORD *)GetDPIMetrics();
                    v38 = v37[5];
                    if ( *(_DWORD *)(*(_QWORD *)v18 + 76LL) - v37[3] - v38 != 1 )
                      v38 += (unsigned int)(*(_DWORD *)(*(_QWORD *)v18 + 76LL) - v37[3] - v38 - 1) >> 1;
                    v39 = v37[2];
                    if ( (**(_DWORD **)v18 & 0x2000) != 0 )
                    {
                      xxxPSMGetTextExtent(v23);
                      v40 = v63;
                      if ( !v63 )
                        v40 = *v62[0];
                      if ( (unsigned int)MNGetpItemIndex(v40, v18) == -1 || v68 != *(_QWORD *)(v18 + 88) )
                        break;
                      v43 = *(_DWORD *)(*(_QWORD *)v18 + 72LL);
                      DpiForSystem = GetDpiForSystem(v41, v24, v25, v42);
                      v39 = v43 - *((__int16 *)GetOemBitmapInfoForDpi(63, DpiForSystem) + 2) - v67 + v39 - 2;
                    }
                    if ( (unsigned int)CALL_LPK(v69) )
                    {
                      if ( a2 )
                      {
                        v45 = *(_DWORD *)(gpsi + 4596LL);
                      }
                      else if ( v15 )
                      {
                        v45 = *(_DWORD *)(gpsi + 4688LL);
                      }
                      else
                      {
                        v45 = *(_DWORD *)(gpsi + 4584LL);
                      }
                      v46 = GreSetTextColor(v23, v45);
                      xxxPSMTextOut(v23, v39, v38, SourceString, *(_DWORD *)(*(_QWORD *)v18 + 48LL), 0x200000);
                      v47 = v63;
                      if ( !v63 )
                        v47 = *v62[0];
                      if ( (unsigned int)MNGetpItemIndex(v47, v18) == -1 || v68 != *(_QWORD *)(v18 + 88) )
                        break;
                      GreSetTextColor(v23, v46);
                    }
                    else
                    {
                      memset(v70, 0, sizeof(v70));
                      v48 = *(_DWORD **)v18;
                      v49 = *(_DWORD *)(*(_QWORD *)v18 + 48LL);
                      if ( v49 < 0xFF )
                      {
                        v52 = v74;
                      }
                      else
                      {
                        v50 = Win32AllocPool(2LL * (v49 + 1), 1953657685LL);
                        v52 = (_BYTE *)v50;
                        if ( !v50 )
                          break;
                        PushW32ThreadLock(v50, v70, (__int64)Win32FreePool, v51);
                        v48 = *(_DWORD **)v18;
                      }
                      PrefixCount = GetPrefixCount(SourceString, (unsigned int)v48[12], v52, (unsigned int)v48[12]);
                      xxxDrawItemUnderline(v62, v18, v23, v39, v38, v52, PrefixCount);
                      if ( v52 != v74 )
                        PopAndFreeAlwaysW32ThreadLock((__int64)v70, v54, v55, v56);
                    }
                    v2 = a2;
                  }
                }
                v57 = v63;
                v58 = v64 + 1;
                LODWORD(v64) = v64 + 1;
                if ( !v63 )
                  v57 = *v62[0];
                v59 = MNGetpItemFromIndex(v57, v58);
                v17 = v65;
                v18 = v59;
              }
              while ( (unsigned int)v24 < *(_DWORD *)(*(_QWORD *)(*v62[0] + 40) + 44LL) );
            }
            v60 = *(_QWORD *)(v72 + 40);
            *(_DWORD *)(v60 + 40) &= ~0x200u;
            ThreadUnlock1(v60, v24, v25);
            _ReleaseDC(v23);
          }
        }
      }
    }
  }
  return SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v62, (__int64)v8, v9, v10);
}
