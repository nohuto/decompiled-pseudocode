/*
 * XREFs of ?UpdateOneCddPrimaryPrivateDriverData@ADAPTER_DISPLAY@@QEAAXIPEAVDXGADAPTER@@@Z @ 0x1C014FEAC
 * Callers:
 *     ?SetTimingsFromVidPn@VIDPN_MGR@@QEAAJKW4_DMM_CLIENT_TYPE@@PEAVDMMVIDPN@@PEAUD3DKMT_VIDPN_SOURCE_MASKS@@PEAU_DMM_SET_TIMING_RESULT@@EPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C0129F1C (-SetTimingsFromVidPn@VIDPN_MGR@@QEAAJKW4_DMM_CLIENT_TYPE@@PEAVDMMVIDPN@@PEAUD3DKMT_VIDPN_SOURCE_.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0023340 (__security_check_cookie.c)
 *     memset @ 0x1C0025440 (memset.c)
 *     ?DdiGetStandardAllocationDriverData@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_GETSTANDARDALLOCATIONDRIVERDATA@@@Z @ 0x1C00F364C (-DdiGetStandardAllocationDriverData@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_GETSTANDARDALLOCATIONDRIVE.c)
 *     ?DdiDescribeAllocation@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_DESCRIBEALLOCATION@@@Z @ 0x1C0104D30 (-DdiDescribeAllocation@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_DESCRIBEALLOCATION@@@Z.c)
 */

void __fastcall ADAPTER_DISPLAY::UpdateOneCddPrimaryPrivateDriverData(
        ADAPTER_DISPLAY *this,
        __int64 a2,
        struct DXGADAPTER *a3)
{
  int v3; // r13d
  __int64 v5; // rcx
  __int64 v7; // rsi
  __int64 v8; // rdi
  __int64 v9; // rbx
  const GUID *v10; // r8
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r12
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // rcx
  UINT v18; // eax
  ADAPTER_RENDER *v19; // rcx
  const GUID *v20; // r8
  struct _DXGKARG_GETSTANDARDALLOCATIONDRIVERDATA v21; // [rsp+20h] [rbp-59h] BYREF
  struct _DXGKARG_DESCRIBEALLOCATION v22; // [rsp+50h] [rbp-29h] BYREF
  __int64 v23; // [rsp+80h] [rbp+7h] BYREF
  __int128 v24; // [rsp+88h] [rbp+Fh]

  v3 = a2;
  v5 = *((_QWORD *)this + 14);
  v7 = 3968LL * (unsigned int)a2;
  v8 = *(_QWORD *)(v5 + v7 + 88);
  if ( v8 )
  {
    v9 = *(_QWORD *)(*(_QWORD *)(v8 + 40) + 56LL);
    if ( !*(_DWORD *)(v5 + v7 + 1012) )
      goto LABEL_10;
    if ( !*((_QWORD *)a3 + 320) )
    {
      v16 = WdLogNewEntry5_WdAssertion(v5, a2);
      *(_QWORD *)(v16 + 24) = 7653LL;
      WdLogEvent5_WdAssertion(v16);
    }
    if ( (*(_DWORD *)(v9 + 12) & 4) == 0 )
    {
      memset(&v22, 0, sizeof(v22));
      v22.hAllocation = *(HANDLE *)(*(_QWORD *)(v8 + 48) + 16LL);
      if ( (int)ADAPTER_RENDER::DdiDescribeAllocation(*((ADAPTER_RENDER **)a3 + 320), &v22, v10) >= 0 )
      {
        v14 = *((_QWORD *)this + 14);
        if ( v22.PrivateDriverFormatAttribute == *(_DWORD *)(v14 + v7 + 1064) )
          return;
        v23 = 0LL;
        v24 = 0uLL;
        memset(&v21, 0, sizeof(v21));
        v17 = *(_QWORD *)(v8 + 48);
        v21.pCreateSharedPrimarySurfaceData = (D3DKMDT_SHAREDPRIMARYSURFACEDATA *)&v23;
        v21.StandardAllocationType = D3DKMDT_STANDARDALLOCATION_SHAREDPRIMARYSURFACE;
        v23 = *(_QWORD *)(v14 + v7 + 1012);
        *(_QWORD *)((char *)&v24 + 4) = *(_QWORD *)(v14 + v7 + 1028);
        LODWORD(v24) = *(_DWORD *)(v14 + v7 + 1020);
        HIDWORD(v24) = v3;
        v21.pAllocationPrivateDriverData = *(void **)(v17 + 32);
        v18 = *(_DWORD *)(v17 + 40);
        v19 = (ADAPTER_RENDER *)*((_QWORD *)a3 + 320);
        v21.AllocationPrivateDriverDataSize = v18;
        v21.pResourcePrivateDriverData = *(void **)(v9 + 112);
        v21.ResourcePrivateDriverDataSize = *(_DWORD *)(v9 + 120);
        if ( (int)ADAPTER_RENDER::DdiGetStandardAllocationDriverData(v19, &v21, v20) >= 0 )
        {
          *(_DWORD *)(*((_QWORD *)this + 14) + v7 + 1064) = v22.PrivateDriverFormatAttribute;
          return;
        }
      }
      v15 = WdLogNewEntry5_WdError(v12, v11, v13);
      *(_QWORD *)(v15 + 24) = v8;
      WdLogEvent5_WdError(v15);
LABEL_10:
      *(_DWORD *)(v9 + 12) |= 4u;
    }
  }
}
