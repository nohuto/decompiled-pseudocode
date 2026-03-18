/*
 * XREFs of ?xxxNotifyImeShowStatus@@YAXPEAUtagWND@@@Z @ 0x1C01E466C
 * Callers:
 *     xxxSetIMEShowStatus @ 0x1C01403AC (xxxSetIMEShowStatus.c)
 *     xxxBroadcastImeShowStatusChange @ 0x1C01E4DD0 (xxxBroadcastImeShowStatusChange.c)
 * Callees:
 *     unsafe_cast_fnid_or_class_to_PIMEWND @ 0x1C0091408 (unsafe_cast_fnid_or_class_to_PIMEWND.c)
 *     HMValidateHandleNoSecure @ 0x1C00D0948 (HMValidateHandleNoSecure.c)
 *     ?xxxCheckImeShowStatus@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@@Z @ 0x1C00FDB68 (-xxxCheckImeShowStatus@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@@Z.c)
 *     ?xxxSendOpenStatusNotify@@YAXPEAUtagTHREADINFO@@PEAUtagIMEUI@@PEAUtagWND@@H@Z @ 0x1C01E4A58 (-xxxSendOpenStatusNotify@@YAXPEAUtagTHREADINFO@@PEAUtagIMEUI@@PEAUtagWND@@H@Z.c)
 */

void __fastcall xxxNotifyImeShowStatus(struct tagWND *a1)
{
  int v2; // r13d
  __int64 v3; // rdx
  ULONG64 *v4; // rsi
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 v7; // rdi
  ULONG64 v8; // rsi
  ULONG64 v9; // rax
  BOOL v10; // r15d
  struct tagWND *v11; // r14

  v2 = 0;
  if ( (*gpsi & 4) != 0 && *(char *)(*((_QWORD *)a1 + 5) + 20LL) >= 0 )
  {
    v4 = (ULONG64 *)unsafe_cast_fnid_or_class_to_PIMEWND(a1);
    if ( v4 )
    {
      v7 = *((_QWORD *)a1 + 2);
      if ( v7 != gptiCurrent )
        KeAttachProcess(**(PRKPROCESS **)(v7 + 416));
      v8 = *v4;
      v9 = v8;
      if ( v8 >= MmUserProbeAddress )
        v9 = MmUserProbeAddress;
      v10 = (*(_DWORD *)(v9 + 44) & 0x20) != 0 && LODWORD(WPP_MAIN_CB.Dpc.ProcessorHistory);
      LOBYTE(v3) = 1;
      v11 = (struct tagWND *)HMValidateHandleNoSecure(*(_QWORD *)(v8 + 16), v3, v5, v6);
      if ( v11 || (v11 = *(struct tagWND **)(*(_QWORD *)(*((_QWORD *)a1 + 2) + 424LL) + 120LL)) != 0LL )
      {
        v2 = 1;
        *(_DWORD *)(v8 + 44) ^= (v10 ^ *(_DWORD *)(v8 + 44)) & 1;
      }
      if ( v7 != gptiCurrent )
        KeDetachProcess();
      if ( v2 )
        xxxSendOpenStatusNotify((struct tagTHREADINFO *)v7, (struct tagIMEUI *)v8, v11, v10);
      if ( *(char *)(*((_QWORD *)a1 + 5) + 20LL) >= 0 )
        xxxCheckImeShowStatus(a1, 0LL);
    }
  }
}
