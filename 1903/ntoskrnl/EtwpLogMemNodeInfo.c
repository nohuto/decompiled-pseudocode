/*
 * XREFs of EtwpLogMemNodeInfo @ 0x14032F068
 * Callers:
 *     EtwpLogMemInfoTimerCallback @ 0x14032EFF0 (EtwpLogMemInfoTimerCallback.c)
 * Callees:
 *     EtwWriteEx @ 0x140036300 (EtwWriteEx.c)
 *     EtwProviderEnabled @ 0x1400AF010 (EtwProviderEnabled.c)
 *     PsGetNextPartition @ 0x1400F9644 (PsGetNextPartition.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     MmFillEtwNodeInformation @ 0x1402D1E24 (MmFillEtwNodeInformation.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 */

void EtwpLogMemNodeInfo()
{
  _BYTE *PoolWithTag; // rbx
  unsigned __int16 **i; // rcx
  int v2; // eax
  unsigned __int16 **NextPartition; // rax
  unsigned __int16 **v4; // rdi
  int v5; // [rsp+40h] [rbp-C0h] BYREF
  int v6; // [rsp+44h] [rbp-BCh] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+48h] [rbp-B8h] BYREF
  int *v8; // [rsp+58h] [rbp-A8h]
  int v9; // [rsp+60h] [rbp-A0h]
  int v10; // [rsp+64h] [rbp-9Ch]
  _BYTE *v11; // [rsp+68h] [rbp-98h]
  int v12; // [rsp+70h] [rbp-90h]
  int v13; // [rsp+74h] [rbp-8Ch]
  _BYTE P[608]; // [rsp+80h] [rbp-80h] BYREF

  if ( EtwpHostSiloState != -4516
    && (*(_DWORD *)(EtwpHostSiloState + 4520) & 0x80000) != 0
    && EtwProviderEnabled(EtwpMemoryProvRegHandle, 0, 0x400uLL) )
  {
    if ( (unsigned __int16)KeNumberNodes > 8u )
    {
      PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 76LL * (unsigned __int16)KeNumberNodes, 0x74777445u);
      if ( !PoolWithTag )
        return;
    }
    else
    {
      PoolWithTag = P;
    }
    for ( i = 0LL; ; i = v4 )
    {
      NextPartition = (unsigned __int16 **)PsGetNextPartition(i);
      v4 = NextPartition;
      if ( !NextPartition )
        break;
      v2 = MmFillEtwNodeInformation(NextPartition, (__int64)PoolWithTag, (unsigned __int16)KeNumberNodes, &v5);
      UserData.Reserved = 0;
      v10 = 0;
      v13 = 0;
      v6 = v2;
      UserData.Ptr = (ULONGLONG)&v5;
      v8 = &v6;
      UserData.Size = 4;
      v12 = 76 * v2;
      v9 = 4;
      v11 = PoolWithTag;
      EtwWriteEx(EtwpMemoryProvRegHandle, &KERNEL_MEM_EVENT_MEMINFO_NODE, 0LL, 0, 0LL, 0LL, 3u, &UserData);
    }
    if ( PoolWithTag != P )
      ExFreePoolWithTag(PoolWithTag, 0);
  }
}
