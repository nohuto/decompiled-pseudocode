/*
 * XREFs of BgkNotifyDisplayOwnershipLost @ 0x140292690
 * Callers:
 *     <none>
 * Callees:
 *     MmMapIoSpaceEx @ 0x140118AB0 (MmMapIoSpaceEx.c)
 *     BgkNotifyDisplayOwnershipChange @ 0x140178280 (BgkNotifyDisplayOwnershipChange.c)
 */

__int64 __fastcall BgkNotifyDisplayOwnershipLost(__int64 a1)
{
  __int64 v1; // rax
  __int64 result; // rax

  v1 = qword_14050A0A8;
  if ( a1 )
    v1 = a1;
  qword_14050A0A8 = v1;
  result = BgkNotifyDisplayOwnershipChange(0, (__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))BgkpResetDisplay);
  if ( dword_1405087D0 != 2 )
    return MmMapIoSpaceEx(655360LL, 0x20000LL, 0x204u);
  return result;
}
