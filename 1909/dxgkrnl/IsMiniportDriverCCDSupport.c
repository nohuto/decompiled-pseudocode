/*
 * XREFs of IsMiniportDriverCCDSupport @ 0x1C014A50C
 * Callers:
 *     DxgkConvertDisplayConfigCScalingToDdiScaling @ 0x1C014A480 (DxgkConvertDisplayConfigCScalingToDdiScaling.c)
 * Callees:
 *     ?ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ @ 0x1C000BE8C (-ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000C510 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z @ 0x1C0100730 (-ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z.c)
 */

_BOOL8 __fastcall IsMiniportDriverCCDSupport(struct _LUID *a1, __int64 a2)
{
  DXGGLOBAL *Global; // rax
  struct DXGADAPTER *v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  BOOL v8; // ebx
  __int64 v9; // rcx
  __int64 v11; // rax
  unsigned __int64 v12; // [rsp+38h] [rbp+10h] BYREF

  Global = DXGGLOBAL::GetGlobal((__int64)a1, a2);
  v4 = DXGGLOBAL::ReferenceAdapterByLuid(Global, *a1, &v12);
  v8 = 0;
  if ( v4 )
  {
    v9 = *((_QWORD *)v4 + 319);
    if ( v9 )
      v8 = *(_DWORD *)(*(_QWORD *)(v9 + 16) + 2452LL) >= 1105;
    DXGADAPTER::ReleaseReferenceNoTracking(v4);
  }
  else
  {
    v11 = WdLogNewEntry5_WdError(v6, v5, v7);
    *(_QWORD *)(v11 + 24) = a1->HighPart;
    *(_QWORD *)(v11 + 32) = a1->LowPart;
    WdLogEvent5_WdError(v11);
  }
  return v8;
}
