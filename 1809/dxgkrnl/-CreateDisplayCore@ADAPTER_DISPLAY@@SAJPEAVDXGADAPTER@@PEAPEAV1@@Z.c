/*
 * XREFs of ?CreateDisplayCore@ADAPTER_DISPLAY@@SAJPEAVDXGADAPTER@@PEAPEAV1@@Z @ 0x1C014F768
 * Callers:
 *     ?Initialize@DXGADAPTER@@QEAAJPEAU_DEVICE_OBJECT@@PEAU_DXGK_ADAPTER_CAPS@@@Z @ 0x1C014EA68 (-Initialize@DXGADAPTER@@QEAAJPEAU_DEVICE_OBJECT@@PEAU_DXGK_ADAPTER_CAPS@@@Z.c)
 * Callees:
 *     ?GetDriverVersion@DXGADAPTER@@QEBA?AW4_QAI_DRIVERVERSION@@XZ @ 0x1C000E0E8 (-GetDriverVersion@DXGADAPTER@@QEBA-AW4_QAI_DRIVERVERSION@@XZ.c)
 *     ??2@YAPEAX_KIHW4_POOL_TYPE@@@Z @ 0x1C000E5B4 (--2@YAPEAX_KIHW4_POOL_TYPE@@@Z.c)
 *     ??_GADAPTER_DISPLAY@@QEAAPEAXI@Z @ 0x1C002D5CC (--_GADAPTER_DISPLAY@@QEAAPEAXI@Z.c)
 *     ?DriverSupportSetTimingsFromVidPn@DXGADAPTER@@QEBAEXZ @ 0x1C00D93C0 (-DriverSupportSetTimingsFromVidPn@DXGADAPTER@@QEBAEXZ.c)
 *     ?Initialize@ADAPTER_DISPLAY@@QEAAJXZ @ 0x1C0153678 (-Initialize@ADAPTER_DISPLAY@@QEAAJXZ.c)
 *     ??0ADAPTER_DISPLAY@@QEAA@PEAVDXGADAPTER@@@Z @ 0x1C015CE18 (--0ADAPTER_DISPLAY@@QEAA@PEAVDXGADAPTER@@@Z.c)
 *     ?Destroy@ADAPTER_DISPLAY@@QEAAXXZ @ 0x1C01C14DC (-Destroy@ADAPTER_DISPLAY@@QEAAXXZ.c)
 */

__int64 __fastcall ADAPTER_DISPLAY::CreateDisplayCore(
        struct DXGADAPTER *a1,
        struct ADAPTER_DISPLAY **a2,
        __int64 a3,
        __int64 a4)
{
  struct DXGADAPTER *v5; // rbx
  __int64 v6; // r8
  BOOL v7; // eax
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9
  PVOID v11; // rax
  __int64 v12; // rcx
  ADAPTER_DISPLAY *v13; // rdi
  __int64 v14; // rdx
  __int64 v15; // rcx
  int v16; // esi
  __int64 v17; // rax
  __int64 result; // rax
  __int64 v19; // rax
  __int64 v20; // rax
  _QWORD *v21; // rax
  unsigned int v22; // ebx
  __int64 v23; // rax
  __int64 v24; // rcx
  __int64 v25; // rax
  __int64 v26; // rcx

  v5 = a1;
  if ( !a1 )
  {
    v19 = WdLogNewEntry5_WdAssertion(0LL);
    *(_QWORD *)(v19 + 24) = 3908LL;
    WdLogEvent5_WdAssertion(v19);
  }
  if ( !a2 )
  {
    v20 = WdLogNewEntry5_WdAssertion(a1);
    *(_QWORD *)(v20 + 24) = 3909LL;
    WdLogEvent5_WdAssertion(v20);
  }
  v6 = *((_QWORD *)v5 + 60);
  if ( !v6
    || !*((_QWORD *)v5 + 61)
    || !*((_QWORD *)v5 + 62)
    || !*((_QWORD *)v5 + 64)
    || !*((_QWORD *)v5 + 65) && !DXGADAPTER::DriverSupportSetTimingsFromVidPn(v5)
    || !*((_QWORD *)v5 + 66) && (int)DXGADAPTER::GetDriverVersion(v5) < 2200
    || !*((_QWORD *)v5 + 53)
    || !*((_QWORD *)v5 + 54) )
  {
    if ( (int)DXGADAPTER::GetDriverVersion(v5) < 1200 && (*((_DWORD *)v5 + 77) & 0x10) == 0
      || v9
      || *((_QWORD *)v5 + 61)
      || *((_QWORD *)v5 + 62)
      || *((_QWORD *)v5 + 63)
      || *((_QWORD *)v5 + 64)
      || *((_QWORD *)v5 + 65)
      || *((_QWORD *)v5 + 66)
      || *((_QWORD *)v5 + 52)
      || *((_QWORD *)v5 + 53)
      || *((_QWORD *)v5 + 54)
      || *((_QWORD *)v5 + 69)
      || *((_QWORD *)v5 + 67)
      || *((_QWORD *)v5 + 68)
      || *((_QWORD *)v5 + 83)
      || *((_QWORD *)v5 + 133)
      || *((_QWORD *)v5 + 134)
      || *((_QWORD *)v5 + 135)
      || *((_QWORD *)v5 + 136) )
    {
      goto LABEL_78;
    }
    if ( *((_DWORD *)v5 + 332) || *((_DWORD *)v5 + 333) )
    {
      v21 = (_QWORD *)WdLogNewEntry5_WdError(a1);
      v21[3] = *((unsigned int *)v5 + 332);
      v26 = *((unsigned int *)v5 + 333);
      v22 = -1073741735;
      v21[5] = -1073741735LL;
      v21[4] = v26;
      goto LABEL_79;
    }
    goto LABEL_71;
  }
  if ( *((_QWORD *)v5 + 316) )
  {
    if ( DXGADAPTER::DriverSupportSetTimingsFromVidPn(v5) )
    {
      v7 = *((_QWORD *)v5 + 114) == 0LL;
    }
    else
    {
      if ( !*((_QWORD *)v5 + 63) )
      {
LABEL_78:
        v21 = (_QWORD *)WdLogNewEntry5_WdError(a1);
        v21[3] = v5;
        v22 = -1073741735;
        v21[4] = -1073741735LL;
LABEL_79:
        WdLogEvent5_WdError(v21);
        return v22;
      }
      v7 = 0;
    }
    if ( v7 || !*((_QWORD *)v5 + 69) || !*((_QWORD *)v5 + 52) && (int)DXGADAPTER::GetDriverVersion(a1) < 1200 )
      goto LABEL_78;
  }
  else
  {
    if ( !*((_QWORD *)v5 + 89) )
      goto LABEL_78;
    a1 = (struct DXGADAPTER *)(*((_QWORD *)v5 + 71) == 0LL);
    if ( (*((_QWORD *)v5 + 69) == 0LL) != (_DWORD)a1 )
      goto LABEL_78;
  }
  *(_QWORD *)(WdLogNewEntry5_WdTrace(a1, a2, v6, a4) + 24) = v5;
  if ( (int)DXGADAPTER::GetDriverVersion(v5) >= 1200 && !*((_DWORD *)v5 + 332) && !*((_DWORD *)v5 + 333) )
  {
LABEL_71:
    *(_QWORD *)(WdLogNewEntry5_WdTrace(a1, v8, v9, v10) + 24) = v5;
    result = 0LL;
    *a2 = 0LL;
    return result;
  }
  if ( (unsigned int)(*((_DWORD *)v5 + 332) - 1) > 0xF )
  {
    v23 = WdLogNewEntry5_WdError(a1);
    *(_QWORD *)(v23 + 24) = v5;
    v24 = *((unsigned int *)v5 + 332);
    goto LABEL_92;
  }
  if ( !*((_DWORD *)v5 + 333) )
  {
    v23 = WdLogNewEntry5_WdError(a1);
    *(_QWORD *)(v23 + 24) = v5;
    v24 = *((unsigned int *)v5 + 333);
LABEL_92:
    *(_QWORD *)(v23 + 32) = v24;
    goto LABEL_93;
  }
  if ( *((_BYTE *)v5 + 2428) && *((int *)v5 + 540) >= 4608 && (!*((_BYTE *)v5 + 2360) || !*((_BYTE *)v5 + 2361)) )
  {
    v23 = WdLogNewEntry5_WdError(a1);
    *(_QWORD *)(v23 + 24) = 4083LL;
LABEL_93:
    WdLogEvent5_WdError(v23);
    return 3221225485LL;
  }
  if ( !*((_QWORD *)v5 + 67) )
    *((_QWORD *)v5 + 67) = SwapChainObOpenProcedure;
  if ( !*((_QWORD *)v5 + 68) )
    *((_QWORD *)v5 + 68) = ADAPTER_DISPLAY::DefaultDdiRecommendVidPnTopology;
  if ( !*((_QWORD *)v5 + 83) )
    *((_QWORD *)v5 + 83) = ADAPTER_RENDER::DefaultDdiReleaseSwizzlingRange;
  if ( !*((_QWORD *)v5 + 121) )
    *((_QWORD *)v5 + 121) = DxgkQueryFSEBlock;
  if ( !*((_QWORD *)v5 + 134) )
    *((_QWORD *)v5 + 134) = DxgkQueryFSEBlock;
  if ( !*((_QWORD *)v5 + 135) )
    *((_QWORD *)v5 + 135) = DxgkQueryFSEBlock;
  if ( !*((_QWORD *)v5 + 136) )
    *((_QWORD *)v5 + 136) = DxgkQueryFSEBlock;
  if ( !*((_QWORD *)v5 + 85) )
    *((_QWORD *)v5 + 85) = DxgkQueryFSEBlock;
  v11 = operator new(0x318uLL, 0x4B677844u, 1, (POOL_TYPE)512);
  if ( v11 )
    v13 = ADAPTER_DISPLAY::ADAPTER_DISPLAY(v11, v5);
  else
    v13 = 0LL;
  if ( !v13 )
  {
    v25 = WdLogNewEntry5_WdLowResource(v12);
    v22 = -1073741801;
    *(_QWORD *)(v25 + 24) = -1073741801LL;
    WdLogEvent5_WdLowResource(v25);
    return v22;
  }
  v16 = ADAPTER_DISPLAY::Initialize(v13);
  if ( v16 < 0 )
  {
    ADAPTER_DISPLAY::Destroy(v13);
    ADAPTER_DISPLAY::`scalar deleting destructor'(v13);
  }
  else
  {
    v17 = WdLogNewEntry5_WdEvent(v15, v14);
    *(_QWORD *)(v17 + 24) = v13;
    *(_QWORD *)(v17 + 32) = v5;
    WdLogEvent5_WdEvent(v17);
    *a2 = v13;
  }
  return (unsigned int)v16;
}
