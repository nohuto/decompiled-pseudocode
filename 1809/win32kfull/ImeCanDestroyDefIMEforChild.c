/*
 * XREFs of ImeCanDestroyDefIMEforChild @ 0x1C00AD5D8
 * Callers:
 *     xxxDestroyWindow @ 0x1C001BB70 (xxxDestroyWindow.c)
 * Callees:
 *     IsChildSameThread @ 0x1C0004BCC (IsChildSameThread.c)
 *     _GetDesktopWindow @ 0x1C0043A0C (_GetDesktopWindow.c)
 *     unsafe_cast_fnid_or_class_to_PIMEWND @ 0x1C00AD7BC (unsafe_cast_fnid_or_class_to_PIMEWND.c)
 */

__int64 __fastcall ImeCanDestroyDefIMEforChild(__int64 a1, _QWORD *a2)
{
  ULONG64 *v3; // rax
  ULONG64 v4; // rdx
  __int64 v6; // rbx

  v3 = (ULONG64 *)unsafe_cast_fnid_or_class_to_PIMEWND(a1);
  if ( !v3 )
    return 0LL;
  v4 = *v3;
  if ( !*v3 || v4 == -1LL )
    return 0LL;
  if ( v4 >= MmUserProbeAddress )
    v4 = MmUserProbeAddress;
  if ( (*(_DWORD *)(v4 + 44) & 0x10) == 0 )
    return 0LL;
  v6 = a2[10];
  if ( !v6 || a2[2] == *(_QWORD *)(v6 + 16) )
    return 0LL;
  do
  {
    if ( v6 == GetDesktopWindow(v6) )
      break;
    if ( (unsigned int)IsChildSameThread(v6, a2) )
      return 0LL;
    v6 = *(_QWORD *)(v6 + 80);
  }
  while ( v6 );
  return 1LL;
}
