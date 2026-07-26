/*
 * XREFs of ?ndisMInitializeScatterGatherDmaInternal@@YAHPEAXEKK@Z @ 0x1C00354F4
 * Callers:
 *     NdisMRegisterScatterGatherDma @ 0x1C00353B0 (NdisMRegisterScatterGatherDma.c)
 *     NdisMInitializeScatterGatherDma @ 0x1C0079130 (NdisMInitializeScatterGatherDma.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C0006260 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_qL @ 0x1C0006320 (WPP_RECORDER_SF_qL.c)
 *     WPP_RECORDER_SF_qdL @ 0x1C00158A0 (WPP_RECORDER_SF_qdL.c)
 *     NdisWriteErrorLogEntry @ 0x1C0022460 (NdisWriteErrorLogEntry.c)
 *     ndisAssignSGListLookasideList @ 0x1C0035C68 (ndisAssignSGListLookasideList.c)
 *     PplCreateLookasideList @ 0x1C0035CD8 (PplCreateLookasideList.c)
 *     __security_check_cookie @ 0x1C0040760 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0041350 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00416C0 (memset.c)
 *     ndisDereferenceDmaAdapter @ 0x1C009F7C8 (ndisDereferenceDmaAdapter.c)
 *     PplDestroyLookasideList @ 0x1C00C829C (PplDestroyLookasideList.c)
 */

__int64 __fastcall ndisMInitializeScatterGatherDmaInternal(unsigned __int16 *a1, char a2, unsigned int a3, int a4)
{
  int v8; // edx
  volatile signed __int32 *v9; // rsi
  void *LookasideList; // r14
  __int64 v11; // rdx
  unsigned __int8 v12; // cl
  int v13; // eax
  volatile signed __int32 *PoolWithTag; // rax
  int v15; // eax
  unsigned int v16; // ecx
  int v17; // edx
  struct _DMA_ADAPTER *DmaAdapter; // rax
  bool v19; // zf
  int v20; // ecx
  int v21; // r8d
  int v22; // r9d
  unsigned int v23; // edi
  __int64 v25; // rcx
  int v26; // edx
  ULONG NumberOfMapRegisters; // [rsp+40h] [rbp-39h] BYREF
  unsigned int v28; // [rsp+44h] [rbp-35h] BYREF
  SIZE_T v29; // [rsp+48h] [rbp-31h] BYREF
  _BYTE DeviceDescription[64]; // [rsp+50h] [rbp-29h] BYREF

  memset(DeviceDescription, 0, sizeof(DeviceDescription));
  NumberOfMapRegisters = 0;
  v9 = 0LL;
  LookasideList = 0LL;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qdL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v8,
      1u,
      0xAu,
      (struct _GUID *)&WPP_7e4e4e2c73163f40df239693cce6d855_Traceguids,
      (char)a1,
      a2,
      a4);
  v11 = *((_QWORD *)a1 + 470);
  v12 = *(_BYTE *)(v11 + 24);
  if ( v12 < 5u || (v13 = *((_DWORD *)a1 + 30), (v13 & 8) == 0) )
  {
    v23 = -1073741637;
LABEL_24:
    if ( LookasideList )
    {
      if ( v23 )
        PplDestroyLookasideList(LookasideList);
      else
        ndisAssignSGListLookasideList(v9, LookasideList);
    }
    goto LABEL_27;
  }
  if ( v12 == 5 && *(_BYTE *)(v11 + 25) == 2 )
  {
    v25 = *((_QWORD *)a1 + 63);
    if ( v25 )
    {
      v23 = 0;
      *((_DWORD *)a1 + 468) |= 4u;
      *((_DWORD *)a1 + 30) = v13 | 0x40;
      _InterlockedIncrement((volatile signed __int32 *)(v25 + 72));
      goto LABEL_27;
    }
  }
  if ( (*((_DWORD *)a1 + 922) & 0x100) != 0
    || (PoolWithTag = (volatile signed __int32 *)ExAllocatePoolWithTag(NonPagedPoolNx, 0xA0uLL, 0x6264444Eu),
        (v9 = PoolWithTag) == 0LL) )
  {
    v23 = -1073741670;
    goto LABEL_27;
  }
  memset((void *)PoolWithTag, 0, 0xA0uLL);
  *v9 = 10486031;
  *((_QWORD *)v9 + 1) = a1;
  *((_QWORD *)v9 + 2) = *((_QWORD *)a1 + 3);
  *((_DWORD *)v9 + 13) = a4;
  v15 = *((_DWORD *)a1 + 931);
  *(_DWORD *)&DeviceDescription[16] = 0;
  *(_DWORD *)&DeviceDescription[12] = v15;
  *(_DWORD *)&DeviceDescription[20] = *((_DWORD *)a1 + 119);
  *(_WORD *)&DeviceDescription[4] = 257;
  if ( a2 )
  {
    *((_DWORD *)a1 + 30) |= 0x10u;
    DeviceDescription[8] = 0;
    DeviceDescription[11] = 1;
  }
  else
  {
    DeviceDescription[8] = 1;
    DeviceDescription[11] = 0;
  }
  v16 = a1[1843];
  v17 = 2 * a4;
  if ( ((unsigned int)(2 * a4 - 2) >> 12) + 2 < v16 )
    *(_DWORD *)&DeviceDescription[32] = (v16 << 12) - 4096;
  else
    *(_DWORD *)&DeviceDescription[32] = 2 * a4;
  *(_DWORD *)DeviceDescription = a3;
  if ( a3 >= 3 )
    *(_DWORD *)&DeviceDescription[40] = a2 != 0 ? 64 : 32;
  if ( *((_QWORD *)v9 + 3)
    || (DmaAdapter = IoGetDmaAdapter(
                       *((PDEVICE_OBJECT *)a1 + 479),
                       (struct _DEVICE_DESCRIPTION *)DeviceDescription,
                       &NumberOfMapRegisters),
        (*((_QWORD *)v9 + 3) = DmaAdapter) != 0LL) )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v17) = 4;
      WPP_RECORDER_SF_qL(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        v17,
        1,
        12,
        (struct _GUID *)&WPP_7e4e4e2c73163f40df239693cce6d855_Traceguids,
        (char)a1,
        NumberOfMapRegisters);
    }
    _InterlockedIncrement(v9 + 18);
    v19 = (*((_DWORD *)a1 + 30) & 0x40000) == 0;
    *((_QWORD *)a1 + 63) = v9;
    if ( v19 )
      *((_QWORD *)a1 + 55) = ndisMSendCompleteSG;
    if ( (*(int (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD, unsigned int *, SIZE_T *))(*(_QWORD *)(*((_QWORD *)v9 + 3) + 8LL)
                                                                                         + 104LL))(
           *((_QWORD *)v9 + 3),
           0LL,
           0LL,
           NumberOfMapRegisters << 12,
           &v28,
           &v29) < 0
      || (*((_DWORD *)v9 + 14) = v28, !*((_QWORD *)v9 + 8))
      && (LookasideList = (void *)PplCreateLookasideList(v20, v11, v21, v22, v28)) == 0LL )
    {
      ndisDereferenceDmaAdapter((PVOID)v9);
      v23 = -1073741670;
      goto LABEL_27;
    }
    *((_DWORD *)a1 + 30) |= 0x40u;
    v23 = 0;
    *((_DWORD *)a1 + 468) |= 4u;
    goto LABEL_24;
  }
  NdisWriteErrorLogEntry(a1, 0xC0001389, 1u, 0xFFFFFFFFLL);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v26) = 2;
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v26,
      1,
      11,
      (struct _GUID *)&WPP_7e4e4e2c73163f40df239693cce6d855_Traceguids,
      (char)a1);
  }
  v23 = -1073741670;
  ExFreePoolWithTag((PVOID)v9, 0);
  *((_QWORD *)a1 + 63) = 0LL;
LABEL_27:
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v11) = 4;
    WPP_RECORDER_SF_qL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v11,
      1,
      13,
      (struct _GUID *)&WPP_7e4e4e2c73163f40df239693cce6d855_Traceguids,
      (char)a1,
      v23);
  }
  return v23;
}
