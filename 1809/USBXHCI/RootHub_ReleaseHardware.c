/*
 * XREFs of RootHub_ReleaseHardware @ 0x1C0061228
 * Callers:
 *     Controller_WdfEvtDeviceReleaseHardware @ 0x1C005C5B0 (Controller_WdfEvtDeviceReleaseHardware.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0006C60 (_guard_dispatch_icall_nop.c)
 */

void __fastcall RootHub_ReleaseHardware(__int64 a1, __int64 a2, __int64 a3)
{
  _QWORD *v4; // rcx
  __int64 v5; // rsi
  _QWORD *v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rdx
  __int64 v9; // rdx

  v4 = *(_QWORD **)(a1 + 48);
  if ( v4 )
  {
    v5 = 0LL;
    if ( *(_DWORD *)(a1 + 16) )
    {
      do
      {
        v6 = v4;
        v7 = v4[10 * v5 + 4];
        if ( v7 )
        {
          LOBYTE(a3) = 1;
          (*(void (__fastcall **)(unsigned __int64, __int64, __int64))(WdfFunctions_01023 + 2560))(
            WPP_MAIN_CB.Dpc.ProcessorHistory,
            v7,
            a3);
          (*(void (__fastcall **)(unsigned __int64, _QWORD))(WdfFunctions_01023 + 1664))(
            WPP_MAIN_CB.Dpc.ProcessorHistory,
            *(_QWORD *)(*(_QWORD *)(a1 + 48) + 80 * v5 + 32));
          v4 = *(_QWORD **)(a1 + 48);
          v6 = v4;
        }
        v8 = v6[10 * v5 + 8];
        if ( v8 )
        {
          LOBYTE(a3) = 1;
          (*(void (__fastcall **)(unsigned __int64, __int64, __int64))(WdfFunctions_01023 + 2560))(
            WPP_MAIN_CB.Dpc.ProcessorHistory,
            v8,
            a3);
          (*(void (__fastcall **)(unsigned __int64, _QWORD))(WdfFunctions_01023 + 1664))(
            WPP_MAIN_CB.Dpc.ProcessorHistory,
            *(_QWORD *)(*(_QWORD *)(a1 + 48) + 80 * v5 + 64));
          v4 = *(_QWORD **)(a1 + 48);
          v6 = v4;
        }
        v9 = v6[10 * v5 + 9];
        if ( v9 )
        {
          LOBYTE(a3) = 1;
          (*(void (__fastcall **)(unsigned __int64, __int64, __int64))(WdfFunctions_01023 + 2560))(
            WPP_MAIN_CB.Dpc.ProcessorHistory,
            v9,
            a3);
          (*(void (__fastcall **)(unsigned __int64, _QWORD))(WdfFunctions_01023 + 1664))(
            WPP_MAIN_CB.Dpc.ProcessorHistory,
            *(_QWORD *)(*(_QWORD *)(a1 + 48) + 80 * v5 + 72));
          v4 = *(_QWORD **)(a1 + 48);
          v6 = v4;
        }
        v5 = (unsigned int)(v5 + 1);
      }
      while ( (unsigned int)v5 < *(_DWORD *)(a1 + 16) );
      v4 = v6;
    }
    ExFreePoolWithTag(v4, 0x49434858u);
    *(_QWORD *)(a1 + 48) = 0LL;
  }
}
