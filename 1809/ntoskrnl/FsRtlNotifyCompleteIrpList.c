/*
 * XREFs of FsRtlNotifyCompleteIrpList @ 0x1406A264C
 * Callers:
 *     FsRtlNotifyFilterReportChange @ 0x1406A14A0 (FsRtlNotifyFilterReportChange.c)
 *     FsRtlNotifyFilterReportChangeLiteEx @ 0x1406A2100 (FsRtlNotifyFilterReportChangeLiteEx.c)
 *     FsRtlNotifyCleanupOneEntry @ 0x1406A2C34 (FsRtlNotifyCleanupOneEntry.c)
 *     FsRtlCheckNotifyForDelete @ 0x140817AA0 (FsRtlCheckNotifyForDelete.c)
 *     FsRtlCheckNotifyForDeleteLite @ 0x140817B00 (FsRtlCheckNotifyForDeleteLite.c)
 * Callees:
 *     FsRtlNotifyCompleteIrp @ 0x1406A26E8 (FsRtlNotifyCompleteIrp.c)
 */

_QWORD *__fastcall FsRtlNotifyCompleteIrpList(__int64 a1, int a2)
{
  _QWORD *v2; // rbx
  _QWORD *result; // rax
  __int64 v5; // rcx

  v2 = (_QWORD *)(a1 + 48);
  *(_DWORD *)(a1 + 104) = 0;
  *(_WORD *)(a1 + 72) &= ~2u;
  *(_DWORD *)(a1 + 108) = 0;
  result = *(_QWORD **)(a1 + 48);
  do
  {
    if ( (_QWORD *)result[1] != v2 || (v5 = *result, *(_QWORD **)(*result + 8LL) != result) )
      __fastfail(3u);
    *v2 = v5;
    *(_QWORD *)(v5 + 8) = v2;
    *result = 0LL;
    result = (_QWORD *)FsRtlNotifyCompleteIrp((PIRP)(result - 21), 1);
    if ( !a2 )
      break;
    result = (_QWORD *)*v2;
  }
  while ( (_QWORD *)*v2 != v2 );
  return result;
}
