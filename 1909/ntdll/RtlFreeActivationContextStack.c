/*
 * XREFs of RtlFreeActivationContextStack @ 0x18006EC10
 * Callers:
 *     RtlFreeThreadActivationContextStack @ 0x18006EBD0 (RtlFreeThreadActivationContextStack.c)
 * Callees:
 *     RtlReleaseActivationContext @ 0x1800373A0 (RtlReleaseActivationContext.c)
 *     RtlFreeHeap @ 0x180040690 (RtlFreeHeap.c)
 *     RtlpFreeActivationContextStackFrame @ 0x18006EE58 (RtlpFreeActivationContextStackFrame.c)
 */

void __fastcall RtlFreeActivationContextStack(__int64 **BaseAddress)
{
  __int64 *v1; // rdi
  __int64 **v3; // rdi
  __int64 *v4; // rax
  __int64 **v5; // r8
  __int64 ***v6; // rcx
  int v7; // eax
  __int64 *v8; // rsi

  if ( BaseAddress )
  {
    v1 = *BaseAddress;
    if ( *BaseAddress )
    {
      do
      {
        v7 = *((_DWORD *)v1 + 4);
        v8 = (__int64 *)*v1;
        if ( (v7 & 1) != 0 )
        {
          RtlReleaseActivationContext((PACTIVATION_CONTEXT)v1[1]);
          v7 = *((_DWORD *)v1 + 4);
        }
        if ( (v7 & 8) != 0 )
          RtlpFreeActivationContextStackFrame(BaseAddress, v1);
        v1 = v8;
      }
      while ( v8 );
    }
    *BaseAddress = 0LL;
    v3 = (__int64 **)BaseAddress[1];
    while ( v3 != BaseAddress + 1 )
    {
      v4 = *v3;
      v5 = v3 - 1;
      if ( (__int64 **)(*v3)[1] != v3 || (v6 = (__int64 ***)v3[1], *v6 != v3) )
        __fastfail(3u);
      *v6 = (__int64 **)v4;
      v4[1] = (__int64)v6;
      v3 = (__int64 **)v4;
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v5);
    }
    if ( ((_BYTE)BaseAddress[3] & 2) == 0 )
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, BaseAddress);
  }
}
