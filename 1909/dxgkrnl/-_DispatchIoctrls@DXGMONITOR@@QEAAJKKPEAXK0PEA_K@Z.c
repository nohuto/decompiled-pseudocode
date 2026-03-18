/*
 * XREFs of ?_DispatchIoctrls@DXGMONITOR@@QEAAJKKPEAXK0PEA_K@Z @ 0x1C00D0720
 * Callers:
 *     DpiPdoDispatchIoctl @ 0x1C00D05B0 (DpiPdoDispatchIoctl.c)
 * Callees:
 *     ?_SetColorSpaceTransform@DXGMONITOR@@AEAAJKPEAX@Z @ 0x1C00CD548 (-_SetColorSpaceTransform@DXGMONITOR@@AEAAJKPEAX@Z.c)
 *     ?_QueryColorSpaceTransformCaps@DXGMONITOR@@AEAAJKPEAXPEA_K@Z @ 0x1C014F86C (-_QueryColorSpaceTransformCaps@DXGMONITOR@@AEAAJKPEAXPEA_K@Z.c)
 *     ?_QueryMipiDsi2Caps@DXGMONITOR@@AEAAJKPEAXPEA_K@Z @ 0x1C02D0B94 (-_QueryMipiDsi2Caps@DXGMONITOR@@AEAAJKPEAXPEA_K@Z.c)
 *     ?_SetActiveColorProfileName@DXGMONITOR@@AEAAJKPEAX@Z @ 0x1C02D0BF0 (-_SetActiveColorProfileName@DXGMONITOR@@AEAAJKPEAX@Z.c)
 *     ?_SubmitDsi2Transmission@DXGMONITOR@@AEAAJKPEAXK0PEA_K@Z @ 0x1C02D0CC4 (-_SubmitDsi2Transmission@DXGMONITOR@@AEAAJKPEAXK0PEA_K@Z.c)
 */

__int64 __fastcall DXGMONITOR::_DispatchIoctrls(
        DXGMONITOR *this,
        __int64 a2,
        unsigned int a3,
        void *a4,
        unsigned int a5,
        void *a6,
        unsigned __int64 *a7)
{
  __int64 v8; // rbx
  __int64 v11; // rax
  unsigned int v12; // edx
  DXGMONITOR *v13; // rcx
  void *v14; // r8
  unsigned int v15; // r9d
  int v16; // ebx
  int v17; // ebx
  unsigned int active; // eax
  unsigned int v19; // ecx
  int v22; // ebx
  int v23; // ebx

  v8 = (unsigned int)a2;
  v11 = WdLogNewEntry5_WdTrace(this, a2);
  *(_QWORD *)(v11 + 24) = v8;
  *(_QWORD *)(v11 + 32) = this;
  v16 = v8 - 2297856;
  if ( !v16 )
    return (unsigned int)DXGMONITOR::_QueryColorSpaceTransformCaps(this, a5, a6, a7);
  v17 = v16 - 4;
  if ( v17 )
  {
    v22 = v17 - 4;
    if ( !v22 )
    {
      active = DXGMONITOR::_SetActiveColorProfileName(this, v12, v14);
      goto LABEL_4;
    }
    v23 = v22 - 1016;
    if ( v23 )
    {
      if ( v23 != 4 )
        return (unsigned int)-1073741637;
      return (unsigned int)DXGMONITOR::_SubmitDsi2Transmission(this, v12, a4, v15, a6, a7);
    }
    else
    {
      return (unsigned int)DXGMONITOR::_QueryMipiDsi2Caps(v13, v12, v14, a7);
    }
  }
  active = DXGMONITOR::_SetColorSpaceTransform(this, a3, (int *)a4);
LABEL_4:
  v19 = active;
  *a7 = 0LL;
  return v19;
}
