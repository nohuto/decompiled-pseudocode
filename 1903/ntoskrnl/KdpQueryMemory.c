/*
 * XREFs of KdpQueryMemory @ 0x140954D04
 * Callers:
 *     KdpSendWaitContinue @ 0x140955ADC (KdpSendWaitContinue.c)
 * Callees:
 *     MmIsSessionAddress @ 0x14009EE80 (MmIsSessionAddress.c)
 */

__int64 __fastcall KdpQueryMemory(__int64 a1)
{
  int v1; // edi
  unsigned __int64 v3; // rcx
  int v4; // eax
  __int64 v6; // [rsp+20h] [rbp-18h] BYREF
  __int64 v7; // [rsp+28h] [rbp-10h]

  v1 = 0;
  v6 = 0LL;
  v7 = 0LL;
  if ( *(_DWORD *)(a1 + 32) )
  {
    v1 = -1073741811;
  }
  else
  {
    v3 = *(_QWORD *)(a1 + 16);
    if ( v3 >= 0x7FFFFFFEFFFFLL )
    {
      LOBYTE(v4) = MmIsSessionAddress(v3);
      *(_DWORD *)(a1 + 32) = 2 - (v4 != 0);
    }
    else
    {
      *(_DWORD *)(a1 + 32) = 0;
    }
    *(_DWORD *)(a1 + 36) = 7;
  }
  *(_QWORD *)(a1 + 24) = 0LL;
  *(_DWORD *)(a1 + 8) = v1;
  LOWORD(v6) = 56;
  v7 = a1;
  return KdSendPacket(2LL, &v6, 0LL, &KdpContext);
}
