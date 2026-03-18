/*
 * XREFs of ?HidIsRequestedByThisProcess@@YAPEAUtagPROCESS_HID_REQUEST@@PEAUDEVICEINFO@@PEAUtagPROCESS_HID_TABLE@@@Z @ 0x1C01D7A04
 * Callers:
 *     xxxProcessHidInput @ 0x1C01D8BF0 (xxxProcessHidInput.c)
 * Callees:
 *     ?InProcessDeviceTypeRequestTable@@YAPEAUtagPROCESS_HID_REQUEST@@PEAUtagPROCESS_HID_TABLE@@GG@Z @ 0x1C010D1F0 (-InProcessDeviceTypeRequestTable@@YAPEAUtagPROCESS_HID_REQUEST@@PEAUtagPROCESS_HID_TABLE@@GG@Z.c)
 */

struct tagPROCESS_HID_REQUEST *__fastcall HidIsRequestedByThisProcess(
        struct DEVICEINFO *a1,
        struct tagPROCESS_HID_TABLE *a2)
{
  struct tagPROCESS_HID_REQUEST *result; // rax
  __int64 v4; // rax
  __int16 v5; // si
  __int16 v6; // di

  if ( !a2 )
    return 0LL;
  v4 = *((_QWORD *)a1 + 58);
  v5 = *(_WORD *)(v4 + 42);
  v6 = *(_WORD *)(v4 + 40);
  if ( __PAIR32__(*((_WORD *)a2 + 48), *((_WORD *)a2 + 49)) == __PAIR32__(v5, v6) )
    return (struct tagPROCESS_HID_REQUEST *)*((_QWORD *)a2 + 11);
  result = InProcessDeviceTypeRequestTable(a2, v5, v6);
  if ( result )
  {
    *((_WORD *)a2 + 48) = v5;
    *((_WORD *)a2 + 49) = v6;
    *((_QWORD *)a2 + 11) = result;
  }
  return result;
}
