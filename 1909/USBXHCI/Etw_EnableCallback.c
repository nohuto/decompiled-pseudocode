/*
 * XREFs of Etw_EnableCallback @ 0x1C0001260
 * Callers:
 *     McGenControlCallbackV2 @ 0x1C0001120 (McGenControlCallbackV2.c)
 * Callees:
 *     Etw_ControllerRundown @ 0x1C00014AC (Etw_ControllerRundown.c)
 *     __security_check_cookie @ 0x1C00021E0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0008A20 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0008D80 (memset.c)
 *     McTemplateK0 @ 0x1C003F270 (McTemplateK0.c)
 */

void __fastcall Etw_EnableCallback(__int64 a1, int a2)
{
  __int64 v2; // rcx
  KIRQL v3; // al
  __int64 v4; // rsi
  __int64 v5; // rcx
  SIZE_T v6; // rdi
  PVOID PoolWithTag; // rbx
  KIRQL v8; // al
  __int64 v9; // rcx
  KIRQL v10; // r15
  unsigned int v11; // r14d
  __int64 v12; // rdi
  unsigned int v13; // ebp
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // rcx
  _QWORD *v17; // rdi
  __int64 v18; // rbp
  GUID v19; // [rsp+30h] [rbp-38h] BYREF

  if ( a2 )
  {
    *(_QWORD *)&v19.Data1 = 0LL;
    *(_QWORD *)v19.Data4 = 0LL;
    EtwActivityIdControl(3u, &v19);
    if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc & 1) != 0 )
      McTemplateK0(v2, &USBXHCI_ETW_EVENT_RUNDOWN_START, &v19);
    v3 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(*(_QWORD *)&WPP_MAIN_CB.DeviceQueue.Type + 16LL));
    LODWORD(v4) = *(_DWORD *)(*(_QWORD *)&WPP_MAIN_CB.DeviceQueue.Type + 24LL);
    KeReleaseSpinLock((PKSPIN_LOCK)(*(_QWORD *)&WPP_MAIN_CB.DeviceQueue.Type + 16LL), v3);
    if ( (_DWORD)v4 )
    {
      v6 = 8LL * (unsigned int)v4;
      PoolWithTag = ExAllocatePoolWithTag(*((POOL_TYPE *)&WPP_MAIN_CB.AlignmentRequirement + 1), v6, 0x49434858u);
      if ( PoolWithTag )
      {
        while ( 1 )
        {
          memset(PoolWithTag, 0, v6);
          v8 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(*(_QWORD *)&WPP_MAIN_CB.DeviceQueue.Type + 16LL));
          v9 = *(_QWORD *)&WPP_MAIN_CB.DeviceQueue.Type;
          v10 = v8;
          if ( (unsigned int)v4 >= *(_DWORD *)(*(_QWORD *)&WPP_MAIN_CB.DeviceQueue.Type + 24LL) )
            break;
          v4 = *(unsigned int *)(*(_QWORD *)&WPP_MAIN_CB.DeviceQueue.Type + 24LL);
          KeReleaseSpinLock((PKSPIN_LOCK)(*(_QWORD *)&WPP_MAIN_CB.DeviceQueue.Type + 16LL), v8);
          ExFreePoolWithTag(PoolWithTag, 0x49434858u);
          v6 = 8 * v4;
          PoolWithTag = ExAllocatePoolWithTag(
                          *((POOL_TYPE *)&WPP_MAIN_CB.AlignmentRequirement + 1),
                          8 * v4,
                          0x49434858u);
          if ( !PoolWithTag )
            return;
        }
        v11 = 0;
        v12 = **(_QWORD **)&WPP_MAIN_CB.DeviceQueue.Type - 24LL;
        v13 = 0;
        if ( *(_QWORD *)&WPP_MAIN_CB.DeviceQueue.Type != **(_QWORD **)&WPP_MAIN_CB.DeviceQueue.Type )
        {
          do
          {
            (*(void (__fastcall **)(unsigned __int64, _QWORD, __int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD), __int64, const char *))(WdfFunctions_01023 + 1640))(
              WPP_MAIN_CB.Dpc.ProcessorHistory,
              *(_QWORD *)(v12 + 8),
              Etw_EnableCallback,
              162LL,
              "onecore\\drivers\\wdm\\usb\\usb3\\usbxhci\\sys\\etw.c");
            v9 = *(_QWORD *)&WPP_MAIN_CB.DeviceQueue.Type;
            v14 = v13++;
            *((_QWORD *)PoolWithTag + v14) = v12;
            v15 = *(_QWORD *)(v12 + 24);
            v12 = v15 - 24;
          }
          while ( v9 != v15 );
        }
        KeReleaseSpinLock((PKSPIN_LOCK)(v9 + 16), v10);
        if ( (_DWORD)v4 )
        {
          v17 = PoolWithTag;
          do
          {
            v18 = *v17;
            if ( !*v17 )
              break;
            Etw_ControllerRundown(&v19, *v17);
            (*(void (__fastcall **)(unsigned __int64, _QWORD, __int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD), __int64, const char *))(WdfFunctions_01023 + 1648))(
              WPP_MAIN_CB.Dpc.ProcessorHistory,
              *(_QWORD *)(v18 + 8),
              Etw_EnableCallback,
              199LL,
              "onecore\\drivers\\wdm\\usb\\usb3\\usbxhci\\sys\\etw.c");
            ++v11;
            ++v17;
          }
          while ( v11 < (unsigned int)v4 );
        }
        if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc & 1) != 0 )
          McTemplateK0(v16, &USBXHCI_ETW_EVENT_RUNDOWN_COMPLETE, &v19);
        ExFreePoolWithTag(PoolWithTag, 0x49434858u);
      }
    }
    else if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc & 1) != 0 )
    {
      McTemplateK0(v5, &USBXHCI_ETW_EVENT_RUNDOWN_COMPLETE, &v19);
    }
  }
}
