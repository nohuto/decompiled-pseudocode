/*
 * XREFs of ?CreateVirtualGpu@ADAPTER_RENDER@@QEAAJW4DXG_VIRTUAL_GPU_TYPE@@PEAU_DXGKARG_CREATEVIRTUALGPU@@E@Z @ 0x1C01DEC14
 * Callers:
 *     DxgkDdiCreateVirtualGpu @ 0x1C01E0788 (DxgkDdiCreateVirtualGpu.c)
 * Callees:
 *     ?wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@@IPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x1C000FAAC (-wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@.c)
 *     _guard_dispatch_icall_nop @ 0x1C0022E60 (_guard_dispatch_icall_nop.c)
 *     ?CreateDxgProcess@DXGPROCESS@@SAJPEAPEAV1@PEAV1@1EPEAU_EPROCESS@@PEAX@Z @ 0x1C00E97AC (-CreateDxgProcess@DXGPROCESS@@SAJPEAPEAV1@PEAV1@1EPEAU_EPROCESS@@PEAX@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0102F10 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?EnableIoMmuIsolation@ADAPTER_RENDER@@QEAAJ_N0@Z @ 0x1C01C646C (-EnableIoMmuIsolation@ADAPTER_RENDER@@QEAAJ_N0@Z.c)
 *     ?EnsureVirtualGpuProcess@ADAPTER_RENDER@@QEAAJXZ @ 0x1C01DF384 (-EnsureVirtualGpuProcess@ADAPTER_RENDER@@QEAAJXZ.c)
 */

__int64 __fastcall ADAPTER_RENDER::CreateVirtualGpu(ADAPTER_RENDER *a1, int a2, __int64 a3, char a4)
{
  __int64 result; // rax
  _DWORD *v9; // rcx
  __int64 v10; // rax
  char v11; // bp
  __int64 v12; // rdi
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  int v16; // esi
  __int64 v17; // r8
  __int64 v18; // rax
  __int64 v19; // r8
  _DWORD *v20; // rcx
  int v21; // eax
  __int64 v22; // rax
  int v23; // ebx
  __int64 v24; // rax
  int v25; // [rsp+20h] [rbp-38h]
  int v26; // [rsp+20h] [rbp-38h]
  struct DXGPROCESS *v27; // [rsp+30h] [rbp-28h] BYREF

  result = ADAPTER_RENDER::EnsureVirtualGpuProcess(a1);
  if ( (int)result >= 0 )
  {
    v9 = *(_DWORD **)(*((_QWORD *)a1 + 2) + 4112LL);
    if ( (*v9 & 0x200) != 0 && a4 )
    {
      v10 = WdLogNewEntry5_WdError(v9);
      *(_QWORD *)(v10 + 24) = 1157LL;
      WdLogEvent5_WdError(v10);
      return 3221225473LL;
    }
    v11 = a4;
    if ( g_ForceSecureVirtualMachine )
      v11 = 1;
    if ( a2 == 1 )
      v12 = *((_QWORD *)a1 + 188);
    else
      v12 = *((_QWORD *)a1 + 187);
    if ( !v12 )
    {
      v13 = WdLogNewEntry5_WdError(v9);
      *(_QWORD *)(v13 + 24) = 1169LL;
      WdLogEvent5_WdError(v13);
      return 3221225485LL;
    }
    if ( !DXGPROCESS::GetCurrent() )
    {
      v16 = DXGPROCESS::CreateDxgProcess(&v27, 0LL, 0LL, 0, 0LL, 0LL);
      if ( v16 < 0 )
      {
        v18 = WdLogNewEntry5_WdWarning(v15, v14, v17);
        *(_QWORD *)(v18 + 24) = 1183LL;
        WdLogEvent5_WdWarning(v18);
        return (unsigned int)v16;
      }
    }
    wil_details_FeaturePropertyCache_ReportUsageToService(
      (__int64)&Feature_IoMmuIsolation__private_propertyCache,
      14688597LL,
      (const struct FEATURE_LOGGED_TRAITS *)&unk_1C006E388,
      1,
      v25);
    if ( !v11 || a2 != 1 )
      goto LABEL_26;
    v20 = (_DWORD *)*((_QWORD *)a1 + 2);
    v21 = v20[540];
    if ( v21 < 9216 )
    {
LABEL_20:
      v22 = WdLogNewEntry5_WdError(v20);
      *(_QWORD *)(v22 + 24) = 1200LL;
      WdLogEvent5_WdError(v22);
      return 3221225659LL;
    }
    if ( v21 == 9216 )
    {
      wil_details_FeaturePropertyCache_ReportUsageToService(
        (__int64)&Feature_EnableGpuPVFor2_4Drivers__private_propertyCache,
        18097744LL,
        (const struct FEATURE_LOGGED_TRAITS *)&unk_1C006E380,
        0,
        v26);
      goto LABEL_20;
    }
    v23 = (v20[473] & 0x800) != 0
        ? ADAPTER_RENDER::EnableIoMmuIsolation(a1, 1, 1)
        : (v20[620] & 8) == 0
        ? 0xC00000BB
        : 0;
    if ( v23 < 0 )
    {
      v24 = WdLogNewEntry5_WdError(v20);
      *(_QWORD *)(v24 + 24) = v23;
      WdLogEvent5_WdError(v24);
      return (unsigned int)v23;
    }
    else
    {
LABEL_26:
      LOBYTE(v19) = v11;
      return (*(__int64 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v12 + 16LL))(v12, a3, v19);
    }
  }
  return result;
}
