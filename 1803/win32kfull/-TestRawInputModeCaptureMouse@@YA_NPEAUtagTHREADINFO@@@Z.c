/*
 * XREFs of ?TestRawInputModeCaptureMouse@@YA_NPEAUtagTHREADINFO@@@Z @ 0x1C0139DB8
 * Callers:
 *     zzzUpdateCursorImage @ 0x1C001E000 (zzzUpdateCursorImage.c)
 *     UpdateCursorImageForMonitorDpi @ 0x1C006A0F8 (UpdateCursorImageForMonitorDpi.c)
 *     SetPointer @ 0x1C00C09D0 (SetPointer.c)
 * Callees:
 *     HasHidTable @ 0x1C001E310 (HasHidTable.c)
 */

bool __fastcall TestRawInputModeCaptureMouse(struct tagTHREADINFO *a1)
{
  char v2; // bl

  v2 = 0;
  if ( !(unsigned __int8)IsSpatialDelegationEnabledForThread(a1) && (unsigned int)HasHidTable((__int64)a1) )
    return (*(_DWORD *)(*(_QWORD *)(*((_QWORD *)a1 + 52) + 824LL) + 100LL) & 0x100) != 0;
  return v2;
}
