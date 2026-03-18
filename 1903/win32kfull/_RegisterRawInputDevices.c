/*
 * XREFs of _RegisterRawInputDevices @ 0x1C010D2AC
 * Callers:
 *     NtUserRegisterRawInputDevices @ 0x1C010CD00 (NtUserRegisterRawInputDevices.c)
 *     RegisterModernAppThreadForRawKeyboard @ 0x1C01D82F0 (RegisterModernAppThreadForRawKeyboard.c)
 *     UnregisterModernAppThreadForRawKeyboard @ 0x1C01D8398 (UnregisterModernAppThreadForRawKeyboard.c)
 *     ?RegisterTabletButtonHandler@@YAXXZ @ 0x1C01DB9B4 (-RegisterTabletButtonHandler@@YAXXZ.c)
 * Callees:
 *     UserSetLastError @ 0x1C008B3AC (UserSetLastError.c)
 *     AllocateProcessHidTable @ 0x1C010CB9C (AllocateProcessHidTable.c)
 *     FreeHidProcessRequest @ 0x1C010CC3C (FreeHidProcessRequest.c)
 *     ?CleanupFreedTLCInfo@@YAXXZ @ 0x1C010CEB0 (-CleanupFreedTLCInfo@@YAXXZ.c)
 *     ?AdjustLegacyDeviceFlags@@YAXPEAUtagPROCESSINFO@@@Z @ 0x1C010CF3C (-AdjustLegacyDeviceFlags@@YAXPEAUtagPROCESSINFO@@@Z.c)
 *     ?HidRequestValidityCheck@@YAHQEAUtagRAWINPUTDEVICE@@PEBUtagPROCESS_HID_TABLE@@W4_REGISTER_RAW_INPUT_INTERNAL@@@Z @ 0x1C010D444 (-HidRequestValidityCheck@@YAHQEAUtagRAWINPUTDEVICE@@PEBUtagPROCESS_HID_TABLE@@W4_REGISTER_RAW_IN.c)
 *     ?SearchProcessHidRequest@@YAPEAUtagPROCESS_HID_REQUEST@@PEAUtagPROCESSINFO@@GGPEAK@Z @ 0x1C010D610 (-SearchProcessHidRequest@@YAPEAUtagPROCESS_HID_REQUEST@@PEAUtagPROCESSINFO@@GGPEAK@Z.c)
 *     ?SetProcDeviceRequest@@YAHPEAUtagPROCESSINFO@@PEAUtagRAWINPUTDEVICE@@PEAUtagPROCESS_HID_REQUEST@@KW4_REGISTER_RAW_INPUT_INTERNAL@@@Z @ 0x1C010D6A8 (-SetProcDeviceRequest@@YAHPEAUtagPROCESSINFO@@PEAUtagRAWINPUTDEVICE@@PEAUtagPROCESS_HID_REQUEST@.c)
 *     ?IsLegacyDevice@@YAHGG@Z @ 0x1C010DB44 (-IsLegacyDevice@@YAHGG@Z.c)
 */

__int64 __fastcall RegisterRawInputDevices(__int64 a1, __int64 a2, unsigned int a3)
{
  unsigned int v4; // ebp
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
  __int64 ProcessHidTable; // rax
  __int64 v20; // rdx
  __int64 v21; // r8
  __int64 v22; // r9
  __int64 *v23; // r9
  __int16 v24; // r11
  __int64 *j; // rax
  __int128 v26; // [rsp+30h] [rbp-38h] BYREF
  unsigned int v27; // [rsp+78h] [rbp+10h] BYREF

  v4 = a2;
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(a1, a2);
  v7 = *(_QWORD *)(CurrentProcessWin32Process + 824);
  if ( v7 )
  {
    *(_QWORD *)(v7 + 88) = 0LL;
    *(_DWORD *)(v7 + 96) = 0;
    v7 = *(_QWORD *)(CurrentProcessWin32Process + 824);
  }
  v8 = 0;
  if ( v4 )
  {
    v9 = (__int128 *)a1;
    while ( 1 )
    {
      v10 = *(_QWORD *)(CurrentProcessWin32Process + 824);
      v26 = *v9;
      if ( !(unsigned int)HidRequestValidityCheck(&v26, v10, a3) )
        goto LABEL_24;
      ++v8;
      ++v9;
      if ( v8 >= v4 )
      {
        v7 = *(_QWORD *)(CurrentProcessWin32Process + 824);
        break;
      }
    }
  }
  if ( !v7 )
  {
    ProcessHidTable = AllocateProcessHidTable();
    *(_QWORD *)(CurrentProcessWin32Process + 824) = ProcessHidTable;
    if ( !ProcessHidTable )
    {
      UserSetLastError(8LL, v20, v21, v22);
LABEL_24:
      v14 = 0;
      goto LABEL_15;
    }
  }
  v11 = 0;
  if ( v4 )
  {
    v12 = (_DWORD *)(a1 + 4);
    do
    {
      v13 = SearchProcessHidRequest(
              (struct tagPROCESSINFO *)CurrentProcessWin32Process,
              *((_WORD *)v12 - 2),
              *((_WORD *)v12 - 1),
              &v27);
      if ( (*v12 & 1) != 0 )
      {
        if ( v13 )
          FreeHidProcessRequest(v13, v27, *(struct tagPROCESS_HID_TABLE **)(CurrentProcessWin32Process + 824));
      }
      else if ( !(unsigned int)SetProcDeviceRequest(CurrentProcessWin32Process, a1 + 16LL * v11, v13, v27, a3) )
      {
        goto LABEL_24;
      }
      ++v11;
      v12 += 4;
    }
    while ( v11 < v4 );
  }
  v14 = 1;
LABEL_15:
  if ( *(_QWORD *)(CurrentProcessWin32Process + 824) )
  {
    AdjustLegacyDeviceFlags((struct tagPROCESSINFO *)CurrentProcessWin32Process);
    v15 = *(_QWORD *)(CurrentProcessWin32Process + 824);
    v16 = v15 + 48;
    for ( i = *(_QWORD *)(v15 + 48); i != v16; i = *v23 )
    {
      if ( !(unsigned int)IsLegacyDevice(*(_WORD *)(i + 16), *(_WORD *)(i + 18)) )
      {
        for ( j = *(__int64 **)(v15 + 32); j != (__int64 *)(v15 + 32); j = (__int64 *)*j )
        {
          if ( *((_WORD *)j + 8) == v24 )
            goto LABEL_31;
        }
        j = 0LL;
LABEL_31:
        if ( j )
        {
          if ( __CFSHR__(*((_DWORD *)v23 + 5), 4) )
          {
            --*(_DWORD *)(v23[3] + 40);
            *((_DWORD *)v23 + 5) &= ~8u;
          }
        }
        else if ( !__CFSHR__(*((_DWORD *)v23 + 5), 4) )
        {
          ++*(_DWORD *)(v23[3] + 40);
          *((_DWORD *)v23 + 5) |= 8u;
        }
      }
    }
    CleanupFreedTLCInfo();
    CHidInput::HandleDirectStartStopDeviceReadRequest(gpHidInput);
  }
  return v14;
}
