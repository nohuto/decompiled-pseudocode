/*
 * XREFs of xxxDrawMenuBarUnderlines @ 0x1C000A004
 * Callers:
 *     xxxRealDefWindowProc @ 0x1C0066C18 (xxxRealDefWindowProc.c)
 *     xxxEndMenuLoop @ 0x1C02088E0 (xxxEndMenuLoop.c)
 * Callees:
 *     GetNonChildAncestor @ 0x1C000CE08 (GetNonChildAncestor.c)
 *     ??1?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ @ 0x1C0022768 (--1-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ.c)
 *     PopAndFreeAlwaysW32ThreadLock @ 0x1C0023060 (PopAndFreeAlwaysW32ThreadLock.c)
 *     GetDpiForSystem @ 0x1C002657C (GetDpiForSystem.c)
 *     GreSelectFont @ 0x1C0056790 (GreSelectFont.c)
 *     W32GetThreadWin32Thread @ 0x1C0065998 (W32GetThreadWin32Thread.c)
 *     ??8?$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z @ 0x1C0069C30 (--8-$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z.c)
 *     MNGetpItemIndex @ 0x1C006AA14 (MNGetpItemIndex.c)
 *     MNIsOwnerDrawItem @ 0x1C006BA64 (MNIsOwnerDrawItem.c)
 *     GreSetTextColor @ 0x1C006DDEC (GreSetTextColor.c)
 *     ThreadLockMenuNoModify @ 0x1C00A6E2C (ThreadLockMenuNoModify.c)
 *     ?GetDPIMETRICS@@YAPEBUtagDPIMETRICS@@PEAUtagWND@@@Z @ 0x1C00A707C (-GetDPIMETRICS@@YAPEBUtagDPIMETRICS@@PEAUtagWND@@@Z.c)
 *     GreSetViewportOrg @ 0x1C00A7138 (GreSetViewportOrg.c)
 *     ?xxxSendMenuDrawItemMessage@@YAXPEAUHDC__@@IAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@HHPEAUtagWND@@@Z @ 0x1C00AACC4 (-xxxSendMenuDrawItemMessage@@YAXPEAUHDC__@@IAEBV-$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@HHPE.c)
 *     MNGetpItemFromIndex @ 0x1C00AB734 (MNGetpItemFromIndex.c)
 *     GetDPIMetrics @ 0x1C00AB99C (GetDPIMetrics.c)
 *     GetAppCompatFlags2 @ 0x1C00AC380 (GetAppCompatFlags2.c)
 *     PushW32ThreadLock @ 0x1C00AF710 (PushW32ThreadLock.c)
 *     ?Init@?$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z @ 0x1C00FBDF8 (-Init@-$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z.c)
 *     ??4?$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z @ 0x1C00FE500 (--4-$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z.c)
 *     GetOemBitmapInfoForDpi @ 0x1C0106800 (GetOemBitmapInfoForDpi.c)
 *     CALL_LPK @ 0x1C0151E74 (CALL_LPK.c)
 *     __security_check_cookie @ 0x1C015AF60 (__security_check_cookie.c)
 *     ?xxxDrawItemUnderline@@YAXAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@PEAUHDC__@@HHPEAGJ@Z @ 0x1C0231004 (-xxxDrawItemUnderline@@YAXAEBV-$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@PEAUHDC__@@HHPEAGJ@Z.c)
 *     xxxPSMTextOut @ 0x1C023A0D8 (xxxPSMTextOut.c)
 *     GetPrefixCount @ 0x1C0242610 (GetPrefixCount.c)
 *     xxxPSMGetTextExtent @ 0x1C02440EC (xxxPSMGetTextExtent.c)
 */

__int64 __fastcall xxxDrawMenuBarUnderlines(__int64 a1, int a2)
{
  int v2; // r12d
  __int64 NonChildAncestor; // rax
  struct tagWND *v5; // r13
  BOOL v7; // r14d
  int v8; // ecx
  __int64 v9; // r15
  __int64 v10; // rdi
  __int64 DCEx; // rax
  __int64 v12; // rcx
  HDC v13; // rsi
  __int64 v14; // rcx
  __int64 v15; // rcx
  int v16; // ebx
  const struct tagDPIMETRICS *DPIMETRICS; // rax
  __int64 v18; // rdx
  _DWORD *v19; // rax
  int v20; // r15d
  unsigned int v21; // r12d
  __int64 v22; // rcx
  int v23; // ebx
  unsigned int DpiForSystem; // eax
  __int64 v25; // rcx
  __int64 v26; // rax
  unsigned int v27; // ecx
  __int64 v28; // rax
  _BYTE *v29; // rbx
  unsigned __int16 PrefixCount; // ax
  __int64 v31; // rax
  unsigned int v32; // edx
  _QWORD v34[2]; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v35; // [rsp+60h] [rbp-A8h]
  __int64 v36; // [rsp+68h] [rbp-A0h]
  __int64 v37; // [rsp+70h] [rbp-98h]
  PCWSTR SourceString; // [rsp+78h] [rbp-90h]
  __int64 v39; // [rsp+80h] [rbp-88h]
  __int64 v40; // [rsp+88h] [rbp-80h]
  __int64 ThreadWin32Thread; // [rsp+90h] [rbp-78h]
  _BYTE v42[24]; // [rsp+98h] [rbp-70h] BYREF
  _BYTE v43[8]; // [rsp+B0h] [rbp-58h] BYREF
  __int64 v44; // [rsp+B8h] [rbp-50h]
  _BYTE v45[512]; // [rsp+C8h] [rbp-40h] BYREF

  v2 = a2;
  SmartObjStackRefBase<tagMENU>::Init(v34, 0LL);
  v35 = 0LL;
  ThreadWin32Thread = W32GetThreadWin32Thread(KeGetCurrentThread());
  v39 = 0LL;
  if ( (gdwPUDFlags & 0x20000) == 0
    && ((unsigned int)gpdwCPUserPreferencesMask & 0x80000020) == 0x80000000
    && (GetAppCompatFlags2(1024LL) & 2) == 0 )
  {
    NonChildAncestor = GetNonChildAncestor(a1);
    v5 = (struct tagWND *)NonChildAncestor;
    if ( NonChildAncestor )
    {
      if ( (*(_BYTE *)(*(_QWORD *)(NonChildAncestor + 40) + 16LL) & 1) != 0 )
      {
        v35 = 0LL;
        SmartObjStackRefBase<tagMENU>::operator=(v34);
        if ( !(unsigned __int8)SmartObjStackRef<tagMENU>::operator==(v34) )
        {
          v7 = ((unsigned int)gpdwCPUserPreferencesMask & 0x80020000) == 0x80020000
            && (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)v34[0] + 40LL) + 40LL) & 1) == 0;
          v8 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v34[0] + 40LL) + 40LL);
          if ( v2 )
          {
            if ( (v8 & 4) != 0 )
              return SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v34);
            v9 = *(_QWORD *)(gpsi + 4752LL);
            *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v34[0] + 40LL) + 40LL) |= 4u;
          }
          else
          {
            if ( (v8 & 4) == 0 )
              return SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v34);
            if ( *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v34[0] + 40LL) + 24LL) )
            {
              v9 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v34[0] + 40LL) + 24LL);
            }
            else if ( v7 )
            {
              v9 = *(_QWORD *)(gpsi + 4936LL);
            }
            else
            {
              v9 = *(_QWORD *)(gpsi + 4728LL);
            }
            *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v34[0] + 40LL) + 40LL) &= ~4u;
          }
          v37 = v9;
          v10 = *(_QWORD *)(*(_QWORD *)v34[0] + 88LL);
          DCEx = _GetDCEx(v5, 0LL, 65539LL);
          v12 = v35;
          v13 = (HDC)DCEx;
          if ( !v35 )
            v12 = *(_QWORD *)v34[0];
          ThreadLockMenuNoModify(v12, v43);
          LODWORD(v36) = 0;
          if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v34[0] + 40LL) + 44LL) )
          {
            do
            {
              v14 = v35;
              if ( !v35 )
                v14 = *(_QWORD *)v34[0];
              if ( (unsigned int)MNGetpItemIndex(v14, v10) == -1 )
                break;
              v15 = v35;
              if ( !v35 )
                v15 = *(_QWORD *)v34[0];
              v16 = MNIsOwnerDrawItem(v15, v10);
              v40 = *(_QWORD *)(v10 + 88);
              SourceString = *(PCWSTR *)(v10 + 24);
              if ( SourceString || v16 )
              {
                if ( v16 )
                  DPIMETRICS = GetDPIMETRICS(v5);
                else
                  DPIMETRICS = (const struct tagDPIMETRICS *)GetDPIMetrics();
                GreSelectFont(v13, *(_QWORD *)DPIMETRICS);
                GreSetViewportOrg(v13);
                if ( v2 && (*(_DWORD *)(*(_QWORD *)v10 + 4LL) & 0x100) != 0 )
                  v18 = *(_QWORD *)(gpsi + 4904LL);
                else
                  v18 = v9;
                GreSelectBrush(v13, v18);
                if ( v16 )
                {
                  xxxSendMenuDrawItemMessage((_DWORD)v13, 1, (unsigned int)v34, v10, 0, 0, 0LL);
                }
                else
                {
                  v19 = (_DWORD *)GetDPIMetrics();
                  v20 = v19[5];
                  if ( *(_DWORD *)(*(_QWORD *)v10 + 76LL) - v19[3] - v20 != 1 )
                    v20 += (unsigned int)(*(_DWORD *)(*(_QWORD *)v10 + 76LL) - v19[3] - v20 - 1) >> 1;
                  v21 = v19[2];
                  if ( (**(_DWORD **)v10 & 0x2000) != 0 )
                  {
                    xxxPSMGetTextExtent(v13);
                    v22 = v35;
                    if ( !v35 )
                      v22 = *(_QWORD *)v34[0];
                    if ( (unsigned int)MNGetpItemIndex(v22, v10) == -1 || v40 != *(_QWORD *)(v10 + 88) )
                      break;
                    v23 = *(_DWORD *)(*(_QWORD *)v10 + 72LL);
                    DpiForSystem = GetDpiForSystem();
                    v21 = v23 - *(__int16 *)(GetOemBitmapInfoForDpi(63LL, DpiForSystem) + 4) - v39 + v21 - 2;
                  }
                  if ( (unsigned int)CALL_LPK(ThreadWin32Thread) )
                  {
                    GreSetTextColor(v13);
                    xxxPSMTextOut(v13, v21, v20, SourceString, *(_DWORD *)(*(_QWORD *)v10 + 48LL), 0x200000);
                    v25 = v35;
                    if ( !v35 )
                      v25 = *(_QWORD *)v34[0];
                    if ( (unsigned int)MNGetpItemIndex(v25, v10) == -1 || v40 != *(_QWORD *)(v10 + 88) )
                      break;
                    GreSetTextColor(v13);
                  }
                  else
                  {
                    v26 = *(_QWORD *)v10;
                    v27 = *(_DWORD *)(*(_QWORD *)v10 + 48LL);
                    if ( v27 < 0xFF )
                    {
                      v29 = v45;
                    }
                    else
                    {
                      v28 = Win32AllocPool(2LL * (v27 + 1), 1953657685LL);
                      v29 = (_BYTE *)v28;
                      if ( !v28 )
                        break;
                      PushW32ThreadLock(v28, v42, Win32FreePool);
                      v26 = *(_QWORD *)v10;
                    }
                    PrefixCount = GetPrefixCount(
                                    SourceString,
                                    *(unsigned int *)(v26 + 48),
                                    v29,
                                    *(unsigned int *)(v26 + 48));
                    xxxDrawItemUnderline(v34, v10, v13, v21, v20, v29, PrefixCount);
                    if ( v29 != v45 )
                      PopAndFreeAlwaysW32ThreadLock(v42);
                  }
                  v2 = a2;
                }
              }
              LODWORD(v36) = v36 + 1;
              v31 = MNGetpItemFromIndex();
              v9 = v37;
              v10 = v31;
            }
            while ( v32 < *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v34[0] + 40LL) + 44LL) );
          }
          *(_DWORD *)(*(_QWORD *)(v44 + 40) + 40LL) &= ~0x200u;
          ThreadUnlock1();
          _ReleaseDC(v13);
        }
      }
    }
  }
  return SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v34);
}
