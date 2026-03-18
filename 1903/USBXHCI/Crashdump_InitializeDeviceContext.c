/*
 * XREFs of Crashdump_InitializeDeviceContext @ 0x1C0040290
 * Callers:
 *     Crashdump_UcxEvtGetDumpData @ 0x1C0040E60 (Crashdump_UcxEvtGetDumpData.c)
 * Callees:
 *     memset @ 0x1C0008D80 (memset.c)
 *     DeviceSlot_LocateDeviceByPortPath @ 0x1C0015CE0 (DeviceSlot_LocateDeviceByPortPath.c)
 *     Crashdump_Endpoint_Initialize @ 0x1C0042C64 (Crashdump_Endpoint_Initialize.c)
 *     Crashdump_UsbDevice_Initialize @ 0x1C0044284 (Crashdump_UsbDevice_Initialize.c)
 *     XilCoreUsbDevice_GetDeviceContextBufferVA @ 0x1C0048B40 (XilCoreUsbDevice_GetDeviceContextBufferVA.c)
 */

__int64 __fastcall Crashdump_InitializeDeviceContext(__int64 a1, int a2, __int64 a3, __int64 a4, __int64 a5)
{
  int v8; // ebx
  __int64 v9; // r13
  __int64 v10; // rcx
  __int64 DeviceContextBufferVA; // rax
  int v12; // r9d
  __int64 v13; // r14
  PVOID PoolWithTag; // rax
  void *v15; // rdi
  __int64 v16; // r14
  __int64 v17; // rax
  bool v18; // zf
  __int64 v19; // r15
  PVOID v20; // rax
  int v22; // [rsp+30h] [rbp-58h]
  __int64 v23; // [rsp+40h] [rbp-48h] BYREF
  __int64 v24; // [rsp+48h] [rbp-40h]
  __int64 v25; // [rsp+50h] [rbp-38h]

  v8 = DeviceSlot_LocateDeviceByPortPath(a1, a4, &v23);
  if ( v8 < 0 )
    return (unsigned int)v8;
  v9 = v23;
  v10 = v23 + 616;
  if ( !*(_BYTE *)(v23 + 657) )
    v10 = v23 + 608;
  DeviceContextBufferVA = XilCoreUsbDevice_GetDeviceContextBufferVA(v10);
  LOBYTE(v12) = *(_BYTE *)(v9 + 135);
  v13 = DeviceContextBufferVA;
  v22 = *(_DWORD *)(a4 + 4);
  v24 = DeviceContextBufferVA;
  v8 = Crashdump_UsbDevice_Initialize(a5, a2, a3, v12, DeviceContextBufferVA, v9, v22);
  if ( v8 < 0 )
    return (unsigned int)v8;
  PoolWithTag = ExAllocatePoolWithTag(*((POOL_TYPE *)&WPP_MAIN_CB.AlignmentRequirement + 1), 0xC8uLL, 0x43434858u);
  v15 = PoolWithTag;
  if ( !PoolWithTag )
    return (unsigned int)-1073741670;
  memset(PoolWithTag, 0, 0xC8uLL);
  v8 = Crashdump_Endpoint_Initialize((_DWORD)v15, a2, a5, 1, 0, v13, *(_QWORD *)(a5 + 64));
  if ( v8 < 0 )
  {
LABEL_15:
    if ( v15 )
      ExFreePoolWithTag(v15, 0x43434858u);
    return (unsigned int)v8;
  }
  *(_QWORD *)(a5 + 120) = v15;
  v15 = 0LL;
  if ( !a3 || (v16 = 0LL, !*(_DWORD *)a3) )
  {
LABEL_14:
    if ( v8 >= 0 )
      return (unsigned int)v8;
    goto LABEL_15;
  }
  while ( 1 )
  {
    v25 = *(_QWORD *)(a3 + 8);
    v17 = (*(unsigned __int8 *)(v25 + 8 * v16) >> 7) + 2 * (*(_BYTE *)(v25 + 8 * v16) & 0x7Fu);
    v18 = *(_QWORD *)(v9 + 8 * v17 + 168) == 0LL;
    LODWORD(v23) = (*(unsigned __int8 *)(v25 + 8 * v16) >> 7) + 2 * (*(_BYTE *)(v25 + 8 * v16) & 0x7F);
    v19 = (unsigned int)v17;
    if ( v18 )
      break;
    v20 = ExAllocatePoolWithTag(*((POOL_TYPE *)&WPP_MAIN_CB.AlignmentRequirement + 1), 0xC8uLL, 0x43434858u);
    v15 = v20;
    if ( !v20 )
    {
      v8 = -1073741670;
      goto LABEL_14;
    }
    memset(v20, 0, 0xC8uLL);
    v8 = Crashdump_Endpoint_Initialize(
           (_DWORD)v15,
           a2,
           a5,
           v23,
           *(_DWORD *)(v25 + 8 * v16 + 4),
           v24,
           *(_QWORD *)(a5 + 64));
    if ( v8 < 0 )
      goto LABEL_15;
    *(_QWORD *)(a5 + 8 * v19 + 112) = v15;
    v16 = (unsigned int)(v16 + 1);
    v15 = 0LL;
    if ( (unsigned int)v16 >= *(_DWORD *)a3 )
      goto LABEL_14;
  }
  return (unsigned int)-1073741811;
}
