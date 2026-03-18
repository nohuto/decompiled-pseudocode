/*
 * XREFs of ?_ReadUsageFromEDIDForMsftVSDB@DXGMONITOR@@AEAAJPEAW4DISPLAY_USE_CASE@@PEA_N@Z @ 0x1C029D0B0
 * Callers:
 *     ?_GetIntendedUsageFromDescriptor@DXGMONITOR@@AEAAJPEAW4_DXGK_DISPLAY_USAGE@@PEA_N@Z @ 0x1C0297448 (-_GetIntendedUsageFromDescriptor@DXGMONITOR@@AEAAJPEAW4_DXGK_DISPLAY_USAGE@@PEA_N@Z.c)
 * Callees:
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0011EE0 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ??_V@YAXPEAX@Z @ 0x1C0011F20 (--_V@YAXPEAX@Z.c)
 *     ?EDID_V1_GetDisplayIsMsftOnlyPrimaryUse@@YAJKPEBEPEA_N@Z @ 0x1C004FA5C (-EDID_V1_GetDisplayIsMsftOnlyPrimaryUse@@YAJKPEBEPEA_N@Z.c)
 *     ?EDID_V1_GetDisplayPrimaryUse@@YAJKPEBEPEAW4DISPLAY_USE_CASE@@@Z @ 0x1C004FAD0 (-EDID_V1_GetDisplayPrimaryUse@@YAJKPEBEPEAW4DISPLAY_USE_CASE@@@Z.c)
 *     ?_GetContiguousEDID@DXGMONITOR@@QEAAXIPEAIPEAE@Z @ 0x1C029AF1C (-_GetContiguousEDID@DXGMONITOR@@QEAAXIPEAIPEAE@Z.c)
 */

__int64 __fastcall DXGMONITOR::_ReadUsageFromEDIDForMsftVSDB(DXGMONITOR *this, enum DISPLAY_USE_CASE *a2, bool *a3)
{
  __int64 v6; // rax
  int v7; // ebx
  unsigned int v8; // ebx
  unsigned __int8 *v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  unsigned __int8 *v13; // rdi
  __int64 v14; // rcx
  unsigned int v15; // esi
  __int64 v16; // rax
  int DisplayPrimaryUse; // ebx
  __int64 v18; // rax
  unsigned int v20; // [rsp+40h] [rbp+8h] BYREF

  if ( !*((_QWORD *)this + 18) )
  {
    v6 = WdLogNewEntry5_WdAssertion(this);
    WdLogEvent5_WdAssertion(v6);
  }
  v7 = *((_DWORD *)this + 32);
  v20 = 0;
  v8 = v7 << 7;
  v9 = (unsigned __int8 *)operator new(v8, 0x4D677844u, PagedPool);
  v13 = v9;
  if ( v9 )
  {
    DXGMONITOR::_GetContiguousEDID(this, v8, &v20, v9);
    v15 = v20;
    if ( v8 != v20 )
    {
      v16 = WdLogNewEntry5_WdAssertion(v14);
      WdLogEvent5_WdAssertion(v16);
    }
    DisplayPrimaryUse = EDID_V1_GetDisplayPrimaryUse(v15, v13, a2);
    if ( DisplayPrimaryUse >= 0 )
      DisplayPrimaryUse = EDID_V1_GetDisplayIsMsftOnlyPrimaryUse(v15, v13, a3);
    operator delete[](v13);
  }
  else
  {
    v18 = WdLogNewEntry5_WdWarning(v11, v10, v12);
    WdLogEvent5_WdWarning(v18);
    return (unsigned int)-1073741801;
  }
  return (unsigned int)DisplayPrimaryUse;
}
