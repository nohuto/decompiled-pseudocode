/*
 * XREFs of Bulk_TransferData_DetermineTransferMechanism @ 0x1C0032A04
 * Callers:
 *     Bulk_RetrieveNextStage @ 0x1C003122C (Bulk_RetrieveNextStage.c)
 * Callees:
 *     TR_AcquireDoubleBuffer @ 0x1C002368C (TR_AcquireDoubleBuffer.c)
 *     TR_IsUrbUsingChainedMdl @ 0x1C0024D28 (TR_IsUrbUsingChainedMdl.c)
 */

void __fastcall Bulk_TransferData_DetermineTransferMechanism(__int64 a1)
{
  unsigned int v1; // edx
  int v2; // ebx
  __int64 v3; // r8
  __int64 v5; // rcx
  unsigned __int16 v6; // ax
  unsigned int v7; // edx
  __int64 v8; // r8
  _QWORD *v9; // rax

  v1 = *(_DWORD *)(a1 + 104);
  v2 = 0;
  v3 = *(_QWORD *)(a1 + 56);
  if ( v1 )
  {
    v5 = *(_QWORD *)(a1 + 48);
    v6 = *(_WORD *)(v5 + 2);
    if ( v6 > 0x38u && v6 <= 0x3Au )
      goto LABEL_10;
    if ( *(_BYTE *)(v3 + 320) && v1 <= 8 )
    {
      v2 = 1;
      goto LABEL_11;
    }
    if ( TR_IsUrbUsingChainedMdl(v5)
      || v7 > *(_DWORD *)(v8 + 24)
      || (v9 = TR_AcquireDoubleBuffer(v8), *(_QWORD *)(a1 + 96) = v9, v2 = 2, !v9) )
    {
LABEL_10:
      v2 = 3;
    }
  }
LABEL_11:
  *(_DWORD *)(a1 + 76) = v2;
}
