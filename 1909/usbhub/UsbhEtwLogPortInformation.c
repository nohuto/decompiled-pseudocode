/*
 * XREFs of UsbhEtwLogPortInformation @ 0x1C00208A0
 * Callers:
 *     UsbhGetExtendedHubInformation @ 0x1C0020500 (UsbhGetExtendedHubInformation.c)
 *     UsbhEtwRundown @ 0x1C002C4EC (UsbhEtwRundown.c)
 * Callees:
 *     FdoExt @ 0x1C0012920 (FdoExt.c)
 *     Log @ 0x1C0013360 (Log.c)
 *     UsbhEtwWrite @ 0x1C0020BB0 (UsbhEtwWrite.c)
 *     __security_check_cookie @ 0x1C002C5B0 (__security_check_cookie.c)
 *     memset @ 0x1C002CA00 (memset.c)
 *     UsbhTrapFatal_Dbg @ 0x1C00413A8 (UsbhTrapFatal_Dbg.c)
 *     UsbhEtwLogHubEventWithExtraData @ 0x1C005F2C4 (UsbhEtwLogHubEventWithExtraData.c)
 */

__int64 __fastcall UsbhEtwLogPortInformation(__int64 a1)
{
  __int64 result; // rax
  _DWORD *v3; // r13
  unsigned __int16 v4; // di
  __int64 v5; // r15
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rdx
  int v11; // ecx
  __int64 v12; // rbx
  __int64 v13; // rax
  int v14; // ecx
  int *v15; // rsi
  __int64 v16; // rbx
  _QWORD v17[2]; // [rsp+80h] [rbp-21h] BYREF
  __int64 v18; // [rsp+90h] [rbp-11h]
  int v19; // [rsp+98h] [rbp-9h]
  _DWORD v20[9]; // [rsp+A0h] [rbp-1h] BYREF

  result = 0LL;
  v17[0] = 0LL;
  LOWORD(v17[1]) = 0;
  if ( dword_1C006F650 )
  {
    v3 = FdoExt(a1);
    v4 = 1;
    v5 = *((_QWORD *)v3 + 377);
    while ( 1 )
    {
      if ( !a1 )
        UsbhTrapFatal_Dbg(0LL, 0LL);
      v6 = *(_QWORD *)(a1 + 64);
      if ( !v6 )
LABEL_44:
        UsbhTrapFatal_Dbg(a1, 0LL);
      if ( *(_DWORD *)v6 != 541218120 )
        UsbhTrapFatal_Dbg(a1, v6);
      result = *(unsigned __int8 *)(v6 + 2938);
      if ( v4 > (unsigned __int16)result )
        break;
      if ( (UsbhLogMask & 8) != 0 )
      {
        v7 = *(_QWORD *)(v6 + 888)
           + 32LL * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v6 + 880)) & *(_DWORD *)(v6 + 884));
        *(_DWORD *)v7 = 1413771367;
        *(_QWORD *)(v7 + 16) = v4;
        *(_QWORD *)(v7 + 8) = 0LL;
        *(_QWORD *)(v7 + 24) = 0LL;
      }
      if ( v4 )
      {
        v8 = *(_QWORD *)(a1 + 64);
        if ( !v8 )
          goto LABEL_44;
        if ( *(_DWORD *)v8 != 541218120 )
          UsbhTrapFatal_Dbg(a1, v8);
        if ( v4 <= *(unsigned __int8 *)(v8 + 2938) )
        {
          v9 = *(_QWORD *)(v8 + 3056);
          if ( v9 )
            Log(a1, 8, 1735410750, v4, 2928LL * v4 + v9 - 2928);
        }
      }
      v18 = 0LL;
      v19 = 0;
      memset(v20, 0, sizeof(v20));
      if ( dword_1C006F650 )
      {
        v10 = *(_QWORD *)(a1 + 64);
        if ( !v10 )
          UsbhTrapFatal_Dbg(a1, 0LL);
        if ( *(_DWORD *)v10 != 541218120 )
          UsbhTrapFatal_Dbg(a1, v10);
        v11 = 0;
        LODWORD(v18) = *(_DWORD *)(v10 + 5192);
        WORD2(v18) = *(_WORD *)(v10 + 5196);
        HIWORD(v18) = *(_DWORD *)(v10 + 5200);
        v19 = *(_DWORD *)(v10 + 5228);
        v20[0] = *(_DWORD *)(v10 + 2548);
        v20[1] = 0;
        v20[2] = *(unsigned __int16 *)(v10 + 5208);
        if ( *(_WORD *)(v10 + 5208) )
        {
          v11 = 1;
          v20[1] = 1;
        }
        v20[3] = *(unsigned __int16 *)(v10 + 5210);
        if ( v20[3] )
          v20[1] = ++v11;
        v20[4] = *(unsigned __int16 *)(v10 + 5212);
        if ( v20[4] )
          v20[1] = ++v11;
        v20[5] = *(unsigned __int16 *)(v10 + 5214);
        if ( v20[5] )
          v20[1] = ++v11;
        v20[6] = *(unsigned __int16 *)(v10 + 5216);
        if ( v20[6] )
          v20[1] = ++v11;
        v20[7] = *(unsigned __int16 *)(v10 + 5218);
        if ( v20[7] )
          v20[1] = v11 + 1;
        v20[8] = *(_DWORD *)(v10 + 2536);
        v12 = v4;
        UsbhEtwWrite(&USBHUB_ETW_EVENT_HUB_PORT_ATTRIBUTES, 0LL);
      }
      else
      {
        v12 = v4;
      }
      v13 = *((_QWORD *)v3 + 378);
      if ( v13 )
      {
        v14 = *(_DWORD *)(v5 + 4 * v12);
        v15 = (int *)(v5 + 4 * v12);
        v16 = 28 * v12;
        if ( (v14 & 0x20) != 0 )
        {
          LOBYTE(v17[0]) = *(_BYTE *)(v13 + v16);
          BYTE1(v17[0]) = *(_BYTE *)(v16 + *((_QWORD *)v3 + 378) + 1);
          *(_QWORD *)((char *)v17 + 2) = *(_QWORD *)(v16 + *((_QWORD *)v3 + 378) + 4);
          UsbhEtwLogHubEventWithExtraData(a1, &USBHUB_ETW_EVENT_HUB_PORT_ACPI_UPC_VALUE, v4, v17, 10);
          v14 = *v15;
        }
        if ( (v14 & 0x40) != 0 )
          UsbhEtwLogHubEventWithExtraData(
            a1,
            &USBHUB_ETW_EVENT_HUB_PORT_ACPI_PLD_VALUE,
            v4,
            v16 + *((_QWORD *)v3 + 378) + 12LL,
            16);
      }
      ++v4;
    }
  }
  return result;
}
