/*
 * XREFs of xxxMNCancel @ 0x1C01E59BC
 * Callers:
 *     xxxEndMenuLoop @ 0x1C01E2A70 (xxxEndMenuLoop.c)
 *     xxxHandleMenuMessages @ 0x1C01E2BFC (xxxHandleMenuMessages.c)
 *     ?xxxMNDismissWithNotify@@YAXPEAUtagMENUSTATE@@AEBV?$SmartObjStackRef@UtagPOPUPMENU@@@@PEAUtagITEM@@I_J@Z @ 0x1C01E4874 (-xxxMNDismissWithNotify@@YAXPEAUtagMENUSTATE@@AEBV-$SmartObjStackRef@UtagPOPUPMENU@@@@PEAUtagITE.c)
 *     xxxMNButtonUp @ 0x1C01E58A4 (xxxMNButtonUp.c)
 *     xxxMNChar @ 0x1C01E5D78 (xxxMNChar.c)
 *     xxxMNKeyDown @ 0x1C01E6E10 (xxxMNKeyDown.c)
 *     xxxMenuWindowProc @ 0x1C01E96E0 (xxxMenuWindowProc.c)
 *     xxxEndMenu @ 0x1C0205D9C (xxxEndMenu.c)
 *     xxxMNKeyFilter @ 0x1C0206EB8 (xxxMNKeyFilter.c)
 * Callees:
 *     xxxWindowEvent @ 0x1C001E870 (xxxWindowEvent.c)
 *     ?Init@?$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z @ 0x1C0021B08 (-Init@-$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z.c)
 *     ??1?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ @ 0x1C0021BC8 (--1-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ.c)
 *     ?Init@?$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z @ 0x1C00263B8 (-Init@-$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z.c)
 *     W32GetThreadWin32Thread @ 0x1C0026450 (W32GetThreadWin32Thread.c)
 *     xxxSendMessage @ 0x1C003F318 (xxxSendMessage.c)
 *     xxxSendTransformableMessageTimeout @ 0x1C0042C60 (xxxSendTransformableMessageTimeout.c)
 *     _PostTransformableMessage @ 0x1C0061C04 (_PostTransformableMessage.c)
 *     xxxDestroyWindow @ 0x1C00711E0 (xxxDestroyWindow.c)
 *     xxxPlayEventSound @ 0x1C00FF4F0 (xxxPlayEventSound.c)
 *     xxxMNCloseHierarchy @ 0x1C01E61D0 (xxxMNCloseHierarchy.c)
 *     xxxMNReleaseCapture @ 0x1C01E8950 (xxxMNReleaseCapture.c)
 *     xxxMNSelectItem @ 0x1C01E8994 (xxxMNSelectItem.c)
 *     xxxSendMenuSelect @ 0x1C020A438 (xxxSendMenuSelect.c)
 */

_QWORD *__fastcall xxxMNCancel(__int64 a1, unsigned int a2, unsigned int a3, __int64 a4)
{
  __int64 v5; // r13
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
  __int64 v19; // r8
  __int64 v20; // rdx
  int v21; // r14d
  __int64 v22; // rdx
  __int64 v23; // rdx
  __int64 v24; // r9
  bool v25; // zf
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  _QWORD v30[2]; // [rsp+50h] [rbp-39h] BYREF
  int v31; // [rsp+60h] [rbp-29h]
  int v32; // [rsp+64h] [rbp-25h]
  _QWORD v33[3]; // [rsp+68h] [rbp-21h] BYREF
  _QWORD v34[3]; // [rsp+80h] [rbp-9h] BYREF
  _QWORD v35[9]; // [rsp+98h] [rbp+Fh] BYREF
  int v36; // [rsp+F0h] [rbp+67h]

  v5 = a3;
  SmartObjStackRefBase<tagPOPUPMENU>::Init(v30, *(_QWORD *)a1);
  v32 = **(_DWORD **)v30[0];
  v8 = (**(_DWORD **)v30[0] >> 3) & 1;
  v9 = (**(_DWORD **)v30[0] >> 2) & 1;
  v36 = **(_DWORD **)v30[0] & 1;
  v10 = **(_DWORD **)v30[0];
  *(_DWORD *)(a1 + 8) &= 0xFFFFFFF3;
  v31 = v10 & 0x800;
  **(_DWORD **)v30[0] |= 0x8000u;
  if ( gptiCurrent == *(_QWORD *)(a1 + 32) )
  {
    v7 = 0x80000LL;
    if ( (**(_DWORD **)v30[0] & 0x80000) == 0 )
    {
      **(_DWORD **)v30[0] |= 0x80000u;
      v11 = *(_QWORD *)(*(_QWORD *)v30[0] + 16LL);
      ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), 0x80000LL);
      v34[0] = *(_QWORD *)(ThreadWin32Thread + 408);
      *(_QWORD *)(ThreadWin32Thread + 408) = v34;
      v34[1] = v11;
      if ( v11 )
        _InterlockedIncrement((volatile signed __int32 *)(v11 + 8));
      xxxMNCloseHierarchy(*(_QWORD *)v30[0], a1);
      xxxMNSelectItem(v30, a1);
      v13 = v30[0];
      *(_DWORD *)(a1 + 8) &= ~1u;
      v14 = *(_QWORD *)(*(_QWORD *)v13 + 8LL);
      v16 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v15);
      v35[0] = *(_QWORD *)(v16 + 408);
      *(_QWORD *)(v16 + 408) = v35;
      v35[1] = v14;
      if ( v14 )
        _InterlockedIncrement((volatile signed __int32 *)(v14 + 8));
      xxxMNReleaseCapture(a1);
      if ( v8 )
      {
        if ( (*(_DWORD *)(a1 + 8) & 0x100) == 0 )
        {
          if ( gpqForeground )
          {
            v20 = *(_QWORD *)(gpqForeground + 112LL);
            if ( v20 )
            {
              if ( gpqForeground == *(_QWORD *)(gptiCurrent + 424LL) )
                xxxWindowEvent(0x80000005, v20, 0, 1, 33);
            }
          }
        }
        xxxWindowEvent(7u, *(_QWORD *)(*(_QWORD *)v30[0] + 16LL), -4, 0, 0);
        v18 = *(_QWORD *)v30[0];
        if ( *(_QWORD *)(*(_QWORD *)v30[0] + 16LL) )
          xxxDestroyWindow(*(_QWORD *)(*(_QWORD *)v30[0] + 16LL));
      }
      if ( v14 )
      {
        SmartObjStackRefBase<tagMENU>::Init(v33, 0LL);
        v21 = -1;
        v33[2] = -1LL;
        xxxSendMenuSelect(v14, 0, (unsigned int)v33, -1, a1);
        SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v33, v22);
        if ( !v8 && (*(_DWORD *)(a1 + 8) & 0x100) == 0 )
        {
          if ( gpqForeground )
          {
            v23 = *(_QWORD *)(gpqForeground + 112LL);
            if ( v23 )
            {
              if ( gpqForeground == *(_QWORD *)(gptiCurrent + 424LL) )
                xxxWindowEvent(0x80000005, v23, 0, 1, 33);
            }
          }
        }
        if ( !v9 )
          v21 = v36 != 0 ? 0xFFFFFFFD : 0;
        xxxWindowEvent(5u, v14, v21, 0, 0);
        if ( !v31 )
          xxxSendMessage(v14);
        if ( a2 )
        {
          xxxPlayEventSound(6LL, v17, v19, v24);
          v25 = (v32 & 0x100) == 0;
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
              xxxSendTransformableMessageTimeout((__int64 *)v14, a2, (HWND)v5, a4, 0, 0, 0LL, 1, 1);
            }
          }
        }
        else
        {
          *(_DWORD *)(a1 + 24) = 0;
        }
      }
      ThreadUnlock1(v18, v17, v19);
      ThreadUnlock1(v27, v26, v28);
    }
  }
  return SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v30, v7);
}
