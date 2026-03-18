/*
 * XREFs of xxxMNCancel @ 0x1C0223434
 * Callers:
 *     xxxEndMenuLoop @ 0x1C0220290 (xxxEndMenuLoop.c)
 *     xxxHandleMenuMessages @ 0x1C0220464 (xxxHandleMenuMessages.c)
 *     ?xxxMNDismissWithNotify@@YAXPEAUtagMENUSTATE@@AEBV?$SmartObjStackRef@UtagPOPUPMENU@@@@PEAUtagITEM@@I_J@Z @ 0x1C0222274 (-xxxMNDismissWithNotify@@YAXPEAUtagMENUSTATE@@AEBV-$SmartObjStackRef@UtagPOPUPMENU@@@@PEAUtagITE.c)
 *     xxxMNButtonUp @ 0x1C022331C (xxxMNButtonUp.c)
 *     xxxMNChar @ 0x1C0223788 (xxxMNChar.c)
 *     xxxMNKeyDown @ 0x1C02248B0 (xxxMNKeyDown.c)
 *     xxxMenuWindowProc @ 0x1C0227440 (xxxMenuWindowProc.c)
 *     xxxEndMenu @ 0x1C024773C (xxxEndMenu.c)
 *     xxxMNKeyFilter @ 0x1C0248C4C (xxxMNKeyFilter.c)
 * Callees:
 *     ??1?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ @ 0x1C0021844 (--1-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ.c)
 *     W32GetThreadWin32Thread @ 0x1C0062084 (W32GetThreadWin32Thread.c)
 *     _PostTransformableMessage @ 0x1C0087904 (_PostTransformableMessage.c)
 *     xxxDestroyWindow @ 0x1C0094E90 (xxxDestroyWindow.c)
 *     xxxSendMessage @ 0x1C009BAB0 (xxxSendMessage.c)
 *     xxxSendTransformableMessageTimeout @ 0x1C009F9F0 (xxxSendTransformableMessageTimeout.c)
 *     xxxWindowEvent @ 0x1C00AC2F0 (xxxWindowEvent.c)
 *     ?Init@?$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z @ 0x1C0106608 (-Init@-$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z.c)
 *     ?Init@?$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z @ 0x1C011022C (-Init@-$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z.c)
 *     xxxPlayEventSound @ 0x1C0128710 (xxxPlayEventSound.c)
 *     xxxMNCloseHierarchy @ 0x1C0223C00 (xxxMNCloseHierarchy.c)
 *     xxxMNReleaseCapture @ 0x1C02264E4 (xxxMNReleaseCapture.c)
 *     xxxMNSelectItem @ 0x1C0226564 (xxxMNSelectItem.c)
 *     xxxSendMenuSelect @ 0x1C024C394 (xxxSendMenuSelect.c)
 */

_QWORD *__fastcall xxxMNCancel(__int64 a1, unsigned int a2, unsigned int a3, struct _LARGE_STRING *a4)
{
  unsigned __int64 v5; // r13
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9
  int v10; // r15d
  int v11; // r12d
  int v12; // eax
  __int64 v13; // rbx
  __int64 ThreadWin32Thread; // rax
  __int64 v15; // rax
  ULONG_PTR v16; // rbx
  __int64 v17; // rdx
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v20; // rax
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  unsigned int v24; // r14d
  __int64 v25; // rdx
  __int64 v26; // r8
  __int64 v27; // r9
  bool v28; // zf
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // r8
  _QWORD v33[2]; // [rsp+50h] [rbp-39h] BYREF
  int v34; // [rsp+60h] [rbp-29h]
  int v35; // [rsp+64h] [rbp-25h]
  __int64 v36; // [rsp+68h] [rbp-21h] BYREF
  __int64 v37; // [rsp+70h] [rbp-19h]
  __int64 v38; // [rsp+78h] [rbp-11h]
  __int64 v39; // [rsp+80h] [rbp-9h] BYREF
  ULONG_PTR v40; // [rsp+88h] [rbp-1h]
  __int64 v41; // [rsp+90h] [rbp+7h]
  _QWORD v42[9]; // [rsp+98h] [rbp+Fh] BYREF
  int v43; // [rsp+F0h] [rbp+67h]

  v5 = a3;
  SmartObjStackRefBase<tagPOPUPMENU>::Init(v33, *(_QWORD *)a1);
  v35 = **(_DWORD **)v33[0];
  v10 = (**(_DWORD **)v33[0] >> 3) & 1;
  v11 = (**(_DWORD **)v33[0] >> 2) & 1;
  v43 = **(_DWORD **)v33[0] & 1;
  v12 = **(_DWORD **)v33[0];
  *(_DWORD *)(a1 + 8) &= 0xFFFFFFF3;
  v34 = v12 & 0x800;
  v39 = 0LL;
  v40 = 0LL;
  v41 = 0LL;
  v36 = 0LL;
  v37 = 0LL;
  v38 = 0LL;
  **(_DWORD **)v33[0] |= 0x8000u;
  if ( gptiCurrent == *(_QWORD *)(a1 + 32) )
  {
    v7 = 0x80000LL;
    if ( (**(_DWORD **)v33[0] & 0x80000) == 0 )
    {
      **(_DWORD **)v33[0] |= 0x80000u;
      v13 = *(_QWORD *)(*(_QWORD *)v33[0] + 16LL);
      ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), 0x80000LL, v8, v9);
      v36 = *(_QWORD *)(ThreadWin32Thread + 408);
      *(_QWORD *)(ThreadWin32Thread + 408) = &v36;
      v37 = v13;
      if ( v13 )
        HMLockObject(v13);
      xxxMNCloseHierarchy(*(_QWORD *)v33[0], a1);
      xxxMNSelectItem(v33, a1);
      v15 = v33[0];
      *(_DWORD *)(a1 + 8) &= ~1u;
      v16 = *(_QWORD *)(*(_QWORD *)v15 + 8LL);
      v20 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v17, v18, v19);
      v39 = *(_QWORD *)(v20 + 408);
      *(_QWORD *)(v20 + 408) = &v39;
      v40 = v16;
      if ( v16 )
        HMLockObject(v16);
      xxxMNReleaseCapture(a1);
      if ( v10 )
      {
        xxxWindowEvent(7u, *(struct tagWND **)(*(_QWORD *)v33[0] + 16LL), 4294967292LL, 0LL, 0);
        v22 = *(_QWORD *)v33[0];
        if ( *(_QWORD *)(*(_QWORD *)v33[0] + 16LL) )
          xxxDestroyWindow(*(__int64 **)(*(_QWORD *)v33[0] + 16LL));
      }
      if ( v16 )
      {
        SmartObjStackRefBase<tagMENU>::Init(v42, 0LL);
        v24 = -1;
        v42[2] = -1LL;
        xxxSendMenuSelect(v16, 0, (unsigned int)v42, -1, a1);
        SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v42, v25, v26, v27);
        if ( !v11 )
          v24 = v43 != 0 ? 0xFFFFFFFD : 0;
        xxxWindowEvent(5u, (struct tagWND *)v16, v24, 0LL, 0);
        if ( !v34 )
          xxxSendMessage(v16);
        if ( a2 )
        {
          xxxPlayEventSound(6LL);
          v28 = (v35 & 0x100) == 0;
          *(_DWORD *)(a1 + 24) = v5;
          if ( v28 )
          {
            if ( v11 || !v10 || (*(_BYTE *)(*(_QWORD *)(v16 + 40) + 21LL) & 1) != 0 )
            {
              PostTransformableMessage((struct tagWND *)v16, a2, v5, (__int64)a4, 1);
            }
            else if ( a2 >= 0x111 && (a2 <= 0x112 || a2 == 294) )
            {
              _InterlockedIncrement(&glSendMessage);
              xxxSendTransformableMessageTimeout((__int64 *)v16, a2, (HWND)v5, a4, 0, 0, 0LL, 1u, 1);
            }
          }
        }
        else
        {
          *(_DWORD *)(a1 + 24) = 0;
        }
      }
      ThreadUnlock1(v22, v21, v23);
      ThreadUnlock1(v30, v29, v31);
    }
  }
  return SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v33, v7, v8, v9);
}
