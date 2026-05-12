/*
 * XREFs of RaUnitStreamsIoctl @ 0x1C002261C
 * Callers:
 *     RaUnitDeviceControlIrp @ 0x1C0007604 (RaUnitDeviceControlIrp.c)
 * Callees:
 *     RaidAllocatePool @ 0x1C0006800 (RaidAllocatePool.c)
 *     RaidCompleteRequestEx @ 0x1C000A830 (RaidCompleteRequestEx.c)
 *     RaidUnitSendSrbIoControlSynchronously @ 0x1C0018894 (RaidUnitSendSrbIoControlSynchronously.c)
 *     memmove @ 0x1C0023500 (memmove.c)
 *     memset @ 0x1C0023840 (memset.c)
 */

__int64 __fastcall RaUnitStreamsIoctl(__int64 a1, IRP *a2)
{
  _IO_STACK_LOCATION *CurrentStackLocation; // r12
  unsigned int v5; // ebx
  unsigned int Options; // ebp
  unsigned int Length; // esi
  unsigned int v8; // edi
  _DWORD *Pool; // rax
  _DWORD *v10; // r15
  int v11; // eax
  unsigned int v12; // ebp
  unsigned int v14; // eax
  __int64 v15; // [rsp+28h] [rbp-40h]

  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  v5 = 0;
  Options = CurrentStackLocation->Parameters.Create.Options;
  Length = CurrentStackLocation->Parameters.Read.Length;
  v8 = Options;
  if ( Options <= Length )
    v8 = CurrentStackLocation->Parameters.Read.Length;
  Pool = RaidAllocatePool(NonPagedPoolNx, v8 + 28, 0x72536152u, *(_QWORD *)(a1 + 8));
  v10 = Pool;
  if ( Pool )
  {
    memset(Pool, 0, v8 + 28);
    v10[4] = CurrentStackLocation->Parameters.Read.ByteOffset.LowPart;
    *v10 = 8;
    v10[3] = *(_DWORD *)(a1 + 1032);
    v10[6] = v8;
    if ( Options )
      memmove(v10 + 7, a2->AssociatedIrp.MasterIrp, Options);
    v11 = RaidUnitSendSrbIoControlSynchronously(
            a1,
            (__int64)a2,
            (__int64)v10,
            v8 + 28,
            0LL,
            v15,
            (Length != 0 ? 0x40 : 0) | (Options != 0 ? 0x80 : 0));
    v12 = v11;
    if ( v11 >= 0 || v11 == -2147483643 )
    {
      if ( Length )
      {
        v14 = v10[6];
        if ( v14 )
        {
          if ( Length >= v14 )
            Length = v10[6];
          v5 = Length;
          memmove(a2->AssociatedIrp.MasterIrp, v10 + 7, Length);
        }
      }
    }
    ExFreePoolWithTag(v10, 0x72536152u);
  }
  else
  {
    v12 = -1073741670;
  }
  a2->IoStatus.Information = v5;
  return RaidCompleteRequestEx(a2, 0, v12);
}
