/*
 * XREFs of ?xxxPointerActivateInternal@@YAXPEAUtagWND@@HF_KPEBUtagPOINTEREVENTINT@@H@Z @ 0x1C01B9F2C
 * Callers:
 *     EditionPointerActivate @ 0x1C01BA680 (EditionPointerActivate.c)
 * Callees:
 *     ?GetCompositionInputWindowUIOwner@@YAPEAUtagWND@@PEBU1@@Z @ 0x1C00052E4 (-GetCompositionInputWindowUIOwner@@YAPEAUtagWND@@PEBU1@@Z.c)
 *     PostEventMessageEx @ 0x1C001C3FC (PostEventMessageEx.c)
 *     ?Init@?$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z @ 0x1C0021B08 (-Init@-$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z.c)
 *     ??1?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ @ 0x1C0021BC8 (--1-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ.c)
 *     W32GetThreadWin32Thread @ 0x1C0026450 (W32GetThreadWin32Thread.c)
 *     _GetDesktopWindow @ 0x1C002E65C (_GetDesktopWindow.c)
 *     _GetTopLevelWindow @ 0x1C0030730 (_GetTopLevelWindow.c)
 *     xxxActivateWindow @ 0x1C006D170 (xxxActivateWindow.c)
 *     ?IsCompositeAppOrSelfDisabled@CoreWindowProp@@SAHPEBUtagWND@@@Z @ 0x1C00DAD58 (-IsCompositeAppOrSelfDisabled@CoreWindowProp@@SAHPEBUtagWND@@@Z.c)
 *     IsMessageOnlyWindow @ 0x1C00F1F50 (IsMessageOnlyWindow.c)
 *     PhysicalToLogicalDPIPointWithHitTest @ 0x1C00F9398 (PhysicalToLogicalDPIPointWithHitTest.c)
 *     PhysicalToLogicalInPlacePointWithParent @ 0x1C00F9564 (PhysicalToLogicalInPlacePointWithParent.c)
 *     xxxSendPointerMessageWorker @ 0x1C01B9284 (xxxSendPointerMessageWorker.c)
 *     ?xxxQueryLegacyActivation@@YA_JPEAUtagWND@@0FPEBUtagPOINTEREVENTINT@@@Z @ 0x1C01BA1F4 (-xxxQueryLegacyActivation@@YA_JPEAUtagWND@@0FPEBUtagPOINTEREVENTINT@@@Z.c)
 *     IsModalMenuStarted @ 0x1C01BA7A4 (IsModalMenuStarted.c)
 *     xxxMNDismissIfOffMenu @ 0x1C01E6574 (xxxMNDismissIfOffMenu.c)
 */

void __fastcall xxxPointerActivateInternal(
        struct tagWND *a1,
        int a2,
        __int16 a3,
        __int64 a4,
        const struct tagPOINTEREVENTINT *a5)
{
  int v7; // eax
  struct tagWND *CompositionInputWindowUIOwner; // rax
  __int64 v9; // rbx
  int v10; // eax
  __int64 v11; // rax
  __int64 v12; // r15
  __int64 v13; // rdx
  __int64 TopLevelWindow; // r14
  __int64 ThreadWin32Thread; // rax
  __int64 v16; // rdx
  __int64 v17; // rdx
  __int64 *v18; // rax
  __int64 v19; // rdx
  __int64 v20; // rdx
  __int64 v21; // r9
  __int64 v22; // rbx
  unsigned int v23; // edi
  __int64 v24; // rax
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // rdx
  __int64 LegacyActivation; // rax
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // r8
  unsigned __int64 v33; // [rsp+48h] [rbp-29h] BYREF
  _QWORD v34[2]; // [rsp+50h] [rbp-21h] BYREF
  _QWORD v35[3]; // [rsp+60h] [rbp-11h] BYREF
  _QWORD v36[4]; // [rsp+78h] [rbp+7h] BYREF

  if ( !a2 || (*(_BYTE *)(*((_QWORD *)a1 + 5) + 235LL) & 2) != 0 )
  {
    v12 = *(_QWORD *)(*((_QWORD *)a1 + 2) + 424LL);
    if ( a1 != (struct tagWND *)GetDesktopWindow((__int64)a1)
      && !(unsigned int)CoreWindowProp::IsCompositeAppOrSelfDisabled(a1) )
    {
      TopLevelWindow = GetTopLevelWindow((__int64)a1);
      if ( TopLevelWindow )
      {
        if ( a1 != *(struct tagWND **)(v12 + 120) )
        {
          ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v13);
          v35[0] = *(_QWORD *)(ThreadWin32Thread + 408);
          *(_QWORD *)(ThreadWin32Thread + 408) = v35;
          v35[1] = TopLevelWindow;
          _InterlockedIncrement((volatile signed __int32 *)(TopLevelWindow + 8));
          v16 = *(_QWORD *)(v12 + 104);
          if ( v16 && (unsigned int)IsModalMenuStarted(*(_QWORD *)(v16 + 16)) )
          {
            v33 = *((_QWORD *)a5 + 5);
            v18 = *(__int64 **)(v17 + 600);
            if ( v18 )
              v19 = *v18;
            else
              v19 = 0LL;
            SmartObjStackRefBase<tagPOPUPMENU>::Init(v34, v19);
            v21 = *(_QWORD *)(v12 + 104);
            if ( (*(_DWORD *)(*(_QWORD *)(v21 + 40) + 288LL) & 0xF) == 2 )
            {
              if ( *(_QWORD *)v34[0]
                && *(_QWORD *)(*(_QWORD *)v34[0] + 16LL)
                && (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)v34[0] + 16LL) + 40LL) + 288LL) & 0xF) != 2
                && *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v34[0] + 16LL) + 200LL) )
              {
                PhysicalToLogicalInPlacePointWithParent(*(struct tagWND **)(*(_QWORD *)v34[0] + 16LL), (int *)&v33, 0LL);
              }
            }
            else
            {
              PhysicalToLogicalDPIPointWithHitTest(&v33, &v33, 0LL, v21);
            }
            v22 = *(_QWORD *)(v12 + 104);
            v23 = (unsigned __int16)v33 | (WORD2(v33) << 16);
            v24 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v20);
            v36[0] = *(_QWORD *)(v24 + 408);
            *(_QWORD *)(v24 + 408) = v36;
            v36[1] = v22;
            _InterlockedIncrement((volatile signed __int32 *)(v22 + 8));
            xxxMNDismissIfOffMenu(*(_QWORD *)(v12 + 104), v23);
            ThreadUnlock1(v26, v25, v27);
            SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v34, v28);
          }
          LegacyActivation = xxxSendPointerMessageWorker((__int64)a1, 587LL, a4, *(_QWORD *)TopLevelWindow, 0LL, 177);
          if ( LegacyActivation == 1 )
            goto LABEL_28;
          if ( LegacyActivation != 3 )
            LegacyActivation = xxxQueryLegacyActivation((ULONG_PTR)a1, (struct tagWND *)TopLevelWindow, a3, a5);
          if ( LegacyActivation == 1 )
LABEL_28:
            xxxActivateWindow((struct tagWND *)TopLevelWindow, 2, v32);
          ThreadUnlock1(v31, v30, v32);
        }
      }
    }
  }
  else
  {
    LOBYTE(v7) = IsMessageOnlyWindow((__int64)a1);
    if ( v7 )
    {
      CompositionInputWindowUIOwner = GetCompositionInputWindowUIOwner(a1);
      v9 = (__int64)CompositionInputWindowUIOwner;
      if ( CompositionInputWindowUIOwner )
      {
        LOBYTE(v10) = IsMessageOnlyWindow((__int64)CompositionInputWindowUIOwner);
        if ( !v10 )
        {
          v11 = GetTopLevelWindow(v9);
          PostEventMessageEx(
            *(struct tagTHREADINFO **)(v11 + 16),
            *(_QWORD *)(*(_QWORD *)(v11 + 16) + 424LL),
            6u,
            0LL,
            0,
            0LL,
            *(_QWORD *)v11,
            0LL);
        }
      }
    }
  }
}
