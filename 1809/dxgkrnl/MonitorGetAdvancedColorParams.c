/*
 * XREFs of MonitorGetAdvancedColorParams @ 0x1C00C4348
 * Callers:
 *     DxgkGetMonitorInternalInfo @ 0x1C00C3480 (DxgkGetMonitorInternalInfo.c)
 *     ?DxgkpGetAdapterDeviceDesc@@YAJU_LUID@@IPEAU_DISPLAYCONFIG_GET_DISPLAY_INFO@@@Z @ 0x1C00DCE30 (-DxgkpGetAdapterDeviceDesc@@YAJU_LUID@@IPEAU_DISPLAYCONFIG_GET_DISPLAY_INFO@@@Z.c)
 * Callees:
 *     ?_GetMonitorFromHandle@MONITOR_MGR@@SAJPEAUHDXGMONITOR__@@PEAPEAVDXGMONITOR@@@Z @ 0x1C0004D9C (-_GetMonitorFromHandle@MONITOR_MGR@@SAJPEAUHDXGMONITOR__@@PEAPEAVDXGMONITOR@@@Z.c)
 */

__int64 __fastcall MonitorGetAdvancedColorParams(struct HDXGMONITOR__ *a1, _BYTE *a2, __int64 a3, bool *a4)
{
  __int64 result; // rax
  __int64 v8; // rcx
  struct DXGMONITOR *v9; // rbx
  __m128i v10; // xmm1
  unsigned __int64 v11; // xmm0_8
  bool v12; // zf
  int v13; // eax
  int v14; // ecx
  int v15; // edx
  __int64 v16; // rcx
  bool v17; // dl
  __int64 v18; // rax
  __int64 v19; // rcx
  __int64 v20; // rax
  __m128i v21; // xmm0
  __m128i v22; // xmm1
  int v23; // eax
  struct DXGMONITOR *v24; // [rsp+40h] [rbp+8h] BYREF

  if ( !a1 )
    return 3221225485LL;
  v24 = 0LL;
  result = MONITOR_MGR::_GetMonitorFromHandle(a1, &v24);
  if ( (int)result >= 0 )
  {
    v9 = v24;
    if ( !v24 )
    {
      v18 = WdLogNewEntry5_WdAssertion(v8);
      WdLogEvent5_WdAssertion(v18);
      v20 = WdLogNewEntry5_WdAssertion(v19);
      WdLogEvent5_WdAssertion(v20);
    }
    KeEnterCriticalRegion();
    ExAcquireResourceSharedLite((PERESOURCE)((char *)v9 + 296), 1u);
    if ( a2[1] )
    {
      v21 = *(__m128i *)((char *)v9 + 700);
      *a4 = 0;
      v22 = *(__m128i *)((char *)v9 + 716);
      *(_QWORD *)a3 = v21.m128i_i64[0];
      *(_QWORD *)(a3 + 8) = _mm_srli_si128(v21, 8).m128i_u64[0];
      *(_DWORD *)(a3 + 16) = v22.m128i_i32[0];
      *(_DWORD *)(a3 + 20) = v22.m128i_i32[1];
      *(_QWORD *)(a3 + 24) = _mm_srli_si128(v22, 8).m128i_u64[0];
      v17 = 0;
      *(_DWORD *)(a3 + 32) = *((_DWORD *)v9 + 183);
      v23 = *((_DWORD *)v9 + 184);
      *(_DWORD *)(a3 + 36) = v23;
      *(_DWORD *)(a3 + 40) = v23;
    }
    else
    {
      v10 = *((__m128i *)v9 + 40);
      v11 = _mm_srli_si128(*((__m128i *)v9 + 39), 8).m128i_u64[0];
      *(_QWORD *)a3 = *((_QWORD *)v9 + 78);
      *(_QWORD *)(a3 + 8) = v11;
      *(_DWORD *)(a3 + 16) = v10.m128i_i32[0];
      *(_DWORD *)(a3 + 20) = v10.m128i_i32[1];
      v10.m128i_i64[0] = _mm_srli_si128(v10, 8).m128i_u64[0];
      *(_DWORD *)(a3 + 24) = v10.m128i_i32[0];
      v12 = *a2 == 0;
      *(_DWORD *)(a3 + 28) = v10.m128i_i32[1];
      if ( v12 )
      {
        v13 = *((_DWORD *)v9 + 167);
        v14 = *((_DWORD *)v9 + 166);
        v15 = *((_DWORD *)v9 + 165);
      }
      else
      {
        v13 = *((_DWORD *)v9 + 170);
        v14 = *((_DWORD *)v9 + 169);
        v15 = *((_DWORD *)v9 + 168);
      }
      *(_DWORD *)(a3 + 32) = v15;
      *(_DWORD *)(a3 + 36) = v14;
      *(_DWORD *)(a3 + 40) = v13;
      v16 = *((_QWORD *)v9 + 77);
      *a4 = *((_BYTE *)v9 + 688) != 0;
      v17 = (unsigned int)(*((_DWORD *)v9 + 173) - 3) <= 2;
      a4[4] = *((_BYTE *)v9 + 696) != 0;
      a4[2] = BYTE6(v16) != 0;
      a4[3] = HIBYTE(v16) != 0;
    }
    a4[1] = v17;
    ExReleaseResourceLite((PERESOURCE)((char *)v9 + 296));
    KeLeaveCriticalRegion();
    return 0LL;
  }
  return result;
}
