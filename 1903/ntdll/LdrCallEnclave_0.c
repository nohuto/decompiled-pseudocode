/*
 * XREFs of LdrCallEnclave_0 @ 0x1800CDFC0
 * Callers:
 *     RtlEnclaveCallDispatch @ 0x1800A0560 (RtlEnclaveCallDispatch.c)
 *     LdrCallEnclave @ 0x1800CD350 (LdrCallEnclave.c)
 * Callees:
 *     sub_18001B2F8 @ 0x18001B2F8 (sub_18001B2F8.c)
 *     RtlLeaveCriticalSection @ 0x18003A8A0 (RtlLeaveCriticalSection.c)
 *     ZwCallEnclave @ 0x18009D8B0 (ZwCallEnclave.c)
 *     _guard_dispatch_icall_nop @ 0x1800A0100 (_guard_dispatch_icall_nop.c)
 *     sub_1800A05D0 @ 0x1800A05D0 (sub_1800A05D0.c)
 *     sub_1800CDB44 @ 0x1800CDB44 (sub_1800CDB44.c)
 */

__int64 __fastcall LdrCallEnclave_0(__int64 (__fastcall *a1)(_QWORD), __int64 a2, _QWORD *a3)
{
  __int64 *v5; // rax
  __int64 v6; // rdi
  unsigned int v7; // ebx

  v5 = sub_18001B2F8((unsigned __int64)a1, 0);
  v6 = (__int64)v5;
  v7 = 0;
  if ( v5 )
  {
    RtlLeaveCriticalSection((__int64)(v5 + 2));
    sub_1800CDB44(v6);
    if ( *(_DWORD *)(v6 + 56) == 16 )
      return (unsigned int)sub_1800A05D0();
    else
      return (unsigned int)ZwCallEnclave();
  }
  else
  {
    *a3 = a1(*a3);
  }
  return v7;
}
