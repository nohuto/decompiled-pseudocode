/*
 * XREFs of KeAndGroupAffinityEx @ 0x140147F80
 * Callers:
 *     PnpSetDeviceAffinityThread @ 0x1400ED994 (PnpSetDeviceAffinityThread.c)
 *     KeQueryLogicalProcessorRelationship @ 0x1400FF420 (KeQueryLogicalProcessorRelationship.c)
 *     PpmEventDomainPerfStateChange @ 0x140177AF8 (PpmEventDomainPerfStateChange.c)
 * Callees:
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 */

__int64 __fastcall KeAndGroupAffinityEx(unsigned __int16 *a1, __int64 a2, char *a3)
{
  unsigned __int16 v4; // ax
  unsigned int v5; // edx
  __int64 v6; // rcx
  char v8; // [rsp+0h] [rbp-28h] BYREF

  if ( a3 )
  {
    *(_DWORD *)(a3 + 10) = 0;
    *((_WORD *)a3 + 7) = 0;
    *((_WORD *)a3 + 4) = *(_WORD *)(a2 + 8);
  }
  else
  {
    a3 = &v8;
  }
  v4 = *(_WORD *)(a2 + 8);
  v5 = 0;
  if ( *a1 <= v4 )
    v6 = 0LL;
  else
    v6 = *(_QWORD *)a2 & *(_QWORD *)&a1[4 * v4 + 4];
  *(_QWORD *)a3 = v6;
  LOBYTE(v5) = v6 != 0;
  return v5;
}
