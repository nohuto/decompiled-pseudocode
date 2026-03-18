/*
 * XREFs of ?xxxPointerActivateInternal@@YAXPEAUtagWND@@F_KPEBUtagPOINTEREVENTINT@@H@Z @ 0x1C01F2740
 * Callers:
 *     EditionPointerActivate @ 0x1C01F2EA0 (EditionPointerActivate.c)
 * Callees:
 *     ?IsIndependentInputWindow@@YAHPEBUtagWND@@@Z @ 0x1C000B76C (-IsIndependentInputWindow@@YAHPEBUtagWND@@@Z.c)
 *     IsMessageOnlyWindow @ 0x1C000B7B0 (IsMessageOnlyWindow.c)
 *     PostEventMessageEx @ 0x1C002BAE0 (PostEventMessageEx.c)
 *     ??1?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ @ 0x1C0038E70 (--1-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ.c)
 *     ?IsCompositeAppOrSelfDisabled@CoreWindowProp@@SAHPEBUtagWND@@@Z @ 0x1C006A350 (-IsCompositeAppOrSelfDisabled@CoreWindowProp@@SAHPEBUtagWND@@@Z.c)
 *     _GetTopLevelWindow @ 0x1C006A460 (_GetTopLevelWindow.c)
 *     _GetDesktopWindow @ 0x1C006C4B0 (_GetDesktopWindow.c)
 *     W32GetThreadWin32Thread @ 0x1C00AC2AC (W32GetThreadWin32Thread.c)
 *     PhysicalToLogicalDPIPointWithHitTest @ 0x1C00CBA28 (PhysicalToLogicalDPIPointWithHitTest.c)
 *     ?Init@?$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z @ 0x1C00EB5EC (-Init@-$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z.c)
 *     ?xxxActivateWindowWithOptions@@YA_NPEAUtagWND@@W4ActivateWindowKind@@W4ComputeWindowToActivateStrategy@@W4WindowActivateReason@@@Z @ 0x1C0133A90 (-xxxActivateWindowWithOptions@@YA_NPEAUtagWND@@W4ActivateWindowKind@@W4ComputeWindowToActivateSt.c)
 *     ?GetCompositionInputWindowUIOwner@@YAPEAUtagWND@@PEBU1@@Z @ 0x1C01D5F78 (-GetCompositionInputWindowUIOwner@@YAPEAUtagWND@@PEBU1@@Z.c)
 *     PhysicalToLogicalInPlacePointWithParent @ 0x1C01E7120 (PhysicalToLogicalInPlacePointWithParent.c)
 *     xxxSendPointerMessageWorker @ 0x1C01F1A28 (xxxSendPointerMessageWorker.c)
 *     ?xxxQueryLegacyActivation@@YA_JPEAUtagWND@@0FPEBUtagPOINTEREVENTINT@@@Z @ 0x1C01F2A5C (-xxxQueryLegacyActivation@@YA_JPEAUtagWND@@0FPEBUtagPOINTEREVENTINT@@@Z.c)
 *     IsModalMenuStarted @ 0x1C01F2FD4 (IsModalMenuStarted.c)
 *     xxxMNDismissIfOffMenu @ 0x1C0223A90 (xxxMNDismissIfOffMenu.c)
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
  __int64 *TopLevelWindow; // r14
  __int64 ThreadWin32Thread; // rax
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // rdx
  __int64 *v17; // rax
  __int64 v18; // rdx
  struct tagWND *CompositionInputWindowUIOwner; // rax
  __int64 v20; // rbx
  int v21; // eax
  __int64 v22; // rax
  __int64 v23; // rdx
  __int64 v24; // r8
  __int64 v25; // r9
  __int64 v26; // rbx
  unsigned int v27; // edi
  __int64 v28; // rax
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // r8
  __int64 v32; // rdx
  __int64 v33; // r8
  __int64 LegacyActivation; // rax
  _QWORD v35[2]; // [rsp+40h] [rbp-40h] BYREF
  __int64 v36; // [rsp+50h] [rbp-30h] BYREF
  __int64 *v37; // [rsp+58h] [rbp-28h]
  __int64 v38; // [rsp+60h] [rbp-20h]
  __int64 v39; // [rsp+68h] [rbp-18h] BYREF
  __int64 v40; // [rsp+70h] [rbp-10h]
  __int64 v41; // [rsp+78h] [rbp-8h]
  unsigned __int64 v44; // [rsp+D8h] [rbp+58h] BYREF

  v5 = a3;
  v6 = a2;
  v36 = 0LL;
  v37 = 0LL;
  v38 = 0LL;
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
          ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v10, v11);
          v36 = *(_QWORD *)(ThreadWin32Thread + 408);
          *(_QWORD *)(ThreadWin32Thread + 408) = &v36;
          v37 = TopLevelWindow;
          HMLockObject(TopLevelWindow);
          v16 = *(_QWORD *)(v9 + 112);
          if ( v16 && (unsigned int)IsModalMenuStarted(*(_QWORD *)(v16 + 16)) )
          {
            v39 = 0LL;
            v40 = 0LL;
            v41 = 0LL;
            v44 = *((_QWORD *)a4 + 5);
            v17 = *(__int64 **)(v16 + 600);
            if ( v17 )
              v18 = *v17;
            else
              v18 = 0LL;
            SmartObjStackRefBase<tagPOPUPMENU>::Init(v35, v18);
            v25 = *(_QWORD *)(v9 + 112);
            if ( (*(_DWORD *)(*(_QWORD *)(v25 + 40) + 288LL) & 0xF) == 2 )
            {
              if ( *(_QWORD *)v35[0]
                && *(_QWORD *)(*(_QWORD *)v35[0] + 16LL)
                && (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)v35[0] + 16LL) + 40LL) + 288LL) & 0xF) != 2
                && *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v35[0] + 16LL) + 216LL) )
              {
                PhysicalToLogicalInPlacePointWithParent(*(struct tagWND **)(*(_QWORD *)v35[0] + 16LL), (int *)&v44, 0LL);
              }
            }
            else
            {
              PhysicalToLogicalDPIPointWithHitTest(&v44, &v44, 0LL, v25);
            }
            v26 = *(_QWORD *)(v9 + 112);
            v27 = (unsigned __int16)v44 | (WORD2(v44) << 16);
            v28 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v23, v24);
            v39 = *(_QWORD *)(v28 + 408);
            *(_QWORD *)(v28 + 408) = &v39;
            v40 = v26;
            HMLockObject(v26);
            xxxMNDismissIfOffMenu(*(_QWORD *)(v9 + 112), v27);
            ThreadUnlock1(v30, v29, v31);
            SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v35, v32, v33);
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
          ThreadUnlock1(v14, v16, v15);
        }
      }
    }
    return;
  }
  v8 = 0;
  if ( !(unsigned int)IsIndependentInputWindow(a1) )
    goto LABEL_3;
  CompositionInputWindowUIOwner = GetCompositionInputWindowUIOwner(a1);
  v20 = (__int64)CompositionInputWindowUIOwner;
  if ( CompositionInputWindowUIOwner )
  {
    LOBYTE(v21) = IsMessageOnlyWindow((__int64)CompositionInputWindowUIOwner);
    if ( !v21 )
    {
      v22 = GetTopLevelWindow(v20);
      PostEventMessageEx(
        *(struct tagTHREADINFO **)(v22 + 16),
        *(_QWORD *)(*(_QWORD *)(v22 + 16) + 424LL),
        6u,
        0LL,
        0,
        0LL,
        *(_QWORD *)v22,
        0LL);
    }
  }
}
