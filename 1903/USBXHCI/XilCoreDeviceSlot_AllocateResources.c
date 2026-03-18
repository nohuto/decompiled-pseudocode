/*
 * XREFs of XilCoreDeviceSlot_AllocateResources @ 0x1C0048368
 * Callers:
 *     XilDeviceSlot_PrepareHardware @ 0x1C0016444 (XilDeviceSlot_PrepareHardware.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0001FE0 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_i @ 0x1C0002D84 (WPP_RECORDER_SF_i.c)
 *     memset @ 0x1C0008D80 (memset.c)
 *     WPP_RECORDER_SF_d @ 0x1C000B24C (WPP_RECORDER_SF_d.c)
 *     CommonBuffer_AcquireBuffer @ 0x1C000CAA4 (CommonBuffer_AcquireBuffer.c)
 *     CommonBuffer_AcquireBuffers @ 0x1C000CAF0 (CommonBuffer_AcquireBuffers.c)
 *     XilCoreDeviceSlot_FreeResources @ 0x1C0048620 (XilCoreDeviceSlot_FreeResources.c)
 */

__int64 __fastcall XilCoreDeviceSlot_AllocateResources(__int64 a1)
{
  _QWORD *v1; // rsi
  __int64 v3; // rdx
  void *v4; // rbx
  __int64 v5; // rbp
  __int64 v6; // rax
  unsigned __int16 v7; // r9
  int v8; // ebx
  int v9; // edx
  __int64 v10; // rax
  __int64 v11; // r8
  __int64 v12; // rdx
  _QWORD *v13; // r9
  __int64 v14; // r10
  int v15; // eax
  SIZE_T v16; // rbx
  PVOID PoolWithTag; // rax
  int v19[2]; // [rsp+28h] [rbp-20h]

  v1 = (_QWORD *)(a1 + 40);
  v3 = *(_QWORD *)(*(_QWORD *)a1 + 8LL);
  v4 = *(void **)(v3 + 120);
  v5 = *(_QWORD *)(v3 + 88);
  *(_QWORD *)(a1 + 48) = a1 + 40;
  *(_QWORD *)(a1 + 40) = a1 + 40;
  v6 = CommonBuffer_AcquireBuffer(v4, 4096, a1, 829713491);
  *(_QWORD *)(a1 + 24) = v6;
  if ( !v6 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
LABEL_5:
      v8 = -1073741670;
LABEL_24:
      XilCoreDeviceSlot_FreeResources(a1);
      return (unsigned int)v8;
    }
    v7 = 13;
LABEL_4:
    WPP_RECORDER_SF_(
      *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL),
      2u,
      0xAu,
      v7,
      (__int64)&WPP_13340aaa62fe39736047da1387542cf1_Traceguids);
    goto LABEL_5;
  }
  v9 = *(_DWORD *)(v5 + 92);
  *(_DWORD *)(a1 + 20) = v9;
  if ( v9 )
  {
    v10 = CommonBuffer_AcquireBuffer(v4, 8 * v9, a1, 846490707);
    *(_QWORD *)(a1 + 32) = v10;
    if ( !v10 )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_5;
      v7 = 14;
      goto LABEL_4;
    }
    v8 = CommonBuffer_AcquireBuffers((KSPIN_LOCK *)v4, *(_DWORD *)(a1 + 20), 4096, (int)v1, a1, 863267923, 0LL);
    if ( v8 < 0 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v19[0] = v8;
        WPP_RECORDER_SF_d(
          *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL),
          2u,
          0xAu,
          0xFu,
          (__int64)&WPP_13340aaa62fe39736047da1387542cf1_Traceguids,
          *(_QWORD *)v19);
      }
      goto LABEL_23;
    }
    v11 = *(_QWORD *)(a1 + 32);
    v12 = 0LL;
    v13 = (_QWORD *)*v1;
    v14 = *(_QWORD *)(v11 + 16);
    if ( *(_DWORD *)(a1 + 20) )
    {
      do
      {
        *(_QWORD *)(v14 + 8 * v12) = v13[3];
        v12 = (unsigned int)(v12 + 1);
        v13 = (_QWORD *)*v13;
      }
      while ( (unsigned int)v12 < *(_DWORD *)(a1 + 20) );
      v11 = *(_QWORD *)(a1 + 32);
    }
    **(_QWORD **)(*(_QWORD *)(a1 + 24) + 16LL) = *(_QWORD *)(v11 + 24);
  }
  v15 = (unsigned __int8)*(_DWORD *)(v5 + 80);
  *(_DWORD *)(a1 + 16) = v15;
  v16 = 8LL * (unsigned int)(v15 + 1);
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, v16, 0x49434858u);
  *(_QWORD *)(a1 + 56) = PoolWithTag;
  if ( !PoolWithTag )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_5;
    v7 = 16;
    goto LABEL_4;
  }
  memset(PoolWithTag, 0, v16);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_i(
      *(_QWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 8LL) + 72LL),
      4u,
      0xAu,
      0x11u,
      (__int64)&WPP_13340aaa62fe39736047da1387542cf1_Traceguids,
      *(_QWORD *)(*(_QWORD *)(a1 + 24) + 16LL));
  v8 = 0;
LABEL_23:
  if ( v8 < 0 )
    goto LABEL_24;
  return (unsigned int)v8;
}
