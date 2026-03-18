/*
 * XREFs of Win32kRIMDevChangeCallback @ 0x1C019F620
 * Callers:
 *     <none>
 * Callees:
 *     PostDeviceNotification @ 0x1C005A518 (PostDeviceNotification.c)
 *     HMUnlockObject @ 0x1C00DAD2C (HMUnlockObject.c)
 *     ?Instance@InteractiveControlManager@@SAPEAV1@XZ @ 0x1C0103948 (-Instance@InteractiveControlManager@@SAPEAV1@XZ.c)
 *     ?TraceLoggingRimHidDeviceArrivedEvent@@YAXGIIKKHPEAU_UNICODE_STRING@@0HHIIIKK@Z @ 0x1C019984C (-TraceLoggingRimHidDeviceArrivedEvent@@YAXGIIKKHPEAU_UNICODE_STRING@@0HHIIIKK@Z.c)
 *     ?TraceLoggingRimHidDeviceRemovedEvent@@YAXGIIKKHPEAU_UNICODE_STRING@@0HHIIIKK@Z @ 0x1C0199A3C (-TraceLoggingRimHidDeviceRemovedEvent@@YAXGIIKKHPEAU_UNICODE_STRING@@0HHIIIKK@Z.c)
 *     RIMDevChangeDoUsermodeCallback @ 0x1C019F408 (RIMDevChangeDoUsermodeCallback.c)
 *     IsPublicPointerDevice @ 0x1C01B76AC (IsPublicPointerDevice.c)
 *     UpdatePointerDeviceCount @ 0x1C01B7A4C (UpdatePointerDeviceCount.c)
 *     UpdatePointerDeviceSystemMetrics @ 0x1C01B7A80 (UpdatePointerDeviceSystemMetrics.c)
 *     ?InkProcessorOnInkDeviceAttached@@YAJPEAURawInputManagerDeviceObject@@@Z @ 0x1C01D405C (-InkProcessorOnInkDeviceAttached@@YAJPEAURawInputManagerDeviceObject@@@Z.c)
 *     ?InkProcessorOnInkDeviceClosed@@YAXPEAURawInputManagerDeviceObject@@@Z @ 0x1C01D4150 (-InkProcessorOnInkDeviceClosed@@YAXPEAURawInputManagerDeviceObject@@@Z.c)
 *     ?InkProcessorOnInkDeviceOpened@@YAXPEAURawInputManagerDeviceObject@@@Z @ 0x1C01D4284 (-InkProcessorOnInkDeviceOpened@@YAXPEAURawInputManagerDeviceObject@@@Z.c)
 *     ?InkProcessorOnInkDeviceRemoved@@YAXPEAURawInputManagerDeviceObject@@@Z @ 0x1C01D4320 (-InkProcessorOnInkDeviceRemoved@@YAXPEAURawInputManagerDeviceObject@@@Z.c)
 *     ?OnDeviceAttach@InteractiveControlManager@@QEAAJPEAURawInputManagerDeviceObject@@@Z @ 0x1C020C834 (-OnDeviceAttach@InteractiveControlManager@@QEAAJPEAURawInputManagerDeviceObject@@@Z.c)
 *     ?OnDeviceRemoval@InteractiveControlManager@@QEAAJPEAURawInputManagerDeviceObject@@@Z @ 0x1C020CB20 (-OnDeviceRemoval@InteractiveControlManager@@QEAAJPEAURawInputManagerDeviceObject@@@Z.c)
 */

void __fastcall Win32kRIMDevChangeCallback(__int64 a1, __int64 a2)
{
  __int64 v2; // rbp
  unsigned int updated; // r14d
  int v4; // edi
  __int64 v6; // r13
  __int64 v7; // rdx
  __int64 v8; // r8
  int v9; // r9d
  __int64 v10; // rdi
  unsigned __int16 *v11; // rsi
  int v12; // eax
  InteractiveControlManager *v13; // rax
  __int64 v14; // r8
  int v15; // r8d
  __int64 v16; // r8
  __int64 v17; // rdx
  _QWORD *v18; // r15
  __int64 v19; // rax
  char v20; // r12
  int v21; // r13d
  __int64 v22; // rdi
  unsigned __int16 *v23; // rsi
  int v24; // eax
  InteractiveControlManager *v25; // rax
  char v26; // [rsp+C0h] [rbp+8h]
  int v27; // [rsp+C8h] [rbp+10h]

  v2 = *(_QWORD *)(a1 + 24);
  updated = 0;
  v4 = gcPointerDevices;
  v27 = 0;
  v6 = *(_QWORD *)(v2 + 560);
  RIMDevChangeDoUsermodeCallback(a1, a2);
  v9 = *(_DWORD *)(v2 + 264);
  if ( (v9 & 0x4000) == 0 )
  {
    switch ( *(_DWORD *)a1 )
    {
      case 1:
        LOBYTE(v7) = 19;
        v18 = (_QWORD *)HMCreateHandleForObject(v2 + 80, v7);
        if ( v18 )
        {
          if ( *(_DWORD *)(a1 + 4) == 2 && (*(_DWORD *)(v2 + 280) & 0x80u) != 0 )
          {
            LOBYTE(v17) = 22;
            v19 = HMCreateHandleForObject(v6, v17);
            if ( v19 )
            {
              v20 = 1;
              _InterlockedAdd((volatile signed __int32 *)(v19 + 8), 1u);
              *(_QWORD *)(v19 + 696) = *v18;
              if ( (*(_DWORD *)(v19 + 276) & 0x20) == 0 )
              {
                v21 = *(_DWORD *)(v2 + 264);
                if ( (v21 & 0x800) != 0 || (v21 & 0x400) != 0 || (v21 & 0x80u) != 0 )
                  v20 = 0;
                v22 = *(_QWORD *)(v2 + 560);
                v23 = *(unsigned __int16 **)(v2 + 544);
                TraceLoggingRimHidDeviceArrivedEvent(
                  v23[20],
                  v23[55],
                  v23[56],
                  *(_DWORD *)(v22 + 24),
                  *(_DWORD *)(v22 + 680),
                  *(_DWORD *)(v22 + 24) == 6,
                  (struct _UNICODE_STRING *)(v22 + 280),
                  (struct _UNICODE_STRING *)(v22 + 808),
                  (unsigned __int8)(v21 & 0x40) >> 6,
                  v20,
                  *(_DWORD *)(v2 + 368),
                  *(_DWORD *)(v2 + 352),
                  *(_DWORD *)(v2 + 232),
                  ((((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
                  * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64)
                - *(_BYTE *)(v2 + 144),
                  ((((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
                  * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64)
                - *(_BYTE *)(v2 + 152));
              }
            }
            else
            {
              HMMarkObjectDestroy(v18);
              HMRemoveHandleForObject(v18);
              v18 = 0LL;
            }
          }
          if ( v18 )
            RawInputManagerDeviceObjectReference(v2);
        }
        v24 = *(_DWORD *)(v2 + 280);
        if ( (v24 & 0x100) != 0 )
        {
          v25 = InteractiveControlManager::Instance();
          InteractiveControlManager::OnDeviceAttach(v25, (struct RawInputManagerDeviceObject *)v2);
        }
        else if ( (v24 & 0x200) != 0 )
        {
          InkProcessorOnInkDeviceAttached((struct RawInputManagerDeviceObject *)v2);
        }
        break;
      case 2:
        if ( (unsigned int)IsPublicPointerDevice(v2 + 80) )
          updated = UpdatePointerDeviceCount(1LL);
        PostDeviceNotification(0LL, (struct DEVICEINFO *)(v2 + 80), v16, 1LL, updated);
        if ( (*(_DWORD *)(v2 + 280) & 0x200) != 0 )
          InkProcessorOnInkDeviceOpened((struct RawInputManagerDeviceObject *)v2);
        break;
      case 3:
        if ( (*(_DWORD *)(v2 + 264) & 0x1000) != 0 )
        {
          UpdatePointerDeviceCount(2LL);
          PostDeviceNotification(0LL, (struct DEVICEINFO *)(v2 + 80), v14, 2LL, v4 + 1);
        }
        else
        {
          v15 = IsPublicPointerDevice(v2 + 80);
          if ( v15 )
            UpdatePointerDeviceCount(2LL);
          PostDeviceNotification(0LL, (struct DEVICEINFO *)(v2 + 80), (unsigned int)-v15, 2LL, v15 != 0 ? v4 + 1 : 0);
        }
        if ( (*(_DWORD *)(v2 + 280) & 0x200) != 0 )
          InkProcessorOnInkDeviceClosed((struct RawInputManagerDeviceObject *)v2);
        break;
      case 4:
        if ( *(_DWORD *)(a1 + 4) == 2 && (*(_DWORD *)(v2 + 280) & 0x80u) != 0 )
        {
          if ( (*(_DWORD *)(v6 + 276) & 0x20) == 0 )
          {
            if ( (v9 & 0x800) != 0 || (v9 & 0x400) != 0 || (v26 = 1, (v9 & 0x80u) != 0) )
              v26 = 0;
            v10 = *(_QWORD *)(v2 + 560);
            v11 = *(unsigned __int16 **)(v2 + 544);
            TraceLoggingRimHidDeviceRemovedEvent(
              v11[20],
              v11[55],
              v11[56],
              *(_DWORD *)(v10 + 24),
              *(_DWORD *)(v10 + 680),
              *(_DWORD *)(v10 + 24) == 6,
              (struct _UNICODE_STRING *)(v10 + 280),
              (struct _UNICODE_STRING *)(v10 + 808),
              (unsigned __int8)(v9 & 0x40) >> 6,
              v26,
              *(_DWORD *)(v2 + 368),
              *(_DWORD *)(v2 + 352),
              *(_DWORD *)(v2 + 232),
              ((((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
              * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64)
            - *(_BYTE *)(v2 + 144),
              ((((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
              * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64)
            - *(_BYTE *)(v2 + 152));
          }
          if ( (*(_DWORD *)(v2 + 264) & 0x1000) != 0 || (unsigned int)IsPublicPointerDevice(v2 + 80) )
            v27 = 1;
          HMUnlockObject(v6, v7, v8);
          if ( *(_DWORD *)(v6 + 8) )
            goto LABEL_23;
          if ( !(unsigned int)HMMarkObjectDestroy(v6) )
            goto LABEL_23;
          HMRemoveHandleForObject(v6);
          if ( !(unsigned int)HMMarkObjectDestroy(v2 + 80) )
            goto LABEL_23;
        }
        else if ( !(unsigned int)HMMarkObjectDestroy(v2 + 80) )
        {
LABEL_25:
          v12 = *(_DWORD *)(v2 + 280);
          if ( (v12 & 0x100) != 0 )
          {
            v13 = InteractiveControlManager::Instance();
            InteractiveControlManager::OnDeviceRemoval(v13, (struct RawInputManagerDeviceObject *)v2);
          }
          else if ( (v12 & 0x200) != 0 )
          {
            InkProcessorOnInkDeviceRemoved((struct RawInputManagerDeviceObject *)v2);
          }
          return;
        }
        HMRemoveHandleForObject(v2 + 80);
LABEL_23:
        if ( v27 )
          UpdatePointerDeviceSystemMetrics(0LL);
        goto LABEL_25;
      default:
        return;
    }
  }
}
