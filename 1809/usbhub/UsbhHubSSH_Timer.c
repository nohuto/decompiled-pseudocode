/*
 * XREFs of UsbhHubSSH_Timer @ 0x1C000F420
 * Callers:
 *     <none>
 * Callees:
 *     UsbhAllocWorkItem @ 0x1C0011370 (UsbhAllocWorkItem.c)
 *     _guard_dispatch_icall_nop @ 0x1C002B480 (_guard_dispatch_icall_nop.c)
 *     UsbhTrapFatal_Dbg @ 0x1C003FD38 (UsbhTrapFatal_Dbg.c)
 *     WPP_RECORDER_SF_d @ 0x1C0040078 (WPP_RECORDER_SF_d.c)
 */

__int64 __fastcall UsbhHubSSH_Timer(__int64 a1, __int64 a2)
{
  struct _KEVENT *v3; // rax
  struct _KEVENT *v4; // rbp
  __int64 v5; // rax
  int v6; // esi
  char v7; // r14
  int v8; // edi
  __int64 v9; // rax
  __int64 v10; // rsi
  __int64 v11; // rax
  void (__fastcall *v12)(__int64, _QWORD, void *, __int64, __int64, int); // rax
  int v14; // [rsp+28h] [rbp-30h]

  if ( !a2 )
    UsbhTrapFatal_Dbg(0LL, 0LL);
  v3 = *(struct _KEVENT **)(a2 + 64);
  if ( !v3 )
    goto LABEL_25;
  if ( v3->Header.LockNV != 541218120 )
    UsbhTrapFatal_Dbg(a2, v3);
  v4 = v3 + 143;
  if ( KeReadStateEvent(v3 + 143) )
  {
    KeResetEvent(v4);
    v5 = *(_QWORD *)(a2 + 64);
    if ( v5 )
    {
      if ( *(_DWORD *)v5 != 541218120 )
        UsbhTrapFatal_Dbg(a2, *(_QWORD *)(a2 + 64));
      v6 = v5 + 2088;
      v7 = *(_BYTE *)(v5 + 5268);
      v8 = 0;
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
        WPP_RECORDER_SF_d(
          WPP_GLOBAL_Control->DeviceExtension,
          0,
          1,
          46,
          (__int64)&WPP_10fd33d0d4c73f43ffd0851bf01e9310_Traceguids,
          0);
      v9 = UsbhAllocWorkItem(a2, (unsigned int)UsbhHubSSH_Worker, v6, 0, 2001228627, v7);
      v10 = v9;
      if ( !v9 )
      {
        v8 = -1073741670;
LABEL_16:
        if ( (v8 & 0xC0000000) == 0xC0000000 )
          KeSetEvent(v4, 0, 0);
        return 0LL;
      }
      _InterlockedIncrement((volatile signed __int32 *)(v9 + 8));
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
        WPP_RECORDER_SF_d(
          WPP_GLOBAL_Control->DeviceExtension,
          0,
          1,
          47,
          (__int64)&WPP_10fd33d0d4c73f43ffd0851bf01e9310_Traceguids,
          0);
      v11 = *(_QWORD *)(a2 + 64);
      if ( v11 )
      {
        if ( *(_DWORD *)v11 != 541218120 )
          UsbhTrapFatal_Dbg(a2, *(_QWORD *)(a2 + 64));
        v12 = *(void (__fastcall **)(__int64, _QWORD, void *, __int64, __int64, int))(v11 + 4784);
        if ( v12 )
        {
          LOBYTE(v14) = v7;
          v12(a2, *(_QWORD *)(v10 + 40), &UsbhHubWorker, 1LL, v10, v14);
        }
        else
        {
          v8 = -1073741822;
        }
        goto LABEL_16;
      }
    }
LABEL_25:
    UsbhTrapFatal_Dbg(a2, 0LL);
  }
  return 0LL;
}
