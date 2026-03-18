/*
 * XREFs of xxxMNCancel @ 0x1C0222EF4
 * Callers:
 *     xxxEndMenuLoop @ 0x1C021FD50 (xxxEndMenuLoop.c)
 *     xxxHandleMenuMessages @ 0x1C021FF24 (xxxHandleMenuMessages.c)
 *     ?xxxMNDismissWithNotify@@YAXPEAUtagMENUSTATE@@AEBV?$SmartObjStackRef@UtagPOPUPMENU@@@@PEAUtagITEM@@I_J@Z @ 0x1C0221D34 (-xxxMNDismissWithNotify@@YAXPEAUtagMENUSTATE@@AEBV-$SmartObjStackRef@UtagPOPUPMENU@@@@PEAUtagITE.c)
 *     xxxMNButtonUp @ 0x1C0222DDC (xxxMNButtonUp.c)
 *     xxxMNChar @ 0x1C0223248 (xxxMNChar.c)
 *     xxxMNKeyDown @ 0x1C0224370 (xxxMNKeyDown.c)
 *     xxxMenuWindowProc @ 0x1C0226F00 (xxxMenuWindowProc.c)
 *     xxxEndMenu @ 0x1C0246FFC (xxxEndMenu.c)
 *     xxxMNKeyFilter @ 0x1C024850C (xxxMNKeyFilter.c)
 * Callees:
 *     _PostTransformableMessage @ 0x1C0012284 (_PostTransformableMessage.c)
 *     xxxDestroyWindow @ 0x1C0035BC0 (xxxDestroyWindow.c)
 *     ??1?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ @ 0x1C0038E70 (--1-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ.c)
 *     xxxSendMessage @ 0x1C003C880 (xxxSendMessage.c)
 *     xxxSendTransformableMessageTimeout @ 0x1C00407C0 (xxxSendTransformableMessageTimeout.c)
 *     xxxWindowEvent @ 0x1C004D110 (xxxWindowEvent.c)
 *     W32GetThreadWin32Thread @ 0x1C00AC2AC (W32GetThreadWin32Thread.c)
 *     ?Init@?$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z @ 0x1C00E0868 (-Init@-$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z.c)
 *     ?Init@?$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z @ 0x1C00EB5EC (-Init@-$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z.c)
 *     xxxPlayEventSound @ 0x1C01037C0 (xxxPlayEventSound.c)
 *     xxxMNCloseHierarchy @ 0x1C02236C0 (xxxMNCloseHierarchy.c)
 *     xxxMNReleaseCapture @ 0x1C0225FA4 (xxxMNReleaseCapture.c)
 *     xxxMNSelectItem @ 0x1C0226024 (xxxMNSelectItem.c)
 *     xxxSendMenuSelect @ 0x1C024BC54 (xxxSendMenuSelect.c)
 */

_QWORD *__fastcall xxxMNCancel(__int64 a1, unsigned int a2, unsigned int a3, struct _LARGE_STRING *a4)
{
  unsigned __int64 v5; // r13
  __int64 v7; // rdx
  __int64 v8; // r8
  int v9; // r15d
  int v10; // r12d
  int v11; // eax
  __int64 v12; // rbx
  __int64 ThreadWin32Thread; // rax
  __int64 v14; // rax
  ULONG_PTR v15; // rbx
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v18; // rax
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  unsigned int v22; // r14d
  __int64 v23; // rdx
  __int64 v24; // r8
  bool v25; // zf
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  _QWORD v30[2]; // [rsp+50h] [rbp-39h] BYREF
  int v31; // [rsp+60h] [rbp-29h]
  int v32; // [rsp+64h] [rbp-25h]
  __int64 v33; // [rsp+68h] [rbp-21h] BYREF
  __int64 v34; // [rsp+70h] [rbp-19h]
  __int64 v35; // [rsp+78h] [rbp-11h]
  __int64 v36; // [rsp+80h] [rbp-9h] BYREF
  ULONG_PTR v37; // [rsp+88h] [rbp-1h]
  __int64 v38; // [rsp+90h] [rbp+7h]
  _QWORD v39[9]; // [rsp+98h] [rbp+Fh] BYREF
  int v40; // [rsp+F0h] [rbp+67h]

  v5 = a3;
  SmartObjStackRefBase<tagPOPUPMENU>::Init(v30, *(_QWORD *)a1);
  v32 = **(_DWORD **)v30[0];
  v9 = (**(_DWORD **)v30[0] >> 3) & 1;
  v10 = (**(_DWORD **)v30[0] >> 2) & 1;
  v40 = **(_DWORD **)v30[0] & 1;
  v11 = **(_DWORD **)v30[0];
  *(_DWORD *)(a1 + 8) &= 0xFFFFFFF3;
  v31 = v11 & 0x800;
  v36 = 0LL;
  v37 = 0LL;
  v38 = 0LL;
  v33 = 0LL;
  v34 = 0LL;
  v35 = 0LL;
  **(_DWORD **)v30[0] |= 0x8000u;
  if ( gptiCurrent == *(_QWORD *)(a1 + 32) )
  {
    v7 = 0x80000LL;
    if ( (**(_DWORD **)v30[0] & 0x80000) == 0 )
    {
      **(_DWORD **)v30[0] |= 0x80000u;
      v12 = *(_QWORD *)(*(_QWORD *)v30[0] + 16LL);
      ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), 0x80000LL, v8);
      v33 = *(_QWORD *)(ThreadWin32Thread + 408);
      *(_QWORD *)(ThreadWin32Thread + 408) = &v33;
      v34 = v12;
      if ( v12 )
        HMLockObject(v12);
      xxxMNCloseHierarchy(*(_QWORD *)v30[0], a1);
      xxxMNSelectItem(v30, a1);
      v14 = v30[0];
      *(_DWORD *)(a1 + 8) &= ~1u;
      v15 = *(_QWORD *)(*(_QWORD *)v14 + 8LL);
      v18 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v16, v17);
      v36 = *(_QWORD *)(v18 + 408);
      *(_QWORD *)(v18 + 408) = &v36;
      v37 = v15;
      if ( v15 )
        HMLockObject(v15);
      xxxMNReleaseCapture(a1);
      if ( v9 )
      {
        xxxWindowEvent(7u, *(struct tagWND **)(*(_QWORD *)v30[0] + 16LL), 4294967292LL, 0, 0);
        v20 = *(_QWORD *)v30[0];
        if ( *(_QWORD *)(*(_QWORD *)v30[0] + 16LL) )
          xxxDestroyWindow(*(__int64 **)(*(_QWORD *)v30[0] + 16LL));
      }
      if ( v15 )
      {
        SmartObjStackRefBase<tagMENU>::Init(v39, 0LL);
        v22 = -1;
        v39[2] = -1LL;
        xxxSendMenuSelect(v15, 0, (unsigned int)v39, -1, a1);
        SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v39, v23, v24);
        if ( !v10 )
          v22 = v40 != 0 ? 0xFFFFFFFD : 0;
        xxxWindowEvent(5u, (struct tagWND *)v15, v22, 0, 0);
        if ( !v31 )
          xxxSendMessage(v15);
        if ( a2 )
        {
          xxxPlayEventSound(6LL);
          v25 = (v32 & 0x100) == 0;
          *(_DWORD *)(a1 + 24) = v5;
          if ( v25 )
          {
            if ( v10 || !v9 || (*(_BYTE *)(*(_QWORD *)(v15 + 40) + 21LL) & 1) != 0 )
            {
              PostTransformableMessage((struct tagWND *)v15, a2, v5, (__int64)a4, 1);
            }
            else if ( a2 >= 0x111 && (a2 <= 0x112 || a2 == 294) )
            {
              _InterlockedIncrement(&glSendMessage);
              xxxSendTransformableMessageTimeout((__int64 *)v15, a2, v5, a4, 0, 0, 0LL, 1u, 1);
            }
          }
        }
        else
        {
          *(_DWORD *)(a1 + 24) = 0;
        }
      }
      ThreadUnlock1(v20, v19, v21);
      ThreadUnlock1(v27, v26, v28);
    }
  }
  return SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v30, v7, v8);
}
