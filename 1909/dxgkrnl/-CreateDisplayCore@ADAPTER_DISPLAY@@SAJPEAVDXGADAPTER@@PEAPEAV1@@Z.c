/*
 * XREFs of ?CreateDisplayCore@ADAPTER_DISPLAY@@SAJPEAVDXGADAPTER@@PEAPEAV1@@Z @ 0x1C016A9CC
 * Callers:
 *     ?Initialize@DXGADAPTER@@QEAAJPEAU_DEVICE_OBJECT@@PEAU_DXGK_ADAPTER_CAPS@@@Z @ 0x1C0168F90 (-Initialize@DXGADAPTER@@QEAAJPEAU_DEVICE_OBJECT@@PEAU_DXGK_ADAPTER_CAPS@@@Z.c)
 * Callees:
 *     ??2@YAPEAX_KIHW4_POOL_TYPE@@@Z @ 0x1C0008ADC (--2@YAPEAX_KIHW4_POOL_TYPE@@@Z.c)
 *     ??_GADAPTER_DISPLAY@@QEAAPEAXI@Z @ 0x1C00326AC (--_GADAPTER_DISPLAY@@QEAAPEAXI@Z.c)
 *     ?DriverSupportSetTimingsFromVidPn@DXGADAPTER@@QEBAEXZ @ 0x1C00E6DB8 (-DriverSupportSetTimingsFromVidPn@DXGADAPTER@@QEBAEXZ.c)
 *     ?Initialize@ADAPTER_DISPLAY@@QEAAJXZ @ 0x1C016D17C (-Initialize@ADAPTER_DISPLAY@@QEAAJXZ.c)
 *     ??0ADAPTER_DISPLAY@@QEAA@PEAVDXGADAPTER@@@Z @ 0x1C0181338 (--0ADAPTER_DISPLAY@@QEAA@PEAVDXGADAPTER@@@Z.c)
 *     ?Destroy@ADAPTER_DISPLAY@@QEAAXXZ @ 0x1C01F10E8 (-Destroy@ADAPTER_DISPLAY@@QEAAXXZ.c)
 */

__int64 __fastcall ADAPTER_DISPLAY::CreateDisplayCore(unsigned __int64 a1, struct ADAPTER_DISPLAY **a2, __int64 a3)
{
  struct DXGADAPTER *v4; // rbx
  __int64 v5; // rdx
  BOOL v6; // eax
  PVOID v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  ADAPTER_DISPLAY *v12; // rdi
  __int64 v13; // rcx
  int v14; // esi
  __int64 v15; // rax
  __int64 result; // rax
  __int64 v17; // rax
  __int64 v18; // rax
  _QWORD *v19; // rax
  unsigned int v20; // ebx
  __int64 v21; // rax
  __int64 v22; // rcx
  __int64 v23; // rax
  __int64 v24; // rcx

  v4 = (struct DXGADAPTER *)a1;
  if ( !a1 )
  {
    v17 = WdLogNewEntry5_WdAssertion(0LL, a2);
    *(_QWORD *)(v17 + 24) = 4130LL;
    WdLogEvent5_WdAssertion(v17);
  }
  if ( !a2 )
  {
    v18 = WdLogNewEntry5_WdAssertion(a1, a2);
    *(_QWORD *)(v18 + 24) = 4131LL;
    WdLogEvent5_WdAssertion(v18);
  }
  v5 = *((_QWORD *)v4 + 60);
  if ( !v5
    || !*((_QWORD *)v4 + 61)
    || !*((_QWORD *)v4 + 62)
    || !*((_QWORD *)v4 + 64)
    || !*((_QWORD *)v4 + 65) && !DXGADAPTER::DriverSupportSetTimingsFromVidPn(v4)
    || !*((_QWORD *)v4 + 66) && *((int *)v4 + 613) < 2200
    || !*((_QWORD *)v4 + 53)
    || !*((_QWORD *)v4 + 54) )
  {
    if ( *((int *)v4 + 613) < 1200 && (*((_DWORD *)v4 + 77) & 0x10) == 0
      || v5
      || *((_QWORD *)v4 + 61)
      || *((_QWORD *)v4 + 62)
      || *((_QWORD *)v4 + 63)
      || *((_QWORD *)v4 + 64)
      || *((_QWORD *)v4 + 65)
      || *((_QWORD *)v4 + 66)
      || *((_QWORD *)v4 + 52)
      || *((_QWORD *)v4 + 53)
      || *((_QWORD *)v4 + 54)
      || *((_QWORD *)v4 + 68)
      || *((_QWORD *)v4 + 67)
      || *((_QWORD *)v4 + 82)
      || *((_QWORD *)v4 + 131)
      || *((_QWORD *)v4 + 132)
      || *((_QWORD *)v4 + 133)
      || *((_QWORD *)v4 + 134) )
    {
      goto LABEL_73;
    }
    if ( *((_DWORD *)v4 + 336) || *((_DWORD *)v4 + 337) )
    {
      v19 = (_QWORD *)WdLogNewEntry5_WdError(a1, 0LL, a3);
      v19[3] = *((unsigned int *)v4 + 336);
      v24 = *((unsigned int *)v4 + 337);
      v20 = -1073741735;
      v19[5] = -1073741735LL;
      v19[4] = v24;
      goto LABEL_74;
    }
    goto LABEL_66;
  }
  if ( *((_QWORD *)v4 + 320) )
  {
    if ( DXGADAPTER::DriverSupportSetTimingsFromVidPn(v4) )
    {
      v6 = *((_QWORD *)v4 + 112) == 0LL;
    }
    else
    {
      if ( !*((_QWORD *)v4 + 63) )
      {
LABEL_73:
        v19 = (_QWORD *)WdLogNewEntry5_WdError(a1, v5, a3);
        v19[3] = v4;
        v20 = -1073741735;
        v19[4] = -1073741735LL;
LABEL_74:
        WdLogEvent5_WdError(v19);
        return v20;
      }
      v6 = 0;
    }
    if ( v6 || !*((_QWORD *)v4 + 68) || !*((_QWORD *)v4 + 52) && *((int *)v4 + 613) < 1200 )
      goto LABEL_73;
  }
  else
  {
    if ( !*((_QWORD *)v4 + 87) )
      goto LABEL_73;
    a1 = *((_QWORD *)v4 + 70) == 0LL;
    if ( (*((_QWORD *)v4 + 68) == 0LL) != (_DWORD)a1 )
      goto LABEL_73;
  }
  *(_QWORD *)(WdLogNewEntry5_WdTrace(a1, v5) + 24) = v4;
  if ( *((int *)v4 + 613) >= 1200 && !*((_DWORD *)v4 + 336) && !*((_DWORD *)v4 + 337) )
  {
LABEL_66:
    *(_QWORD *)(WdLogNewEntry5_WdTrace(a1, v5) + 24) = v4;
    result = 0LL;
    *a2 = 0LL;
    return result;
  }
  if ( (unsigned int)(*((_DWORD *)v4 + 336) - 1) > 0xF )
  {
    v21 = WdLogNewEntry5_WdError(a1, v5, 1LL);
    *(_QWORD *)(v21 + 24) = v4;
    v22 = *((unsigned int *)v4 + 336);
    goto LABEL_87;
  }
  if ( !*((_DWORD *)v4 + 337) )
  {
    v21 = WdLogNewEntry5_WdError(a1, v5, 1LL);
    *(_QWORD *)(v21 + 24) = v4;
    v22 = *((unsigned int *)v4 + 337);
LABEL_87:
    *(_QWORD *)(v21 + 32) = v22;
    goto LABEL_88;
  }
  if ( *((_BYTE *)v4 + 2464) && *((int *)v4 + 546) >= 4608 && (!*((_BYTE *)v4 + 2384) || !*((_BYTE *)v4 + 2385)) )
  {
    v21 = WdLogNewEntry5_WdError(a1, v5, 1LL);
    *(_QWORD *)(v21 + 24) = 4304LL;
LABEL_88:
    WdLogEvent5_WdError(v21);
    return 3221225485LL;
  }
  if ( !*((_QWORD *)v4 + 67) )
    *((_QWORD *)v4 + 67) = SwapChainObOpenProcedure;
  if ( !*((_QWORD *)v4 + 82) )
    *((_QWORD *)v4 + 82) = ADAPTER_RENDER::DefaultDdiReleaseSwizzlingRange;
  if ( !*((_QWORD *)v4 + 119) )
    *((_QWORD *)v4 + 119) = DxgkQueryFSEBlock;
  if ( !*((_QWORD *)v4 + 132) )
    *((_QWORD *)v4 + 132) = DxgkQueryFSEBlock;
  if ( !*((_QWORD *)v4 + 133) )
    *((_QWORD *)v4 + 133) = DxgkQueryFSEBlock;
  if ( !*((_QWORD *)v4 + 134) )
    *((_QWORD *)v4 + 134) = DxgkQueryFSEBlock;
  v7 = operator new(0x380uLL, 0x4B677844u, 1, (POOL_TYPE)512);
  if ( v7 )
    v12 = ADAPTER_DISPLAY::ADAPTER_DISPLAY(v7, v4);
  else
    v12 = 0LL;
  if ( !v12 )
  {
    v23 = WdLogNewEntry5_WdLowResource(v9, v8, v10, v11);
    v20 = -1073741801;
    *(_QWORD *)(v23 + 24) = -1073741801LL;
    WdLogEvent5_WdLowResource(v23);
    return v20;
  }
  v14 = ADAPTER_DISPLAY::Initialize(v12);
  if ( v14 < 0 )
  {
    ADAPTER_DISPLAY::Destroy(v12);
    ADAPTER_DISPLAY::`scalar deleting destructor'(v12);
  }
  else
  {
    v15 = WdLogNewEntry5_WdEvent(v13);
    *(_QWORD *)(v15 + 24) = v12;
    *(_QWORD *)(v15 + 32) = v4;
    WdLogEvent5_WdEvent(v15);
    *a2 = v12;
  }
  return (unsigned int)v14;
}
