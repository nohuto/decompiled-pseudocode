/*
 * XREFs of CrmStateMonitorWNFStart @ 0x180042FD8
 * Callers:
 *     CrmStateMonitorStart @ 0x180042CE8 (CrmStateMonitorStart.c)
 * Callees:
 *     CrmStateMonitorStateSizeGet @ 0x180032AB8 (CrmStateMonitorStateSizeGet.c)
 *     memcpy_0 @ 0x180049A02 (memcpy_0.c)
 */

__int64 __fastcall CrmStateMonitorWNFStart(__int64 a1, __int64 a2)
{
  unsigned int v4; // eax
  const void *v5; // rdx
  void *v6; // r9
  __int64 (__fastcall *v7)(int, int, int, int, __int64, size_t); // r9
  int v8; // ebx
  __int64 v9; // rcx
  __int64 v11; // [rsp+50h] [rbp+8h] BYREF

  v11 = 0LL;
  *(_DWORD *)(a1 + 56) = 0;
  *(_QWORD *)(a1 + 40) = a1 + 56;
  v4 = CrmStateMonitorStateSizeGet(*(_DWORD *)a1);
  memcpy_0(v6, v5, v4);
  v7 = (__int64 (__fastcall *)(int, int, int, int, __int64, size_t))CrmStateMonitorSebCallback;
  if ( (unsigned int)(*(_DWORD *)a1 - 13) > 2 )
    v7 = CrmStateMonitorWNFCallback;
  v8 = RtlSubscribeWnfStateChangeNotification(&v11, a2, 0LL, v7, a1, 0LL, 0, 0);
  if ( v8 < 0 )
  {
    v9 = v11;
  }
  else
  {
    v9 = 0LL;
    *(_QWORD *)(a1 + 72) = v11;
    v8 = 0;
    v11 = 0LL;
  }
  if ( v9 )
    RtlUnsubscribeWnfNotificationWaitForCompletion();
  return (unsigned int)v8;
}
