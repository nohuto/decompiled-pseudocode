/*
 * XREFs of TpReleaseAlpcCompletion @ 0x1800786E0
 * Callers:
 *     <none>
 * Callees:
 *     sub_180031774 @ 0x180031774 (sub_180031774.c)
 *     sub_18007874C @ 0x18007874C (sub_18007874C.c)
 *     _guard_dispatch_icall_nop @ 0x1800A0100 (_guard_dispatch_icall_nop.c)
 */

void __cdecl TpReleaseAlpcCompletion(PTP_ALPC Alpc)
{
  int v2; // eax
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h]

  if ( (unsigned int)sub_18007874C(Alpc, 1LL, 0LL) )
  {
    LOBYTE(v2) = sub_180031774((__int64)Alpc + 72, 1LL);
    if ( v2 )
    {
      *((_QWORD *)Alpc + 32) = retaddr;
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)Alpc + 18, 0xFFFFFFFF) == 1 )
        (**((void (__fastcall ***)(char *))Alpc + 10))((char *)Alpc + 72);
    }
  }
}
