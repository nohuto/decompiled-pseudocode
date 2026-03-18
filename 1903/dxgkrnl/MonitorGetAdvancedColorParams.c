/*
 * XREFs of MonitorGetAdvancedColorParams @ 0x1C00E74D0
 * Callers:
 *     DxgkGetMonitorInternalInfo @ 0x1C00E7750 (DxgkGetMonitorInternalInfo.c)
 *     DxgkGetAdapterDeviceDesc @ 0x1C00E9980 (DxgkGetAdapterDeviceDesc.c)
 * Callees:
 *     ?_GetMonitorFromHandle@MONITOR_MGR@@SAJPEAUHDXGMONITOR__@@PEAPEAVDXGMONITOR@@@Z @ 0x1C0006314 (-_GetMonitorFromHandle@MONITOR_MGR@@SAJPEAUHDXGMONITOR__@@PEAPEAVDXGMONITOR@@@Z.c)
 */

__int64 __fastcall MonitorGetAdvancedColorParams(struct HDXGMONITOR__ *a1, _BYTE *a2, __int64 a3, __int64 a4)
{
  __int64 result; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  struct DXGMONITOR *v10; // rbx
  __m128i v11; // xmm1
  unsigned __int64 v12; // xmm0_8
  bool v13; // zf
  int v14; // eax
  int v15; // ecx
  int v16; // edx
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // rax
  __m128i v22; // xmm1
  unsigned __int64 v23; // xmm0_8
  int v24; // eax
  struct DXGMONITOR *v25; // [rsp+40h] [rbp+8h] BYREF

  if ( !a1 )
    return 3221225485LL;
  v25 = 0LL;
  result = MONITOR_MGR::_GetMonitorFromHandle(a1, &v25);
  if ( (int)result >= 0 )
  {
    v10 = v25;
    if ( !v25 )
    {
      v18 = WdLogNewEntry5_WdAssertion(v9, v8);
      WdLogEvent5_WdAssertion(v18);
      v21 = WdLogNewEntry5_WdAssertion(v20, v19);
      WdLogEvent5_WdAssertion(v21);
    }
    KeEnterCriticalRegion();
    ExAcquireResourceSharedLite((PERESOURCE)((char *)v10 + 296), 1u);
    if ( a2[1] )
    {
      v22 = *((__m128i *)v10 + 45);
      v23 = _mm_srli_si128(*((__m128i *)v10 + 44), 8).m128i_u64[0];
      *(_QWORD *)a3 = *((_QWORD *)v10 + 88);
      *(_QWORD *)(a3 + 8) = v23;
      *(_DWORD *)(a3 + 16) = v22.m128i_i32[0];
      *(_DWORD *)(a3 + 20) = v22.m128i_i32[1];
      v22.m128i_i64[0] = _mm_srli_si128(v22, 8).m128i_u64[0];
      *(_DWORD *)(a3 + 24) = v22.m128i_i32[0];
      *(_WORD *)a4 = 0;
      *(_DWORD *)(a3 + 28) = v22.m128i_i32[1];
      *(_DWORD *)(a3 + 32) = *((_DWORD *)v10 + 184);
      v24 = *((_DWORD *)v10 + 185);
      *(_DWORD *)(a3 + 36) = v24;
      *(_DWORD *)(a3 + 40) = v24;
    }
    else
    {
      v11 = *(__m128i *)((char *)v10 + 644);
      v12 = _mm_srli_si128(*(__m128i *)((char *)v10 + 628), 8).m128i_u64[0];
      *(_QWORD *)a3 = *(_QWORD *)((char *)v10 + 628);
      *(_QWORD *)(a3 + 8) = v12;
      *(_DWORD *)(a3 + 16) = v11.m128i_i32[0];
      *(_DWORD *)(a3 + 20) = v11.m128i_i32[1];
      v11.m128i_i64[0] = _mm_srli_si128(v11, 8).m128i_u64[0];
      *(_DWORD *)(a3 + 24) = v11.m128i_i32[0];
      v13 = *a2 == 0;
      *(_DWORD *)(a3 + 28) = v11.m128i_i32[1];
      if ( v13 )
      {
        v14 = *((_DWORD *)v10 + 168);
        v15 = *((_DWORD *)v10 + 167);
        v16 = *((_DWORD *)v10 + 166);
      }
      else
      {
        v14 = *((_DWORD *)v10 + 171);
        v15 = *((_DWORD *)v10 + 170);
        v16 = *((_DWORD *)v10 + 169);
      }
      *(_DWORD *)(a3 + 32) = v16;
      *(_DWORD *)(a3 + 36) = v15;
      *(_DWORD *)(a3 + 40) = v14;
      *(_BYTE *)a4 = *((_BYTE *)v10 + 692) != 0;
      v13 = *((_BYTE *)v10 + 700) == 0;
      *(_BYTE *)(a4 + 1) = (unsigned int)(*((_DWORD *)v10 + 174) - 3) <= 2;
      *(_BYTE *)(a4 + 4) = !v13;
      v17 = HIBYTE(*(_QWORD *)((char *)v10 + 620));
      *(_BYTE *)(a4 + 2) = (unsigned __int8)BYTE6(*(_QWORD *)((char *)v10 + 620)) != 0;
      *(_BYTE *)(a4 + 3) = (_BYTE)v17 != 0;
    }
    ExReleaseResourceLite((PERESOURCE)((char *)v10 + 296));
    KeLeaveCriticalRegion();
    return 0LL;
  }
  return result;
}
