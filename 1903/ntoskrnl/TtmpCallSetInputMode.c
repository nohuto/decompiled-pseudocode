/*
 * XREFs of TtmpCallSetInputMode @ 0x1408BB60C
 * Callers:
 *     TtmpPushTerminalState @ 0x1408BBF40 (TtmpPushTerminalState.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401CC5F0 (_guard_dispatch_icall.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     TtmpStartCallout @ 0x1408BC100 (TtmpStartCallout.c)
 *     TtmpStopCallout @ 0x1408BC1EC (TtmpStopCallout.c)
 *     TtmiLogError @ 0x1408C1CAC (TtmiLogError.c)
 */

_UNKNOWN **__fastcall TtmpCallSetInputMode(int a1, __int64 a2, unsigned int a3)
{
  _UNKNOWN **result; // rax
  __int64 (__fastcall *v4)(_QWORD, _QWORD); // rdi
  int v8; // ebx
  _BYTE v9[48]; // [rsp+30h] [rbp-38h] BYREF
  _UNKNOWN *retaddr; // [rsp+68h] [rbp+0h] BYREF

  result = &retaddr;
  v4 = *(__int64 (__fastcall **)(_QWORD, _QWORD))(a2 + 64);
  if ( v4 )
  {
    memset(v9, 0, 0x28uLL);
    TtmpStartCallout((unsigned int)v9, a1, a2, 3, (__int64)v4, a3);
    v8 = v4(*(_QWORD *)(a2 + 24), a3);
    result = (_UNKNOWN **)TtmpStopCallout(v9, (unsigned int)v8);
    if ( v8 < 0 )
      return (_UNKNOWN **)TtmiLogError("TtmpCallSetInputMode");
  }
  return result;
}
