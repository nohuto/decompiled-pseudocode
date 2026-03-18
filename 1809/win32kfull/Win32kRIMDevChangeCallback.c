/*
 * XREFs of Win32kRIMDevChangeCallback @ 0x1C01C0810
 * Callers:
 *     <none>
 * Callees:
 *     HMUnlockObject @ 0x1C00DF140 (HMUnlockObject.c)
 *     PostDeviceNotification @ 0x1C0103C0C (PostDeviceNotification.c)
 *     ?Instance@InteractiveControlManager@@SAPEAV1@XZ @ 0x1C0123AA0 (-Instance@InteractiveControlManager@@SAPEAV1@XZ.c)
 *     ?TraceLoggingRimHidDeviceArrivedEvent@@YAXGIIKKHPEAU_UNICODE_STRING@@0HHIIIKK@Z @ 0x1C01BA958 (-TraceLoggingRimHidDeviceArrivedEvent@@YAXGIIKKHPEAU_UNICODE_STRING@@0HHIIIKK@Z.c)
 *     ?TraceLoggingRimHidDeviceRemovedEvent@@YAXGIIKKHPEAU_UNICODE_STRING@@0HHIIIKK@Z @ 0x1C01BAB4C (-TraceLoggingRimHidDeviceRemovedEvent@@YAXGIIKKHPEAU_UNICODE_STRING@@0HHIIIKK@Z.c)
 *     RIMDevChangeDoUsermodeCallback @ 0x1C01C05BC (RIMDevChangeDoUsermodeCallback.c)
 *     IsPublicPointerDevice @ 0x1C01D9EF4 (IsPublicPointerDevice.c)
 *     UpdatePointerDeviceCount @ 0x1C01DA3A8 (UpdatePointerDeviceCount.c)
 *     UpdatePointerDeviceSystemMetrics @ 0x1C01DA3D0 (UpdatePointerDeviceSystemMetrics.c)
 *     ?InkProcessorOnInkDeviceAttached@@YAJPEAURawInputManagerDeviceObject@@@Z @ 0x1C01F8A0C (-InkProcessorOnInkDeviceAttached@@YAJPEAURawInputManagerDeviceObject@@@Z.c)
 *     ?InkProcessorOnInkDeviceClosed@@YAXPEAURawInputManagerDeviceObject@@@Z @ 0x1C01F8B0C (-InkProcessorOnInkDeviceClosed@@YAXPEAURawInputManagerDeviceObject@@@Z.c)
 *     ?InkProcessorOnInkDeviceOpened@@YAXPEAURawInputManagerDeviceObject@@@Z @ 0x1C01F8C4C (-InkProcessorOnInkDeviceOpened@@YAXPEAURawInputManagerDeviceObject@@@Z.c)
 *     ?InkProcessorOnInkDeviceRemoved@@YAXPEAURawInputManagerDeviceObject@@@Z @ 0x1C01F8CEC (-InkProcessorOnInkDeviceRemoved@@YAXPEAURawInputManagerDeviceObject@@@Z.c)
 *     ?OnDeviceAttach@InteractiveControlManager@@QEAAJPEAURawInputManagerDeviceObject@@@Z @ 0x1C0235C00 (-OnDeviceAttach@InteractiveControlManager@@QEAAJPEAURawInputManagerDeviceObject@@@Z.c)
 *     ?OnDeviceRemoval@InteractiveControlManager@@QEAAJPEAURawInputManagerDeviceObject@@@Z @ 0x1C0235F20 (-OnDeviceRemoval@InteractiveControlManager@@QEAAJPEAURawInputManagerDeviceObject@@@Z.c)
 */

void __fastcall Win32kRIMDevChangeCallback(__int64 a1, __int64 a2)
{
  __int64 v2; // r14
  unsigned int updated; // ebp
  int v4; // edi
  __int64 v6; // r13
  __int64 v7; // rdx
  int v8; // r9d
  __int64 v9; // rdi
  unsigned __int16 *v10; // rsi
  int v11; // eax
  InteractiveControlManager *v12; // rax
  __int64 v13; // r8
  __int64 v14; // r8
  __int64 v15; // r8
  __int64 v16; // rdx
  _QWORD *v17; // r15
  __int64 v18; // rax
  char v19; // r12
  int v20; // r13d
  __int64 v21; // rdi
  unsigned __int16 *v22; // rsi
  int v23; // eax
  InteractiveControlManager *v24; // rax
  char v25; // [rsp+C0h] [rbp+8h]
  int v26; // [rsp+C8h] [rbp+10h]

  v2 = *(_QWORD *)(a1 + 24);
  updated = 0;
  v4 = gcPointerDevices;
  v26 = 0;
  v6 = *(_QWORD *)(v2 + 568);
  RIMDevChangeDoUsermodeCallback((_DWORD *)a1, a2);
  v8 = *(_DWORD *)(v2 + 272);
  if ( (v8 & 0x4000) == 0 )
  {
    switch ( *(_DWORD *)a1 )
    {
      case 1:
        LOBYTE(v7) = 19;
        v17 = (_QWORD *)HMCreateHandleForObject(v2 + 88, v7);
        if ( v17 )
        {
          if ( *(_DWORD *)(a1 + 4) == 2 && (*(_DWORD *)(v2 + 288) & 0x80u) != 0 )
          {
            LOBYTE(v16) = 22;
            v18 = HMCreateHandleForObject(v6, v16);
            if ( v18 )
            {
              v19 = 1;
              _InterlockedAdd((volatile signed __int32 *)(v18 + 8), 1u);
              *(_QWORD *)(v18 + 728) = *v17;
              if ( (*(_DWORD *)(v18 + 308) & 0x20) == 0 )
              {
                v20 = *(_DWORD *)(v2 + 272);
                if ( (v20 & 0x1000) != 0 || (v20 & 0x800) != 0 || (v20 & 0x100) != 0 )
                  v19 = 0;
                v21 = *(_QWORD *)(v2 + 568);
                v22 = *(unsigned __int16 **)(v2 + 552);
                TraceLoggingRimHidDeviceArrivedEvent(
                  v22[20],
                  v22[55],
                  v22[56],
                  *(_DWORD *)(v21 + 24),
                  *(_DWORD *)(v21 + 712),
                  *(_DWORD *)(v21 + 24) == 6,
                  (struct _UNICODE_STRING *)(v21 + 312),
                  (struct _UNICODE_STRING *)(v21 + 840),
                  (unsigned __int8)(v20 & 0x80) >> 7,
                  v19,
                  *(_DWORD *)(v2 + 376),
                  *(_DWORD *)(v2 + 360),
                  *(_DWORD *)(v2 + 240),
                  ((((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
                  * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64)
                - *(_BYTE *)(v2 + 152),
                  ((((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
                  * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64)
                - *(_BYTE *)(v2 + 160));
              }
            }
            else
            {
              HMMarkObjectDestroy(v17);
              HMRemoveHandleForObject(v17);
              v17 = 0LL;
            }
          }
          if ( v17 )
            RawInputManagerDeviceObjectReference(v2);
        }
        v23 = *(_DWORD *)(v2 + 288);
        if ( (v23 & 0x100) != 0 )
        {
          v24 = InteractiveControlManager::Instance();
          InteractiveControlManager::OnDeviceAttach(v24, (struct RawInputManagerDeviceObject *)v2);
        }
        else if ( (v23 & 0x200) != 0 )
        {
          InkProcessorOnInkDeviceAttached((struct RawInputManagerDeviceObject *)v2);
        }
        break;
      case 2:
        if ( (unsigned int)IsPublicPointerDevice(v2 + 88) )
          updated = UpdatePointerDeviceCount(1LL);
        PostDeviceNotification(0LL, (struct DEVICEINFO *)(v2 + 88), v15, 1uLL, updated);
        if ( (*(_DWORD *)(v2 + 288) & 0x200) != 0 )
          InkProcessorOnInkDeviceOpened((struct RawInputManagerDeviceObject *)v2);
        break;
      case 3:
        if ( (*(_DWORD *)(v2 + 272) & 0x2000) != 0 )
        {
          UpdatePointerDeviceCount(2LL);
          PostDeviceNotification(0LL, (struct DEVICEINFO *)(v2 + 88), v13, 2uLL, v4 + 1);
        }
        else
        {
          if ( (unsigned int)IsPublicPointerDevice(v2 + 88) )
          {
            updated = v4 + 1;
            UpdatePointerDeviceCount(2LL);
          }
          PostDeviceNotification(0LL, (struct DEVICEINFO *)(v2 + 88), v14, 2uLL, updated);
        }
        if ( (*(_DWORD *)(v2 + 288) & 0x200) != 0 )
          InkProcessorOnInkDeviceClosed((struct RawInputManagerDeviceObject *)v2);
        break;
      case 4:
        if ( *(_DWORD *)(a1 + 4) == 2 && (*(_DWORD *)(v2 + 288) & 0x80u) != 0 )
        {
          if ( (*(_DWORD *)(v6 + 308) & 0x20) == 0 )
          {
            if ( (v8 & 0x1000) != 0 || (v8 & 0x800) != 0 || (v25 = 1, (v8 & 0x100) != 0) )
              v25 = 0;
            v9 = *(_QWORD *)(v2 + 568);
            v10 = *(unsigned __int16 **)(v2 + 552);
            TraceLoggingRimHidDeviceRemovedEvent(
              v10[20],
              v10[55],
              v10[56],
              *(_DWORD *)(v9 + 24),
              *(_DWORD *)(v9 + 712),
              *(_DWORD *)(v9 + 24) == 6,
              (struct _UNICODE_STRING *)(v9 + 312),
              (struct _UNICODE_STRING *)(v9 + 840),
              (unsigned __int8)(v8 & 0x80) >> 7,
              v25,
              *(_DWORD *)(v2 + 376),
              *(_DWORD *)(v2 + 360),
              *(_DWORD *)(v2 + 240),
              ((((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
              * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64)
            - *(_BYTE *)(v2 + 152),
              ((((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
              * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64)
            - *(_BYTE *)(v2 + 160));
          }
          if ( (*(_DWORD *)(v2 + 272) & 0x2000) != 0 || (unsigned int)IsPublicPointerDevice(v2 + 88) )
            v26 = 1;
          HMUnlockObject(v6);
          if ( *(_DWORD *)(v6 + 8) )
            goto LABEL_23;
          if ( !(unsigned int)HMMarkObjectDestroy(v6) )
            goto LABEL_23;
          HMRemoveHandleForObject(v6);
          if ( !(unsigned int)HMMarkObjectDestroy(v2 + 88) )
            goto LABEL_23;
        }
        else if ( !(unsigned int)HMMarkObjectDestroy(v2 + 88) )
        {
LABEL_25:
          v11 = *(_DWORD *)(v2 + 288);
          if ( (v11 & 0x100) != 0 )
          {
            v12 = InteractiveControlManager::Instance();
            InteractiveControlManager::OnDeviceRemoval(v12, (struct RawInputManagerDeviceObject *)v2);
          }
          else if ( (v11 & 0x200) != 0 )
          {
            InkProcessorOnInkDeviceRemoved((struct RawInputManagerDeviceObject *)v2);
          }
          return;
        }
        HMRemoveHandleForObject(v2 + 88);
LABEL_23:
        if ( v26 )
          UpdatePointerDeviceSystemMetrics(0LL);
        goto LABEL_25;
      default:
        return;
    }
  }
}
