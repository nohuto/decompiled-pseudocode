/*
 * XREFs of Win32kRIMDevChangeCallback @ 0x1C01D45B0
 * Callers:
 *     <none>
 * Callees:
 *     ?Instance@InteractiveControlManager@@SAPEAV1@XZ @ 0x1C00D8DC8 (-Instance@InteractiveControlManager@@SAPEAV1@XZ.c)
 *     PostDeviceNotification @ 0x1C010DA04 (PostDeviceNotification.c)
 *     ?TraceLoggingRimHidDeviceArrivedEvent@@YAXGIIKKHPEAU_UNICODE_STRING@@0HHIIIKK@Z @ 0x1C01CEC60 (-TraceLoggingRimHidDeviceArrivedEvent@@YAXGIIKKHPEAU_UNICODE_STRING@@0HHIIIKK@Z.c)
 *     ?TraceLoggingRimHidDeviceRemovedEvent@@YAXGIIKKHPEAU_UNICODE_STRING@@0HHIIIKK@Z @ 0x1C01CEE78 (-TraceLoggingRimHidDeviceRemovedEvent@@YAXGIIKKHPEAU_UNICODE_STRING@@0HHIIIKK@Z.c)
 *     RIMDevChangeDoUsermodeCallback @ 0x1C01D435C (RIMDevChangeDoUsermodeCallback.c)
 *     IsPublicPointerDevice @ 0x1C01EF7E4 (IsPublicPointerDevice.c)
 *     UpdatePointerDeviceCount @ 0x1C01EFCB8 (UpdatePointerDeviceCount.c)
 *     ?InkProcessorOnInkDeviceAttached@@YAJPEAURawInputManagerDeviceObject@@@Z @ 0x1C020EE1C (-InkProcessorOnInkDeviceAttached@@YAJPEAURawInputManagerDeviceObject@@@Z.c)
 *     ?InkProcessorOnInkDeviceClosed@@YAXPEAURawInputManagerDeviceObject@@@Z @ 0x1C020EF10 (-InkProcessorOnInkDeviceClosed@@YAXPEAURawInputManagerDeviceObject@@@Z.c)
 *     ?InkProcessorOnInkDeviceOpened@@YAXPEAURawInputManagerDeviceObject@@@Z @ 0x1C020F034 (-InkProcessorOnInkDeviceOpened@@YAXPEAURawInputManagerDeviceObject@@@Z.c)
 *     ?InkProcessorOnInkDeviceRemoved@@YAXPEAURawInputManagerDeviceObject@@@Z @ 0x1C020F0C8 (-InkProcessorOnInkDeviceRemoved@@YAXPEAURawInputManagerDeviceObject@@@Z.c)
 *     ?OnDeviceAttach@InteractiveControlManager@@QEAAJPEAURawInputManagerDeviceObject@@@Z @ 0x1C024E844 (-OnDeviceAttach@InteractiveControlManager@@QEAAJPEAURawInputManagerDeviceObject@@@Z.c)
 *     ?OnDeviceRemoval@InteractiveControlManager@@QEAAJPEAURawInputManagerDeviceObject@@@Z @ 0x1C024EB64 (-OnDeviceRemoval@InteractiveControlManager@@QEAAJPEAURawInputManagerDeviceObject@@@Z.c)
 */

void __fastcall Win32kRIMDevChangeCallback(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rbp
  int v6; // edi
  int updated; // r14d
  __int64 v8; // r13
  __int64 v9; // rdx
  int v10; // r9d
  char v11; // r12
  __int64 v12; // rdi
  unsigned __int16 *v13; // rsi
  int v14; // eax
  InteractiveControlManager *v15; // rax
  __int64 v16; // r8
  __int64 v17; // r8
  __int64 v18; // r8
  __int64 v19; // rdx
  _QWORD *v20; // r15
  __int64 v21; // rax
  __int64 v22; // rbx
  int v23; // eax
  int v24; // r13d
  char v25; // r12
  __int64 v26; // rdi
  unsigned __int16 *v27; // rsi
  int v28; // eax
  InteractiveControlManager *v29; // rax

  v4 = *(_QWORD *)(a1 + 24);
  v6 = gcPointerDevices;
  updated = 0;
  v8 = *(_QWORD *)(v4 + 568);
  RIMDevChangeDoUsermodeCallback((_DWORD *)a1, a2, a3, a4);
  v10 = *(_DWORD *)(v4 + 272);
  if ( (v10 & 0x4000) == 0 )
  {
    switch ( *(_DWORD *)a1 )
    {
      case 1:
        LOBYTE(v9) = 19;
        v20 = (_QWORD *)HMCreateHandleForObject(v4 + 88, v9);
        if ( v20 )
        {
          if ( *(_DWORD *)(a1 + 4) == 2 && (*(_DWORD *)(v4 + 288) & 0x80u) != 0 )
          {
            LOBYTE(v19) = 22;
            v21 = HMCreateHandleForObject(v8, v19);
            v22 = v21;
            if ( v21 )
            {
              HMLockObject(v21);
              v23 = *(_DWORD *)(v22 + 312);
              *(_QWORD *)(v22 + 736) = *v20;
              if ( (v23 & 8) == 0 )
              {
                v24 = *(_DWORD *)(v4 + 272);
                v25 = (v24 & 0x1000) == 0 && (v24 & 0x800) == 0 && (v24 & 0x100) == 0;
                v26 = *(_QWORD *)(v4 + 568);
                v27 = *(unsigned __int16 **)(v4 + 552);
                TraceLoggingRimHidDeviceArrivedEvent(
                  v27[20],
                  v27[55],
                  v27[56],
                  *(_DWORD *)(v26 + 24),
                  *(_DWORD *)(v26 + 720),
                  *(_DWORD *)(v26 + 24) == 6,
                  (struct _UNICODE_STRING *)(v26 + 320),
                  (struct _UNICODE_STRING *)(v26 + 848),
                  (unsigned __int8)(v24 & 0x80) >> 7,
                  v25,
                  *(_DWORD *)(v4 + 376),
                  *(_DWORD *)(v4 + 360),
                  *(_DWORD *)(v4 + 240),
                  ((((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
                  * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64)
                - *(_BYTE *)(v4 + 152),
                  ((((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
                  * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64)
                - *(_BYTE *)(v4 + 160));
              }
            }
            else
            {
              HMMarkObjectDestroy(v20);
              HMRemoveHandleForObject(v20);
              v20 = 0LL;
            }
          }
          if ( v20 )
            RawInputManagerDeviceObjectReference(v4);
        }
        v28 = *(_DWORD *)(v4 + 288);
        if ( (v28 & 0x100) != 0 )
        {
          v29 = InteractiveControlManager::Instance();
          InteractiveControlManager::OnDeviceAttach(v29, (struct RawInputManagerDeviceObject *)v4);
        }
        else if ( (v28 & 0x200) != 0 )
        {
          InkProcessorOnInkDeviceAttached((struct RawInputManagerDeviceObject *)v4);
        }
        break;
      case 2:
        if ( (unsigned int)IsPublicPointerDevice(v4 + 88) )
          updated = UpdatePointerDeviceCount(1LL);
        PostDeviceNotification(0LL, (struct DEVICEINFO *)(v4 + 88), v18, 1uLL, updated);
        if ( (*(_DWORD *)(v4 + 288) & 0x200) != 0 )
          InkProcessorOnInkDeviceOpened((struct RawInputManagerDeviceObject *)v4);
        break;
      case 3:
        if ( (*(_DWORD *)(v4 + 272) & 0x2000) != 0 )
        {
          UpdatePointerDeviceCount(2LL);
          PostDeviceNotification(0LL, (struct DEVICEINFO *)(v4 + 88), v16, 2uLL, v6 + 1);
        }
        else
        {
          if ( (unsigned int)IsPublicPointerDevice(v4 + 88) )
          {
            updated = v6 + 1;
            UpdatePointerDeviceCount(2LL);
          }
          PostDeviceNotification(0LL, (struct DEVICEINFO *)(v4 + 88), v17, 2uLL, updated);
        }
        if ( (*(_DWORD *)(v4 + 288) & 0x200) != 0 )
          InkProcessorOnInkDeviceClosed((struct RawInputManagerDeviceObject *)v4);
        break;
      case 4:
        if ( *(_DWORD *)(a1 + 4) == 2 && (*(_DWORD *)(v4 + 288) & 0x80u) != 0 )
        {
          if ( (*(_DWORD *)(v8 + 312) & 8) == 0 )
          {
            v11 = (v10 & 0x1000) == 0 && (v10 & 0x800) == 0 && (v10 & 0x100) == 0;
            v12 = *(_QWORD *)(v4 + 568);
            v13 = *(unsigned __int16 **)(v4 + 552);
            TraceLoggingRimHidDeviceRemovedEvent(
              v13[20],
              v13[55],
              v13[56],
              *(_DWORD *)(v12 + 24),
              *(_DWORD *)(v12 + 720),
              *(_DWORD *)(v12 + 24) == 6,
              (struct _UNICODE_STRING *)(v12 + 320),
              (struct _UNICODE_STRING *)(v12 + 848),
              (unsigned __int8)(v10 & 0x80) >> 7,
              v11,
              *(_DWORD *)(v4 + 376),
              *(_DWORD *)(v4 + 360),
              *(_DWORD *)(v4 + 240),
              ((((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
              * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64)
            - *(_BYTE *)(v4 + 152),
              ((((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
              * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64)
            - *(_BYTE *)(v4 + 160));
          }
          HMUnlockObject(v8);
          if ( *(_DWORD *)(v8 + 8) || !(unsigned int)HMMarkObjectDestroy(v8) )
            goto LABEL_20;
          HMRemoveHandleForObject(v8);
        }
        if ( (unsigned int)HMMarkObjectDestroy(v4 + 88) )
          HMRemoveHandleForObject(v4 + 88);
LABEL_20:
        v14 = *(_DWORD *)(v4 + 288);
        if ( (v14 & 0x100) != 0 )
        {
          v15 = InteractiveControlManager::Instance();
          InteractiveControlManager::OnDeviceRemoval(v15, (struct RawInputManagerDeviceObject *)v4);
        }
        else if ( (v14 & 0x200) != 0 )
        {
          InkProcessorOnInkDeviceRemoved((struct RawInputManagerDeviceObject *)v4);
        }
        return;
      default:
        return;
    }
  }
}
