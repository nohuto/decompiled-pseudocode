/*
 * XREFs of KdpGetContext @ 0x1409172E4
 * Callers:
 *     KdpGetContextEx @ 0x14028C68C (KdpGetContextEx.c)
 *     KdpSendWaitContinue @ 0x140918100 (KdpSendWaitContinue.c)
 * Callees:
 *     KdpCopyContext @ 0x140919934 (KdpCopyContext.c)
 *     KdpInitializeExtendedContext @ 0x140919A80 (KdpInitializeExtendedContext.c)
 */

__int64 __fastcall KdpGetContext(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax
  unsigned __int16 v5; // cx
  __int64 v8; // rdx
  unsigned int v9; // r15d
  int v10; // eax
  unsigned int v11; // edi

  result = 1280LL;
  v5 = *(_WORD *)(a1 + 6);
  if ( v5 >= 0x500u )
    goto LABEL_11;
  result = v5;
  v8 = KiProcessorBlock[v5];
  if ( !v8 )
    goto LABEL_11;
  if ( v5 != (unsigned __int16)KeGetPcr()->Prcb.Number )
    a3 = *(_QWORD *)(v8 + 25280);
  v9 = *(_DWORD *)(a3 + 48);
  v10 = 1256;
  if ( (v9 & 0x100040) == 0x100040 )
    v10 = MEMORY[0xFFFFF780000003E8] + 800;
  v11 = v10 + 15;
  result = *(unsigned __int16 *)(a2 + 2);
  if ( v11 <= (unsigned int)result )
  {
    KdpInitializeExtendedContext(*(_QWORD *)(a2 + 8), v9);
    result = KdpCopyContext(*(_QWORD *)(a2 + 8), v9, a3);
    if ( (v9 & 0x100040) != 0x100040 )
      LOWORD(v11) = 1232;
    *(_WORD *)a2 = v11;
    *(_DWORD *)(a1 + 8) = 0;
  }
  else
  {
LABEL_11:
    *(_DWORD *)(a1 + 8) = -1073741823;
  }
  return result;
}
