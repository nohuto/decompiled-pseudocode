/*
 * XREFs of DpiPdoGetDeviceIdFromDescriptor @ 0x1C01735AC
 * Callers:
 *     DpiPdoAddPdo @ 0x1C0157A0C (DpiPdoAddPdo.c)
 * Callees:
 *     DpiIsValidEdid @ 0x1C001E8CC (DpiIsValidEdid.c)
 *     memmove @ 0x1C0024FC0 (memmove.c)
 *     memset @ 0x1C0025300 (memset.c)
 *     MonitorGetMonitorDescriptorIDs @ 0x1C017369C (MonitorGetMonitorDescriptorIDs.c)
 */

__int64 __fastcall DpiPdoGetDeviceIdFromDescriptor(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  int MonitorDescriptorIDs; // esi
  __int64 v5; // r14
  __int64 v6; // rcx
  SIZE_T v7; // rdx
  PVOID PoolWithTag; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  _OWORD *v13; // rdi
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  int v17; // eax
  __int64 v19; // rax
  __int64 v20; // rax
  _OWORD *v21; // rbx
  __int128 v22; // xmm1
  __int64 v23; // rax
  __int64 v24; // rcx
  __int64 v25; // rax

  v2 = *(_QWORD *)(a1 + 64);
  MonitorDescriptorIDs = 0;
  v5 = *(_QWORD *)(*(_QWORD *)(v2 + 32) + 64LL);
  if ( *(_DWORD *)(v2 + 496) == 1 && !*(_QWORD *)(a2 + 8) )
  {
    MonitorDescriptorIDs = MonitorGetMonitorDescriptorIDs(
                             *(DXGADAPTER **)(v5 + 3896),
                             *(_DWORD *)(v2 + 504),
                             (struct _DXGK_GENERIC_DESCRIPTOR *)(v2 + 512));
    if ( MonitorDescriptorIDs >= 0 )
      return 0LL;
  }
  v6 = *(_QWORD *)(a2 + 8);
  if ( v6 && (*(_DWORD *)(v2 + 496) != 1 || DpiIsValidEdid(v6)) )
  {
    v7 = *(unsigned int *)(a2 + 4);
    *(_DWORD *)(v2 + 924) = v7;
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, v7, 0x74727044u);
    *(_QWORD *)(v2 + 928) = PoolWithTag;
    if ( PoolWithTag )
    {
      v13 = *(_OWORD **)(a2 + 8);
      memmove(PoolWithTag, v13, *(unsigned int *)(a2 + 4));
      v17 = *(_DWORD *)(v2 + 496);
      if ( v17 == 1 )
      {
        MonitorGetMonitorDescriptorIDs(
          *(DXGADAPTER **)(v5 + 3896),
          *(_DWORD *)(v2 + 504),
          (struct _DXGK_GENERIC_DESCRIPTOR *)(v2 + 512));
      }
      else if ( v17 == 2 )
      {
        v20 = 3LL;
        v21 = (_OWORD *)(v2 + 512);
        do
        {
          *v21 = *v13;
          v21[1] = v13[1];
          v21[2] = v13[2];
          v21[3] = v13[3];
          v21[4] = v13[4];
          v21[5] = v13[5];
          v21[6] = v13[6];
          v21 += 8;
          v22 = v13[7];
          v13 += 8;
          *(v21 - 1) = v22;
          --v20;
        }
        while ( v20 );
        *v21 = *v13;
        *((_QWORD *)v21 + 2) = *((_QWORD *)v13 + 2);
      }
      else
      {
        MonitorDescriptorIDs = -1073741823;
        v23 = WdLogNewEntry5_WdError(v15, v14, v16);
        *(_QWORD *)(v23 + 24) = -1073741823LL;
        WdLogEvent5_WdError(v23);
      }
    }
    else
    {
      MonitorDescriptorIDs = -1073741801;
      v19 = WdLogNewEntry5_WdLowResource(v10, v9, v11, v12);
      *(_QWORD *)(v19 + 24) = -1073741801LL;
      WdLogEvent5_WdLowResource(v19);
    }
  }
  else
  {
    memset((void *)(v2 + 512), 0, 0x198uLL);
    MonitorDescriptorIDs = -1073741823;
    v25 = WdLogNewEntry5_WdEvent(v24);
    *(_QWORD *)(v25 + 24) = -1073741823LL;
    WdLogEvent5_WdEvent(v25);
  }
  return (unsigned int)MonitorDescriptorIDs;
}
