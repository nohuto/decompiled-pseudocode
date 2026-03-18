/*
 * XREFs of rimDeviceResetApc @ 0x1C01095A0
 * Callers:
 *     <none>
 * Callees:
 *     ??0ApiSetEditionCrit@@QEAA@HH@Z @ 0x1C000F3BC (--0ApiSetEditionCrit@@QEAA@HH@Z.c)
 *     RIMLockExclusive @ 0x1C003B4E0 (RIMLockExclusive.c)
 *     RIMDeliverDeviceResetRequest @ 0x1C01094F8 (RIMDeliverDeviceResetRequest.c)
 */

void __fastcall rimDeviceResetApc(PVOID ApcContext, PIO_STATUS_BLOCK IoStatusBlock, ULONG Reserved)
{
  __int64 v5; // rsi
  int v6; // eax
  int v7; // [rsp+30h] [rbp+8h] BYREF
  int v8; // [rsp+34h] [rbp+Ch]

  ApiSetEditionCrit::ApiSetEditionCrit((ApiSetEditionCrit *)&v7, 1, 0);
  if ( IoStatusBlock->Status >= 0 )
  {
    v5 = *((_QWORD *)ApcContext + 42);
    RIMLockExclusive(v5 + 96);
    v6 = *((_DWORD *)ApcContext + 46);
    if ( (v6 & 0x80000) == 0 )
    {
      *((_DWORD *)ApcContext + 46) = v6 | 0x80000;
      ZwSetEvent(*(HANDLE *)(v5 + 376), 0LL);
    }
    RIMDeliverDeviceResetRequest((char *)ApcContext);
    *(_QWORD *)(v5 + 104) = 0LL;
    ExReleasePushLockExclusiveEx(v5 + 96, 0LL);
    KeLeaveCriticalRegion();
  }
  ObfDereferenceObject(*((PVOID *)ApcContext + 4));
  if ( v7 && !v8 && (int)IsLeaveEditionCritSupported() >= 0 )
    LeaveEditionCrit();
}
