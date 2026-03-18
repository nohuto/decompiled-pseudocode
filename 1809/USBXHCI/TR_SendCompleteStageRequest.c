/*
 * XREFs of TR_SendCompleteStageRequest @ 0x1C00250A4
 * Callers:
 *     Control_TransferData_Free @ 0x1C002687C (Control_TransferData_Free.c)
 *     Isoch_Stage_FreeScatterGatherList @ 0x1C002C350 (Isoch_Stage_FreeScatterGatherList.c)
 *     Bulk_Stage_FreeScatterGatherList @ 0x1C0031E20 (Bulk_Stage_FreeScatterGatherList.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0002030 (__security_check_cookie.c)
 *     memset @ 0x1C0006FC0 (memset.c)
 *     SecureChannel_SendRequestSynchronously @ 0x1C0063174 (SecureChannel_SendRequestSynchronously.c)
 */

__int64 __fastcall TR_SendCompleteStageRequest(__int64 a1, int a2)
{
  __int64 v4; // rcx
  _QWORD v6[6]; // [rsp+30h] [rbp-48h] BYREF

  memset(v6, 0, sizeof(v6));
  v4 = *(_QWORD *)(a1 + 40);
  v6[3] = *(_QWORD *)(a1 + 288);
  LODWORD(v6[4]) = 43;
  LODWORD(v6[5]) = a2;
  return SecureChannel_SendRequestSynchronously(*(_QWORD *)(v4 + 112), (unsigned int)v6, 48, 0, 0);
}
