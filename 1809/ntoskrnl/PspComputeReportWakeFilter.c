/*
 * XREFs of PspComputeReportWakeFilter @ 0x1406AE408
 * Callers:
 *     PspAllocateAndQueryNotificationChannel @ 0x1406ADDA4 (PspAllocateAndQueryNotificationChannel.c)
 *     PspFreezeJobTree @ 0x1406AE140 (PspFreezeJobTree.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PspComputeReportWakeFilter(_DWORD *a1, __int64 a2, unsigned __int64 *a3, char a4)
{
  unsigned __int64 v4; // r10
  unsigned __int64 v5; // r8
  int v6; // eax
  __int64 result; // rax

  v4 = *a3;
  *(_QWORD *)a2 = *a3;
  v5 = HIDWORD(v4);
  if ( a4 )
  {
    *(_DWORD *)a2 = v4 & ~a1[238];
    *(_DWORD *)(a2 + 4) &= ~a1[239];
    LODWORD(v5) = *(_DWORD *)(a2 + 4);
  }
  v6 = v5 & a1[240];
  *(_DWORD *)(a2 + 4) = v6;
  result = (unsigned int)~v6;
  a1[240] &= result;
  return result;
}
