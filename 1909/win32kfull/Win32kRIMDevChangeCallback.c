/*
 * XREFs of Win32kRIMDevChangeCallback @ 0x1C01D4420
 * Callers:
 *     <none>
 * Callees:
 *     ?Instance@InteractiveControlManager@@SAPEAV1@XZ @ 0x1C0079528 (-Instance@InteractiveControlManager@@SAPEAV1@XZ.c)
 *     PostDeviceNotification @ 0x1C00E7D84 (PostDeviceNotification.c)
 *     ?TraceLoggingRimHidDeviceArrivedEvent@@YAXGIIKKHPEAU_UNICODE_STRING@@0HHIIIKK@Z @ 0x1C01CEAD0 (-TraceLoggingRimHidDeviceArrivedEvent@@YAXGIIKKHPEAU_UNICODE_STRING@@0HHIIIKK@Z.c)
 *     ?TraceLoggingRimHidDeviceRemovedEvent@@YAXGIIKKHPEAU_UNICODE_STRING@@0HHIIIKK@Z @ 0x1C01CECE8 (-TraceLoggingRimHidDeviceRemovedEvent@@YAXGIIKKHPEAU_UNICODE_STRING@@0HHIIIKK@Z.c)
 *     RIMDevChangeDoUsermodeCallback @ 0x1C01D41CC (RIMDevChangeDoUsermodeCallback.c)
 *     IsPublicPointerDevice @ 0x1C01EF664 (IsPublicPointerDevice.c)
 *     UpdatePointerDeviceCount @ 0x1C01EFB38 (UpdatePointerDeviceCount.c)
 *     ?InkProcessorOnInkDeviceAttached@@YAJPEAURawInputManagerDeviceObject@@@Z @ 0x1C020EB6C (-InkProcessorOnInkDeviceAttached@@YAJPEAURawInputManagerDeviceObject@@@Z.c)
 *     ?InkProcessorOnInkDeviceClosed@@YAXPEAURawInputManagerDeviceObject@@@Z @ 0x1C020EC60 (-InkProcessorOnInkDeviceClosed@@YAXPEAURawInputManagerDeviceObject@@@Z.c)
 *     ?InkProcessorOnInkDeviceOpened@@YAXPEAURawInputManagerDeviceObject@@@Z @ 0x1C020ED84 (-InkProcessorOnInkDeviceOpened@@YAXPEAURawInputManagerDeviceObject@@@Z.c)
 *     ?InkProcessorOnInkDeviceRemoved@@YAXPEAURawInputManagerDeviceObject@@@Z @ 0x1C020EE18 (-InkProcessorOnInkDeviceRemoved@@YAXPEAURawInputManagerDeviceObject@@@Z.c)
 *     ?OnDeviceAttach@InteractiveControlManager@@QEAAJPEAURawInputManagerDeviceObject@@@Z @ 0x1C024E104 (-OnDeviceAttach@InteractiveControlManager@@QEAAJPEAURawInputManagerDeviceObject@@@Z.c)
 *     ?OnDeviceRemoval@InteractiveControlManager@@QEAAJPEAURawInputManagerDeviceObject@@@Z @ 0x1C024E424 (-OnDeviceRemoval@InteractiveControlManager@@QEAAJPEAURawInputManagerDeviceObject@@@Z.c)
 */

void __fastcall Win32kRIMDevChangeCallback(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rbp
  int v5; // edi
  unsigned int updated; // r14d
  __int64 v7; // r13
  __int64 v8; // rdx
  int v9; // r9d
  char v10; // r12
  __int64 v11; // rdi
  unsigned __int16 *v12; // rsi
  int v13; // eax
  InteractiveControlManager *v14; // rax
  __int64 v15; // r8
  __int64 v16; // r8
  __int64 v17; // r8
  __int64 v18; // rdx
  _QWORD *v19; // r15
  __int64 v20; // rax
  __int64 v21; // rbx
  int v22; // eax
  int v23; // r13d
  char v24; // r12
  __int64 v25; // rdi
  unsigned __int16 *v26; // rsi
  int v27; // eax
  InteractiveControlManager *v28; // rax

  v3 = *(_QWORD *)(a1 + 24);
  v5 = gcPointerDevices;
  updated = 0;
  v7 = *(_QWORD *)(v3 + 568);
  RIMDevChangeDoUsermodeCallback((_DWORD *)a1, a2, a3);
  v9 = *(_DWORD *)(v3 + 272);
  if ( (v9 & 0x4000) == 0 )
  {
    switch ( *(_DWORD *)a1 )
    {
      case 1:
        LOBYTE(v8) = 19;
        v19 = (_QWORD *)HMCreateHandleForObject(v3 + 88, v8);
        if ( v19 )
        {
          if ( *(_DWORD *)(a1 + 4) == 2 && (*(_DWORD *)(v3 + 288) & 0x80u) != 0 )
          {
            LOBYTE(v18) = 22;
            v20 = HMCreateHandleForObject(v7, v18);
            v21 = v20;
            if ( v20 )
            {
              HMLockObject(v20);
              v22 = *(_DWORD *)(v21 + 312);
              *(_QWORD *)(v21 + 736) = *v19;
              if ( (v22 & 8) == 0 )
              {
                v23 = *(_DWORD *)(v3 + 272);
                v24 = (v23 & 0x1000) == 0 && (v23 & 0x800) == 0 && (v23 & 0x100) == 0;
                v25 = *(_QWORD *)(v3 + 568);
                v26 = *(unsigned __int16 **)(v3 + 552);
                TraceLoggingRimHidDeviceArrivedEvent(
                  v26[20],
                  v26[55],
                  v26[56],
                  *(_DWORD *)(v25 + 24),
                  *(_DWORD *)(v25 + 720),
                  *(_DWORD *)(v25 + 24) == 6,
                  (struct _UNICODE_STRING *)(v25 + 320),
                  (struct _UNICODE_STRING *)(v25 + 848),
                  (unsigned __int8)(v23 & 0x80) >> 7,
                  v24,
                  *(_DWORD *)(v3 + 376),
                  *(_DWORD *)(v3 + 360),
                  *(_DWORD *)(v3 + 240),
                  ((((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
                  * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64)
                - *(_BYTE *)(v3 + 152),
                  ((((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
                  * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64)
                - *(_BYTE *)(v3 + 160));
              }
            }
            else
            {
              HMMarkObjectDestroy(v19);
              HMRemoveHandleForObject(v19);
              v19 = 0LL;
            }
          }
          if ( v19 )
            RawInputManagerDeviceObjectReference(v3);
        }
        v27 = *(_DWORD *)(v3 + 288);
        if ( (v27 & 0x100) != 0 )
        {
          v28 = InteractiveControlManager::Instance();
          InteractiveControlManager::OnDeviceAttach(v28, (struct RawInputManagerDeviceObject *)v3);
        }
        else if ( (v27 & 0x200) != 0 )
        {
          InkProcessorOnInkDeviceAttached((struct RawInputManagerDeviceObject *)v3);
        }
        break;
      case 2:
        if ( (unsigned int)IsPublicPointerDevice(v3 + 88) )
          updated = UpdatePointerDeviceCount(1LL);
        PostDeviceNotification(0LL, (struct DEVICEINFO *)(v3 + 88), v17, 1uLL, updated);
        if ( (*(_DWORD *)(v3 + 288) & 0x200) != 0 )
          InkProcessorOnInkDeviceOpened((struct RawInputManagerDeviceObject *)v3);
        break;
      case 3:
        if ( (*(_DWORD *)(v3 + 272) & 0x2000) != 0 )
        {
          UpdatePointerDeviceCount(2LL);
          PostDeviceNotification(0LL, (struct DEVICEINFO *)(v3 + 88), v15, 2uLL, v5 + 1);
        }
        else
        {
          if ( (unsigned int)IsPublicPointerDevice(v3 + 88) )
          {
            updated = v5 + 1;
            UpdatePointerDeviceCount(2LL);
          }
          PostDeviceNotification(0LL, (struct DEVICEINFO *)(v3 + 88), v16, 2uLL, updated);
        }
        if ( (*(_DWORD *)(v3 + 288) & 0x200) != 0 )
          InkProcessorOnInkDeviceClosed((struct RawInputManagerDeviceObject *)v3);
        break;
      case 4:
        if ( *(_DWORD *)(a1 + 4) == 2 && (*(_DWORD *)(v3 + 288) & 0x80u) != 0 )
        {
          if ( (*(_DWORD *)(v7 + 312) & 8) == 0 )
          {
            v10 = (v9 & 0x1000) == 0 && (v9 & 0x800) == 0 && (v9 & 0x100) == 0;
            v11 = *(_QWORD *)(v3 + 568);
            v12 = *(unsigned __int16 **)(v3 + 552);
            TraceLoggingRimHidDeviceRemovedEvent(
              v12[20],
              v12[55],
              v12[56],
              *(_DWORD *)(v11 + 24),
              *(_DWORD *)(v11 + 720),
              *(_DWORD *)(v11 + 24) == 6,
              (struct _UNICODE_STRING *)(v11 + 320),
              (struct _UNICODE_STRING *)(v11 + 848),
              (unsigned __int8)(v9 & 0x80) >> 7,
              v10,
              *(_DWORD *)(v3 + 376),
              *(_DWORD *)(v3 + 360),
              *(_DWORD *)(v3 + 240),
              ((((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
              * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64)
            - *(_BYTE *)(v3 + 152),
              ((((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
              * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64)
            - *(_BYTE *)(v3 + 160));
          }
          HMUnlockObject(v7);
          if ( *(_DWORD *)(v7 + 8) || !(unsigned int)HMMarkObjectDestroy(v7) )
            goto LABEL_20;
          HMRemoveHandleForObject(v7);
        }
        if ( (unsigned int)HMMarkObjectDestroy(v3 + 88) )
          HMRemoveHandleForObject(v3 + 88);
LABEL_20:
        v13 = *(_DWORD *)(v3 + 288);
        if ( (v13 & 0x100) != 0 )
        {
          v14 = InteractiveControlManager::Instance();
          InteractiveControlManager::OnDeviceRemoval(v14, (struct RawInputManagerDeviceObject *)v3);
        }
        else if ( (v13 & 0x200) != 0 )
        {
          InkProcessorOnInkDeviceRemoved((struct RawInputManagerDeviceObject *)v3);
        }
        return;
      default:
        return;
    }
  }
}
