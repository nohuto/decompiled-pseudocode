/*
 * XREFs of DpiPdoGetDeviceDescriptor @ 0x1C0157F4C
 * Callers:
 *     DpiPdoAddPdo @ 0x1C0157A0C (DpiPdoAddPdo.c)
 * Callees:
 *     ?IsInternalVideoOutput@@YAEW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@@Z @ 0x1C0003D4C (-IsInternalVideoOutput@@YAEW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@@Z.c)
 *     DpiIsValidEdid @ 0x1C001E8CC (DpiIsValidEdid.c)
 *     memmove @ 0x1C0024FC0 (memmove.c)
 *     memset @ 0x1C0025300 (memset.c)
 *     DxgkAcquireAdapterDdiSync @ 0x1C0153C70 (DxgkAcquireAdapterDdiSync.c)
 *     DxgkReleaseAdapterDdiSync @ 0x1C0153CA4 (DxgkReleaseAdapterDdiSync.c)
 *     DpiDxgkDdiQueryDeviceDescriptor @ 0x1C01580F0 (DpiDxgkDdiQueryDeviceDescriptor.c)
 *     DpiPdoPollChild @ 0x1C02AF678 (DpiPdoPollChild.c)
 */

__int64 __fastcall DpiPdoGetDeviceDescriptor(
        __int64 a1,
        int *a2,
        __int64 a3,
        char a4,
        char a5,
        char a6,
        __int64 a7,
        _OWORD *a8)
{
  __int64 v8; // r15
  __int64 v11; // r13
  PVOID v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  size_t v16; // r9
  __int64 v17; // r8
  __int64 DeviceDescriptor; // rdi
  __int64 v19; // rdx
  __int64 v20; // r8
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v25; // rcx
  size_t v26; // r8
  __int64 v27; // rax
  __int64 v28; // r8
  __int64 v29; // rdx
  __int64 v30; // r8
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // r8
  __int64 v34; // rax
  __int64 v35; // rax
  __int64 v36; // rax
  __int64 v37; // rcx
  int v38; // edx
  int v39; // r9d
  __int64 v40; // rdx
  __int64 v41; // rcx
  __int64 v42; // r8
  __int64 v43; // rax
  __int64 v44; // rax
  PVOID PoolWithTag; // rax
  __int64 v46; // r8
  __int64 v47; // rdx
  __int64 v48; // r8
  __int64 v49; // rdx
  __int64 v50; // rcx
  __int64 v51; // r8
  __int64 v52; // rax
  __int64 v53; // rcx
  _WORD *v54; // rax
  size_t Size[2]; // [rsp+30h] [rbp-10h] BYREF
  int v56; // [rsp+90h] [rbp+50h]

  v56 = a3;
  v8 = *(_QWORD *)(a1 + 64);
  Size[0] = 0LL;
  Size[1] = 0LL;
  v11 = *(_QWORD *)(v8 + 40);
  if ( *((_QWORD *)a2 + 14) )
  {
    HIDWORD(Size[0]) = 256;
    Size[1] = (size_t)ExAllocatePoolWithTag(PagedPool, 0x100uLL, 0x74727044u);
    v16 = Size[1];
    if ( !Size[1] )
      goto LABEL_21;
    v25 = *((unsigned __int16 *)a2 + 47);
    if ( (unsigned int)v25 >= HIDWORD(Size[0]) )
    {
      v26 = HIDWORD(Size[0]);
    }
    else
    {
      memset((void *)(Size[1] + v25), 0, (unsigned int)(HIDWORD(Size[0]) - v25));
      v26 = *((unsigned __int16 *)a2 + 47);
    }
    memmove((void *)Size[1], *((const void **)a2 + 14), v26);
    LODWORD(DeviceDescriptor) = 0;
    goto LABEL_9;
  }
  if ( *a2 != 1 )
  {
    if ( *a2 != 2 )
    {
      LODWORD(DeviceDescriptor) = -1073741823;
      v52 = WdLogNewEntry5_WdError(a1, a2, a3);
      v53 = *a2;
      goto LABEL_42;
    }
    HIDWORD(Size[0]) = 408;
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x198uLL, 0x74727044u);
    Size[1] = (size_t)PoolWithTag;
    if ( !PoolWithTag )
      goto LABEL_21;
    memset(PoolWithTag, 0, HIDWORD(Size[0]));
    KeWaitForSingleObject(*((PVOID *)a2 + 9), Executive, 0, 0, 0LL);
    DxgkAcquireAdapterDdiSync(*(_QWORD *)(v8 + 3896), 1LL, v46);
    DeviceDescriptor = (int)DpiDxgkDdiQueryDeviceDescriptor(v11, *(_QWORD *)(v8 + 48), (unsigned int)a2[6], Size);
    DxgkReleaseAdapterDdiSync(*(DXGADAPTER **)(v8 + 3896), v47, v48);
    KeReleaseMutex(*((PRKMUTEX *)a2 + 9), 0);
    if ( (int)DeviceDescriptor < 0 )
    {
      v52 = WdLogNewEntry5_WdError(v50, v49, v51);
      v53 = *(_QWORD *)(v11 + 216);
      *(_QWORD *)(v52 + 32) = DeviceDescriptor;
LABEL_42:
      *(_QWORD *)(v52 + 24) = v53;
      WdLogEvent5_WdError(v52);
      goto LABEL_10;
    }
    v54 = (_WORD *)Size[1];
    *(_WORD *)(Size[1] + 100) = 0;
    v54[101] = 0;
    v54[152] = 0;
    v54[203] = 0;
LABEL_9:
    *a8 = *(_OWORD *)Size;
    goto LABEL_10;
  }
  HIDWORD(Size[0]) = 256;
  v12 = ExAllocatePoolWithTag(PagedPool, 0x100uLL, 0x74727044u);
  Size[1] = (size_t)v12;
  if ( !v12 )
  {
LABEL_21:
    LODWORD(DeviceDescriptor) = -1073741801;
    v27 = WdLogNewEntry5_WdLowResource(v14, v13, v15, v16);
    *(_QWORD *)(v27 + 24) = -1073741801LL;
    WdLogEvent5_WdLowResource(v27);
    goto LABEL_11;
  }
  memset(v12, 0, HIDWORD(Size[0]));
  KeWaitForSingleObject(*((PVOID *)a2 + 9), Executive, 0, 0, 0LL);
  DxgkAcquireAdapterDdiSync(*(_QWORD *)(v8 + 3896), 1LL, v17);
  LODWORD(DeviceDescriptor) = DpiDxgkDdiQueryDeviceDescriptor(v11, *(_QWORD *)(v8 + 48), (unsigned int)a2[6], Size);
  DxgkReleaseAdapterDdiSync(*(DXGADAPTER **)(v8 + 3896), v19, v20);
  KeReleaseMutex(*((PRKMUTEX *)a2 + 9), 0);
  if ( (_DWORD)DeviceDescriptor == -1071841272 )
  {
    Size[0] = 0x8000000000LL;
    memset((void *)Size[1], 0, 0x100uLL);
    KeWaitForSingleObject(*((PVOID *)a2 + 9), Executive, 0, 0, 0LL);
    DxgkAcquireAdapterDdiSync(*(_QWORD *)(v8 + 3896), 1LL, v28);
    LODWORD(DeviceDescriptor) = DpiDxgkDdiQueryDeviceDescriptor(v11, *(_QWORD *)(v8 + 48), (unsigned int)a2[6], Size);
    DxgkReleaseAdapterDdiSync(*(DXGADAPTER **)(v8 + 3896), v29, v30);
    KeReleaseMutex(*((PRKMUTEX *)a2 + 9), 0);
  }
  if ( (_DWORD)DeviceDescriptor == -1071774719 )
  {
    if ( IsInternalVideoOutput((enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY)a2[1]) )
    {
      v34 = WdLogNewEntry5_WdError(v32, v31, v33);
      *(_QWORD *)(v34 + 24) = DpiDxgkDdiQueryDeviceDescriptor;
      *(_QWORD *)(v34 + 32) = -1071774719LL;
      WdLogEvent5_WdError(v34);
    }
    else
    {
      v35 = WdLogNewEntry5_WdWarning(v32, v31, v33);
      *(_QWORD *)(v35 + 24) = -1071774719LL;
      WdLogEvent5_WdWarning(v35);
    }
    goto LABEL_11;
  }
  if ( (int)DeviceDescriptor >= 0 )
  {
    if ( !DpiIsValidEdid(Size[1]) )
    {
      if ( IsInternalVideoOutput((enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY)a2[1]) )
      {
        v43 = WdLogNewEntry5_WdError(v41, v40, v42);
        *(_QWORD *)(v43 + 24) = (int)DeviceDescriptor;
        WdLogEvent5_WdError(v43);
      }
      else
      {
        v44 = WdLogNewEntry5_WdWarning(v41, v40, v42);
        *(_QWORD *)(v44 + 24) = (int)DeviceDescriptor;
        WdLogEvent5_WdWarning(v44);
      }
      LODWORD(DeviceDescriptor) = -1073741823;
      goto LABEL_11;
    }
    goto LABEL_9;
  }
  v36 = WdLogNewEntry5_WdWarning(v22, v21, v23);
  *(_QWORD *)(v36 + 24) = *(_QWORD *)(v11 + 216);
  WdLogEvent5_WdWarning(v36);
  if ( a6 == 1 && (unsigned int)a2[15] < 3 )
  {
    KeWaitForSingleObject((PVOID)(v8 + 3408), Executive, 0, 0, 0LL);
    ++a2[15];
    if ( !*((_BYTE *)a2 + 64) )
    {
      v37 = *(_QWORD *)(a1 + 64);
      *((_BYTE *)a2 + 64) = 1;
      v38 = *(_DWORD *)(v37 + 3688);
      *(_DWORD *)(v37 + 3688) = v38 + 1;
      if ( !v38 )
        KeClearEvent((PRKEVENT)(v37 + 3696));
    }
    KeReleaseMutex((PRKMUTEX)(v8 + 3408), 0);
    LOBYTE(v39) = a4;
    LODWORD(DeviceDescriptor) = DpiPdoPollChild(a1, a2[6], v56, v39, a5);
    if ( (int)DeviceDescriptor >= 0 )
      LODWORD(DeviceDescriptor) = 259;
  }
LABEL_10:
  if ( (_DWORD)DeviceDescriptor != 259 )
  {
LABEL_11:
    KeWaitForSingleObject((PVOID)(v8 + 3408), Executive, 0, 0, 0LL);
    a2[15] = 0;
    KeReleaseMutex((PRKMUTEX)(v8 + 3408), 0);
  }
  if ( (int)DeviceDescriptor < 0 || (_DWORD)DeviceDescriptor == 259 )
  {
    if ( Size[1] )
      ExFreePoolWithTag((PVOID)Size[1], 0);
  }
  return (unsigned int)DeviceDescriptor;
}
