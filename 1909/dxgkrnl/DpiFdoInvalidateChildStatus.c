/*
 * XREFs of DpiFdoInvalidateChildStatus @ 0x1C02A1C74
 * Callers:
 *     DpiPollSingleDisplayChild @ 0x1C029D378 (DpiPollSingleDisplayChild.c)
 *     DpiPdoPollingWorkItem @ 0x1C02AFBF0 (DpiPdoPollingWorkItem.c)
 * Callees:
 *     DpiDxgkDdiDisplayDetectControl @ 0x1C015B1C0 (DpiDxgkDdiDisplayDetectControl.c)
 */

__int64 __fastcall DpiFdoInvalidateChildStatus(
        __int64 a1,
        int a2,
        char a3,
        unsigned __int8 a4,
        char a5,
        char a6,
        __int64 a7)
{
  __int64 v7; // rbp
  int v11; // eax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // rbx
  __int64 v16; // rax
  _QWORD v18[2]; // [rsp+20h] [rbp-28h] BYREF
  __int64 v19; // [rsp+30h] [rbp-18h]

  v7 = *(_QWORD *)(a1 + 64);
  KeEnterCriticalRegion();
  ExAcquireResourceExclusiveLite((PERESOURCE)(v7 + 3304), 1u);
  v18[1] = a7;
  v19 = a4;
  BYTE1(v19) = a3;
  v18[0] = a2 & 0xFFFFFF | (a5 != 0 ? 285212672 : 0x1000000);
  BYTE2(v19) = a6;
  v11 = DpiDxgkDdiDisplayDetectControl(v7, *(_QWORD *)(v7 + 40), *(_QWORD *)(v7 + 48), (unsigned int *)v18);
  v15 = v11;
  if ( v11 < 0 )
  {
    v16 = WdLogNewEntry5_WdError(v13, v12, v14);
    *(_QWORD *)(v16 + 24) = *(_QWORD *)(*(_QWORD *)(v7 + 40) + 1128LL);
    *(_QWORD *)(v16 + 32) = v15;
    WdLogEvent5_WdError(v16);
  }
  ExReleaseResourceLite((PERESOURCE)(v7 + 3304));
  KeLeaveCriticalRegion();
  return (unsigned int)v15;
}
