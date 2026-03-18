/*
 * XREFs of XilCoreDeviceSlot_AllocateResources @ 0x1C00429E0
 * Callers:
 *     XilDeviceSlot_PrepareHardware @ 0x1C0013910 (XilDeviceSlot_PrepareHardware.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0001E30 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_i @ 0x1C00028DC (WPP_RECORDER_SF_i.c)
 *     memset @ 0x1C0006FC0 (memset.c)
 *     WPP_RECORDER_SF_d @ 0x1C00091C4 (WPP_RECORDER_SF_d.c)
 *     CommonBuffer_AcquireBuffer @ 0x1C000A890 (CommonBuffer_AcquireBuffer.c)
 *     CommonBuffer_AcquireBuffers @ 0x1C000A8DC (CommonBuffer_AcquireBuffers.c)
 *     XilCoreDeviceSlot_FreeResources @ 0x1C0042C28 (XilCoreDeviceSlot_FreeResources.c)
 */

__int64 __fastcall XilCoreDeviceSlot_AllocateResources(__int64 a1)
{
  _QWORD *v1; // rsi
  __int64 v3; // rdx
  void *v4; // rdi
  __int64 v5; // rbp
  __int64 v6; // rax
  unsigned __int16 v7; // r9
  int v8; // edi
  int v9; // edx
  __int64 v10; // rax
  int v11; // eax
  __int64 v12; // r8
  __int64 v13; // rdx
  _QWORD *v14; // r9
  __int64 v15; // r10
  int v16; // eax
  SIZE_T v17; // rdi
  PVOID PoolWithTag; // rax
  int v20[2]; // [rsp+28h] [rbp-20h]

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
    v7 = 13;
LABEL_3:
    WPP_RECORDER_SF_(
      *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL),
      2u,
      0xAu,
      v7,
      (__int64)&WPP_13340aaa62fe39736047da1387542cf1_Traceguids);
    v8 = -1073741670;
LABEL_17:
    XilCoreDeviceSlot_FreeResources(a1);
    return (unsigned int)v8;
  }
  v9 = *(_DWORD *)(v5 + 92);
  *(_DWORD *)(a1 + 20) = v9;
  if ( v9 )
  {
    v10 = CommonBuffer_AcquireBuffer(v4, 8 * v9, a1, 846490707);
    *(_QWORD *)(a1 + 32) = v10;
    if ( !v10 )
    {
      v7 = 14;
      goto LABEL_3;
    }
    v11 = CommonBuffer_AcquireBuffers((KSPIN_LOCK *)v4, *(_DWORD *)(a1 + 20), 4096, (int)v1, a1, 863267923, 0LL);
    v8 = v11;
    if ( v11 < 0 )
    {
      v20[0] = v11;
      WPP_RECORDER_SF_d(
        *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL),
        2u,
        0xAu,
        0xFu,
        (__int64)&WPP_13340aaa62fe39736047da1387542cf1_Traceguids,
        *(_QWORD *)v20);
      goto LABEL_16;
    }
    v12 = *(_QWORD *)(a1 + 32);
    v13 = 0LL;
    v14 = (_QWORD *)*v1;
    v15 = *(_QWORD *)(v12 + 16);
    if ( *(_DWORD *)(a1 + 20) )
    {
      do
      {
        *(_QWORD *)(v15 + 8 * v13) = v14[3];
        v13 = (unsigned int)(v13 + 1);
        v14 = (_QWORD *)*v14;
      }
      while ( (unsigned int)v13 < *(_DWORD *)(a1 + 20) );
      v12 = *(_QWORD *)(a1 + 32);
    }
    **(_QWORD **)(*(_QWORD *)(a1 + 24) + 16LL) = *(_QWORD *)(v12 + 24);
  }
  v16 = (unsigned __int8)*(_DWORD *)(v5 + 80);
  *(_DWORD *)(a1 + 16) = v16;
  v17 = 8LL * (unsigned int)(v16 + 1);
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, v17, 0x49434858u);
  *(_QWORD *)(a1 + 56) = PoolWithTag;
  if ( !PoolWithTag )
  {
    v7 = 16;
    goto LABEL_3;
  }
  memset(PoolWithTag, 0, v17);
  WPP_RECORDER_SF_i(
    *(_QWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 8LL) + 72LL),
    4u,
    0xAu,
    0x11u,
    (__int64)&WPP_13340aaa62fe39736047da1387542cf1_Traceguids,
    *(_QWORD *)(*(_QWORD *)(a1 + 24) + 16LL));
  v8 = 0;
LABEL_16:
  if ( v8 < 0 )
    goto LABEL_17;
  return (unsigned int)v8;
}
