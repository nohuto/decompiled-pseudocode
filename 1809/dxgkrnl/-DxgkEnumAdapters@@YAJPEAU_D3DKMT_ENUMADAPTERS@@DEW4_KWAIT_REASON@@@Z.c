/*
 * XREFs of ?DxgkEnumAdapters@@YAJPEAU_D3DKMT_ENUMADAPTERS@@DEW4_KWAIT_REASON@@@Z @ 0x1C00B3680
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1C0020760 (__security_check_cookie.c)
 *     memmove @ 0x1C0022E80 (memmove.c)
 *     memset @ 0x1C00231C0 (memset.c)
 *     ?DxgkEnumAdaptersInternal@@YAJPEAUENUMADAPTERSINTERNAL@@DEW4_KWAIT_REASON@@@Z @ 0x1C00E1578 (-DxgkEnumAdaptersInternal@@YAJPEAUENUMADAPTERSINTERNAL@@DEW4_KWAIT_REASON@@@Z.c)
 *     ?DestroyHandle@DXGADAPTER@@SAJPEAVDXGPROCESS@@I@Z @ 0x1C00EE924 (-DestroyHandle@DXGADAPTER@@SAJPEAVDXGPROCESS@@I@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0102F10 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall DxgkEnumAdapters(
        struct _D3DKMT_ENUMADAPTERS *a1,
        char a2,
        unsigned __int8 a3,
        enum _KWAIT_REASON a4)
{
  struct _D3DKMT_ENUMADAPTERS *v7; // rbx
  __int64 v8; // rdi
  __int64 v9; // rcx
  _OWORD *v10; // rax
  __int64 v11; // rcx
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // [rsp+20h] [rbp-198h] BYREF
  __int64 v19; // [rsp+28h] [rbp-190h]
  _DWORD *v20; // [rsp+30h] [rbp-188h]
  _DWORD Src[84]; // [rsp+40h] [rbp-178h] BYREF

  v7 = a1;
  if ( a1 )
  {
    memset(Src, 0, 0x144uLL);
    v18 = 0x1000000000LL;
    v19 = 0LL;
    v20 = &Src[1];
    v8 = DxgkEnumAdaptersInternal((struct ENUMADAPTERSINTERNAL *)&v18, a2, a3, a4);
    v9 = (unsigned int)v18;
    if ( (unsigned int)v18 > 0x10 )
    {
      v14 = WdLogNewEntry5_WdAssertion((unsigned int)v18);
      *(_QWORD *)(v14 + 24) = 732LL;
      WdLogEvent5_WdAssertion(v14);
      v9 = (unsigned int)v18;
    }
    if ( (unsigned int)v9 > HIDWORD(v18) )
    {
      v15 = WdLogNewEntry5_WdAssertion(v9);
      *(_QWORD *)(v15 + 24) = 733LL;
      WdLogEvent5_WdAssertion(v15);
      v9 = (unsigned int)v18;
    }
    if ( (unsigned int)v9 > (unsigned int)v19 )
    {
      v16 = WdLogNewEntry5_WdAssertion(v9);
      *(_QWORD *)(v16 + 24) = 734LL;
      WdLogEvent5_WdAssertion(v16);
      v9 = (unsigned int)v18;
    }
    if ( (int)v8 < 0 )
    {
      v17 = WdLogNewEntry5_WdError(v9);
      *(_QWORD *)(v17 + 24) = v8;
      WdLogEvent5_WdError(v17);
    }
    else
    {
      Src[0] = v9;
      if ( a2 == 1 )
      {
        if ( (unsigned __int64)&v7[1] > MmUserProbeAddress || &v7[1] <= v7 )
          *(_BYTE *)MmUserProbeAddress = 0;
        v10 = Src;
        v11 = 2LL;
        do
        {
          *(_OWORD *)&v7->NumAdapters = *v10;
          *(_OWORD *)&v7->Adapters[0].NumOfSources = v10[1];
          *(_OWORD *)&v7->Adapters[1].AdapterLuid.HighPart = v10[2];
          *(_OWORD *)&v7->Adapters[2].AdapterLuid.LowPart = v10[3];
          *(_OWORD *)&v7->Adapters[3].hAdapter = v10[4];
          *(_OWORD *)&v7->Adapters[3].bPresentMoveRegionsPreferred = v10[5];
          *(_OWORD *)&v7->Adapters[4].NumOfSources = v10[6];
          v7 = (struct _D3DKMT_ENUMADAPTERS *)((char *)v7 + 128);
          *(_OWORD *)&v7[-1].Adapters[15].AdapterLuid.LowPart = v10[7];
          v10 += 8;
          --v11;
        }
        while ( v11 );
        *(_OWORD *)&v7->NumAdapters = *v10;
        *(_OWORD *)&v7->Adapters[0].NumOfSources = v10[1];
        *(_OWORD *)&v7->Adapters[1].AdapterLuid.HighPart = v10[2];
        *(_OWORD *)&v7->Adapters[2].AdapterLuid.LowPart = v10[3];
        v7->Adapters[3].hAdapter = *((_DWORD *)v10 + 16);
      }
      else
      {
        memmove(v7, Src, 0x144uLL);
      }
    }
    return (unsigned int)v8;
  }
  else
  {
    v13 = WdLogNewEntry5_WdError(0LL);
    *(_QWORD *)(v13 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v13);
    return 3221225485LL;
  }
}
