/*
 * XREFs of xxxMNCancel @ 0x1C020B900
 * Callers:
 *     xxxEndMenuLoop @ 0x1C02088E0 (xxxEndMenuLoop.c)
 *     xxxHandleMenuMessages @ 0x1C0208A7C (xxxHandleMenuMessages.c)
 *     ?xxxMNDismissWithNotify@@YAXPEAUtagMENUSTATE@@AEBV?$SmartObjStackRef@UtagPOPUPMENU@@@@PEAUtagITEM@@I_J@Z @ 0x1C020A770 (-xxxMNDismissWithNotify@@YAXPEAUtagMENUSTATE@@AEBV-$SmartObjStackRef@UtagPOPUPMENU@@@@PEAUtagITE.c)
 *     xxxMNButtonUp @ 0x1C020B7E8 (xxxMNButtonUp.c)
 *     xxxMNChar @ 0x1C020BCC8 (xxxMNChar.c)
 *     xxxMNKeyDown @ 0x1C020CD34 (xxxMNKeyDown.c)
 *     xxxMenuWindowProc @ 0x1C020F6B0 (xxxMenuWindowProc.c)
 *     xxxEndMenu @ 0x1C022EED4 (xxxEndMenu.c)
 *     xxxMNKeyFilter @ 0x1C0230040 (xxxMNKeyFilter.c)
 * Callees:
 *     xxxWindowEvent @ 0x1C0018330 (xxxWindowEvent.c)
 *     xxxDestroyWindow @ 0x1C001BB70 (xxxDestroyWindow.c)
 *     ??1?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ @ 0x1C0022768 (--1-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ.c)
 *     xxxSendMessage @ 0x1C002CE20 (xxxSendMessage.c)
 *     xxxSendTransformableMessageTimeout @ 0x1C002CE60 (xxxSendTransformableMessageTimeout.c)
 *     W32GetThreadWin32Thread @ 0x1C0065998 (W32GetThreadWin32Thread.c)
 *     _PostTransformableMessage @ 0x1C00D03E8 (_PostTransformableMessage.c)
 *     ?Init@?$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z @ 0x1C00FBDF8 (-Init@-$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z.c)
 *     ?Init@?$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z @ 0x1C0102A84 (-Init@-$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z.c)
 *     xxxPlayEventSound @ 0x1C011E550 (xxxPlayEventSound.c)
 *     xxxMNCloseHierarchy @ 0x1C020C100 (xxxMNCloseHierarchy.c)
 *     xxxMNReleaseCapture @ 0x1C020E8B0 (xxxMNReleaseCapture.c)
 *     xxxMNSelectItem @ 0x1C020E8F4 (xxxMNSelectItem.c)
 *     xxxSendMenuSelect @ 0x1C0233710 (xxxSendMenuSelect.c)
 */

_QWORD *__fastcall xxxMNCancel(__int64 a1, unsigned int a2, unsigned int a3, __int64 a4)
{
  unsigned __int64 v5; // r13
  __int64 v7; // rdx
  int v8; // r15d
  int v9; // r12d
  int v10; // eax
  __int64 v11; // rbx
  __int64 ThreadWin32Thread; // rax
  __int64 v13; // rax
  ULONG_PTR v14; // rbx
  __int64 v15; // rdx
  __int64 v16; // rax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // rdx
  int v20; // r14d
  __int64 v21; // rdx
  __int64 v22; // rdx
  __int64 v23; // r8
  __int64 v24; // r9
  bool v25; // zf
  __int64 v26; // rdx
  __int64 v27; // rcx
  _QWORD v29[2]; // [rsp+50h] [rbp-39h] BYREF
  int v30; // [rsp+60h] [rbp-29h]
  int v31; // [rsp+64h] [rbp-25h]
  _QWORD v32[3]; // [rsp+68h] [rbp-21h] BYREF
  _QWORD v33[3]; // [rsp+80h] [rbp-9h] BYREF
  _QWORD v34[9]; // [rsp+98h] [rbp+Fh] BYREF
  int v35; // [rsp+F0h] [rbp+67h]

  v5 = a3;
  SmartObjStackRefBase<tagPOPUPMENU>::Init(v29, *(_QWORD *)a1);
  v31 = **(_DWORD **)v29[0];
  v8 = (**(_DWORD **)v29[0] >> 3) & 1;
  v9 = (**(_DWORD **)v29[0] >> 2) & 1;
  v35 = **(_DWORD **)v29[0] & 1;
  v10 = **(_DWORD **)v29[0];
  *(_DWORD *)(a1 + 8) &= 0xFFFFFFF3;
  v30 = v10 & 0x800;
  **(_DWORD **)v29[0] |= 0x8000u;
  if ( gptiCurrent == *(_QWORD *)(a1 + 32) )
  {
    v7 = 0x80000LL;
    if ( (**(_DWORD **)v29[0] & 0x80000) == 0 )
    {
      **(_DWORD **)v29[0] |= 0x80000u;
      v11 = *(_QWORD *)(*(_QWORD *)v29[0] + 16LL);
      ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), 0x80000LL);
      v33[0] = *(_QWORD *)(ThreadWin32Thread + 416);
      *(_QWORD *)(ThreadWin32Thread + 416) = v33;
      v33[1] = v11;
      if ( v11 )
        _InterlockedIncrement((volatile signed __int32 *)(v11 + 8));
      xxxMNCloseHierarchy(*(_QWORD *)v29[0], a1);
      xxxMNSelectItem(v29, a1);
      v13 = v29[0];
      *(_DWORD *)(a1 + 8) &= ~1u;
      v14 = *(_QWORD *)(*(_QWORD *)v13 + 8LL);
      v16 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v15);
      v34[0] = *(_QWORD *)(v16 + 416);
      *(_QWORD *)(v16 + 416) = v34;
      v34[1] = v14;
      if ( v14 )
        _InterlockedIncrement((volatile signed __int32 *)(v14 + 8));
      xxxMNReleaseCapture(a1);
      if ( v8 )
      {
        if ( (*(_DWORD *)(a1 + 8) & 0x100) == 0 )
        {
          if ( gpqForeground )
          {
            v19 = *(_QWORD *)(gpqForeground + 112LL);
            if ( v19 )
            {
              if ( gpqForeground == *(_QWORD *)(gptiCurrent + 432LL) )
                xxxWindowEvent(0x80000005, v19, 0, 1, 0x21u);
            }
          }
        }
        xxxWindowEvent(7u, *(_QWORD *)(*(_QWORD *)v29[0] + 16LL), -4, 0, 0);
        v18 = *(_QWORD *)v29[0];
        if ( *(_QWORD *)(*(_QWORD *)v29[0] + 16LL) )
          xxxDestroyWindow(*(volatile signed __int32 **)(*(_QWORD *)v29[0] + 16LL));
      }
      if ( v14 )
      {
        SmartObjStackRefBase<tagMENU>::Init(v32, 0LL);
        v20 = -1;
        v32[2] = -1LL;
        xxxSendMenuSelect(v14, 0, (unsigned int)v32, -1, a1);
        SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v32, v21);
        if ( !v8 && (*(_DWORD *)(a1 + 8) & 0x100) == 0 )
        {
          if ( gpqForeground )
          {
            v22 = *(_QWORD *)(gpqForeground + 112LL);
            if ( v22 )
            {
              if ( gpqForeground == *(_QWORD *)(gptiCurrent + 432LL) )
                xxxWindowEvent(0x80000005, v22, 0, 1, 0x21u);
            }
          }
        }
        if ( !v9 )
          v20 = v35 != 0 ? 0xFFFFFFFD : 0;
        xxxWindowEvent(5u, v14, v20, 0, 0);
        if ( !v30 )
          xxxSendMessage(v14);
        if ( a2 )
        {
          xxxPlayEventSound(6LL, v17, v23, v24);
          v25 = (v31 & 0x100) == 0;
          *(_DWORD *)(a1 + 24) = v5;
          if ( v25 )
          {
            if ( v9 || !v8 || (*(_BYTE *)(*(_QWORD *)(v14 + 40) + 21LL) & 1) != 0 )
            {
              PostTransformableMessage(v14, a2, v5, a4, 1);
            }
            else if ( a2 >= 0x111 && (a2 <= 0x112 || a2 == 294) )
            {
              _InterlockedIncrement(&glSendMessage);
              xxxSendTransformableMessageTimeout((__int64 *)v14, a2, v5, a4, 0, 0, 0LL, 1, 1);
            }
          }
        }
        else
        {
          *(_DWORD *)(a1 + 24) = 0;
        }
      }
      ThreadUnlock1(v18, v17);
      ThreadUnlock1(v27, v26);
    }
  }
  return SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v29, v7);
}
