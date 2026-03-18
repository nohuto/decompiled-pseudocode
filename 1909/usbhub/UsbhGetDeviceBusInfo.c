/*
 * XREFs of UsbhGetDeviceBusInfo @ 0x1C0040354
 * Callers:
 *     UsbhFdoReturnDeviceBusInfo @ 0x1C0043BE4 (UsbhFdoReturnDeviceBusInfo.c)
 *     UsbhAcquireBusInfo @ 0x1C0054090 (UsbhAcquireBusInfo.c)
 * Callees:
 *     PdoExt @ 0x1C0011270 (PdoExt.c)
 *     FdoExt @ 0x1C0012920 (FdoExt.c)
 *     Log @ 0x1C0013360 (Log.c)
 *     _guard_dispatch_icall_nop @ 0x1C002C6B0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C002CA00 (memset.c)
 *     Usbh_UsbdInterfaceDereference @ 0x1C004159C (Usbh_UsbdInterfaceDereference.c)
 *     WPP_RECORDER_SF_ @ 0x1C00415CC (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x1C00416A0 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_ddd @ 0x1C0041990 (WPP_RECORDER_SF_ddd.c)
 *     WPP_RECORDER_SF_dq @ 0x1C0041A74 (WPP_RECORDER_SF_dq.c)
 */

__int64 __fastcall UsbhGetDeviceBusInfo(__int64 a1, __int64 a2, _DWORD *a3, unsigned int a4)
{
  __int64 v4; // rbx
  __int64 v5; // rbp
  _DWORD *v9; // r15
  __int64 v10; // r11
  void *v11; // r10
  __int64 v13; // rbx
  _DWORD *v14; // rax
  int v15; // ebx
  int v16; // edx
  int v17; // r8d
  __int64 v18; // r11
  void *v19; // r10
  void (__fastcall *v20)(__int64); // rax
  int v21; // r9d
  unsigned int v22; // r8d
  _DWORD *PoolWithTag; // rax
  _DWORD *v24; // rdi
  __int64 v25; // rcx
  unsigned int v26; // eax
  __int64 (__fastcall *v27)(__int64, __int64, _DWORD *, size_t *, _DWORD *); // r10
  int v28; // edx
  int v29; // r8d
  int v30; // r9d
  int v31; // [rsp+20h] [rbp-58h]
  _DWORD v32[4]; // [rsp+40h] [rbp-38h] BYREF
  size_t Size; // [rsp+98h] [rbp+20h] BYREF

  v4 = a4;
  v5 = 0LL;
  v9 = FdoExt(a1);
  Log(a1, 8, 1734632041, (unsigned int)v4, (__int64)a3);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_d(
      WPP_GLOBAL_Control->DeviceExtension,
      0,
      1,
      11,
      (__int64)&WPP_10fd33d0d4c73f43ffd0851bf01e9310_Traceguids,
      v4);
  if ( (unsigned int)v4 < 0x10 )
  {
    Log(a1, 8, 1734632005, v4, (__int64)a3);
    if ( WPP_RECORDER_INITIALIZED != v11 )
    {
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
        WPP_RECORDER_SF_(WPP_GLOBAL_Control->DeviceExtension, 0, 1, 12, v10);
    }
    return 3221225507LL;
  }
  if ( a2 )
  {
    v13 = *((_QWORD *)PdoExt(a2) + 145);
    v14 = FdoExt(a1);
    if ( *((_QWORD *)v14 + 543) )
    {
      v5 = (*((__int64 (__fastcall **)(_QWORD, __int64))v14 + 543))(*((_QWORD *)v14 + 529), v13);
      v15 = 0;
    }
    else
    {
      v15 = -1073741822;
    }
    Log(a1, 8, 1734631985, v15, v5);
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
      WPP_RECORDER_SF_dq(
        WPP_GLOBAL_Control->DeviceExtension,
        v16,
        v17,
        13,
        (__int64)&WPP_10fd33d0d4c73f43ffd0851bf01e9310_Traceguids,
        v15,
        v5);
  }
  else
  {
    Log(a1, 8, 1734631986, 0LL, 0LL);
    if ( WPP_RECORDER_INITIALIZED != v19 && LOWORD(WPP_GLOBAL_Control->DeviceType) )
      WPP_RECORDER_SF_(WPP_GLOBAL_Control->DeviceExtension, 0, 1, 14, v18);
    v5 = *((_QWORD *)v9 + 570);
    v20 = (void (__fastcall *)(__int64))*((_QWORD *)FdoExt(a1) + 571);
    if ( v20 )
      v20(v5);
    v15 = 0;
  }
  if ( v15 >= 0 )
  {
    Log(a1, 8, 1734631987, 0LL, 0LL);
    v22 = v21 + 16;
    LODWORD(Size) = v21 + 16;
    while ( 1 )
    {
      PoolWithTag = ExAllocatePoolWithTag(PagedPool, v22, 0x42554855u);
      v24 = PoolWithTag;
      if ( !PoolWithTag )
        break;
      memset(PoolWithTag, 0, (unsigned int)Size);
      v25 = *(_QWORD *)(a1 + 64);
      v26 = 0;
      v32[0] = 0;
      v27 = *(__int64 (__fastcall **)(__int64, __int64, _DWORD *, size_t *, _DWORD *))(v25 + 4608);
      if ( v27 )
      {
        v15 = v27(v5, 1LL, v24, &Size, v32);
        v26 = v32[0];
      }
      else
      {
        v15 = -1073741822;
      }
      Log(a1, 8, 1734631988, (__int64)v24, v26);
      if ( v15 != -1073741789 )
        goto LABEL_31;
      LODWORD(Size) = v32[0];
      Log(a1, 8, 1734631989, v32[0], -1073741789LL);
      ExFreePoolWithTag(v24, 0);
      v22 = Size;
    }
    v15 = -1073741670;
LABEL_31:
    Usbh_UsbdInterfaceDereference(a1, v5);
    if ( v15 < 0 )
      goto LABEL_36;
    if ( v24 )
    {
      a3[1] = *v24;
      a3[2] = v24[1];
      a3[3] = v24[2];
      Log(a1, 8, 1734629425, (unsigned int)*v24, (unsigned int)v24[1]);
      Log(a1, 8, 1734629426, (unsigned int)v24[2], 0LL);
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
        WPP_RECORDER_SF_ddd(WPP_GLOBAL_Control->DeviceExtension, v28, v29, v30, v31, *v24, v24[1], v24[2]);
LABEL_36:
      if ( v24 )
        ExFreePoolWithTag(v24, 0);
    }
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_d(
      WPP_GLOBAL_Control->DeviceExtension,
      0,
      1,
      16,
      (__int64)&WPP_10fd33d0d4c73f43ffd0851bf01e9310_Traceguids,
      v15);
  return (unsigned int)v15;
}
