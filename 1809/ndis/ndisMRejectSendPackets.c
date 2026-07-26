/*
 * XREFs of ndisMRejectSendPackets @ 0x1C011EE60
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0026E30 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ndisMRejectSendPackets(__int64 a1, _QWORD *a2, unsigned int a3)
{
  __int64 v4; // rsi
  __int64 result; // rax

  if ( a3 )
  {
    v4 = a3;
    do
    {
      *(_BYTE *)(*a2 + 41LL) &= 0xC0u;
      result = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64))(a1 + 112))(
                 *(_QWORD *)(a1 + 528),
                 *a2++,
                 3221225659LL);
      --v4;
    }
    while ( v4 );
  }
  return result;
}
