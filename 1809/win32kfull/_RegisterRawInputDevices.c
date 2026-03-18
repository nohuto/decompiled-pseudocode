/*
 * XREFs of _RegisterRawInputDevices @ 0x1C010345C
 * Callers:
 *     NtUserRegisterRawInputDevices @ 0x1C0102F70 (NtUserRegisterRawInputDevices.c)
 *     RegisterModernAppThreadForRawKeyboard @ 0x1C01C4F00 (RegisterModernAppThreadForRawKeyboard.c)
 *     UnregisterModernAppThreadForRawKeyboard @ 0x1C01C4FD4 (UnregisterModernAppThreadForRawKeyboard.c)
 *     ?RegisterTabletButtonHandler@@YAXXZ @ 0x1C01C8458 (-RegisterTabletButtonHandler@@YAXXZ.c)
 * Callees:
 *     UserSetLastError @ 0x1C0073CC4 (UserSetLastError.c)
 *     FreeHidProcessRequest @ 0x1C0102E38 (FreeHidProcessRequest.c)
 *     ?AdjustLegacyDeviceFlags@@YAXPEAUtagPROCESSINFO@@@Z @ 0x1C01030EC (-AdjustLegacyDeviceFlags@@YAXPEAUtagPROCESSINFO@@@Z.c)
 *     ?HidRequestValidityCheck@@YAHQEAUtagRAWINPUTDEVICE@@PEBUtagPROCESS_HID_TABLE@@W4_REGISTER_RAW_INPUT_INTERNAL@@@Z @ 0x1C0103658 (-HidRequestValidityCheck@@YAHQEAUtagRAWINPUTDEVICE@@PEBUtagPROCESS_HID_TABLE@@W4_REGISTER_RAW_IN.c)
 *     ?SearchProcessHidRequest@@YAPEAUtagPROCESS_HID_REQUEST@@PEAUtagPROCESSINFO@@GGPEAK@Z @ 0x1C0103824 (-SearchProcessHidRequest@@YAPEAUtagPROCESS_HID_REQUEST@@PEAUtagPROCESSINFO@@GGPEAK@Z.c)
 *     ?SetProcDeviceRequest@@YAHPEAUtagPROCESSINFO@@PEAUtagRAWINPUTDEVICE@@PEAUtagPROCESS_HID_REQUEST@@KW4_REGISTER_RAW_INPUT_INTERNAL@@@Z @ 0x1C01038BC (-SetProcDeviceRequest@@YAHPEAUtagPROCESSINFO@@PEAUtagRAWINPUTDEVICE@@PEAUtagPROCESS_HID_REQUEST@.c)
 *     ?IsLegacyDevice@@YAHGG@Z @ 0x1C0103D48 (-IsLegacyDevice@@YAHGG@Z.c)
 *     ?CleanupFreedTLCInfo@@YAXXZ @ 0x1C0103D70 (-CleanupFreedTLCInfo@@YAXXZ.c)
 */

__int64 __fastcall RegisterRawInputDevices(__int64 a1, unsigned int a2, unsigned int a3)
{
  __int64 CurrentProcessWin32Process; // rbx
  __int64 v7; // rax
  unsigned int v8; // edi
  __int128 *v9; // rsi
  __int64 v10; // rdx
  unsigned int v11; // esi
  _DWORD *v12; // rdi
  struct tagPROCESS_HID_REQUEST *v13; // rax
  unsigned int v14; // edi
  __int64 v15; // rbx
  __int64 v16; // r10
  __int64 i; // r9
  __int64 v19; // rax
  __int64 v20; // rdx
  __int64 v21; // r8
  __int64 v22; // r9
  _QWORD *v23; // rcx
  _QWORD *v24; // rax
  _QWORD *v25; // rax
  __int64 *v26; // r9
  __int16 v27; // r11
  __int64 *j; // rax
  __int128 v29; // [rsp+30h] [rbp-38h] BYREF
  unsigned int v30; // [rsp+78h] [rbp+10h] BYREF

  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(a1);
  v7 = *(_QWORD *)(CurrentProcessWin32Process + 832);
  if ( v7 )
  {
    *(_QWORD *)(v7 + 88) = 0LL;
    *(_DWORD *)(v7 + 96) = 0;
  }
  v8 = 0;
  if ( a2 )
  {
    v9 = (__int128 *)a1;
    do
    {
      v10 = *(_QWORD *)(CurrentProcessWin32Process + 832);
      v29 = *v9;
      if ( !(unsigned int)HidRequestValidityCheck(&v29, v10, a3) )
        goto LABEL_26;
      ++v8;
      ++v9;
    }
    while ( v8 < a2 );
  }
  if ( !*(_QWORD *)(CurrentProcessWin32Process + 832) )
  {
    v19 = Win32AllocPoolWithQuotaZInit(104LL, 1953002325LL);
    v23 = (_QWORD *)v19;
    if ( v19 )
    {
      v24 = (_QWORD *)(v19 + 16);
      v24[1] = v24;
      *v24 = v24;
      v23[5] = v23 + 4;
      v23[4] = v23 + 4;
      v23[7] = v23 + 6;
      v23[6] = v23 + 6;
      v25 = &RawInputManagerObject::gHidRequestTable[4];
      v20 = RawInputManagerObject::gHidRequestTable[4];
      if ( *(_QWORD **)(v20 + 8) != &RawInputManagerObject::gHidRequestTable[4] )
        __fastfail(3u);
      ++gnHidProcess;
      *v23 = v20;
      v23[1] = v25;
      *(_QWORD *)(v20 + 8) = v23;
      *v25 = v23;
    }
    else
    {
      v23 = 0LL;
    }
    *(_QWORD *)(CurrentProcessWin32Process + 832) = v23;
    if ( !v23 )
    {
      UserSetLastError(8LL, v20, v21, v22);
LABEL_26:
      v14 = 0;
      goto LABEL_14;
    }
  }
  v11 = 0;
  if ( a2 )
  {
    v12 = (_DWORD *)(a1 + 4);
    do
    {
      v13 = SearchProcessHidRequest(
              (struct tagPROCESSINFO *)CurrentProcessWin32Process,
              *((_WORD *)v12 - 2),
              *((_WORD *)v12 - 1),
              &v30);
      if ( (*v12 & 1) != 0 )
      {
        if ( v13 )
          FreeHidProcessRequest(v13, v30, *(struct tagPROCESS_HID_TABLE **)(CurrentProcessWin32Process + 832));
      }
      else if ( !(unsigned int)SetProcDeviceRequest(CurrentProcessWin32Process, a1 + 16LL * v11, v13, v30, a3) )
      {
        goto LABEL_26;
      }
      ++v11;
      v12 += 4;
    }
    while ( v11 < a2 );
  }
  v14 = 1;
LABEL_14:
  if ( *(_QWORD *)(CurrentProcessWin32Process + 832) )
  {
    AdjustLegacyDeviceFlags((struct tagPROCESSINFO *)CurrentProcessWin32Process);
    v15 = *(_QWORD *)(CurrentProcessWin32Process + 832);
    v16 = v15 + 48;
    for ( i = *(_QWORD *)(v15 + 48); i != v16; i = *v26 )
    {
      if ( !(unsigned int)IsLegacyDevice(*(_WORD *)(i + 16), *(_WORD *)(i + 18)) )
      {
        for ( j = *(__int64 **)(v15 + 32); j != (__int64 *)(v15 + 32); j = (__int64 *)*j )
        {
          if ( *((_WORD *)j + 8) == v27 )
            goto LABEL_35;
        }
        j = 0LL;
LABEL_35:
        if ( j )
        {
          if ( __CFSHR__(*((_DWORD *)v26 + 5), 4) )
          {
            --*(_DWORD *)(v26[3] + 40);
            *((_DWORD *)v26 + 5) &= ~8u;
          }
        }
        else if ( !__CFSHR__(*((_DWORD *)v26 + 5), 4) )
        {
          ++*(_DWORD *)(v26[3] + 40);
          *((_DWORD *)v26 + 5) |= 8u;
        }
      }
    }
    CleanupFreedTLCInfo();
    CHidInput::HandleDirectStartStopDeviceReadRequest(gpHidInput);
  }
  return v14;
}
