/*
 * XREFs of KdpSetContext @ 0x140956438
 * Callers:
 *     KdpSendWaitContinue @ 0x140955ADC (KdpSendWaitContinue.c)
 * Callees:
 *     KdpCopyContext @ 0x1409570D0 (KdpCopyContext.c)
 *     KdpSanitizeContextFlags @ 0x1409572B8 (KdpSanitizeContextFlags.c)
 */

__int64 __fastcall KdpSetContext(__int64 a1, unsigned __int16 *a2, __int64 a3)
{
  unsigned __int16 v3; // r9
  __int64 v5; // rbx
  _QWORD v7[3]; // [rsp+20h] [rbp-18h] BYREF
  unsigned int v8; // [rsp+40h] [rbp+8h] BYREF

  v3 = *(_WORD *)(a1 + 6);
  v7[0] = 56LL;
  v7[1] = a1;
  if ( v3 < 0x500u && KiProcessorBlock[v3] && KdpContextSent )
  {
    *(_DWORD *)(a1 + 8) = 0;
    if ( v3 != (unsigned __int16)KeGetPcr()->Prcb.Number )
      a3 = *(_QWORD *)(KiProcessorBlock[v3] + 25280);
    v5 = *((_QWORD *)a2 + 1);
    KdpSanitizeContextFlags(v5, *a2, &v8);
    KdpCopyContext(a3, v8, v5);
  }
  else
  {
    *(_DWORD *)(a1 + 8) = -1073741823;
  }
  return KdSendPacket(2LL, v7, 0LL, &KdpContext);
}
