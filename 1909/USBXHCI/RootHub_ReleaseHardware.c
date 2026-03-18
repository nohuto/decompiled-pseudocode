/*
 * XREFs of RootHub_ReleaseHardware @ 0x1C00692DC
 * Callers:
 *     Controller_WdfEvtDeviceReleaseHardware @ 0x1C0063E20 (Controller_WdfEvtDeviceReleaseHardware.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0008A20 (_guard_dispatch_icall_nop.c)
 */

void __fastcall RootHub_ReleaseHardware(__int64 a1, __int64 a2, __int64 a3)
{
  char *v4; // rcx
  unsigned int v5; // edi
  __int64 v6; // rsi
  char *v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rdx
  __int64 v10; // rdx

  v4 = *(char **)(a1 + 48);
  if ( v4 )
  {
    v5 = 0;
    if ( *(_DWORD *)(a1 + 16) )
    {
      do
      {
        v6 = 88LL * v5;
        v7 = v4;
        v8 = *(_QWORD *)&v4[v6 + 32];
        if ( v8 )
        {
          LOBYTE(a3) = 1;
          (*(void (__fastcall **)(unsigned __int64, __int64, __int64))(WdfFunctions_01023 + 2560))(
            WPP_MAIN_CB.Dpc.ProcessorHistory,
            v8,
            a3);
          (*(void (__fastcall **)(unsigned __int64, _QWORD))(WdfFunctions_01023 + 1664))(
            WPP_MAIN_CB.Dpc.ProcessorHistory,
            *(_QWORD *)(v6 + *(_QWORD *)(a1 + 48) + 32));
          v4 = *(char **)(a1 + 48);
          v7 = v4;
        }
        v9 = *(_QWORD *)&v7[v6 + 64];
        if ( v9 )
        {
          LOBYTE(a3) = 1;
          (*(void (__fastcall **)(unsigned __int64, __int64, __int64))(WdfFunctions_01023 + 2560))(
            WPP_MAIN_CB.Dpc.ProcessorHistory,
            v9,
            a3);
          (*(void (__fastcall **)(unsigned __int64, _QWORD))(WdfFunctions_01023 + 1664))(
            WPP_MAIN_CB.Dpc.ProcessorHistory,
            *(_QWORD *)(v6 + *(_QWORD *)(a1 + 48) + 64));
          v4 = *(char **)(a1 + 48);
          v7 = v4;
        }
        v10 = *(_QWORD *)&v7[v6 + 72];
        if ( v10 )
        {
          LOBYTE(a3) = 1;
          (*(void (__fastcall **)(unsigned __int64, __int64, __int64))(WdfFunctions_01023 + 2560))(
            WPP_MAIN_CB.Dpc.ProcessorHistory,
            v10,
            a3);
          (*(void (__fastcall **)(unsigned __int64, _QWORD))(WdfFunctions_01023 + 1664))(
            WPP_MAIN_CB.Dpc.ProcessorHistory,
            *(_QWORD *)(v6 + *(_QWORD *)(a1 + 48) + 72));
          v4 = *(char **)(a1 + 48);
          v7 = v4;
        }
        ++v5;
      }
      while ( v5 < *(_DWORD *)(a1 + 16) );
      v4 = v7;
    }
    ExFreePoolWithTag(v4, 0x49434858u);
    *(_QWORD *)(a1 + 48) = 0LL;
  }
}
