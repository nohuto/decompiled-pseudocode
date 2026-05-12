/*
 * XREFs of RaidResumeAndRestartUnitQueue @ 0x1C004947C
 * Callers:
 *     RaUnitStartResetIo @ 0x1C00486F4 (RaUnitStartResetIo.c)
 *     RaidUnitCompleteResetRequest @ 0x1C0049A50 (RaidUnitCompleteResetRequest.c)
 * Callees:
 *     DbgLogRequest @ 0x1C00027C4 (DbgLogRequest.c)
 *     RaidResumeIoQueue @ 0x1C0002844 (RaidResumeIoQueue.c)
 *     RaidRestartIoQueue @ 0x1C000D2EC (RaidRestartIoQueue.c)
 */

__int64 __fastcall RaidResumeAndRestartUnitQueue(__int64 a1)
{
  __int64 v2; // rdi
  __int64 v3; // rax
  unsigned __int8 v4; // cl
  __int64 retaddr; // [rsp+48h] [rbp+0h]

  v2 = (unsigned int)RaidResumeIoQueue(a1 + 640);
  v3 = *(_QWORD *)(a1 + 24);
  if ( v3 )
    v4 = *(_BYTE *)(v3 + 56);
  else
    v4 = -1;
  if ( (qword_1C00612B0 & 0x200) != 0 )
    DbgLogRequest(
      *(_QWORD *)(a1 + 24),
      5,
      retaddr,
      (unsigned __int8)BYTE2(*(_DWORD *)(a1 + 96)) | (unsigned __int64)(((unsigned __int8)BYTE1(*(_DWORD *)(a1 + 96)) | (((unsigned __int8)*(_DWORD *)(a1 + 96) | (v4 << 8)) << 8)) << 8),
      *(int *)(a1 + 684),
      v2,
      0LL);
  if ( (_DWORD)v2 )
    RaidRestartIoQueue(a1, 0);
  return (unsigned int)v2;
}
