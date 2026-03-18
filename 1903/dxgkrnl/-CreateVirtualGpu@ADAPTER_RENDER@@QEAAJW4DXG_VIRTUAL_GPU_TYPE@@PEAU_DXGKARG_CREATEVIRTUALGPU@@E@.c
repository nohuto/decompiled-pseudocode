/*
 * XREFs of ?CreateVirtualGpu@ADAPTER_RENDER@@QEAAJW4DXG_VIRTUAL_GPU_TYPE@@PEAU_DXGKARG_CREATEVIRTUALGPU@@E@Z @ 0x1C020DCF0
 * Callers:
 *     DxgkDdiCreateVirtualGpu @ 0x1C020FAF8 (DxgkDdiCreateVirtualGpu.c)
 * Callees:
 *     _TlgKeywordOn @ 0x1C00035A0 (_TlgKeywordOn.c)
 *     ?wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@@IPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x1C000CF44 (-wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@.c)
 *     _TlgWrite @ 0x1C0019EC0 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1C00232F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0024FA0 (_guard_dispatch_icall_nop.c)
 *     McTemplateK0pqtqq @ 0x1C00357F8 (McTemplateK0pqtqq.c)
 *     ?CreateDxgProcess@DXGPROCESS@@SAJPEAPEAV1@PEAV1@1EPEAU_EPROCESS@@PEAX@Z @ 0x1C00F4554 (-CreateDxgProcess@DXGPROCESS@@SAJPEAPEAV1@PEAV1@1EPEAU_EPROCESS@@PEAX@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01008A0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?EnableIoMmuIsolation@ADAPTER_RENDER@@QEAAJ_N0@Z @ 0x1C01F515C (-EnableIoMmuIsolation@ADAPTER_RENDER@@QEAAJ_N0@Z.c)
 *     ?EnsureVirtualGpuProcess@ADAPTER_RENDER@@QEAAJXZ @ 0x1C020E6DC (-EnsureVirtualGpuProcess@ADAPTER_RENDER@@QEAAJXZ.c)
 */

__int64 __fastcall ADAPTER_RENDER::CreateVirtualGpu(ADAPTER_RENDER *a1, int a2, const GUID *a3, unsigned __int8 a4)
{
  __int64 v4; // r12
  __int64 v8; // rdx
  _DWORD *v9; // rcx
  __int64 v10; // rbx
  const GUID *v11; // r8
  int v12; // edi
  _DWORD *v13; // rcx
  __int64 v14; // rax
  __int64 v15; // r15
  __int64 v16; // rax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // rax
  __int64 v20; // rdx
  __int64 v21; // rax
  int v22; // eax
  __int64 v23; // rdx
  __int64 v24; // rcx
  _QWORD *v25; // rax
  __int64 v26; // r9
  __int64 v27; // r9
  unsigned __int16 *v28; // rax
  int v29; // ecx
  UINT32 cData[2]; // [rsp+20h] [rbp-E0h]
  EVENT_DATA_DESCRIPTOR *pData; // [rsp+28h] [rbp-D8h]
  __int64 v33; // [rsp+30h] [rbp-D0h]
  __int64 v34; // [rsp+38h] [rbp-C8h]
  int v35; // [rsp+40h] [rbp-C0h] BYREF
  int v36; // [rsp+44h] [rbp-BCh] BYREF
  int v37; // [rsp+48h] [rbp-B8h] BYREF
  _DWORD v38[2]; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v39; // [rsp+58h] [rbp-A8h] BYREF
  struct DXGPROCESS *v40; // [rsp+60h] [rbp-A0h] BYREF
  EVENT_DATA_DESCRIPTOR v41; // [rsp+70h] [rbp-90h] BYREF
  __int64 *v42; // [rsp+90h] [rbp-70h]
  __int64 v43; // [rsp+98h] [rbp-68h]
  int *v44; // [rsp+A0h] [rbp-60h]
  __int64 v45; // [rsp+A8h] [rbp-58h]
  int *v46; // [rsp+B0h] [rbp-50h]
  __int64 v47; // [rsp+B8h] [rbp-48h]
  int *v48; // [rsp+C0h] [rbp-40h]
  __int64 v49; // [rsp+C8h] [rbp-38h]
  _DWORD *v50; // [rsp+D0h] [rbp-30h]
  __int64 v51; // [rsp+D8h] [rbp-28h]
  __int64 v52; // [rsp+E0h] [rbp-20h]
  _DWORD v53[2]; // [rsp+E8h] [rbp-18h] BYREF
  _DWORD *v54; // [rsp+F0h] [rbp-10h]
  __int64 v55; // [rsp+F8h] [rbp-8h]
  __int64 v56; // [rsp+100h] [rbp+0h]
  __int64 v57; // [rsp+108h] [rbp+8h]
  __int64 v58; // [rsp+110h] [rbp+10h]
  __int64 v59; // [rsp+118h] [rbp+18h]
  __int64 v60; // [rsp+120h] [rbp+20h]
  __int64 v61; // [rsp+128h] [rbp+28h]
  __int64 v62; // [rsp+130h] [rbp+30h]
  __int64 v63; // [rsp+138h] [rbp+38h]

  v4 = a2;
  if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000000) != 0 )
  {
    cData[0] = a3->Data1;
    McTemplateK0pqtqq((__int64)a1, &CreateVirtualGpuStart, a3, *((_QWORD *)a1 + 2));
  }
  LODWORD(v10) = ADAPTER_RENDER::EnsureVirtualGpuProcess(a1);
  if ( (int)v10 < 0 )
  {
    v12 = 8;
    goto LABEL_34;
  }
  v13 = *(_DWORD **)(*((_QWORD *)a1 + 2) + 2456LL);
  if ( (*v13 & 0x200) != 0 && a4 )
  {
    v14 = WdLogNewEntry5_WdError(v13, v8, v11);
    *(_QWORD *)(v14 + 24) = 1204LL;
    WdLogEvent5_WdError(v14);
    LODWORD(v10) = -1073741823;
    v12 = 1;
    goto LABEL_34;
  }
  if ( g_ForceSecureVirtualMachine )
    a4 = 1;
  if ( (_DWORD)v4 == 1 )
    v15 = *((_QWORD *)a1 + 188);
  else
    v15 = *((_QWORD *)a1 + 187);
  if ( !v15 )
  {
    v16 = WdLogNewEntry5_WdError(v13, v8, v11);
    *(_QWORD *)(v16 + 24) = 1218LL;
    WdLogEvent5_WdError(v16);
    LODWORD(v10) = -1073741811;
    v12 = 2;
    goto LABEL_34;
  }
  if ( !DXGPROCESS::GetCurrent((__int64)v13, v8) )
  {
    LODWORD(v10) = DXGPROCESS::CreateDxgProcess(&v40, 0LL, 0LL, 0, 0LL, 0LL);
    if ( (int)v10 < 0 )
    {
      v19 = WdLogNewEntry5_WdWarning(v18, v17, v11);
      *(_QWORD *)(v19 + 24) = 1234LL;
      WdLogEvent5_WdWarning(v19);
      v12 = 3;
      goto LABEL_34;
    }
  }
  if ( (_DWORD)v4 == 1 )
  {
    if ( a4 )
    {
      v9 = (_DWORD *)*((_QWORD *)a1 + 2);
      v20 = 9216LL;
      if ( (int)v9[546] < 9216 )
      {
LABEL_24:
        v21 = WdLogNewEntry5_WdError(v9, v20, v11);
        *(_QWORD *)(v21 + 24) = 1250LL;
        WdLogEvent5_WdError(v21);
        LODWORD(v10) = -1073741637;
        v12 = 4;
        goto LABEL_34;
      }
      if ( v9[546] == 9216 )
      {
        wil_details_FeaturePropertyCache_ReportUsageToService(
          (__int64)&Feature_EnableGpuPVFor2_4Drivers__private_propertyCache,
          18097744LL,
          (const struct FEATURE_LOGGED_TRAITS *)&unk_1C0077248,
          0,
          cData[0]);
        goto LABEL_24;
      }
      goto LABEL_27;
    }
  }
  else if ( !(_DWORD)v4 )
  {
    wil_details_FeaturePropertyCache_ReportUsageToService(
      (__int64)&Feature_IoMmuIsolationForGPUP__private_propertyCache,
      19276463LL,
      (const struct FEATURE_LOGGED_TRAITS *)&unk_1C0077240,
      1,
      cData[0]);
    v9 = (_DWORD *)*((_QWORD *)a1 + 2);
LABEL_27:
    if ( (v9[479] & 0x800) != 0 )
    {
      LOBYTE(v11) = 1;
      LOBYTE(v20) = 1;
      v22 = ADAPTER_RENDER::EnableIoMmuIsolation(a1, v20, (__int64)v11);
      v10 = v22;
      if ( v22 < 0 )
      {
        v25 = (_QWORD *)WdLogNewEntry5_WdError(v24, v23, v11);
        v25[4] = a4;
        v25[3] = v4;
        v25[5] = v10;
        WdLogEvent5_WdError(v25);
        v12 = 6;
        goto LABEL_34;
      }
    }
    else if ( (v9[628] & 8) == 0 )
    {
      LODWORD(v10) = -1073741637;
      v12 = 5;
      goto LABEL_34;
    }
  }
  LOBYTE(v11) = a4;
  LODWORD(v10) = (*(__int64 (__fastcall **)(__int64, const GUID *, const GUID *))(*(_QWORD *)v15 + 16LL))(v15, a3, v11);
  v12 = 0;
  if ( (int)v10 < 0 )
    v12 = 7;
LABEL_34:
  v26 = *((_QWORD *)a1 + 2);
  v38[0] = *(_DWORD *)(v26 + 276);
  v38[1] = *(_DWORD *)(v26 + 280);
  if ( dword_1C00A1888 > 5u && TlgKeywordOn((TraceLoggingHProvider)&dword_1C00A1888, 0x400000008000uLL) )
  {
    v39 = 0x2000000LL;
    v42 = &v39;
    v43 = 8LL;
    v44 = &v35;
    v46 = &v36;
    v48 = &v37;
    v28 = *(unsigned __int16 **)(v27 + 1408);
    v35 = v4;
    v45 = 4LL;
    v36 = v12;
    v47 = 4LL;
    v37 = v10;
    v49 = 4LL;
    v50 = v53;
    v51 = 2LL;
    v29 = *v28;
    v52 = *((_QWORD *)v28 + 1);
    v54 = v38;
    v56 = v27 + 284;
    v58 = v27 + 288;
    v60 = v27 + 292;
    v62 = v27 + 296;
    v53[0] = v29;
    v53[1] = 0;
    v55 = 8LL;
    v57 = 4LL;
    v59 = 4LL;
    v61 = 4LL;
    v63 = 4LL;
    TlgWrite((TraceLoggingHProvider)&dword_1C00A1888, &unk_1C0072B22, 0LL, (LPCGUID)v27, 0xDu, &v41);
  }
  if ( bTracingEnabled )
  {
    if ( (int)v10 < 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000000) != 0 )
    {
      LODWORD(pData) = a4;
      cData[0] = a3->Data1;
      McTemplateK0pqtqq(
        (__int64)v9,
        &CreateVirtualGpuFailed,
        v11,
        *((_QWORD *)a1 + 2),
        *(_QWORD *)cData,
        pData,
        v10,
        v12);
    }
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x4000000) != 0 )
    {
      LODWORD(v34) = v12;
      LODWORD(v33) = v10;
      LODWORD(pData) = a4;
      cData[0] = a3->Data1;
      McTemplateK0pqtqq((__int64)v9, &CreateVirtualGpuEnd, v11, *((_QWORD *)a1 + 2), *(_QWORD *)cData, pData, v33, v34);
    }
  }
  return (unsigned int)v10;
}
