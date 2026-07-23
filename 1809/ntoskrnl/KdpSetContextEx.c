/*
 * XREFs of KdpSetContextEx @ 0x14028C86C
 * Callers:
 *     KdpSendWaitContinue @ 0x140918100 (KdpSendWaitContinue.c)
 * Callees:
 *     KdpCopyContext @ 0x140919934 (KdpCopyContext.c)
 *     KdpQuickMoveMemory @ 0x140919B04 (KdpQuickMoveMemory.c)
 *     KdpSanitizeContextFlags @ 0x140919B24 (KdpSanitizeContextFlags.c)
 */

__int64 __fastcall KdpSetContextEx(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned __int16 v4; // ax
  unsigned __int64 v6; // r9
  __int64 v7; // rax
  __int64 v8; // rdi
  __int64 v9; // r9
  __int64 v10; // r10
  unsigned __int16 v11; // cx
  __int16 v13; // [rsp+20h] [rbp-28h] BYREF
  __int64 v14; // [rsp+28h] [rbp-20h]
  unsigned int v15; // [rsp+50h] [rbp+8h] BYREF

  v14 = a1;
  v13 = 56;
  v4 = *(_WORD *)(a1 + 6);
  if ( v4 < 0x500u && KiProcessorBlock[v4] && KdpContextSent )
  {
    v6 = *(unsigned int *)(a1 + 24);
    if ( (unsigned int)v6 <= 0x1000
      && (v7 = *(unsigned int *)(a1 + 16), (unsigned int)v7 < (unsigned int)v6)
      && (v8 = *(unsigned int *)(a1 + 20), (_DWORD)v8)
      && v7 + v8 <= v6 )
    {
      KdpQuickMoveMemory((char *)&unk_1404DEBA8 + (unsigned int)v7, *(_QWORD *)(a2 + 8), (unsigned int)v8);
      if ( v10 == v9 )
      {
        v11 = *(_WORD *)(a1 + 6);
        if ( v11 != (unsigned __int16)KeGetPcr()->Prcb.Number )
          a3 = *(_QWORD *)(KiProcessorBlock[v11] + 25280);
        KdpSanitizeContextFlags(&unk_1404DEBA8, (unsigned int)v9, &v15);
        KdpCopyContext(a3, v15, &unk_1404DEBA8);
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
  return KdSendPacket(2LL, &v13, 0LL, &KdpContext);
}
