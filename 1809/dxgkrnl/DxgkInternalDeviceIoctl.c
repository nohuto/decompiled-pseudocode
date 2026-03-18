/*
 * XREFs of DxgkInternalDeviceIoctl @ 0x1C0132420
 * Callers:
 *     <none>
 * Callees:
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C000F428 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0011DE0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0012010 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?DelayLoadWin32k@DXGGLOBAL@@QEAAJPEAX@Z @ 0x1C0018BA0 (-DelayLoadWin32k@DXGGLOBAL@@QEAAJPEAX@Z.c)
 *     McTemplateK0q @ 0x1C0020BA4 (McTemplateK0q.c)
 *     ?ComputeQueryInterface@@YAJPEAU_DXGKCOMPUTE_INTERFACE@@PEAK@Z @ 0x1C00397E8 (-ComputeQueryInterface@@YAJPEAU_DXGKCOMPUTE_INTERFACE@@PEAK@Z.c)
 *     ?IterateAdaptersWithCallback@DXGGLOBAL@@QEAAJP6AJPEAVDXGADAPTER@@PEAX@Z1W4_ITERATE_ADAPTER_FLAGS@@@Z @ 0x1C00E0E98 (-IterateAdaptersWithCallback@DXGGLOBAL@@QEAAJP6AJPEAVDXGADAPTER@@PEAX@Z1W4_ITERATE_ADAPTER_FLAGS.c)
 *     ?DxgkCddQueryInterface@@YAJPEAU_DXGKCDD_INTERFACE@@PEAK@Z @ 0x1C0132638 (-DxgkCddQueryInterface@@YAJPEAU_DXGKCDD_INTERFACE@@PEAK@Z.c)
 *     ?DxgkWin32kQueryInterface@@YAJPEAU_DXGKWIN32K_INTERFACE@@PEAK@Z @ 0x1C0132A38 (-DxgkWin32kQueryInterface@@YAJPEAU_DXGKWIN32K_INTERFACE@@PEAK@Z.c)
 *     DxgkCaptureQueryInterface @ 0x1C01DCC10 (DxgkCaptureQueryInterface.c)
 */

__int64 __fastcall DxgkInternalDeviceIoctl(__int64 a1, __int64 a2, const GUID *a3)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  unsigned int *v7; // rax
  unsigned int v8; // esi
  __int64 v9; // r15
  __int64 v10; // rbx
  __int64 v11; // r14
  __int64 v12; // rdi
  int v13; // eax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // rcx
  const GUID *v18; // r8
  __int64 (__fastcall *v20)(); // rax
  struct DXGKW32KIMPORTS **Global; // rax
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  _QWORD *v25; // rax
  __int64 v26; // rax
  __int64 v27; // rax
  struct DXGGLOBAL *v28; // rax
  __int64 v29; // rax
  _QWORD *v30; // rax
  int v31; // [rsp+20h] [rbp-20h] BYREF
  __int64 v32; // [rsp+28h] [rbp-18h]
  char v33; // [rsp+30h] [rbp-10h]
  unsigned int v34; // [rsp+78h] [rbp+38h] BYREF

  v31 = -1;
  v32 = 0LL;
  if ( (*(_BYTE *)(&DxgkControlGuid_Context + 2) & 2) != 0 )
  {
    v33 = 1;
    v31 = 2;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(a1, &EventProfilerEnter, a3, 2);
  }
  else
  {
    v33 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v31, 2);
  v7 = *(unsigned int **)(a2 + 184);
  v8 = 0;
  v34 = 0;
  v9 = v7[6];
  v10 = v7[2];
  v11 = v7[4];
  if ( *(_BYTE *)(a2 + 64) )
  {
    v26 = WdLogNewEntry5_WdAssertion(v5);
    *(_QWORD *)(v26 + 24) = 978LL;
    WdLogEvent5_WdAssertion(v26);
  }
  if ( (v9 & 3) != 3 )
  {
    v27 = WdLogNewEntry5_WdAssertion(v5);
    *(_QWORD *)(v27 + 24) = 984LL;
    WdLogEvent5_WdAssertion(v27);
  }
  v12 = *(_QWORD *)(a2 + 112);
  if ( (unsigned int)v9 > 0x232063 )
  {
    if ( (_DWORD)v9 != 2351191 )
    {
      switch ( (_DWORD)v9 )
      {
        case 0x23E05B:
          if ( (unsigned int)v11 >= 0x210 && (unsigned int)v10 >= 0x210 )
          {
            v13 = DxgkCddQueryInterface(*(struct _DXGKCDD_INTERFACE **)(a2 + 112), &v34);
            goto LABEL_13;
          }
          goto LABEL_60;
        case 0x23E05F:
          if ( (unsigned int)v11 >= 0x30 && (unsigned int)v10 >= 0x30 )
          {
            v13 = DxgkCaptureQueryInterface(*(_QWORD *)(a2 + 112), &v34);
LABEL_13:
            v10 = v13;
            if ( v13 < 0 )
            {
              v29 = WdLogNewEntry5_WdWarning(v15, v14, v16);
              *(_QWORD *)(v29 + 24) = v10;
              WdLogEvent5_WdWarning(v29);
            }
            goto LABEL_15;
          }
LABEL_60:
          v25 = (_QWORD *)WdLogNewEntry5_WdWarning(v5, v4, v6);
          v25[3] = v11;
          v25[4] = v10;
          v10 = -1073741306LL;
          goto LABEL_61;
        case 0x23E067:
          if ( (unsigned int)v11 >= 0x230 && (unsigned int)v10 >= 0x230 )
          {
            v13 = ComputeQueryInterface(*(struct _DXGKCOMPUTE_INTERFACE **)(a2 + 112), &v34);
            goto LABEL_13;
          }
          goto LABEL_60;
      }
LABEL_56:
      v25 = (_QWORD *)WdLogNewEntry5_WdWarning(v5, v4, v6);
      LODWORD(v10) = -1073741808;
      v25[3] = v9;
      v25[4] = -1073741808LL;
LABEL_63:
      WdLogEvent5_WdWarning(v25);
      goto LABEL_16;
    }
    if ( (unsigned int)v11 < 0x888 || (unsigned int)v10 < 0x888 )
    {
      v30 = (_QWORD *)WdLogNewEntry5_WdAssertion(v5);
      v30[4] = v10;
      LODWORD(v10) = -1073741306;
      v30[6] = -1073741306LL;
      v30[3] = v11;
      v30[5] = 2184LL;
      WdLogEvent5_WdAssertion(v30);
      goto LABEL_16;
    }
    Global = (struct DXGKW32KIMPORTS **)DXGGLOBAL::GetGlobal(v5);
    LODWORD(v10) = DXGGLOBAL::DelayLoadWin32k(Global, *(void **)(v12 + 8));
    if ( (int)v10 >= 0 )
    {
      LODWORD(v10) = DxgkWin32kQueryInterface((struct _DXGKWIN32K_INTERFACE *)v12, &v34);
      if ( (int)v10 >= 0 )
      {
LABEL_15:
        v8 = v34;
        goto LABEL_16;
      }
      v8 = v34;
    }
LABEL_62:
    v25 = (_QWORD *)WdLogNewEntry5_WdWarning(v23, v22, v24);
    v25[3] = (int)v10;
    goto LABEL_63;
  }
  if ( (_DWORD)v9 == 2302051 )
  {
    if ( (unsigned int)v10 >= 8 && v12 )
    {
      v20 = (__int64 (__fastcall *)())DpiReportSoftwareDevice;
      goto LABEL_33;
    }
LABEL_41:
    v25 = (_QWORD *)WdLogNewEntry5_WdWarning(v5, v4, v6);
    v25[3] = v10;
    v10 = -1073741789LL;
    v25[4] = v12;
LABEL_61:
    v25[5] = v10;
    goto LABEL_63;
  }
  if ( (_DWORD)v9 != 2293767 )
  {
    switch ( (_DWORD)v9 )
    {
      case 0x23003F:
        if ( (unsigned int)v10 >= 8 && v12 )
        {
          v20 = (__int64 (__fastcall *)())DpiInitialize;
          goto LABEL_33;
        }
        break;
      case 0x230043:
        if ( (unsigned int)v10 >= 8 && v12 )
        {
          v20 = (__int64 (__fastcall *)())DpiKmdDodInitialize;
LABEL_33:
          LODWORD(v10) = 0;
          *(_QWORD *)v12 = v20;
          v8 = 8;
          goto LABEL_16;
        }
        break;
      case 0x230047:
        if ( (unsigned int)v10 >= 8 && v12 )
        {
          v20 = (__int64 (__fastcall *)())DpiInitializeWin8;
          goto LABEL_33;
        }
        break;
      case 0x23004B:
        if ( (unsigned int)v10 >= 8 && v12 )
        {
          v20 = DpiUnInitialize;
          goto LABEL_33;
        }
        break;
      default:
        goto LABEL_56;
    }
    goto LABEL_41;
  }
  v28 = DXGGLOBAL::GetGlobal(v5);
  v34 = -1073741275;
  LODWORD(v10) = DXGGLOBAL::IterateAdaptersWithCallback(
                   (__int64)v28,
                   (__int64 (__fastcall *)(_QWORD *, __int64))RfxVgpuResetCallback,
                   (__int64)&v34,
                   0);
  if ( (int)v10 < 0 )
    goto LABEL_62;
  LODWORD(v10) = v34;
  if ( (v34 & 0x80000000) != 0 )
    goto LABEL_62;
LABEL_16:
  *(_QWORD *)(a2 + 56) = v8;
  *(_DWORD *)(a2 + 48) = v10;
  IofCompleteRequest((PIRP)a2, 0);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v31);
  if ( v33 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v17, &EventProfilerExit, v18, v31);
  return (unsigned int)v10;
}
