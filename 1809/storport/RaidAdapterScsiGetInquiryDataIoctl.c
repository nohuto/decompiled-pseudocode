/*
 * XREFs of RaidAdapterScsiGetInquiryDataIoctl @ 0x1C0039638
 * Callers:
 *     RaidAdapterDeviceControlIrp @ 0x1C0003014 (RaidAdapterDeviceControlIrp.c)
 * Callees:
 *     RaidCompleteRequestEx @ 0x1C000CF10 (RaidCompleteRequestEx.c)
 *     memset @ 0x1C002C3C0 (memset.c)
 */

__int64 __fastcall RaidAdapterScsiGetInquiryDataIoctl(__int64 a1, IRP *a2)
{
  _DWORD *PoolWithTag; // rax
  _DWORD *v5; // rdi
  unsigned int v6; // r8d
  _IO_STACK_LOCATION *CurrentStackLocation; // rbx
  _IRP *MasterIrp; // r15
  __int64 v9; // rsi
  unsigned int v10; // r12d
  __int64 *v11; // r11
  __int64 *i; // rdx
  int v13; // eax
  __int64 v14; // r8
  _DWORD *v15; // rdx
  __int64 v16; // r9
  __int64 v17; // rcx
  __int64 *v18; // r10
  __int64 v19; // rdx
  int v20; // eax
  __int64 v21; // rbx
  __int64 v22; // r8
  char v23; // al
  unsigned int v24; // r9d
  _DWORD *v25; // r8
  _DWORD *p_MdlAddress; // rdx
  char v27; // cl
  char v28; // al
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-38h] BYREF

  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0xFF0uLL, 0x32316152u);
  v5 = PoolWithTag;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, 0xFF0uLL);
    CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
    MasterIrp = a2->AssociatedIrp.MasterIrp;
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 128), &LockHandle);
    v9 = *(unsigned __int8 *)(a1 + 392);
    v10 = 8 * (v9 + 6 * *(_DWORD *)(a1 + 152)) + 4;
    if ( CurrentStackLocation->Parameters.Read.Length >= v10 )
    {
      v11 = (__int64 *)(a1 + 136);
      for ( i = *(__int64 **)(a1 + 136); i != v11; i = (__int64 *)*i )
      {
        if ( (i[49] & 8) == 0 )
        {
          v13 = *((_DWORD *)i + 10);
          if ( (_BYTE)v13 != 0xFF )
            ++v5[4 * (unsigned __int8)v13];
        }
      }
      v14 = 0LL;
      if ( (_DWORD)v9 )
      {
        v15 = v5;
        v16 = v9;
        do
        {
          v17 = 3 * v14;
          v14 = (unsigned int)(*v15 + v14);
          v15 += 4;
          *((_QWORD *)v15 - 1) = (char *)MasterIrp + 16 * v17 + (unsigned int)(8 * v9 + 4);
          --v16;
        }
        while ( v16 );
      }
      v18 = (__int64 *)*v11;
      v19 = 0LL;
      if ( (__int64 *)*v11 != v11 )
      {
        do
        {
          if ( (v18[49] & 8) == 0 )
          {
            v20 = *((_DWORD *)v18 + 10);
            v21 = v18[6];
            if ( (_BYTE)v20 != 0xFF )
            {
              v22 = (unsigned int)v5[4 * (unsigned __int8)v20 + 1];
              v5[4 * (unsigned __int8)v20 + 1] = v22 + 1;
              v19 = *(_QWORD *)&v5[4 * (unsigned __int8)v20 + 2] + 48 * v22;
              *(_BYTE *)v19 = v20;
              *(_BYTE *)(v19 + 2) = BYTE2(v20);
              *(_BYTE *)(v19 + 1) = BYTE1(v20);
              v23 = v18[49] & 1;
              *(_DWORD *)(v19 + 4) = 36;
              *(_BYTE *)(v19 + 3) = v23;
              *(_DWORD *)(v19 + 8) = v19 - (_DWORD)MasterIrp + 48;
              *(_OWORD *)(v19 + 12) = *(_OWORD *)v21;
              *(_OWORD *)(v19 + 28) = *(_OWORD *)(v21 + 16);
              *(_DWORD *)(v19 + 44) = *(_DWORD *)(v21 + 32);
            }
          }
          v18 = (__int64 *)*v18;
        }
        while ( v18 != v11 );
        if ( v19 )
          *(_DWORD *)(v19 + 8) = 0;
      }
      KeReleaseInStackQueuedSpinLock(&LockHandle);
      v24 = 0;
      if ( (_DWORD)v9 )
      {
        v25 = v5;
        p_MdlAddress = &MasterIrp->MdlAddress;
        do
        {
          v27 = *(_BYTE *)v25;
          *((_BYTE *)p_MdlAddress - 4) = *(_BYTE *)v25;
          if ( (unsigned __int8)v24 < 8u )
            v28 = *(_BYTE *)((unsigned __int8)v24 + a1 + 393);
          else
            v28 = -1;
          *((_BYTE *)p_MdlAddress - 3) = v28;
          if ( v27 )
          {
            *p_MdlAddress = v25[2] - (_DWORD)MasterIrp;
            *(_DWORD *)(48LL * (unsigned int)(*v25 - 1) + *((_QWORD *)v25 + 1) + 8) = 0;
          }
          else
          {
            *p_MdlAddress = 0;
          }
          ++v24;
          p_MdlAddress += 2;
          v25 += 4;
        }
        while ( v24 < (unsigned int)v9 );
      }
      LOBYTE(MasterIrp->Type) = v9;
      ExFreePoolWithTag(v5, 0x32316152u);
      v6 = 0;
      a2->IoStatus.Information = v10;
    }
    else
    {
      KeReleaseInStackQueuedSpinLock(&LockHandle);
      ExFreePoolWithTag(v5, 0x32316152u);
      v6 = -1073741789;
    }
  }
  else
  {
    v6 = -1073741670;
  }
  return RaidCompleteRequestEx(a2, 0, v6);
}
