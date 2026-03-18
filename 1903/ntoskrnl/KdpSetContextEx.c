/*
 * XREFs of KdpSetContextEx @ 0x1402A2710
 * Callers:
 *     KdpSendWaitContinue @ 0x140955ADC (KdpSendWaitContinue.c)
 * Callees:
 *     KdpCopyContext @ 0x1409570D0 (KdpCopyContext.c)
 *     KdpQuickMoveMemory @ 0x140957298 (KdpQuickMoveMemory.c)
 *     KdpSanitizeContextFlags @ 0x1409572B8 (KdpSanitizeContextFlags.c)
 */

__int64 __fastcall KdpSetContextEx(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned __int16 v5; // ax
  unsigned __int64 v6; // r9
  __int64 v7; // rax
  __int64 v8; // rdi
  __int64 v9; // r9
  __int64 v10; // r10
  unsigned __int16 v11; // cx
  _QWORD v13[5]; // [rsp+20h] [rbp-28h] BYREF
  unsigned int v14; // [rsp+50h] [rbp+8h] BYREF

  v13[0] = 56LL;
  v5 = *(_WORD *)(a1 + 6);
  v13[1] = a1;
  if ( v5 < 0x500u && KiProcessorBlock[v5] && KdpContextSent )
  {
    v6 = *(unsigned int *)(a1 + 24);
    if ( (unsigned int)v6 <= 0x1000
      && (v7 = *(unsigned int *)(a1 + 16), (unsigned int)v7 < (unsigned int)v6)
      && (v8 = *(unsigned int *)(a1 + 20), (_DWORD)v8)
      && v7 + v8 <= v6 )
    {
      KdpQuickMoveMemory((char *)&unk_14050B1B0 + (unsigned int)v7, *(_QWORD *)(a2 + 8), (unsigned int)v8);
      if ( v10 == v9 )
      {
        v11 = *(_WORD *)(a1 + 6);
        if ( v11 != (unsigned __int16)KeGetPcr()->Prcb.Number )
          a3 = *(_QWORD *)(KiProcessorBlock[v11] + 25280);
        KdpSanitizeContextFlags(&unk_14050B1B0, (unsigned int)v9, &v14);
        KdpCopyContext(a3, v14, &unk_14050B1B0);
      }
      *(_DWORD *)(a1 + 8) = 0;
      *(_DWORD *)(a1 + 24) = v8;
    }
    else
    {
      *(_DWORD *)(a1 + 8) = -1073741811;
    }
  }
  else
  {
    *(_DWORD *)(a1 + 8) = -1073741823;
  }
  return KdSendPacket(2LL, v13, 0LL, &KdpContext);
}
