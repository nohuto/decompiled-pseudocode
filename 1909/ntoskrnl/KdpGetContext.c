/*
 * XREFs of KdpGetContext @ 0x140954C10
 * Callers:
 *     KdpGetContextEx @ 0x1402A228C (KdpGetContextEx.c)
 *     KdpSendWaitContinue @ 0x140955ADC (KdpSendWaitContinue.c)
 * Callees:
 *     KdpCopyContext @ 0x1409570D0 (KdpCopyContext.c)
 *     KdpInitializeExtendedContext @ 0x14095721C (KdpInitializeExtendedContext.c)
 */

__int64 __fastcall KdpGetContext(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax
  unsigned __int16 v5; // r8
  int v8; // ebx
  __int64 v9; // r9
  unsigned int v10; // r12d
  int v11; // eax
  unsigned int v12; // edi

  result = 1280LL;
  v5 = *(_WORD *)(a1 + 6);
  if ( v5 >= 0x500u )
    goto LABEL_11;
  result = v5;
  v8 = 0;
  v9 = KiProcessorBlock[v5];
  if ( !v9 )
    goto LABEL_11;
  if ( v5 != (unsigned __int16)KeGetPcr()->Prcb.Number )
    a3 = *(_QWORD *)(v9 + 25280);
  v10 = *(_DWORD *)(a3 + 48);
  v11 = 1256;
  if ( (v10 & 0x100040) == 0x100040 )
    v11 = MEMORY[0xFFFFF780000003E8] + 800;
  v12 = v11 + 15;
  result = *(unsigned __int16 *)(a2 + 2);
  if ( v12 <= (unsigned int)result )
  {
    KdpInitializeExtendedContext(*(_QWORD *)(a2 + 8), v10);
    result = KdpCopyContext(*(_QWORD *)(a2 + 8), v10, a3);
    if ( (v10 & 0x100040) != 0x100040 )
      LOWORD(v12) = 1232;
    *(_WORD *)a2 = v12;
  }
  else
  {
LABEL_11:
    v8 = -1073741823;
  }
  *(_DWORD *)(a1 + 8) = v8;
  return result;
}
