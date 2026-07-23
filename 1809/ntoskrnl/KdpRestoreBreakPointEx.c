/*
 * XREFs of KdpRestoreBreakPointEx @ 0x140917B3C
 * Callers:
 *     KdpSendWaitContinue @ 0x140918100 (KdpSendWaitContinue.c)
 * Callees:
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     KdpCopyMemoryChunks @ 0x1409199A8 (KdpCopyMemoryChunks.c)
 *     KdpDeleteBreakpoint @ 0x140919D78 (KdpDeleteBreakpoint.c)
 */

__int64 __fastcall KdpRestoreBreakPointEx(__int64 a1, PVOID *a2)
{
  unsigned int v4; // ecx
  char *v5; // rsi
  unsigned int i; // edi
  __int64 v8; // [rsp+30h] [rbp-C8h] BYREF
  __int16 v9; // [rsp+38h] [rbp-C0h] BYREF
  __int64 v10; // [rsp+40h] [rbp-B8h]
  char v11; // [rsp+50h] [rbp-A8h] BYREF

  v10 = a1;
  v4 = *(_DWORD *)(a1 + 16);
  v9 = 56;
  if ( *(unsigned __int16 *)a2 == 4LL * v4
    && (KdpCopyMemoryChunks(a2[1], 4, (__int64)&v8), (unsigned int)v8 == 4LL * *(unsigned int *)(a1 + 16)) )
  {
    *(_DWORD *)(a1 + 8) = 0;
    v5 = &v11;
    for ( i = 0; i < *(_DWORD *)(a1 + 16); v5 += 4 )
    {
      if ( !(unsigned __int8)KdpDeleteBreakpoint(*(unsigned int *)v5) )
        *(_DWORD *)(a1 + 8) = -1073741823;
      ++i;
    }
  }
  else
  {
    *(_DWORD *)(a1 + 8) = -1073741823;
  }
  return KdSendPacket(2LL, &v9, a2, &KdpContext);
}
