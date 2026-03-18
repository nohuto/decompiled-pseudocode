/*
 * XREFs of _RegisterRawInputDevices @ 0x1C0059A48
 * Callers:
 *     NtUserRegisterRawInputDevices @ 0x1C00598F0 (NtUserRegisterRawInputDevices.c)
 *     RegisterModernAppThreadForRawKeyboard @ 0x1C01A3200 (RegisterModernAppThreadForRawKeyboard.c)
 *     UnregisterModernAppThreadForRawKeyboard @ 0x1C01A32A8 (UnregisterModernAppThreadForRawKeyboard.c)
 *     ?RegisterTabletButtonHandler@@YAXXZ @ 0x1C01A6490 (-RegisterTabletButtonHandler@@YAXXZ.c)
 * Callees:
 *     UserSetLastError @ 0x1C003A8EC (UserSetLastError.c)
 *     FreeHidProcessRequest @ 0x1C00579BC (FreeHidProcessRequest.c)
 *     ?HidRequestValidityCheck@@YAHQEAUtagRAWINPUTDEVICE@@PEBUtagPROCESS_HID_TABLE@@W4_REGISTER_RAW_INPUT_INTERNAL@@@Z @ 0x1C0059C30 (-HidRequestValidityCheck@@YAHQEAUtagRAWINPUTDEVICE@@PEBUtagPROCESS_HID_TABLE@@W4_REGISTER_RAW_IN.c)
 *     ?SearchProcessHidRequest@@YAPEAUtagPROCESS_HID_REQUEST@@PEAUtagPROCESSINFO@@GGPEAK@Z @ 0x1C0059DE4 (-SearchProcessHidRequest@@YAPEAUtagPROCESS_HID_REQUEST@@PEAUtagPROCESSINFO@@GGPEAK@Z.c)
 *     ?AdjustLegacyDeviceFlags@@YAXPEAUtagPROCESSINFO@@@Z @ 0x1C0059E7C (-AdjustLegacyDeviceFlags@@YAXPEAUtagPROCESSINFO@@@Z.c)
 *     ?SetProcDeviceRequest@@YAHPEAUtagPROCESSINFO@@PEAUtagRAWINPUTDEVICE@@PEAUtagPROCESS_HID_REQUEST@@KW4_REGISTER_RAW_INPUT_INTERNAL@@@Z @ 0x1C005A1DC (-SetProcDeviceRequest@@YAHPEAUtagPROCESSINFO@@PEAUtagRAWINPUTDEVICE@@PEAUtagPROCESS_HID_REQUEST@.c)
 *     ?IsLegacyDevice@@YAHGG@Z @ 0x1C005A668 (-IsLegacyDevice@@YAHGG@Z.c)
 *     ?CleanupFreedTLCInfo@@YAXXZ @ 0x1C005A690 (-CleanupFreedTLCInfo@@YAXXZ.c)
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
  __int64 i; // r8
  __int64 v19; // rax
  __int64 v20; // rdx
  _QWORD *v21; // rcx
  _QWORD *v22; // rax
  _QWORD *v23; // rax
  __int64 *v24; // r8
  __int16 v25; // r11
  __int64 *j; // rax
  __int128 v27; // [rsp+30h] [rbp-38h] BYREF
  unsigned int v28; // [rsp+78h] [rbp+10h] BYREF

  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(a1);
  v7 = *(_QWORD *)(CurrentProcessWin32Process + 824);
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
      v10 = *(_QWORD *)(CurrentProcessWin32Process + 824);
      v27 = *v9;
      if ( !(unsigned int)HidRequestValidityCheck(&v27, v10, a3) )
        goto LABEL_26;
      ++v8;
      ++v9;
    }
    while ( v8 < a2 );
  }
  if ( !*(_QWORD *)(CurrentProcessWin32Process + 824) )
  {
    v19 = Win32AllocPoolWithQuotaZInit(104LL, 1953002325LL);
    v21 = (_QWORD *)v19;
    if ( v19 )
    {
      v22 = (_QWORD *)(v19 + 16);
      v22[1] = v22;
      *v22 = v22;
      v21[5] = v21 + 4;
      v21[4] = v21 + 4;
      v21[7] = v21 + 6;
      v21[6] = v21 + 6;
      v23 = &RawInputManagerObject::gHidRequestTable[4];
      v20 = RawInputManagerObject::gHidRequestTable[4];
      if ( *(_QWORD **)(v20 + 8) != &RawInputManagerObject::gHidRequestTable[4] )
        __fastfail(3u);
      ++gnHidProcess;
      *v21 = v20;
      v21[1] = v23;
      *(_QWORD *)(v20 + 8) = v21;
      *v23 = v21;
    }
    else
    {
      v21 = 0LL;
    }
    *(_QWORD *)(CurrentProcessWin32Process + 824) = v21;
    if ( !v21 )
    {
      UserSetLastError(8LL, v20);
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
              &v28);
      if ( (*v12 & 1) != 0 )
      {
        if ( v13 )
          FreeHidProcessRequest(v13, v28, *(struct tagPROCESS_HID_TABLE **)(CurrentProcessWin32Process + 824));
      }
      else if ( !(unsigned int)SetProcDeviceRequest(CurrentProcessWin32Process, a1 + 16LL * v11, v13, v28, a3) )
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
  if ( *(_QWORD *)(CurrentProcessWin32Process + 824) )
  {
    AdjustLegacyDeviceFlags((struct tagPROCESSINFO *)CurrentProcessWin32Process);
    v15 = *(_QWORD *)(CurrentProcessWin32Process + 824);
    v16 = v15 + 48;
    for ( i = *(_QWORD *)(v15 + 48); i != v16; i = *v24 )
    {
      if ( !(unsigned int)IsLegacyDevice(*(_WORD *)(i + 16), *(_WORD *)(i + 18)) )
      {
        for ( j = *(__int64 **)(v15 + 32); j != (__int64 *)(v15 + 32); j = (__int64 *)*j )
        {
          if ( *((_WORD *)j + 8) == v25 )
            goto LABEL_35;
        }
        j = 0LL;
LABEL_35:
        if ( j )
        {
          if ( __CFSHR__(*((_DWORD *)v24 + 5), 4) )
          {
            --*(_DWORD *)(v24[3] + 40);
            *((_DWORD *)v24 + 5) &= ~8u;
          }
        }
        else if ( !__CFSHR__(*((_DWORD *)v24 + 5), 4) )
        {
          ++*(_DWORD *)(v24[3] + 40);
          *((_DWORD *)v24 + 5) |= 8u;
        }
      }
    }
    CleanupFreedTLCInfo();
    CHidInput::HandleDirectStartStopDeviceReadRequest(gpHidInput);
  }
  return v14;
}
