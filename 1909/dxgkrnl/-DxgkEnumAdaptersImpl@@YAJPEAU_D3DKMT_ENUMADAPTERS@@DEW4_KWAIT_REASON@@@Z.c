/*
 * XREFs of ?DxgkEnumAdaptersImpl@@YAJPEAU_D3DKMT_ENUMADAPTERS@@DEW4_KWAIT_REASON@@@Z @ 0x1C00C54B4
 * Callers:
 *     DxgkEnumAdapters @ 0x1C00C54A0 (DxgkEnumAdapters.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0023340 (__security_check_cookie.c)
 *     memset @ 0x1C0025440 (memset.c)
 *     ?DxgkEnumAdaptersInternal@@YAJPEAUENUMADAPTERSINTERNAL@@DEW4_KWAIT_REASON@@@Z @ 0x1C00CF5E4 (-DxgkEnumAdaptersInternal@@YAJPEAUENUMADAPTERSINTERNAL@@DEW4_KWAIT_REASON@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01059F0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?DestroyHandle@DXGADAPTER@@SAJPEAVDXGPROCESS@@I@Z @ 0x1C0133E30 (-DestroyHandle@DXGADAPTER@@SAJPEAVDXGPROCESS@@I@Z.c)
 */

__int64 __fastcall DxgkEnumAdaptersImpl(struct _D3DKMT_ENUMADAPTERS *a1, __int64 a2, __int64 a3, enum _KWAIT_REASON a4)
{
  struct _D3DKMT_ENUMADAPTERS *v4; // rbx
  __int64 v5; // rdx
  __int64 v6; // rdi
  __int64 v7; // r8
  __int64 v8; // rcx
  _OWORD *v9; // rax
  __int64 v10; // rcx
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // rax
  unsigned int v17; // [rsp+20h] [rbp-188h] BYREF
  unsigned int v18; // [rsp+24h] [rbp-184h]
  __int64 v19; // [rsp+28h] [rbp-180h]
  _DWORD *v20; // [rsp+30h] [rbp-178h]
  _DWORD v21[84]; // [rsp+40h] [rbp-168h] BYREF

  v4 = a1;
  if ( a1 )
  {
    memset(v21, 0, 0x144uLL);
    v17 = 0;
    v19 = 0LL;
    v20 = &v21[1];
    v18 = 16;
    v6 = (int)DxgkEnumAdaptersInternal((struct ENUMADAPTERSINTERNAL *)&v17, 1, 1u, UserRequest);
    v8 = v17;
    if ( v17 > 0x10 )
    {
      v13 = WdLogNewEntry5_WdAssertion(v17, v5);
      *(_QWORD *)(v13 + 24) = 1014LL;
      WdLogEvent5_WdAssertion(v13);
      v8 = v17;
    }
    if ( (unsigned int)v8 > v18 )
    {
      v14 = WdLogNewEntry5_WdAssertion(v8, v5);
      *(_QWORD *)(v14 + 24) = 1015LL;
      WdLogEvent5_WdAssertion(v14);
      v8 = v17;
    }
    if ( (unsigned int)v8 > (unsigned int)v19 )
    {
      v15 = WdLogNewEntry5_WdAssertion(v8, v5);
      *(_QWORD *)(v15 + 24) = 1016LL;
      WdLogEvent5_WdAssertion(v15);
      v8 = v17;
    }
    if ( (int)v6 < 0 )
    {
      v16 = WdLogNewEntry5_WdError(v8, v5, v7);
      *(_QWORD *)(v16 + 24) = v6;
      WdLogEvent5_WdError(v16);
    }
    else
    {
      v21[0] = v8;
      if ( (unsigned __int64)&v4[1] > MmUserProbeAddress || &v4[1] <= v4 )
        *(_BYTE *)MmUserProbeAddress = 0;
      v9 = v21;
      v10 = 2LL;
      do
      {
        *(_OWORD *)&v4->NumAdapters = *v9;
        *(_OWORD *)&v4->Adapters[0].NumOfSources = v9[1];
        *(_OWORD *)&v4->Adapters[1].AdapterLuid.HighPart = v9[2];
        *(_OWORD *)&v4->Adapters[2].AdapterLuid.LowPart = v9[3];
        *(_OWORD *)&v4->Adapters[3].hAdapter = v9[4];
        *(_OWORD *)&v4->Adapters[3].bPresentMoveRegionsPreferred = v9[5];
        *(_OWORD *)&v4->Adapters[4].NumOfSources = v9[6];
        v4 = (struct _D3DKMT_ENUMADAPTERS *)((char *)v4 + 128);
        *(_OWORD *)&v4[-1].Adapters[15].AdapterLuid.LowPart = v9[7];
        v9 += 8;
        --v10;
      }
      while ( v10 );
      *(_OWORD *)&v4->NumAdapters = *v9;
      *(_OWORD *)&v4->Adapters[0].NumOfSources = v9[1];
      *(_OWORD *)&v4->Adapters[1].AdapterLuid.HighPart = v9[2];
      *(_OWORD *)&v4->Adapters[2].AdapterLuid.LowPart = v9[3];
      v4->Adapters[3].hAdapter = *((_DWORD *)v9 + 16);
    }
    return (unsigned int)v6;
  }
  else
  {
    v12 = WdLogNewEntry5_WdError(0LL, a2, a3);
    *(_QWORD *)(v12 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v12);
    return 3221225485LL;
  }
}
