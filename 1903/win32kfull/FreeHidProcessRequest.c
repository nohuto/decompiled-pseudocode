/*
 * XREFs of FreeHidProcessRequest @ 0x1C010CC3C
 * Callers:
 *     DestroyThreadHidObjects @ 0x1C010C990 (DestroyThreadHidObjects.c)
 *     _RegisterRawInputDevices @ 0x1C010D2AC (_RegisterRawInputDevices.c)
 *     FreeProcessHidTable @ 0x1C013E364 (FreeProcessHidTable.c)
 * Callees:
 *     ?DerefPageOnlyRequest@@YAXPEAUtagPROCESS_HID_REQUEST@@PEAUtagPROCESS_HID_TABLE@@H@Z @ 0x1C0007E6C (-DerefPageOnlyRequest@@YAXPEAUtagPROCESS_HID_REQUEST@@PEAUtagPROCESS_HID_TABLE@@H@Z.c)
 *     ?IsLegacyDevice@@YAHGG@Z @ 0x1C010DB44 (-IsLegacyDevice@@YAHGG@Z.c)
 *     ?DerefIncludeRequest@@YAXPEAUtagPROCESS_HID_REQUEST@@PEAUtagPROCESS_HID_TABLE@@HH@Z @ 0x1C010DE4C (-DerefIncludeRequest@@YAXPEAUtagPROCESS_HID_REQUEST@@PEAUtagPROCESS_HID_TABLE@@HH@Z.c)
 *     ?DerefExcludeRequest@@YAXPEAUtagPROCESS_HID_REQUEST@@HH@Z @ 0x1C01D7988 (-DerefExcludeRequest@@YAXPEAUtagPROCESS_HID_REQUEST@@HH@Z.c)
 */

__int64 __fastcall FreeHidProcessRequest(struct tagPROCESS_HID_REQUEST *a1, int a2, struct tagPROCESS_HID_TABLE *a3)
{
  int v6; // ebp
  __int64 v7; // rax
  struct tagPROCESS_HID_REQUEST **v8; // rcx

  v6 = IsLegacyDevice(*((_WORD *)a1 + 8), *((_WORD *)a1 + 9));
  HMAssignmentUnlock((char *)a1 + 32);
  *((_QWORD *)a1 + 5) = 0LL;
  switch ( a2 )
  {
    case 1:
      DerefIncludeRequest(a1, a3, v6, 1);
      break;
    case 2:
      DerefPageOnlyRequest(a1, a3, 1);
      break;
    case 3:
      DerefExcludeRequest(a1, v6, 1);
      break;
  }
  v7 = *(_QWORD *)a1;
  if ( *(struct tagPROCESS_HID_REQUEST **)(*(_QWORD *)a1 + 8LL) != a1
    || (v8 = (struct tagPROCESS_HID_REQUEST **)*((_QWORD *)a1 + 1), *v8 != a1) )
  {
    __fastfail(3u);
  }
  *v8 = (struct tagPROCESS_HID_REQUEST *)v7;
  *(_QWORD *)(v7 + 8) = v8;
  return Win32FreePool(a1);
}
