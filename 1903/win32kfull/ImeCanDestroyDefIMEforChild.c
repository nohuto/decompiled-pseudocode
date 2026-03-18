/*
 * XREFs of ImeCanDestroyDefIMEforChild @ 0x1C0091140
 * Callers:
 *     xxxDestroyWindow @ 0x1C0094E90 (xxxDestroyWindow.c)
 * Callees:
 *     unsafe_cast_fnid_or_class_to_PIMEWND @ 0x1C0091408 (unsafe_cast_fnid_or_class_to_PIMEWND.c)
 *     _GetDesktopWindow @ 0x1C00CADE0 (_GetDesktopWindow.c)
 *     IsChildSameThread @ 0x1C01E4B44 (IsChildSameThread.c)
 */

__int64 __fastcall ImeCanDestroyDefIMEforChild(__int64 a1, __int64 a2)
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
  v6 = *(_QWORD *)(a2 + 104);
  if ( !v6 || *(_QWORD *)(a2 + 16) == *(_QWORD *)(v6 + 16) )
    return 0LL;
  do
  {
    if ( v6 == GetDesktopWindow(v6) )
      break;
    if ( (unsigned int)IsChildSameThread(v6, a2) )
      return 0LL;
    v6 = *(_QWORD *)(v6 + 104);
  }
  while ( v6 );
  return 1LL;
}
