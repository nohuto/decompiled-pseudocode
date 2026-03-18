/*
 * XREFs of ?_GetMonitorContainerID@DXGMONITOR@@QEAAJPEAU_GUID@@@Z @ 0x1C029B39C
 * Callers:
 *     MonitorGetContainerIDFromDescriptor @ 0x1C0290544 (MonitorGetContainerIDFromDescriptor.c)
 * Callees:
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0011EE0 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ??_V@YAXPEAX@Z @ 0x1C0011F20 (--_V@YAXPEAX@Z.c)
 *     ?EDID_V1_GetContainerID@@YAJKPEBEPEAU_GUID@@@Z @ 0x1C004F9C0 (-EDID_V1_GetContainerID@@YAJKPEBEPEAU_GUID@@@Z.c)
 *     ?DisplayID_GetContainerID@@YAJPEAUDisplayIDObj@@PEAU_GUID@@@Z @ 0x1C005004C (-DisplayID_GetContainerID@@YAJPEAUDisplayIDObj@@PEAU_GUID@@@Z.c)
 *     ?_GetContiguousEDID@DXGMONITOR@@QEAAXIPEAIPEAE@Z @ 0x1C029AF1C (-_GetContiguousEDID@DXGMONITOR@@QEAAXIPEAIPEAE@Z.c)
 */

__int64 __fastcall DXGMONITOR::_GetMonitorContainerID(DXGMONITOR *this, struct _GUID *a2)
{
  struct DisplayIDObj *v4; // rcx
  int v6; // ebx
  __int64 v7; // rax
  unsigned int v8; // ebx
  unsigned __int8 *v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  unsigned __int8 *v13; // rsi
  __int64 v14; // rax
  __int64 v15; // rcx
  __int64 v16; // rax
  unsigned int ContainerID; // ebx
  unsigned int v18; // [rsp+30h] [rbp+8h] BYREF

  v4 = (DXGMONITOR *)((char *)this + 168);
  if ( *(_QWORD *)v4 && (int)DisplayID_GetContainerID(v4, a2) >= 0 )
    return 0LL;
  v6 = *((_DWORD *)this + 32);
  if ( !v6 )
    return 3221226021LL;
  if ( !*((_QWORD *)this + 18) )
  {
    v7 = WdLogNewEntry5_WdAssertion(v4);
    WdLogEvent5_WdAssertion(v7);
    v6 = *((_DWORD *)this + 32);
  }
  v18 = 0;
  v8 = v6 << 7;
  v9 = (unsigned __int8 *)operator new(v8, 0x4D677844u, PagedPool);
  v13 = v9;
  if ( v9 )
  {
    DXGMONITOR::_GetContiguousEDID(this, v8, &v18, v9);
    if ( v8 != v18 )
    {
      v16 = WdLogNewEntry5_WdAssertion(v15);
      WdLogEvent5_WdAssertion(v16);
    }
    ContainerID = EDID_V1_GetContainerID(v18, v13, a2);
    operator delete[](v13);
    return ContainerID;
  }
  else
  {
    v14 = WdLogNewEntry5_WdWarning(v11, v10, v12);
    WdLogEvent5_WdWarning(v14);
    return 3221225495LL;
  }
}
