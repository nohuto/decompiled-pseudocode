/*
 * XREFs of DpiMiracastConnectedStandbyDelayWork @ 0x1C0268FE0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1C0020760 (__security_check_cookie.c)
 *     memset @ 0x1C00231C0 (memset.c)
 *     DxgkWriteDiagEntry @ 0x1C00C7220 (DxgkWriteDiagEntry.c)
 *     DxgkMiracastStopAllMiracastSessions @ 0x1C0138FF0 (DxgkMiracastStopAllMiracastSessions.c)
 */

void __fastcall DpiMiracastConnectedStandbyDelayWork(PDEVICE_OBJECT DeviceObject, PVOID Context)
{
  signed __int64 v2; // rax
  signed __int64 v3; // rdi
  struct _IO_WORKITEM *v4; // rbx
  _QWORD v5[8]; // [rsp+20h] [rbp-50h] BYREF

  memset(v5, 0, sizeof(v5));
  v5[7] = 0LL;
  v5[0] = 0x4000000006LL;
  memset(&v5[1], 0, 36);
  v5[6] = 0x100000049LL;
  DxgkWriteDiagEntry((struct _DXGK_DIAG_HEADER *)v5);
  v2 = qword_1C008EBF8;
  do
  {
    v3 = v2;
    v4 = (struct _IO_WORKITEM *)(v2 & 0xFFFFFFFFFFFFFFFCuLL);
    v2 = _InterlockedCompareExchange64(&qword_1C008EBF8, v2 & 0xFFFFFFFFFFFFFFFCuLL, v2);
  }
  while ( v3 != v2 );
  DxgkMiracastStopAllMiracastSessions(0, 0LL, 0x88u);
  if ( (v3 & 2) != 0 )
  {
    IoFreeWorkItem(v4);
    qword_1C008EBF8 = 0LL;
  }
}
