/*
 * XREFs of ?xxxNotifyImeShowStatus@@YAXPEAUtagWND@@@Z @ 0x1C01E44EC
 * Callers:
 *     xxxSetIMEShowStatus @ 0x1C011A8BC (xxxSetIMEShowStatus.c)
 *     xxxBroadcastImeShowStatusChange @ 0x1C01E4C50 (xxxBroadcastImeShowStatusChange.c)
 * Callees:
 *     unsafe_cast_fnid_or_class_to_PIMEWND @ 0x1C001C564 (unsafe_cast_fnid_or_class_to_PIMEWND.c)
 *     HMValidateHandleNoSecure @ 0x1C0072018 (HMValidateHandleNoSecure.c)
 *     ?xxxCheckImeShowStatus@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@@Z @ 0x1C00D98A8 (-xxxCheckImeShowStatus@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@@Z.c)
 *     ?xxxSendOpenStatusNotify@@YAXPEAUtagTHREADINFO@@PEAUtagIMEUI@@PEAUtagWND@@H@Z @ 0x1C01E48D8 (-xxxSendOpenStatusNotify@@YAXPEAUtagTHREADINFO@@PEAUtagIMEUI@@PEAUtagWND@@H@Z.c)
 */

void __fastcall xxxNotifyImeShowStatus(struct tagWND *a1)
{
  int v2; // r13d
  __int64 v3; // rdx
  ULONG64 *v4; // rsi
  __int64 v5; // r8
  __int64 v6; // rdi
  ULONG64 v7; // rsi
  ULONG64 v8; // rax
  BOOL v9; // r15d
  struct tagWND *v10; // r14

  v2 = 0;
  if ( (*gpsi & 4) != 0 && *(char *)(*((_QWORD *)a1 + 5) + 20LL) >= 0 )
  {
    v4 = (ULONG64 *)unsafe_cast_fnid_or_class_to_PIMEWND(a1);
    if ( v4 )
    {
      v6 = *((_QWORD *)a1 + 2);
      if ( v6 != gptiCurrent )
        KeAttachProcess(**(PRKPROCESS **)(v6 + 416));
      v7 = *v4;
      v8 = v7;
      if ( v7 >= MmUserProbeAddress )
        v8 = MmUserProbeAddress;
      v9 = (*(_DWORD *)(v8 + 44) & 0x20) != 0 && LODWORD(WPP_MAIN_CB.Dpc.ProcessorHistory);
      LOBYTE(v3) = 1;
      v10 = (struct tagWND *)HMValidateHandleNoSecure(*(_QWORD *)(v7 + 16), v3, v5);
      if ( v10 || (v10 = *(struct tagWND **)(*(_QWORD *)(*((_QWORD *)a1 + 2) + 424LL) + 120LL)) != 0LL )
      {
        v2 = 1;
        *(_DWORD *)(v7 + 44) ^= (v9 ^ *(_DWORD *)(v7 + 44)) & 1;
      }
      if ( v6 != gptiCurrent )
        KeDetachProcess();
      if ( v2 )
        xxxSendOpenStatusNotify((struct tagTHREADINFO *)v6, (struct tagIMEUI *)v7, v10, v9);
      if ( *(char *)(*((_QWORD *)a1 + 5) + 20LL) >= 0 )
        xxxCheckImeShowStatus(a1, 0LL);
    }
  }
}
