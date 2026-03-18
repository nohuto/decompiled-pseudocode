/*
 * XREFs of ?SetProcDeviceRequest@@YAHPEAUtagPROCESSINFO@@PEAUtagRAWINPUTDEVICE@@PEAUtagPROCESS_HID_REQUEST@@KW4_REGISTER_RAW_INPUT_INTERNAL@@@Z @ 0x1C005A1DC
 * Callers:
 *     _RegisterRawInputDevices @ 0x1C0059A48 (_RegisterRawInputDevices.c)
 * Callees:
 *     ?SetLegacyDeviceFlags@@YAXPEAUtagPROCESS_HID_TABLE@@PEBUtagRAWINPUTDEVICE@@@Z @ 0x1C00058FC (-SetLegacyDeviceFlags@@YAXPEAUtagPROCESS_HID_TABLE@@PEBUtagRAWINPUTDEVICE@@@Z.c)
 *     UserSetLastError @ 0x1C003A8EC (UserSetLastError.c)
 *     ?InsertProcRequest@@YAHPEAUtagPROCESSINFO@@PEBUtagRAWINPUTDEVICE@@PEAUtagPROCESS_HID_REQUEST@@KHPEAUtagWND@@H@Z @ 0x1C005A314 (-InsertProcRequest@@YAHPEAUtagPROCESSINFO@@PEBUtagRAWINPUTDEVICE@@PEAUtagPROCESS_HID_REQUEST@@KH.c)
 *     ?AllocateHidProcessRequest@@YAPEAUtagPROCESS_HID_REQUEST@@GG@Z @ 0x1C005A614 (-AllocateHidProcessRequest@@YAPEAUtagPROCESS_HID_REQUEST@@GG@Z.c)
 *     ?IsLegacyDevice@@YAHGG@Z @ 0x1C005A668 (-IsLegacyDevice@@YAHGG@Z.c)
 *     ?RemoveProcRequest@@YAXPEAUtagPROCESSINFO@@PEAUtagPROCESS_HID_REQUEST@@KH@Z @ 0x1C01A2CB8 (-RemoveProcRequest@@YAXPEAUtagPROCESSINFO@@PEAUtagPROCESS_HID_REQUEST@@KH@Z.c)
 */

__int64 __fastcall SetProcDeviceRequest(
        __int64 a1,
        __int64 a2,
        struct tagPROCESS_HID_REQUEST *a3,
        unsigned int a4,
        int a5)
{
  struct tagPROCESS_HID_REQUEST *HidProcessRequest; // rbx
  int v9; // eax
  __int64 v10; // rcx
  int v11; // r12d
  __int64 v12; // rbp
  struct tagWND *v13; // r15
  unsigned int v14; // esi
  int v15; // eax
  __int64 v16; // rdx

  HidProcessRequest = a3;
  v9 = IsLegacyDevice(*(_WORD *)a2, *(_WORD *)(a2 + 2));
  v10 = *(_QWORD *)(a2 + 8);
  v11 = v9;
  if ( a5 == 1 )
  {
    *(_QWORD *)(a2 + 8) = 0LL;
    v12 = v10;
    goto LABEL_20;
  }
  v12 = 0LL;
  if ( !v10 )
  {
LABEL_20:
    v13 = 0LL;
    goto LABEL_4;
  }
  v13 = (struct tagWND *)ValidateHwnd(v10);
  if ( !v13 )
    return 0LL;
LABEL_4:
  v14 = 0;
  v15 = *(_DWORD *)(a2 + 4) & 0xF0;
  switch ( v15 )
  {
    case 32:
      v14 = 2;
      break;
    case 16:
      v14 = 3;
      break;
    case 0:
    case 48:
      v14 = 1;
      break;
  }
  if ( !a3 )
  {
    HidProcessRequest = AllocateHidProcessRequest(*(_WORD *)a2, *(_WORD *)(a2 + 2));
    if ( !HidProcessRequest )
    {
      UserSetLastError(8LL, v16);
      return 0LL;
    }
  }
  if ( v12 )
    *((_QWORD *)HidProcessRequest + 5) = v12;
  if ( a3 )
  {
    RemoveProcRequest((struct tagPROCESSINFO *)a1, a3, a4, v11);
    HidProcessRequest = a3;
  }
  if ( !(unsigned int)InsertProcRequest(
                        (struct tagPROCESSINFO *)a1,
                        (const struct tagRAWINPUTDEVICE *)a2,
                        HidProcessRequest,
                        v14,
                        v11,
                        v13,
                        a5 == 1) )
  {
    if ( HidProcessRequest )
      Win32FreePool(HidProcessRequest);
    return 0LL;
  }
  if ( v11 )
    SetLegacyDeviceFlags(*(struct tagPROCESS_HID_TABLE **)(a1 + 824), (const struct tagRAWINPUTDEVICE *)a2);
  return 1LL;
}
