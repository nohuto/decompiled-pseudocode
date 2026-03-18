/*
 * XREFs of InbvSetFunction @ 0x1401985A8
 * Callers:
 *     BgkNotifyDisplayOwnershipChange @ 0x140178280 (BgkNotifyDisplayOwnershipChange.c)
 *     InbvDriverInitialize @ 0x140A1A02C (InbvDriverInitialize.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401CC5F0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall InbvSetFunction(int a1)
{
  __int64 result; // rax
  void (__fastcall *v3)(_QWORD); // rax
  __int64 (__fastcall **v4)(); // rcx

  result = (unsigned int)dword_140468220;
  if ( (unsigned int)(dword_140468220 - 3) <= 1 )
  {
    if ( qword_140468228 )
    {
      v3 = *(void (__fastcall **)(_QWORD))(qword_140468228 + 136);
      if ( v3 )
        v3(0LL);
    }
    v4 = off_140426850;
    result = 4 - (unsigned int)(a1 != 4);
    dword_140468220 = 4 - (a1 != 4);
    if ( a1 != 4 )
      v4 = off_140426910;
    qword_140468228 = (__int64)v4;
  }
  return result;
}
