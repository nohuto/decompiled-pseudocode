/*
 * XREFs of DpiFdoInvalidateChildStatus @ 0x1C0265FCC
 * Callers:
 *     DpiPdoPollingWorkItem @ 0x1C0277000 (DpiPdoPollingWorkItem.c)
 * Callees:
 *     DpiDxgkDdiDisplayDetectControl @ 0x1C0144DA8 (DpiDxgkDdiDisplayDetectControl.c)
 */

__int64 __fastcall DpiFdoInvalidateChildStatus(__int64 a1, int a2, char a3, unsigned __int8 a4, char a5, __int64 a6)
{
  __int64 v6; // rbp
  int v10; // eax
  __int64 v11; // rcx
  __int64 v12; // rbx
  __int64 v13; // rax
  _QWORD v15[2]; // [rsp+20h] [rbp-28h] BYREF
  __int64 v16; // [rsp+30h] [rbp-18h]

  v6 = *(_QWORD *)(a1 + 64);
  KeEnterCriticalRegion();
  ExAcquireResourceExclusiveLite((PERESOURCE)(v6 + 3232), 1u);
  v15[1] = a6;
  v16 = a4;
  BYTE1(v16) = a3;
  BYTE2(v16) = 1;
  v15[0] = a2 & 0xFFFFFF | (a5 != 0 ? 285212672 : 0x1000000);
  v10 = DpiDxgkDdiDisplayDetectControl(v6, *(_QWORD *)(v6 + 40), *(const GUID **)(v6 + 48), (unsigned int *)v15);
  v12 = v10;
  if ( v10 < 0 )
  {
    v13 = WdLogNewEntry5_WdError(v11);
    *(_QWORD *)(v13 + 24) = *(_QWORD *)(*(_QWORD *)(v6 + 40) + 1128LL);
    *(_QWORD *)(v13 + 32) = v12;
    WdLogEvent5_WdError(v13);
  }
  ExReleaseResourceLite((PERESOURCE)(v6 + 3232));
  KeLeaveCriticalRegion();
  return (unsigned int)v12;
}
