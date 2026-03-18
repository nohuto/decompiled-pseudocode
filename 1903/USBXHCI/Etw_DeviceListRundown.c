/*
 * XREFs of Etw_DeviceListRundown @ 0x1C0001810
 * Callers:
 *     Etw_ControllerRundown @ 0x1C00014AC (Etw_ControllerRundown.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0008A20 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0008D80 (memset.c)
 *     Etw_DeviceRundown @ 0x1C003E994 (Etw_DeviceRundown.c)
 */

void __fastcall Etw_DeviceListRundown(__int64 a1, __int64 a2)
{
  KSPIN_LOCK *v2; // rbp
  __int64 v3; // r13
  KIRQL v5; // al
  __int64 v6; // rsi
  KIRQL v7; // al
  unsigned int v8; // ecx
  KIRQL v9; // di
  _QWORD *PoolWithTag; // rax
  _QWORD *v11; // rbx
  _QWORD *v12; // r14
  __int64 v13; // r12
  _QWORD *v14; // r15
  _QWORD *v15; // rax
  unsigned int v16; // ebp
  _QWORD *v17; // r14
  _QWORD *v18; // rdi

  v2 = (KSPIN_LOCK *)(a2 + 40);
  v3 = a1;
  v5 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a2 + 40));
  v6 = *(unsigned int *)(a2 + 64);
  KeReleaseSpinLock(v2, v5);
  if ( (_DWORD)v6 )
  {
    while ( 1 )
    {
      PoolWithTag = ExAllocatePoolWithTag(*((POOL_TYPE *)&WPP_MAIN_CB.AlignmentRequirement + 1), 8 * v6, 0x49434858u);
      v11 = PoolWithTag;
      if ( !PoolWithTag )
        break;
      memset(PoolWithTag, 0, 8 * v6);
      v7 = KeAcquireSpinLockRaiseToDpc(v2);
      v8 = *(_DWORD *)(a2 + 64);
      v9 = v7;
      if ( (unsigned int)v6 >= v8 )
      {
        v12 = (_QWORD *)(a2 + 48);
        v13 = 0LL;
        v14 = (_QWORD *)(*v12 - 72LL);
        if ( v12 != (_QWORD *)*v12 )
        {
          do
          {
            (*(void (__fastcall **)(unsigned __int64, _QWORD, __int64 (__fastcall *)(_QWORD, _QWORD), __int64, const char *))(WdfFunctions_01023 + 1640))(
              WPP_MAIN_CB.Dpc.ProcessorHistory,
              *v14,
              Etw_DeviceListRundown,
              581LL,
              "onecore\\drivers\\wdm\\usb\\usb3\\usbxhci\\sys\\etw.c");
            v11[v13] = v14;
            v13 = (unsigned int)(v13 + 1);
            v15 = (_QWORD *)v14[9];
            v14 = v15 - 9;
          }
          while ( v12 != v15 );
          v3 = a1;
        }
        KeReleaseSpinLock(v2, v9);
        v16 = 0;
        if ( (_DWORD)v6 )
        {
          v17 = v11;
          do
          {
            v18 = (_QWORD *)*v17;
            if ( !*v17 )
              break;
            Etw_DeviceRundown(v3, *v17);
            (*(void (__fastcall **)(unsigned __int64, _QWORD, __int64 (__fastcall *)(_QWORD, _QWORD), __int64, const char *))(WdfFunctions_01023 + 1648))(
              WPP_MAIN_CB.Dpc.ProcessorHistory,
              *v18,
              Etw_DeviceListRundown,
              617LL,
              "onecore\\drivers\\wdm\\usb\\usb3\\usbxhci\\sys\\etw.c");
            ++v16;
            ++v17;
          }
          while ( v16 < (unsigned int)v6 );
        }
        if ( v11 )
          ExFreePoolWithTag(v11, 0x49434858u);
        return;
      }
      v6 = v8;
      KeReleaseSpinLock(v2, v7);
      ExFreePoolWithTag(v11, 0x49434858u);
    }
  }
}
