/*
 * XREFs of ndisQueryBusInterface @ 0x1C002E270
 * Callers:
 *     ndisInitializeConfiguration @ 0x1C0105F58 (ndisInitializeConfiguration.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C0006260 (WPP_RECORDER_SF_q.c)
 *     memset @ 0x1C00416C0 (memset.c)
 */

__int64 __fastcall ndisQueryBusInterface(__int64 a1)
{
  int v2; // edx
  __int64 v3; // r14
  PIRP Irp; // rax
  int v5; // edx
  __int64 v6; // r8
  __int64 v7; // r9
  _IRP *v8; // rsi
  __int64 v9; // rdi
  int v10; // r15d
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // r8
  __int64 v16; // r9
  _QWORD v18[7]; // [rsp+38h] [rbp-D0h] BYREF
  _QWORD v19[10]; // [rsp+78h] [rbp-90h] BYREF
  _QWORD v20[9]; // [rsp+C8h] [rbp-40h] BYREF
  _QWORD v21[8]; // [rsp+118h] [rbp+10h] BYREF

  memset(v21, 0, sizeof(v21));
  memset(v20, 0, sizeof(v20));
  memset(v19, 0, sizeof(v19));
  memset(v18, 0, sizeof(v18));
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v2) = 4;
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v2,
      1,
      22,
      (struct _GUID *)&WPP_ecb39071101534da99cb68be25855aca_Traceguids,
      a1);
  }
  v3 = *(_QWORD *)(a1 + 3840);
  Irp = IoAllocateIrp(*(_BYTE *)(v3 + 76) + 1, 0);
  v8 = Irp;
  if ( Irp )
  {
    v9 = (__int64)&Irp->Tail.Overlay.CurrentStackLocation[-1];
    *(_WORD *)v9 = 2075;
    *(_QWORD *)(v9 + 40) = v3;
    Irp->IoStatus.Status = -1073741637;
    *(_QWORD *)(v9 + 8) = &GUID_BUS_INTERFACE_STANDARD;
    *(_QWORD *)(v9 + 24) = v21;
    *(_DWORD *)(v9 + 16) = 65600;
    v10 = IoSynchronousCallDriver(v3, Irp, v6, v7);
    if ( v10 >= 0 )
    {
      v10 = 0;
      *(_QWORD *)(a1 + 3696) = v21[6];
      *(_QWORD *)(a1 + 3704) = v21[7];
      *(_QWORD *)(a1 + 3712) = v21[1];
    }
    IoReuseIrp(v8, -1073741637);
    *(_WORD *)v9 = 2075;
    *(_QWORD *)(v9 + 40) = v3;
    v8->IoStatus.Status = -1073741637;
    *(_QWORD *)(v9 + 8) = &GUID_MSIX_TABLE_CONFIG_INTERFACE;
    *(_QWORD *)(v9 + 24) = v20;
    *(_DWORD *)(v9 + 16) = 65608;
    if ( (int)IoSynchronousCallDriver(v3, v8, v11, v12) < 0 )
    {
      *(_QWORD *)(a1 + 4272) = 0LL;
      *(_QWORD *)(a1 + 4280) = 0LL;
      *(_QWORD *)(a1 + 4288) = 0LL;
      *(_QWORD *)(a1 + 4296) = 0LL;
    }
    else
    {
      *(_QWORD *)(a1 + 4272) = v20[1];
      *(_QWORD *)(a1 + 4280) = v20[4];
      *(_QWORD *)(a1 + 4288) = v20[5];
      *(_QWORD *)(a1 + 4296) = v20[6];
    }
    IoReuseIrp(v8, -1073741637);
    *(_WORD *)v9 = 2075;
    *(_QWORD *)(v9 + 40) = v3;
    v8->IoStatus.Status = -1073741637;
    *(_QWORD *)(v9 + 8) = &GUID_PCI_VIRTUALIZATION_INTERFACE;
    *(_QWORD *)(v9 + 24) = v19;
    *(_DWORD *)(v9 + 16) = 65616;
    if ( (int)IoSynchronousCallDriver(v3, v8, v13, v14) >= 0 )
    {
      *(_QWORD *)(a1 + 4816) = v19[1];
      *(_QWORD *)(a1 + 4776) = v19[4];
      *(_QWORD *)(a1 + 4784) = v19[5];
      *(_QWORD *)(a1 + 4792) = v19[8];
      *(_QWORD *)(a1 + 4800) = v19[6];
      *(_QWORD *)(a1 + 4808) = v19[9];
    }
    else
    {
      *(_QWORD *)(a1 + 4816) = 0LL;
      *(_QWORD *)(a1 + 4776) = 0LL;
      *(_QWORD *)(a1 + 4784) = 0LL;
      *(_QWORD *)(a1 + 4792) = 0LL;
      *(_QWORD *)(a1 + 4800) = 0LL;
      *(_QWORD *)(a1 + 4808) = 0LL;
    }
    IoReuseIrp(v8, -1073741637);
    *(_WORD *)v9 = 2075;
    *(_QWORD *)(v9 + 40) = v3;
    v8->IoStatus.Status = -1073741637;
    *(_QWORD *)(v9 + 8) = &GUID_VPCI_INTERFACE_STANDARD;
    *(_QWORD *)(v9 + 24) = v18;
    *(_DWORD *)(v9 + 16) = 65592;
    if ( (int)IoSynchronousCallDriver(v3, v8, v15, v16) >= 0 )
    {
      *(_QWORD *)(a1 + 4864) = v18[1];
      *(_QWORD *)(a1 + 4840) = v18[3];
      *(_QWORD *)(a1 + 4848) = v18[4];
      *(_QWORD *)(a1 + 4856) = v18[5];
      *(_DWORD *)(a1 + 4872) = v18[6];
    }
    else
    {
      *(_QWORD *)(a1 + 4864) = 0LL;
      *(_QWORD *)(a1 + 4840) = 0LL;
      *(_QWORD *)(a1 + 4848) = 0LL;
      *(_QWORD *)(a1 + 4856) = 0LL;
      *(_DWORD *)(a1 + 4872) = 0;
    }
    IoFreeIrp(v8);
  }
  else
  {
    v10 = -1073741670;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v5) = 4;
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v5,
      1,
      23,
      (struct _GUID *)&WPP_ecb39071101534da99cb68be25855aca_Traceguids,
      a1);
  }
  return (unsigned int)v10;
}
