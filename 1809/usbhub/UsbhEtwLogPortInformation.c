/*
 * XREFs of UsbhEtwLogPortInformation @ 0x1C001FB60
 * Callers:
 *     UsbhGetExtendedHubInformation @ 0x1C001F810 (UsbhGetExtendedHubInformation.c)
 *     UsbhEtwRundown @ 0x1C002B2BC (UsbhEtwRundown.c)
 * Callees:
 *     FdoExt @ 0x1C00122E0 (FdoExt.c)
 *     Log @ 0x1C0012D10 (Log.c)
 *     UsbhEtwWrite @ 0x1C001FE60 (UsbhEtwWrite.c)
 *     __security_check_cookie @ 0x1C002B380 (__security_check_cookie.c)
 *     UsbhTrapFatal_Dbg @ 0x1C003FD38 (UsbhTrapFatal_Dbg.c)
 *     UsbhEtwLogHubEventWithExtraData @ 0x1C005CC74 (UsbhEtwLogHubEventWithExtraData.c)
 */

void __fastcall UsbhEtwLogPortInformation(__int64 a1)
{
  _DWORD *v2; // r13
  unsigned __int16 v3; // di
  __int64 v4; // r15
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rdx
  int v10; // ecx
  __int64 v11; // rbx
  __int64 v12; // rax
  int v13; // ecx
  int *v14; // rsi
  __int64 v15; // rbx
  _BYTE v16[2]; // [rsp+80h] [rbp-21h] BYREF
  int v17; // [rsp+82h] [rbp-1Fh]
  int v18; // [rsp+86h] [rbp-1Bh]
  int v19; // [rsp+90h] [rbp-11h]
  __int16 v20; // [rsp+94h] [rbp-Dh]
  __int16 v21; // [rsp+96h] [rbp-Bh]
  __int16 v22; // [rsp+98h] [rbp-9h]
  __int16 v23; // [rsp+9Ah] [rbp-7h]
  __int16 v24; // [rsp+A0h] [rbp-1h]
  __int16 v25; // [rsp+A2h] [rbp+1h]
  int v26; // [rsp+A4h] [rbp+3h]
  int v27; // [rsp+A8h] [rbp+7h]
  int v33; // [rsp+C0h] [rbp+1Fh]

  if ( dword_1C006E650 )
  {
    v2 = FdoExt(a1);
    v3 = 1;
    v4 = *((_QWORD *)v2 + 377);
    while ( 1 )
    {
      if ( !a1 )
        UsbhTrapFatal_Dbg(0LL, 0LL);
      v5 = *(_QWORD *)(a1 + 64);
      if ( !v5 )
LABEL_43:
        UsbhTrapFatal_Dbg(a1, 0LL);
      if ( *(_DWORD *)v5 != 541218120 )
        UsbhTrapFatal_Dbg(a1, v5);
      if ( v3 > *(unsigned __int8 *)(v5 + 2938) )
        break;
      if ( (UsbhLogMask & 8) != 0 )
      {
        v6 = *(_QWORD *)(v5 + 888)
           + 32LL * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v5 + 880)) & *(_DWORD *)(v5 + 884));
        *(_DWORD *)v6 = 1413771367;
        *(_QWORD *)(v6 + 16) = v3;
        *(_QWORD *)(v6 + 8) = 0LL;
        *(_QWORD *)(v6 + 24) = 0LL;
      }
      if ( v3 )
      {
        v7 = *(_QWORD *)(a1 + 64);
        if ( !v7 )
          goto LABEL_43;
        if ( *(_DWORD *)v7 != 541218120 )
          UsbhTrapFatal_Dbg(a1, v7);
        if ( v3 <= *(unsigned __int8 *)(v7 + 2938) )
        {
          v8 = *(_QWORD *)(v7 + 3056);
          if ( v8 )
            Log(a1, 8, 1735410750, v3, 2928LL * v3 + v8 - 2928);
        }
      }
      if ( dword_1C006E650 )
      {
        v9 = *(_QWORD *)(a1 + 64);
        if ( !v9 )
          UsbhTrapFatal_Dbg(a1, 0LL);
        if ( *(_DWORD *)v9 != 541218120 )
          UsbhTrapFatal_Dbg(a1, v9);
        v10 = 0;
        v19 = *(_DWORD *)(v9 + 5192);
        v20 = *(_WORD *)(v9 + 5196);
        v21 = *(_DWORD *)(v9 + 5200);
        v22 = *(_WORD *)(v9 + 5228);
        v23 = *(_WORD *)(v9 + 5230);
        v24 = *(_WORD *)(v9 + 2548);
        v25 = *(_WORD *)(v9 + 2550);
        v26 = 0;
        v27 = *(unsigned __int16 *)(v9 + 5208);
        if ( *(_WORD *)(v9 + 5208) )
        {
          v10 = 1;
          v26 = 1;
        }
        if ( *(unsigned __int16 *)(v9 + 5210) )
          v26 = ++v10;
        if ( *(unsigned __int16 *)(v9 + 5212) )
          v26 = ++v10;
        if ( *(unsigned __int16 *)(v9 + 5214) )
          v26 = ++v10;
        if ( *(unsigned __int16 *)(v9 + 5216) )
          v26 = ++v10;
        if ( *(unsigned __int16 *)(v9 + 5218) )
          v26 = v10 + 1;
        v33 = *(_DWORD *)(v9 + 2536);
        v11 = v3;
        UsbhEtwWrite(&USBHUB_ETW_EVENT_HUB_PORT_ATTRIBUTES, 0LL);
      }
      else
      {
        v11 = v3;
      }
      v12 = *((_QWORD *)v2 + 378);
      if ( v12 )
      {
        v13 = *(_DWORD *)(v4 + 4 * v11);
        v14 = (int *)(v4 + 4 * v11);
        v15 = 28 * v11;
        if ( (v13 & 0x20) != 0 )
        {
          v16[0] = *(_BYTE *)(v12 + v15);
          v16[1] = *(_BYTE *)(v15 + *((_QWORD *)v2 + 378) + 1);
          v17 = *(_DWORD *)(v15 + *((_QWORD *)v2 + 378) + 4);
          v18 = *(_DWORD *)(v15 + *((_QWORD *)v2 + 378) + 8);
          UsbhEtwLogHubEventWithExtraData(a1, &USBHUB_ETW_EVENT_HUB_PORT_ACPI_UPC_VALUE, v3, v16, 10);
          v13 = *v14;
        }
        if ( (v13 & 0x40) != 0 )
          UsbhEtwLogHubEventWithExtraData(
            a1,
            &USBHUB_ETW_EVENT_HUB_PORT_ACPI_PLD_VALUE,
            v3,
            v15 + *((_QWORD *)v2 + 378) + 12LL,
            16);
      }
      ++v3;
    }
  }
}
