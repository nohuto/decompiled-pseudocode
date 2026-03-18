/*
 * XREFs of RIMIDECreateDeviceInstancePath @ 0x1C011D640
 * Callers:
 *     RIMIDECreatePseudoHIDDevice @ 0x1C011E1AC (RIMIDECreatePseudoHIDDevice.c)
 *     RIMIDECreatePseudoMouseOrKeyboardDevice @ 0x1C011E450 (RIMIDECreatePseudoMouseOrKeyboardDevice.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0032A20 (WPP_RECORDER_SF_d.c)
 *     RtlUnicodeStringPrintf @ 0x1C011FF34 (RtlUnicodeStringPrintf.c)
 */

__int64 __fastcall RIMIDECreateDeviceInstancePath(
        NTSTATUS a1,
        unsigned __int16 a2,
        unsigned __int16 a3,
        struct _UNICODE_STRING *a4)
{
  unsigned int v4; // ebx
  unsigned __int16 v5; // r9
  NTSTATUS v6; // eax
  int v8; // [rsp+20h] [rbp-18h]
  NTSTATUS v9; // [rsp+28h] [rbp-10h]

  v4 = -1073741823;
  if ( a1 )
  {
    if ( a1 == 1 )
    {
      v6 = RtlUnicodeStringPrintf(a4, L"\\??\\Microsoft Keyboard RID\\%u", (unsigned int)dword_1C01D1E90);
    }
    else
    {
      if ( a1 != 2 )
      {
        v5 = 15;
        v9 = a1;
        goto LABEL_5;
      }
      v8 = dword_1C01D1E90;
      v6 = RtlUnicodeStringPrintf(a4, L"\\??\\Microsoft HID RID\\%04X_%04X\\%u", a2, a3, v8);
    }
  }
  else
  {
    v6 = RtlUnicodeStringPrintf(a4, L"\\??\\Microsoft Mouse RID\\%u", (unsigned int)dword_1C01D1E90);
  }
  v4 = v6;
  if ( v6 >= 0 )
  {
    ++dword_1C01D1E90;
    return v4;
  }
  v5 = 16;
  v9 = v6;
LABEL_5:
  WPP_RECORDER_SF_d(gRimLog, 2u, 0x13u, v5, (__int64)&WPP_432d1bb01b1f3454cb02163d6984f489_Traceguids, v9);
  return v4;
}
