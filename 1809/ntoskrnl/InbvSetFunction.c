/*
 * XREFs of InbvSetFunction @ 0x14018E524
 * Callers:
 *     BgkNotifyDisplayOwnershipChange @ 0x14016EBE0 (BgkNotifyDisplayOwnershipChange.c)
 *     InbvDriverInitialize @ 0x1409D7F70 (InbvDriverInitialize.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 */

__int64 __fastcall InbvSetFunction(int a1)
{
  __int64 result; // rax
  void (__fastcall *v3)(_QWORD); // rax
  __int64 (__fastcall **v4)(); // rcx

  result = (unsigned int)dword_14043D7B0;
  if ( (unsigned int)(dword_14043D7B0 - 3) <= 1 )
  {
    if ( qword_14043D7B8 )
    {
      v3 = *(void (__fastcall **)(_QWORD))(qword_14043D7B8 + 136);
      if ( v3 )
        v3(0LL);
    }
    v4 = off_140401510;
    result = 4 - (unsigned int)(a1 != 4);
    dword_14043D7B0 = 4 - (a1 != 4);
    if ( a1 != 4 )
      v4 = off_1404015D0;
    qword_14043D7B8 = (__int64)v4;
  }
  return result;
}
