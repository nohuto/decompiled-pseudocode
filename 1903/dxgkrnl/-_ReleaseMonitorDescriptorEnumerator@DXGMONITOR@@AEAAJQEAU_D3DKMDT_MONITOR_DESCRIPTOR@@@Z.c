/*
 * XREFs of ?_ReleaseMonitorDescriptorEnumerator@DXGMONITOR@@AEAAJQEAU_D3DKMDT_MONITOR_DESCRIPTOR@@@Z @ 0x1C02D0410
 * Callers:
 *     ?ReleaseDescriptorInfo@DXGK_MONITORDESCRIPTORSET_INTERFACE_V1_IMPL@@CAJQEAUD3DKMDT_HMONITORDESCRIPTORSET__@@QEBU_D3DKMDT_MONITOR_DESCRIPTOR@@@Z @ 0x1C02CD470 (-ReleaseDescriptorInfo@DXGK_MONITORDESCRIPTORSET_INTERFACE_V1_IMPL@@CAJQEAUD3DKMDT_HMONITORDESCR.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1C0009668 (--3@YAXPEAX@Z.c)
 */

__int64 __fastcall DXGMONITOR::_ReleaseMonitorDescriptorEnumerator(
        DXGMONITOR *this,
        struct _D3DKMDT_MONITOR_DESCRIPTOR *const a2,
        __int64 a3)
{
  DXGMONITOR *v4; // rdi
  __int64 v5; // rax
  DXGMONITOR **v6; // rdx
  DXGMONITOR *v7; // rax
  DXGMONITOR *v8; // rdx
  DXGMONITOR **DataSize; // rax
  __int64 v11; // rax

  v4 = this;
  if ( !a2 )
  {
    v5 = WdLogNewEntry5_WdAssertion(this, 0LL);
    WdLogEvent5_WdAssertion(v5);
  }
  v6 = (DXGMONITOR **)((char *)v4 + 192);
  if ( !a2 )
    goto LABEL_14;
  v7 = *v6;
  if ( *v6 == (DXGMONITOR *)v6 )
    goto LABEL_14;
  this = (DXGMONITOR *)&a2[1];
  while ( v7 != this )
  {
    if ( v6 == (DXGMONITOR **)v7 )
      goto LABEL_14;
    v7 = *(DXGMONITOR **)v7;
  }
  if ( *((_DWORD *)v4 + 32) <= a2->Id )
  {
LABEL_14:
    v11 = WdLogNewEntry5_WdError(this, v6, a3);
    *(_QWORD *)(v11 + 24) = a2;
    *(_QWORD *)(v11 + 32) = v4;
    WdLogEvent5_WdError(v11);
    return 3223192368LL;
  }
  else
  {
    v8 = *(DXGMONITOR **)this;
    if ( *(DXGMONITOR **)(*(_QWORD *)this + 8LL) != this
      || (DataSize = (DXGMONITOR **)a2[1].DataSize, *DataSize != this) )
    {
      __fastfail(3u);
    }
    *DataSize = v8;
    *((_QWORD *)v8 + 1) = DataSize;
    operator delete(a2);
    return 0LL;
  }
}
