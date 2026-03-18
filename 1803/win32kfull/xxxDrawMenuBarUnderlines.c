/*
 * XREFs of xxxDrawMenuBarUnderlines @ 0x1C0110730
 * Callers:
 *     xxxRealDefWindowProc @ 0x1C00246A8 (xxxRealDefWindowProc.c)
 *     xxxEndMenuLoop @ 0x1C01E2A70 (xxxEndMenuLoop.c)
 * Callees:
 *     ?GetDPIMETRICS@@YAPEBUtagDPIMETRICS@@PEAUtagWND@@@Z @ 0x1C000CED4 (-GetDPIMETRICS@@YAPEBUtagDPIMETRICS@@PEAUtagWND@@@Z.c)
 *     GreSetViewportOrg @ 0x1C000CF94 (GreSetViewportOrg.c)
 *     GetOemBitmapInfoForDpi @ 0x1C000D3C0 (GetOemBitmapInfoForDpi.c)
 *     ThreadLockMenuNoModify @ 0x1C000EBFC (ThreadLockMenuNoModify.c)
 *     ?xxxSendMenuDrawItemMessage@@YAXPEAUHDC__@@IAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@HHPEAUtagWND@@@Z @ 0x1C0010A38 (-xxxSendMenuDrawItemMessage@@YAXPEAUHDC__@@IAEBV-$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@HHPE.c)
 *     GreSelectFont @ 0x1C00115F0 (GreSelectFont.c)
 *     GreSetTextColor @ 0x1C00133D4 (GreSetTextColor.c)
 *     MNGetpItemFromIndex @ 0x1C0013D3C (MNGetpItemFromIndex.c)
 *     PopAndFreeAlwaysW32ThreadLock @ 0x1C001B160 (PopAndFreeAlwaysW32ThreadLock.c)
 *     MNIsOwnerDrawItem @ 0x1C0021310 (MNIsOwnerDrawItem.c)
 *     MNGetpItemIndex @ 0x1C00217A4 (MNGetpItemIndex.c)
 *     ??1?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ @ 0x1C0021BC8 (--1-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ.c)
 *     ??8?$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z @ 0x1C00262C8 (--8-$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z.c)
 *     ??4?$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z @ 0x1C00262F8 (--4-$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z.c)
 *     ?Init@?$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z @ 0x1C00263B8 (-Init@-$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z.c)
 *     W32GetThreadWin32Thread @ 0x1C0026450 (W32GetThreadWin32Thread.c)
 *     GetDpiForSystem @ 0x1C003BA94 (GetDpiForSystem.c)
 *     PushW32ThreadLock @ 0x1C005D730 (PushW32ThreadLock.c)
 *     GetDPIMetrics @ 0x1C0065818 (GetDPIMetrics.c)
 *     GetNonChildAncestor @ 0x1C0070A34 (GetNonChildAncestor.c)
 *     GetAppCompatFlags2 @ 0x1C00C3A80 (GetAppCompatFlags2.c)
 *     CALL_LPK @ 0x1C0132C50 (CALL_LPK.c)
 *     __security_check_cookie @ 0x1C0139660 (__security_check_cookie.c)
 *     ?xxxDrawItemUnderline@@YAXAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@PEAUHDC__@@HHPEAGJ@Z @ 0x1C0207DFC (-xxxDrawItemUnderline@@YAXAEBV-$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@PEAUHDC__@@HHPEAGJ@Z.c)
 *     xxxPSMTextOut @ 0x1C0210A28 (xxxPSMTextOut.c)
 *     GetPrefixCount @ 0x1C022C6B0 (GetPrefixCount.c)
 *     xxxPSMGetTextExtent @ 0x1C022E17C (xxxPSMGetTextExtent.c)
 */

_QWORD *__fastcall xxxDrawMenuBarUnderlines(__int64 a1, int a2)
{
  int v2; // r12d
  __int64 v4; // rdx
  void *v5; // rdx
  __int64 NonChildAncestor; // rax
  struct tagWND *v7; // r13
  __int64 v9; // rdx
  BOOL v10; // r14d
  int v11; // ecx
  __int64 v12; // r15
  __int64 v13; // rdi
  __int64 DCEx; // rax
  __int64 v15; // rcx
  HDC v16; // rsi
  __int64 v17; // rdx
  __int64 v18; // r8
  __int64 v19; // rcx
  __int64 v20; // r9
  __int64 v21; // rcx
  __int64 v22; // rdx
  __int64 v23; // rcx
  int v24; // ebx
  int v25; // r8d
  int v26; // edx
  __int64 v27; // rdx
  __int64 v28; // rdx
  __int64 v29; // rcx
  _DWORD *DPIMetrics; // rax
  int v31; // r15d
  unsigned int v32; // r12d
  __int64 v33; // rcx
  int v34; // ebx
  unsigned int DpiForSystem; // eax
  int v36; // edx
  int v37; // ebx
  __int64 v38; // rcx
  _DWORD *v39; // rax
  unsigned int v40; // ecx
  __int64 v41; // rax
  _BYTE *v42; // rbx
  unsigned __int16 PrefixCount; // ax
  __int64 v44; // rcx
  unsigned int v45; // edx
  __int64 v46; // rax
  __int64 v47; // rcx
  __int64 **v49[2]; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v50; // [rsp+60h] [rbp-A8h]
  __int64 v51; // [rsp+68h] [rbp-A0h]
  __int64 v52; // [rsp+70h] [rbp-98h]
  __int64 v53; // [rsp+78h] [rbp-90h]
  __int64 v54; // [rsp+80h] [rbp-88h]
  __int64 v55; // [rsp+88h] [rbp-80h]
  __int64 ThreadWin32Thread; // [rsp+90h] [rbp-78h]
  _QWORD v57[3]; // [rsp+98h] [rbp-70h] BYREF
  _QWORD v58[3]; // [rsp+B0h] [rbp-58h] BYREF
  _BYTE v59[512]; // [rsp+C8h] [rbp-40h] BYREF

  v2 = a2;
  SmartObjStackRefBase<tagMENU>::Init(v49, 0LL);
  v50 = 0LL;
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v4);
  v54 = 0LL;
  if ( (gdwPUDFlags & 0x20000) == 0 )
  {
    v5 = gpdwCPUserPreferencesMask;
    if ( ((unsigned int)gpdwCPUserPreferencesMask & 0x80000020) == 0x80000000
      && (GetAppCompatFlags2(0x400u, (__int64)gpdwCPUserPreferencesMask) & 2) == 0 )
    {
      NonChildAncestor = GetNonChildAncestor(a1);
      v7 = (struct tagWND *)NonChildAncestor;
      if ( NonChildAncestor )
      {
        if ( (*(_BYTE *)(*(_QWORD *)(NonChildAncestor + 40) + 16LL) & 1) != 0 )
        {
          v9 = *(_QWORD *)(NonChildAncestor + 144);
          v50 = 0LL;
          SmartObjStackRefBase<tagMENU>::operator=(v49, v9);
          if ( !SmartObjStackRef<tagMENU>::operator==((__int64)v49) )
          {
            v10 = ((unsigned int)gpdwCPUserPreferencesMask & 0x80020000) == 0x80020000
               && (*(_DWORD *)((*v49[0])[5] + 40) & 1) == 0;
            v11 = *(_DWORD *)((*v49[0])[5] + 40);
            if ( v2 )
            {
              if ( (v11 & 4) != 0 )
                return SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v49, (__int64)v5);
              v12 = *(_QWORD *)(gpsi + 4752LL);
              *(_DWORD *)((*v49[0])[5] + 40) |= 4u;
            }
            else
            {
              if ( (v11 & 4) == 0 )
                return SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v49, (__int64)v5);
              if ( *(_QWORD *)((*v49[0])[5] + 24) )
              {
                v12 = *(_QWORD *)((*v49[0])[5] + 24);
              }
              else if ( v10 )
              {
                v12 = *(_QWORD *)(gpsi + 4936LL);
              }
              else
              {
                v12 = *(_QWORD *)(gpsi + 4728LL);
              }
              *(_DWORD *)((*v49[0])[5] + 40) &= ~4u;
            }
            v52 = v12;
            v13 = (*v49[0])[11];
            DCEx = _GetDCEx(v7, 0LL, 65539LL);
            v15 = v50;
            v16 = (HDC)DCEx;
            if ( !v50 )
              v15 = (__int64)*v49[0];
            ThreadLockMenuNoModify(v15, v58);
            LODWORD(v51) = 0;
            if ( *(_DWORD *)((*v49[0])[5] + 44) )
            {
              do
              {
                v19 = v50;
                if ( !v50 )
                  v19 = (__int64)*v49[0];
                if ( (unsigned int)MNGetpItemIndex(v19, v13) == -1 )
                  break;
                v21 = v50;
                if ( !v50 )
                  v21 = (__int64)*v49[0];
                v24 = MNIsOwnerDrawItem(v21, (_DWORD **)v13, v18, v20);
                v55 = *(_QWORD *)(v13 + 88);
                v53 = *(_QWORD *)(v13 + 24);
                if ( v53 || v24 )
                {
                  if ( v24 )
                  {
                    GetDPIMETRICS(v7);
                    GreSelectFont(v16);
                    v25 = 0;
                    v26 = 0;
                  }
                  else
                  {
                    GetDPIMetrics(v23, v22);
                    GreSelectFont(v16);
                    v25 = *(_DWORD *)(*(_QWORD *)v13 + 68LL);
                    v26 = *(_DWORD *)(*(_QWORD *)v13 + 64LL);
                  }
                  GreSetViewportOrg(v16, v26, v25);
                  if ( v2 && (*(_DWORD *)(*(_QWORD *)v13 + 4LL) & 0x100) != 0 )
                    v27 = *(_QWORD *)(gpsi + 4904LL);
                  else
                    v27 = v12;
                  GreSelectBrush(v16, v27);
                  if ( v24 )
                  {
                    xxxSendMenuDrawItemMessage((__int64)v16, 1, v49, (__int64 *)v13, 0, 0, 0LL);
                  }
                  else
                  {
                    DPIMetrics = (_DWORD *)GetDPIMetrics(v29, v28);
                    v31 = DPIMetrics[5];
                    if ( *(_DWORD *)(*(_QWORD *)v13 + 76LL) - DPIMetrics[3] - v31 != 1 )
                      v31 += (unsigned int)(*(_DWORD *)(*(_QWORD *)v13 + 76LL) - DPIMetrics[3] - v31 - 1) >> 1;
                    v32 = DPIMetrics[2];
                    if ( (**(_DWORD **)v13 & 0x2000) != 0 )
                    {
                      xxxPSMGetTextExtent(v16);
                      v33 = v50;
                      if ( !v50 )
                        v33 = (__int64)*v49[0];
                      if ( (unsigned int)MNGetpItemIndex(v33, v13) == -1 || v55 != *(_QWORD *)(v13 + 88) )
                        break;
                      v34 = *(_DWORD *)(*(_QWORD *)v13 + 72LL);
                      DpiForSystem = GetDpiForSystem();
                      v32 = v34 - *((__int16 *)GetOemBitmapInfoForDpi(63LL, DpiForSystem) + 2) - v54 + v32 - 2;
                    }
                    if ( (unsigned int)CALL_LPK(ThreadWin32Thread) )
                    {
                      if ( a2 )
                      {
                        v36 = *(_DWORD *)(gpsi + 4596LL);
                      }
                      else if ( v10 )
                      {
                        v36 = *(_DWORD *)(gpsi + 4688LL);
                      }
                      else
                      {
                        v36 = *(_DWORD *)(gpsi + 4584LL);
                      }
                      v37 = GreSetTextColor(v16, v36);
                      xxxPSMTextOut(v16, *(_DWORD *)(*(_QWORD *)v13 + 48LL), 0x200000);
                      v38 = v50;
                      if ( !v50 )
                        v38 = (__int64)*v49[0];
                      if ( (unsigned int)MNGetpItemIndex(v38, v13) == -1 || v55 != *(_QWORD *)(v13 + 88) )
                        break;
                      GreSetTextColor(v16, v37);
                    }
                    else
                    {
                      v39 = *(_DWORD **)v13;
                      v40 = *(_DWORD *)(*(_QWORD *)v13 + 48LL);
                      if ( v40 < 0xFF )
                      {
                        v42 = v59;
                      }
                      else
                      {
                        v41 = Win32AllocPool(2LL * (v40 + 1), 1953657685LL);
                        v42 = (_BYTE *)v41;
                        if ( !v41 )
                          break;
                        PushW32ThreadLock(v41, v57, (__int64)Win32FreePool);
                        v39 = *(_DWORD **)v13;
                      }
                      PrefixCount = GetPrefixCount(v53, (unsigned int)v39[12], v42, (unsigned int)v39[12]);
                      xxxDrawItemUnderline(v49, v13, v16, v32, v31, v42, PrefixCount);
                      if ( v42 != v59 )
                        PopAndFreeAlwaysW32ThreadLock((__int64)v57);
                    }
                    v2 = a2;
                  }
                }
                v44 = v50;
                v45 = v51 + 1;
                LODWORD(v51) = v51 + 1;
                if ( !v50 )
                  v44 = (__int64)*v49[0];
                v46 = MNGetpItemFromIndex(v44, v45);
                v12 = v52;
                v13 = v46;
              }
              while ( (unsigned int)v17 < *(_DWORD *)((*v49[0])[5] + 44) );
            }
            v47 = *(_QWORD *)(v58[1] + 40LL);
            *(_DWORD *)(v47 + 40) &= ~0x200u;
            ThreadUnlock1(v47, v17, v18);
            _ReleaseDC(v16);
          }
        }
      }
    }
  }
  return SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v49, (__int64)v5);
}
