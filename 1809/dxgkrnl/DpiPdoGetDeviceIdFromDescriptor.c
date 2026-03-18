/*
 * XREFs of DpiPdoGetDeviceIdFromDescriptor @ 0x1C0275EF0
 * Callers:
 *     DpiPdoAddPdo @ 0x1C027449C (DpiPdoAddPdo.c)
 * Callees:
 *     memmove @ 0x1C0022E80 (memmove.c)
 *     memset @ 0x1C00231C0 (memset.c)
 *     DpiIsValidEdid @ 0x1C0044E5C (DpiIsValidEdid.c)
 *     MonitorGetMonitorDescriptorIDs @ 0x1C029094C (MonitorGetMonitorDescriptorIDs.c)
 */

__int64 __fastcall DpiPdoGetDeviceIdFromDescriptor(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  int MonitorDescriptorIDs; // esi
  __int64 v5; // r14
  char *v7; // rcx
  SIZE_T v8; // rdx
  PVOID PoolWithTag; // rax
  __int64 v10; // rcx
  __int64 v11; // rax
  _OWORD *v12; // rdi
  __int64 v13; // rcx
  int v14; // eax
  __int64 v15; // rax
  _OWORD *v16; // rbx
  __int128 v17; // xmm1
  __int64 v18; // rax
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // rax

  v2 = *(_QWORD *)(a1 + 64);
  MonitorDescriptorIDs = 0;
  v5 = *(_QWORD *)(*(_QWORD *)(v2 + 32) + 64LL);
  if ( *(_DWORD *)(v2 + 496) == 1 && !*(_QWORD *)(a2 + 8) )
  {
    MonitorDescriptorIDs = MonitorGetMonitorDescriptorIDs(
                             *(DXGADAPTER **)(v5 + 3792),
                             *(_DWORD *)(v2 + 504),
                             (struct _DXGK_GENERIC_DESCRIPTOR *)(v2 + 512));
    if ( MonitorDescriptorIDs >= 0 )
      return 0LL;
  }
  v7 = *(char **)(a2 + 8);
  if ( v7 && (*(_DWORD *)(v2 + 496) != 1 || DpiIsValidEdid(v7)) )
  {
    v8 = *(unsigned int *)(a2 + 4);
    *(_DWORD *)(v2 + 924) = v8;
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, v8, 0x74727044u);
    *(_QWORD *)(v2 + 928) = PoolWithTag;
    if ( PoolWithTag )
    {
      v12 = *(_OWORD **)(a2 + 8);
      memmove(PoolWithTag, v12, *(unsigned int *)(a2 + 4));
      v14 = *(_DWORD *)(v2 + 496);
      if ( v14 == 1 )
      {
        MonitorGetMonitorDescriptorIDs(
          *(DXGADAPTER **)(v5 + 3792),
          *(_DWORD *)(v2 + 504),
          (struct _DXGK_GENERIC_DESCRIPTOR *)(v2 + 512));
      }
      else if ( v14 == 2 )
      {
        v15 = 3LL;
        v16 = (_OWORD *)(v2 + 512);
        do
        {
          *v16 = *v12;
          v16[1] = v12[1];
          v16[2] = v12[2];
          v16[3] = v12[3];
          v16[4] = v12[4];
          v16[5] = v12[5];
          v16[6] = v12[6];
          v16 += 8;
          v17 = v12[7];
          v12 += 8;
          *(v16 - 1) = v17;
          --v15;
        }
        while ( v15 );
        *v16 = *v12;
        *((_QWORD *)v16 + 2) = *((_QWORD *)v12 + 2);
      }
      else
      {
        MonitorDescriptorIDs = -1073741823;
        v18 = WdLogNewEntry5_WdError(v13);
        *(_QWORD *)(v18 + 24) = -1073741823LL;
        WdLogEvent5_WdError(v18);
      }
    }
    else
    {
      MonitorDescriptorIDs = -1073741801;
      v11 = WdLogNewEntry5_WdLowResource(v10);
      *(_QWORD *)(v11 + 24) = -1073741801LL;
      WdLogEvent5_WdLowResource(v11);
    }
  }
  else
  {
    memset((void *)(v2 + 512), 0, 0x198uLL);
    MonitorDescriptorIDs = -1073741823;
    v21 = WdLogNewEntry5_WdEvent(v20, v19);
    *(_QWORD *)(v21 + 24) = -1073741823LL;
    WdLogEvent5_WdEvent(v21);
  }
  return (unsigned int)MonitorDescriptorIDs;
}
