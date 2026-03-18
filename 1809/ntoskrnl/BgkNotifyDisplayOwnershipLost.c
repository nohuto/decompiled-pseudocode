/*
 * XREFs of BgkNotifyDisplayOwnershipLost @ 0x14027DB00
 * Callers:
 *     <none>
 * Callees:
 *     MmMapIoSpaceEx @ 0x1400E5D40 (MmMapIoSpaceEx.c)
 *     BgkNotifyDisplayOwnershipChange @ 0x14016EAC0 (BgkNotifyDisplayOwnershipChange.c)
 */

__int64 __fastcall BgkNotifyDisplayOwnershipLost(__int64 a1)
{
  __int64 v1; // rax
  __int64 result; // rax

  v1 = qword_1404DC948;
  if ( a1 )
    v1 = a1;
  qword_1404DC948 = v1;
  result = BgkNotifyDisplayOwnershipChange(0, (__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))&BgkpResetDisplay);
  if ( dword_1404DB180 != 2 )
    return MmMapIoSpaceEx(655360LL, 0x20000LL, 0x204u);
  return result;
}
