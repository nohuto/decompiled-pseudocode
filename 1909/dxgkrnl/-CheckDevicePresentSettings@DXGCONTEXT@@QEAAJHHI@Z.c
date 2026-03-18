/*
 * XREFs of ?CheckDevicePresentSettings@DXGCONTEXT@@QEAAJHHI@Z @ 0x1C01070A0
 * Callers:
 *     ?Present@DXGCONTEXT@@QEAAJPEBUDXGK_PRESENT_PARAMS@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAVCWin32kLocks@@PEAPEAV1@PEAUVIDSCH_SUBMIT_DATA_BASE@@@Z @ 0x1C010A6E0 (-Present@DXGCONTEXT@@QEAAJPEBUDXGK_PRESENT_PARAMS@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESET.c)
 *     ?PresentMultiPlaneOverlay3@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT_MULTIPLANE_OVERLAY3@@PEAVCOREDEVICEACCESS@@PEAPEAV1@@Z @ 0x1C0280254 (-PresentMultiPlaneOverlay3@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT_MULTIPLANE_OVERLAY3@@PEAVCOREDEV.c)
 * Callees:
 *     ?GetVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAPEAVDXGDEVICE@@I@Z @ 0x1C0001FE4 (-GetVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAPEAVDXGDEVICE@@I@Z.c)
 *     ?GetVidPnSourceOwnerType@ADAPTER_DISPLAY@@QEBA?AW4_D3DKMT_VIDPNSOURCEOWNER_TYPE@@I@Z @ 0x1C000238C (-GetVidPnSourceOwnerType@ADAPTER_DISPLAY@@QEBA-AW4_D3DKMT_VIDPNSOURCEOWNER_TYPE@@I@Z.c)
 *     ?wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@@IPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x1C0002920 (-wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@.c)
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
  _QWORD *v17; // rax
  __int64 v18; // rcx
  __int64 v19; // rdx
  __int64 v20; // r8
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 v23; // rax
  __int64 v24; // rax
  _QWORD *v25; // rax
  _QWORD *v26; // rax
  __int64 v27; // rcx
  _QWORD *v28; // rbx
  __int64 v29; // rcx
  int v30; // [rsp+20h] [rbp-38h]

  v4 = *((_QWORD *)this + 2);
  v6 = a4;
  v7 = a3;
  v8 = a2;
  v9 = *(_QWORD *)(*(_QWORD *)(v4 + 1728) + 2552LL);
  v10 = *(_QWORD *)(v9 + 16);
  if ( KeGetCurrentThread() != *(struct _KTHREAD **)(v10 + 160)
    && !ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(v10 + 144)) )
  {
    v21 = WdLogNewEntry5_WdAssertion(v10, a2);
    *(_QWORD *)(v21 + 24) = 5785LL;
    WdLogEvent5_WdAssertion(v21);
  }
  v11 = *(_DWORD *)(v9 + 80);
  if ( (unsigned int)v6 >= v11 )
  {
    v22 = WdLogNewEntry5_WdAssertion(v10, a2);
    *(_QWORD *)(v22 + 24) = 5786LL;
    WdLogEvent5_WdAssertion(v22);
    v11 = *(_DWORD *)(v9 + 80);
  }
  if ( (unsigned int)v6 < v11 && v4 == *(_QWORD *)(*(_QWORD *)(v9 + 112) + 3968 * v6 + 688) )
  {
    v12 = *(_QWORD *)(*((_QWORD *)this + 2) + 1728LL);
    if ( !v12 )
      goto LABEL_15;
    v13 = *(_QWORD *)(v12 + 2552);
    if ( v13
      || (v23 = WdLogNewEntry5_WdAssertion(v10, a2),
          *(_QWORD *)(v23 + 24) = 9139LL,
          WdLogEvent5_WdAssertion(v23),
          (v13 = *(_QWORD *)(v12 + 2552)) != 0) )
    {
      if ( (unsigned int)v6 >= *(_DWORD *)(v13 + 80) )
      {
        v24 = WdLogNewEntry5_WdAssertion(v10, a2);
        *(_QWORD *)(v24 + 24) = 5823LL;
        WdLogEvent5_WdAssertion(v24);
      }
      if ( *(_BYTE *)(*(_QWORD *)(v13 + 112) + 3968 * v6 + 720) )
        goto LABEL_15;
    }
    if ( *(_DWORD *)(*((_QWORD *)this + 2) + 328LL) == 1 )
    {
      v16 = (_QWORD *)WdLogNewEntry5_WdEvent(v10);
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
        v26 = (_QWORD *)WdLogNewEntry5_WdEvent(v10);
        v26[3] = -1071775739LL;
        v26[4] = this;
        v26[5] = v6;
        WdLogEvent5_WdEvent(v26);
        return 3223191557LL;
      }
    }
    else
    {
      v25 = (_QWORD *)WdLogNewEntry5_WdEvent(v10);
      v25[3] = 0LL;
      v25[4] = this;
      v25[5] = v6;
      WdLogEvent5_WdEvent(v25);
      return 3223192376LL;
    }
  }
  else
  {
    v17 = (_QWORD *)WdLogNewEntry5_WdWarning(v10, a2, a3);
    v17[3] = -1071775744LL;
    v17[4] = this;
    v17[5] = v6;
    WdLogEvent5_WdWarning(v17);
    v18 = *((_QWORD *)this + 2);
    if ( *(_BYTE *)(*(_QWORD *)(v18 + 40) + 298LL) )
    {
      if ( (unsigned int)ADAPTER_DISPLAY::GetVidPnSourceOwnerType(
                           *(DXGADAPTER ***)(*(_QWORD *)(v18 + 1728) + 2552LL),
                           v6) == 1 )
      {
        v27 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 1728LL) + 2552LL) + 112LL)
                        + 3968 * v6
                        + 712);
        if ( *(_BYTE *)(v27 + 298) )
        {
          v28 = (_QWORD *)WdLogNewEntry5_WdError(v27, v19, v20);
          v28[3] = *((_QWORD *)this + 2);
          v28[4] = v6;
          v28[5] = ADAPTER_DISPLAY::GetVidPnSourceOwner(
                     *(DXGADAPTER ***)(*(_QWORD *)(*((_QWORD *)this + 2) + 1728LL) + 2552LL),
                     v6);
          WdLogEvent5_WdError(v28);
          LOBYTE(v29) = 1;
          *(_BYTE *)(*((_QWORD *)this + 2) + 1786LL) = 1;
          if ( (unsigned __int8)WdIsDebuggerPresent(v29) )
          {
            DbgPrintEx(0x65u, 0, "Breaking in to allow debug of potential DWM swap chain leak");
            __debugbreak();
          }
          else
          {
            wil_details_FeaturePropertyCache_ReportUsageToService(
              (__int64)&Feature_Dwm_Ownership_Leak_Bugchek__private_propertyCache,
              11029914LL,
              (const struct FEATURE_LOGGED_TRAITS *)&unk_1C0078D38,
              0,
              v30);
          }
        }
      }
    }
    return 3223191552LL;
  }
}
