/*
 * XREFs of ?xxxPointerActivateInternal@@YAXPEAUtagWND@@F_KPEBUtagPOINTEREVENTINT@@H@Z @ 0x1C01DCC74
 * Callers:
 *     EditionPointerActivate @ 0x1C01DD410 (EditionPointerActivate.c)
 * Callees:
 *     IsMessageOnlyWindow @ 0x1C0009DE0 (IsMessageOnlyWindow.c)
 *     ??1?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ @ 0x1C0022768 (--1-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ.c)
 *     ?IsCompositeAppOrSelfDisabled@CoreWindowProp@@SAHPEBUtagWND@@@Z @ 0x1C002E5D4 (-IsCompositeAppOrSelfDisabled@CoreWindowProp@@SAHPEBUtagWND@@@Z.c)
 *     _GetDesktopWindow @ 0x1C0043A0C (_GetDesktopWindow.c)
 *     W32GetThreadWin32Thread @ 0x1C0065998 (W32GetThreadWin32Thread.c)
 *     _GetTopLevelWindow @ 0x1C0071310 (_GetTopLevelWindow.c)
 *     ?IsIndependentInputWindow@@YAHPEBUtagWND@@@Z @ 0x1C0072608 (-IsIndependentInputWindow@@YAHPEBUtagWND@@@Z.c)
 *     PostEventMessageEx @ 0x1C00D4C3C (PostEventMessageEx.c)
 *     ?xxxActivateWindowWithOptions@@YA_NPEAUtagWND@@W4ActivateWindowKind@@W4ComputeWindowToActivateStrategy@@W4WindowActivateReason@@@Z @ 0x1C00D83CC (-xxxActivateWindowWithOptions@@YA_NPEAUtagWND@@W4ActivateWindowKind@@W4ComputeWindowToActivateSt.c)
 *     ?Init@?$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z @ 0x1C0102A84 (-Init@-$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z.c)
 *     PhysicalToLogicalDPIPointWithHitTest @ 0x1C011E6C8 (PhysicalToLogicalDPIPointWithHitTest.c)
 *     ?GetCompositionInputWindowUIOwner@@YAPEAUtagWND@@PEBU1@@Z @ 0x1C01C2E20 (-GetCompositionInputWindowUIOwner@@YAPEAUtagWND@@PEBU1@@Z.c)
 *     PhysicalToLogicalInPlacePointWithParent @ 0x1C01D26B8 (PhysicalToLogicalInPlacePointWithParent.c)
 *     xxxSendPointerMessageWorker @ 0x1C01DBF34 (xxxSendPointerMessageWorker.c)
 *     ?xxxQueryLegacyActivation@@YA_JPEAUtagWND@@0FPEBUtagPOINTEREVENTINT@@@Z @ 0x1C01DCF38 (-xxxQueryLegacyActivation@@YA_JPEAUtagWND@@0FPEBUtagPOINTEREVENTINT@@@Z.c)
 *     IsModalMenuStarted @ 0x1C01DD534 (IsModalMenuStarted.c)
 *     xxxMNDismissIfOffMenu @ 0x1C020C4CC (xxxMNDismissIfOffMenu.c)
 */

void __fastcall xxxPointerActivateInternal(
        struct tagWND *a1,
        __int16 a2,
        __int64 a3,
        const struct tagPOINTEREVENTINT *a4)
{
  struct tagWND *CompositionInputWindowUIOwner; // rax
  __int64 v8; // rbx
  int v9; // eax
  __int64 TopLevelWindow; // rax
  __int64 v11; // r15
  __int64 v12; // rdx
  __int64 v13; // r14
  __int64 ThreadWin32Thread; // rax
  __int64 v15; // rdx
  __int64 v16; // rdx
  __int64 *v17; // rax
  __int64 v18; // rdx
  __int64 v19; // rdx
  __int64 v20; // r9
  __int64 v21; // rbx
  unsigned int v22; // edi
  __int64 v23; // rax
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // rdx
  __int64 LegacyActivation; // rax
  __int64 v28; // rdx
  __int64 v29; // rcx
  unsigned __int64 v30; // [rsp+48h] [rbp-21h] BYREF
  _QWORD v31[2]; // [rsp+50h] [rbp-19h] BYREF
  _QWORD v32[3]; // [rsp+60h] [rbp-9h] BYREF
  _QWORD v33[4]; // [rsp+78h] [rbp+Fh] BYREF

  if ( (unsigned int)IsIndependentInputWindow(a1) )
  {
    CompositionInputWindowUIOwner = GetCompositionInputWindowUIOwner(a1);
    v8 = (__int64)CompositionInputWindowUIOwner;
    if ( CompositionInputWindowUIOwner )
    {
      LOBYTE(v9) = IsMessageOnlyWindow((__int64)CompositionInputWindowUIOwner);
      if ( !v9 )
      {
        TopLevelWindow = GetTopLevelWindow(v8);
        PostEventMessageEx(
          *(struct tagTHREADINFO **)(TopLevelWindow + 16),
          *(_QWORD *)(*(_QWORD *)(TopLevelWindow + 16) + 432LL),
          6u,
          0LL,
          0,
          0LL,
          *(LARGE_INTEGER *)TopLevelWindow,
          0LL);
      }
    }
  }
  else
  {
    v11 = *(_QWORD *)(*((_QWORD *)a1 + 2) + 432LL);
    if ( a1 != (struct tagWND *)GetDesktopWindow((__int64)a1)
      && !(unsigned int)CoreWindowProp::IsCompositeAppOrSelfDisabled(a1) )
    {
      v13 = GetTopLevelWindow((__int64)a1);
      if ( v13 )
      {
        if ( a1 != *(struct tagWND **)(v11 + 120) )
        {
          ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v12);
          v32[0] = *(_QWORD *)(ThreadWin32Thread + 416);
          *(_QWORD *)(ThreadWin32Thread + 416) = v32;
          v32[1] = v13;
          _InterlockedIncrement((volatile signed __int32 *)(v13 + 8));
          v15 = *(_QWORD *)(v11 + 104);
          if ( v15 && (unsigned int)IsModalMenuStarted(*(_QWORD *)(v15 + 16)) )
          {
            v30 = *((_QWORD *)a4 + 5);
            v17 = *(__int64 **)(v16 + 608);
            if ( v17 )
              v18 = *v17;
            else
              v18 = 0LL;
            SmartObjStackRefBase<tagPOPUPMENU>::Init(v31, v18);
            v20 = *(_QWORD *)(v11 + 104);
            if ( (*(_DWORD *)(*(_QWORD *)(v20 + 40) + 288LL) & 0xF) == 2 )
            {
              if ( *(_QWORD *)v31[0]
                && *(_QWORD *)(*(_QWORD *)v31[0] + 16LL)
                && (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)v31[0] + 16LL) + 40LL) + 288LL) & 0xF) != 2
                && *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v31[0] + 16LL) + 200LL) )
              {
                PhysicalToLogicalInPlacePointWithParent(*(struct tagWND **)(*(_QWORD *)v31[0] + 16LL), (int *)&v30, 0LL);
              }
            }
            else
            {
              PhysicalToLogicalDPIPointWithHitTest(&v30, &v30, 0LL, v20);
            }
            v21 = *(_QWORD *)(v11 + 104);
            v22 = (unsigned __int16)v30 | (WORD2(v30) << 16);
            v23 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v19);
            v33[0] = *(_QWORD *)(v23 + 416);
            *(_QWORD *)(v23 + 416) = v33;
            v33[1] = v21;
            _InterlockedIncrement((volatile signed __int32 *)(v21 + 8));
            xxxMNDismissIfOffMenu(*(_QWORD *)(v11 + 104), v22);
            ThreadUnlock1(v25, v24);
            SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v31, v26);
          }
          LegacyActivation = xxxSendPointerMessageWorker((__int64)a1, 587LL, a3, *(_QWORD *)v13, 0LL, 177);
          if ( LegacyActivation == 1 )
            goto LABEL_26;
          if ( LegacyActivation != 3 )
            LegacyActivation = xxxQueryLegacyActivation((ULONG_PTR)a1, (struct tagWND *)v13, a2, a4);
          if ( LegacyActivation == 1 )
LABEL_26:
            xxxActivateWindowWithOptions(v13, 3LL, 49LL, 1);
          ThreadUnlock1(v29, v28);
        }
      }
    }
  }
}
