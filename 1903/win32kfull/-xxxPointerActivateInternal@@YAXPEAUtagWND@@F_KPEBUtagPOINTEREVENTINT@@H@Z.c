/*
 * XREFs of ?xxxPointerActivateInternal@@YAXPEAUtagWND@@F_KPEBUtagPOINTEREVENTINT@@H@Z @ 0x1C01F28C0
 * Callers:
 *     EditionPointerActivate @ 0x1C01F3020 (EditionPointerActivate.c)
 * Callees:
 *     ?IsIndependentInputWindow@@YAHPEBUtagWND@@@Z @ 0x1C0010BDC (-IsIndependentInputWindow@@YAHPEBUtagWND@@@Z.c)
 *     IsMessageOnlyWindow @ 0x1C0010C20 (IsMessageOnlyWindow.c)
 *     ?xxxActivateWindowWithOptions@@YA_NPEAUtagWND@@W4ActivateWindowKind@@W4ComputeWindowToActivateStrategy@@W4WindowActivateReason@@@Z @ 0x1C00182B4 (-xxxActivateWindowWithOptions@@YA_NPEAUtagWND@@W4ActivateWindowKind@@W4ComputeWindowToActivateSt.c)
 *     ??1?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ @ 0x1C0021844 (--1-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ.c)
 *     PostEventMessageEx @ 0x1C0025670 (PostEventMessageEx.c)
 *     W32GetThreadWin32Thread @ 0x1C0062084 (W32GetThreadWin32Thread.c)
 *     ?IsCompositeAppOrSelfDisabled@CoreWindowProp@@SAHPEBUtagWND@@@Z @ 0x1C00C8C80 (-IsCompositeAppOrSelfDisabled@CoreWindowProp@@SAHPEBUtagWND@@@Z.c)
 *     _GetTopLevelWindow @ 0x1C00C8D90 (_GetTopLevelWindow.c)
 *     _GetDesktopWindow @ 0x1C00CADE0 (_GetDesktopWindow.c)
 *     PhysicalToLogicalDPIPointWithHitTest @ 0x1C00ECE48 (PhysicalToLogicalDPIPointWithHitTest.c)
 *     ?Init@?$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z @ 0x1C011022C (-Init@-$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z.c)
 *     ?GetCompositionInputWindowUIOwner@@YAPEAUtagWND@@PEBU1@@Z @ 0x1C01D6108 (-GetCompositionInputWindowUIOwner@@YAPEAUtagWND@@PEBU1@@Z.c)
 *     PhysicalToLogicalInPlacePointWithParent @ 0x1C01E72A0 (PhysicalToLogicalInPlacePointWithParent.c)
 *     xxxSendPointerMessageWorker @ 0x1C01F1BA8 (xxxSendPointerMessageWorker.c)
 *     ?xxxQueryLegacyActivation@@YA_JPEAUtagWND@@0FPEBUtagPOINTEREVENTINT@@@Z @ 0x1C01F2BDC (-xxxQueryLegacyActivation@@YA_JPEAUtagWND@@0FPEBUtagPOINTEREVENTINT@@@Z.c)
 *     IsModalMenuStarted @ 0x1C01F3154 (IsModalMenuStarted.c)
 *     xxxMNDismissIfOffMenu @ 0x1C0223FD0 (xxxMNDismissIfOffMenu.c)
 */

void __fastcall xxxPointerActivateInternal(
        struct tagWND *a1,
        __int16 a2,
        __int64 a3,
        const struct tagPOINTEREVENTINT *a4)
{
  __int64 v5; // rdi
  __int16 v6; // bx
  char v8; // r12
  __int64 v9; // r15
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 *TopLevelWindow; // r14
  __int64 ThreadWin32Thread; // rax
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // rdx
  __int64 *v18; // rax
  __int64 v19; // rdx
  struct tagWND *CompositionInputWindowUIOwner; // rax
  __int64 v21; // rbx
  int v22; // eax
  __int64 v23; // rax
  __int64 v24; // rdx
  __int64 v25; // r8
  __int64 v26; // r9
  __int64 v27; // rbx
  unsigned int v28; // edi
  __int64 v29; // rax
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // r8
  __int64 v33; // rdx
  __int64 v34; // r8
  __int64 v35; // r9
  __int64 LegacyActivation; // rax
  _QWORD v37[2]; // [rsp+40h] [rbp-40h] BYREF
  __int64 v38; // [rsp+50h] [rbp-30h] BYREF
  __int64 *v39; // [rsp+58h] [rbp-28h]
  __int64 v40; // [rsp+60h] [rbp-20h]
  __int64 v41; // [rsp+68h] [rbp-18h] BYREF
  __int64 v42; // [rsp+70h] [rbp-10h]
  __int64 v43; // [rsp+78h] [rbp-8h]
  unsigned __int64 v46; // [rsp+D8h] [rbp+58h] BYREF

  v5 = a3;
  v6 = a2;
  v38 = 0LL;
  v39 = 0LL;
  v40 = 0LL;
  if ( *((_DWORD *)a4 + 44) )
  {
    v8 = 1;
LABEL_3:
    v9 = *(_QWORD *)(*((_QWORD *)a1 + 2) + 424LL);
    if ( a1 != (struct tagWND *)GetDesktopWindow((__int64)a1)
      && !(unsigned int)CoreWindowProp::IsCompositeAppOrSelfDisabled(a1) )
    {
      TopLevelWindow = (__int64 *)GetTopLevelWindow((__int64)a1);
      if ( TopLevelWindow )
      {
        if ( a1 != *(struct tagWND **)(v9 + 128) )
        {
          ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v10, v11, v12);
          v38 = *(_QWORD *)(ThreadWin32Thread + 408);
          *(_QWORD *)(ThreadWin32Thread + 408) = &v38;
          v39 = TopLevelWindow;
          HMLockObject(TopLevelWindow);
          v17 = *(_QWORD *)(v9 + 112);
          if ( v17 && (unsigned int)IsModalMenuStarted(*(_QWORD *)(v17 + 16)) )
          {
            v41 = 0LL;
            v42 = 0LL;
            v43 = 0LL;
            v46 = *((_QWORD *)a4 + 5);
            v18 = *(__int64 **)(v17 + 600);
            if ( v18 )
              v19 = *v18;
            else
              v19 = 0LL;
            SmartObjStackRefBase<tagPOPUPMENU>::Init(v37, v19);
            v26 = *(_QWORD *)(v9 + 112);
            if ( (*(_DWORD *)(*(_QWORD *)(v26 + 40) + 288LL) & 0xF) == 2 )
            {
              if ( *(_QWORD *)v37[0]
                && *(_QWORD *)(*(_QWORD *)v37[0] + 16LL)
                && (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)v37[0] + 16LL) + 40LL) + 288LL) & 0xF) != 2
                && *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v37[0] + 16LL) + 216LL) )
              {
                PhysicalToLogicalInPlacePointWithParent(*(struct tagWND **)(*(_QWORD *)v37[0] + 16LL), (int *)&v46, 0LL);
              }
            }
            else
            {
              PhysicalToLogicalDPIPointWithHitTest(&v46, &v46, 0LL, v26);
            }
            v27 = *(_QWORD *)(v9 + 112);
            v28 = (unsigned __int16)v46 | (WORD2(v46) << 16);
            v29 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v24, v25, v26);
            v41 = *(_QWORD *)(v29 + 408);
            *(_QWORD *)(v29 + 408) = &v41;
            v42 = v27;
            HMLockObject(v27);
            xxxMNDismissIfOffMenu(*(_QWORD *)(v9 + 112), v28);
            ThreadUnlock1(v31, v30, v32);
            SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v37, v33, v34, v35);
            v6 = a2;
            v5 = a3;
          }
          if ( !v8 )
          {
            LegacyActivation = xxxSendPointerMessageWorker((__int64)a1, 587LL, v5, *TopLevelWindow, 0LL, 177);
            if ( LegacyActivation == 1 )
              goto LABEL_29;
            if ( LegacyActivation != 3 )
              LegacyActivation = xxxQueryLegacyActivation((ULONG_PTR)a1, (struct tagWND *)TopLevelWindow, v6, a4);
            if ( LegacyActivation == 1 )
LABEL_29:
              xxxActivateWindowWithOptions((__int64)TopLevelWindow, 3LL, 49LL, 1);
          }
          ThreadUnlock1(v15, v17, v16);
        }
      }
    }
    return;
  }
  v8 = 0;
  if ( !(unsigned int)IsIndependentInputWindow(a1) )
    goto LABEL_3;
  CompositionInputWindowUIOwner = GetCompositionInputWindowUIOwner(a1);
  v21 = (__int64)CompositionInputWindowUIOwner;
  if ( CompositionInputWindowUIOwner )
  {
    LOBYTE(v22) = IsMessageOnlyWindow((__int64)CompositionInputWindowUIOwner);
    if ( !v22 )
    {
      v23 = GetTopLevelWindow(v21);
      PostEventMessageEx(
        *(struct tagTHREADINFO **)(v23 + 16),
        *(_QWORD *)(*(_QWORD *)(v23 + 16) + 424LL),
        6u,
        0LL,
        0,
        0LL,
        *(_QWORD *)v23,
        0LL);
    }
  }
}
