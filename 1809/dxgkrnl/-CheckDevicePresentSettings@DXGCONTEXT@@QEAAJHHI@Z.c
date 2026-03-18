/*
 * XREFs of ?CheckDevicePresentSettings@DXGCONTEXT@@QEAAJHHI@Z @ 0x1C01298F0
 * Callers:
 *     ?Present@DXGCONTEXT@@QEAAJPEBUDXGK_PRESENT_PARAMS@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAVCWin32kLocks@@PEAPEAV1@PEAUVIDSCH_SUBMIT_DATA_BASE@@@Z @ 0x1C0107E40 (-Present@DXGCONTEXT@@QEAAJPEBUDXGK_PRESENT_PARAMS@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESET.c)
 *     ?PresentMultiPlaneOverlay3@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT_MULTIPLANE_OVERLAY3@@PEAVCOREDEVICEACCESS@@PEAPEAV1@@Z @ 0x1C024A648 (-PresentMultiPlaneOverlay3@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT_MULTIPLANE_OVERLAY3@@PEAVCOREDEV.c)
 * Callees:
 *     ?GetVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAPEAVDXGDEVICE@@I@Z @ 0x1C0005BF4 (-GetVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAPEAVDXGDEVICE@@I@Z.c)
 *     ?GetVidPnSourceOwnerType@ADAPTER_DISPLAY@@QEBA?AW4_D3DKMT_VIDPNSOURCEOWNER_TYPE@@I@Z @ 0x1C0005C70 (-GetVidPnSourceOwnerType@ADAPTER_DISPLAY@@QEBA-AW4_D3DKMT_VIDPNSOURCEOWNER_TYPE@@I@Z.c)
 *     ?wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@@IPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x1C000FAAC (-wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@.c)
 */

__int64 __fastcall DXGCONTEXT::CheckDevicePresentSettings(DXGCONTEXT *this, __int64 a2, __int64 a3, unsigned int a4)
{
  __int64 v4; // rsi
  __int64 v6; // rdi
  int v7; // r12d
  int v8; // r13d
  __int64 v9; // rbx
  __int64 v10; // rcx
  unsigned int v11; // eax
  __int64 v12; // rsi
  __int64 v13; // rbx
  __int64 v14; // rax
  _QWORD *v16; // rax
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // rax
  _QWORD *v21; // rax
  _QWORD *v22; // rax
  _QWORD *v23; // rax
  __int64 v24; // rcx
  __int64 v25; // rcx
  _QWORD *v26; // rbx
  __int64 v27; // rcx
  int v28; // [rsp+20h] [rbp-38h]

  v4 = *((_QWORD *)this + 2);
  v6 = a4;
  v7 = a3;
  v8 = a2;
  v9 = *(_QWORD *)(*(_QWORD *)(v4 + 1728) + 2520LL);
  v10 = *(_QWORD *)(v9 + 16);
  if ( KeGetCurrentThread() != *(struct _KTHREAD **)(v10 + 160)
    && !ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(v10 + 144)) )
  {
    v17 = WdLogNewEntry5_WdAssertion(v10);
    *(_QWORD *)(v17 + 24) = 5549LL;
    WdLogEvent5_WdAssertion(v17);
  }
  v11 = *(_DWORD *)(v9 + 80);
  if ( (unsigned int)v6 >= v11 )
  {
    v18 = WdLogNewEntry5_WdAssertion(v10);
    *(_QWORD *)(v18 + 24) = 5550LL;
    WdLogEvent5_WdAssertion(v18);
    v11 = *(_DWORD *)(v9 + 80);
  }
  if ( (unsigned int)v6 < v11 && v4 == *(_QWORD *)(*(_QWORD *)(v9 + 112) + 3760 * v6 + 688) )
  {
    v12 = *(_QWORD *)(*((_QWORD *)this + 2) + 1728LL);
    if ( !v12 )
      goto LABEL_15;
    v13 = *(_QWORD *)(v12 + 2520);
    if ( v13
      || (v19 = WdLogNewEntry5_WdAssertion(v10),
          *(_QWORD *)(v19 + 24) = 8834LL,
          WdLogEvent5_WdAssertion(v19),
          (v13 = *(_QWORD *)(v12 + 2520)) != 0) )
    {
      if ( (unsigned int)v6 >= *(_DWORD *)(v13 + 80) )
      {
        v20 = WdLogNewEntry5_WdAssertion(v10);
        *(_QWORD *)(v20 + 24) = 5587LL;
        WdLogEvent5_WdAssertion(v20);
      }
      if ( *(_BYTE *)(*(_QWORD *)(v13 + 112) + 3760 * v6 + 720) )
        goto LABEL_15;
    }
    if ( *(_DWORD *)(*((_QWORD *)this + 2) + 328LL) == 1 )
    {
      v16 = (_QWORD *)WdLogNewEntry5_WdEvent(v10, a2);
      v16[3] = -1071775738LL;
      v16[4] = this;
      v16[5] = v6;
      WdLogEvent5_WdEvent(v16);
      return 3223191558LL;
    }
    if ( !v8 )
    {
LABEL_15:
      if ( v7 )
        return 0LL;
      v14 = *((_QWORD *)this + 2);
      if ( *(_DWORD *)(v14 + 328) != 1 || (*(_DWORD *)(v14 + 4 * v6 + 1088) & 0x100) != 0 )
      {
        return 0LL;
      }
      else
      {
        v22 = (_QWORD *)WdLogNewEntry5_WdEvent(v10, a2);
        v22[3] = -1071775739LL;
        v22[4] = this;
        v22[5] = v6;
        WdLogEvent5_WdEvent(v22);
        return 3223191557LL;
      }
    }
    else
    {
      v21 = (_QWORD *)WdLogNewEntry5_WdEvent(v10, a2);
      v21[3] = 0LL;
      v21[4] = this;
      v21[5] = v6;
      WdLogEvent5_WdEvent(v21);
      return 3223192376LL;
    }
  }
  else
  {
    v23 = (_QWORD *)WdLogNewEntry5_WdWarning(v10, a2, a3);
    v23[3] = -1071775744LL;
    v23[4] = this;
    v23[5] = v6;
    WdLogEvent5_WdWarning(v23);
    v24 = *((_QWORD *)this + 2);
    if ( *(_BYTE *)(*(_QWORD *)(v24 + 40) + 322LL) )
    {
      if ( (unsigned int)ADAPTER_DISPLAY::GetVidPnSourceOwnerType(
                           *(DXGADAPTER ***)(*(_QWORD *)(v24 + 1728) + 2520LL),
                           v6) == 1 )
      {
        v25 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 1728LL) + 2520LL) + 112LL)
                        + 3760 * v6
                        + 712);
        if ( *(_BYTE *)(v25 + 322) )
        {
          v26 = (_QWORD *)WdLogNewEntry5_WdError(v25);
          v26[3] = *((_QWORD *)this + 2);
          v26[4] = v6;
          v26[5] = ADAPTER_DISPLAY::GetVidPnSourceOwner(
                     *(DXGADAPTER ***)(*(_QWORD *)(*((_QWORD *)this + 2) + 1728LL) + 2520LL),
                     v6);
          WdLogEvent5_WdError(v26);
          LOBYTE(v27) = 1;
          *(_BYTE *)(*((_QWORD *)this + 2) + 1786LL) = 1;
          if ( (unsigned __int8)WdIsDebuggerPresent(v27) )
          {
            DbgPrintEx(0x65u, 0, "Breaking in to allow debug of potential DWM swap chain leak");
            __debugbreak();
          }
          else
          {
            wil_details_FeaturePropertyCache_ReportUsageToService(
              (__int64)&Feature_Dwm_Ownership_Leak_Bugchek__private_propertyCache,
              11029914LL,
              (const struct FEATURE_LOGGED_TRAITS *)&unk_1C006FEF8,
              0,
              v28);
          }
        }
      }
    }
    return 3223191552LL;
  }
}
