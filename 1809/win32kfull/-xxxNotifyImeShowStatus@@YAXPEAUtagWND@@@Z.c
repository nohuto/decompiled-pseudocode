/*
 * XREFs of ?xxxNotifyImeShowStatus@@YAXPEAUtagWND@@@Z @ 0x1C01CF9E0
 * Callers:
 *     xxxSetIMEShowStatus @ 0x1C0135574 (xxxSetIMEShowStatus.c)
 *     xxxBroadcastImeShowStatusChange @ 0x1C01CFFB0 (xxxBroadcastImeShowStatusChange.c)
 * Callees:
 *     HMValidateHandleNoSecure @ 0x1C003730C (HMValidateHandleNoSecure.c)
 *     unsafe_cast_fnid_or_class_to_PIMEWND @ 0x1C00AD7BC (unsafe_cast_fnid_or_class_to_PIMEWND.c)
 *     ?xxxCheckImeShowStatus@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@@Z @ 0x1C00F2738 (-xxxCheckImeShowStatus@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@@Z.c)
 *     ?xxxSendOpenStatusNotify@@YAXPEAUtagTHREADINFO@@PEAUtagIMEUI@@PEAUtagWND@@H@Z @ 0x1C01CFDAC (-xxxSendOpenStatusNotify@@YAXPEAUtagTHREADINFO@@PEAUtagIMEUI@@PEAUtagWND@@H@Z.c)
 */

void __fastcall xxxNotifyImeShowStatus(struct tagWND *a1)
{
  int v2; // r13d
  __int64 v3; // rdx
  ULONG64 *v4; // rsi
  __int64 v5; // rdi
  ULONG64 v6; // rsi
  ULONG64 v7; // rax
  BOOL v8; // r15d
  struct tagWND *v9; // r14

  v2 = 0;
  if ( (*gpsi & 4) != 0 && *(char *)(*((_QWORD *)a1 + 5) + 20LL) >= 0 )
  {
    v4 = (ULONG64 *)unsafe_cast_fnid_or_class_to_PIMEWND(a1);
    if ( v4 )
    {
      v5 = *((_QWORD *)a1 + 2);
      if ( v5 != gptiCurrent )
        KeAttachProcess(**(PRKPROCESS **)(v5 + 424));
      v6 = *v4;
      v7 = v6;
      if ( v6 >= MmUserProbeAddress )
        v7 = MmUserProbeAddress;
      v8 = (*(_DWORD *)(v7 + 44) & 0x20) != 0 && gfIMEShowStatus;
      LOBYTE(v3) = 1;
      v9 = (struct tagWND *)HMValidateHandleNoSecure(*(_QWORD *)(v6 + 16), v3);
      if ( v9 || (v9 = *(struct tagWND **)(*(_QWORD *)(*((_QWORD *)a1 + 2) + 432LL) + 112LL)) != 0LL )
      {
        v2 = 1;
        *(_DWORD *)(v6 + 44) ^= (v8 ^ *(_DWORD *)(v6 + 44)) & 1;
      }
      if ( v5 != gptiCurrent )
        KeDetachProcess();
      if ( v2 )
        xxxSendOpenStatusNotify((struct tagTHREADINFO *)v5, (struct tagIMEUI *)v6, v9, v8);
      if ( *(char *)(*((_QWORD *)a1 + 5) + 20LL) >= 0 )
        xxxCheckImeShowStatus(a1, 0LL);
    }
  }
}
