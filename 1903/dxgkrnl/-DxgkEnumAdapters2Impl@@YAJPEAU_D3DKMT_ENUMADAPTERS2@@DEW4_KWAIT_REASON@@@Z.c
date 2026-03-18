/*
 * XREFs of ?DxgkEnumAdapters2Impl@@YAJPEAU_D3DKMT_ENUMADAPTERS2@@DEW4_KWAIT_REASON@@@Z @ 0x1C00CD8B0
 * Callers:
 *     DxgkEnumAdapters2 @ 0x1C00CD890 (DxgkEnumAdapters2.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000C320 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     __security_check_cookie @ 0x1C00232F0 (__security_check_cookie.c)
 *     memmove @ 0x1C0024FC0 (memmove.c)
 *     ?GetMaximumAdapterCount@DXGGLOBAL@@QEAAKXZ @ 0x1C00CE5E0 (-GetMaximumAdapterCount@DXGGLOBAL@@QEAAKXZ.c)
 *     ?DxgkEnumAdaptersInternal@@YAJPEAUENUMADAPTERSINTERNAL@@DEW4_KWAIT_REASON@@@Z @ 0x1C00CE604 (-DxgkEnumAdaptersInternal@@YAJPEAUENUMADAPTERSINTERNAL@@DEW4_KWAIT_REASON@@@Z.c)
 *     ?AllocateElements@?$PagedPoolZeroedArray@U_D3DKMT_ADAPTERINFO@@$07@@QEAAPEAU_D3DKMT_ADAPTERINFO@@I@Z @ 0x1C00CE900 (-AllocateElements@-$PagedPoolZeroedArray@U_D3DKMT_ADAPTERINFO@@$07@@QEAAPEAU_D3DKMT_ADAPTERINFO@.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01008A0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?DestroyHandle@DXGADAPTER@@SAJPEAVDXGPROCESS@@I@Z @ 0x1C01305C0 (-DestroyHandle@DXGADAPTER@@SAJPEAVDXGPROCESS@@I@Z.c)
 */

__int64 __fastcall DxgkEnumAdapters2Impl(__m128i *a1, __int64 a2, __int64 a3, enum _KWAIT_REASON a4)
{
  unsigned __int8 v5; // bl
  char v6; // r15
  __m128i *v7; // rdi
  char *v8; // rsi
  int v9; // ebx
  DXGGLOBAL *Global; // rax
  unsigned int MaximumAdapterCount; // eax
  size_t v12; // r8
  void *v13; // rdx
  PVOID v14; // rcx
  bool v15; // zf
  DXGGLOBAL *v17; // rax
  unsigned int v18; // eax
  __int64 v19; // rdx
  __int64 v20; // rcx
  unsigned int v21; // r14d
  __int64 v22; // rdx
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // rcx
  unsigned int v29; // eax
  __int64 v30; // rax
  DXGGLOBAL *v31; // rax
  __int64 v32; // rax
  __int64 v33; // rax
  __int64 v34; // rax
  __int64 v35; // rax
  struct DXGPROCESS *i; // rdi
  int v37; // ecx
  __int64 v38; // [rsp+28h] [rbp-110h] BYREF
  __int64 v39; // [rsp+30h] [rbp-108h]
  void *Src; // [rsp+38h] [rbp-100h]
  __m128i v41; // [rsp+40h] [rbp-F8h] BYREF
  PVOID P; // [rsp+50h] [rbp-E8h] BYREF
  _BYTE v43[160]; // [rsp+58h] [rbp-E0h] BYREF
  int v44; // [rsp+F8h] [rbp-40h]

  v5 = a3;
  v6 = a2;
  v7 = a1;
  if ( !a1 )
  {
    v30 = WdLogNewEntry5_WdError(0LL, a2, a3);
    v9 = -1073741811;
    *(_QWORD *)(v30 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v30);
    return (unsigned int)v9;
  }
  v38 = 0LL;
  v39 = 0LL;
  Src = 0LL;
  P = 0LL;
  v44 = 0;
  if ( (_BYTE)a2 == 1 )
  {
    if ( ++a1 < v7 || (unsigned __int64)a1 > MmUserProbeAddress )
    {
      a1 = (__m128i *)MmUserProbeAddress;
      *(_BYTE *)MmUserProbeAddress = 0;
    }
    v41 = *v7;
  }
  else
  {
    v41 = *a1;
  }
  v8 = (char *)_mm_srli_si128(_mm_loadu_si128(&v41), 8).m128i_u64[0];
  if ( !v8 )
  {
    v9 = 0;
    Global = DXGGLOBAL::GetGlobal((__int64)a1, a2);
    MaximumAdapterCount = DXGGLOBAL::GetMaximumAdapterCount(Global);
LABEL_9:
    v41.m128i_i32[0] = MaximumAdapterCount;
    goto LABEL_10;
  }
  v17 = DXGGLOBAL::GetGlobal((__int64)a1, a2);
  v18 = DXGGLOBAL::GetMaximumAdapterCount(v17);
  v21 = v41.m128i_i32[0];
  if ( v18 < v41.m128i_i32[0] )
  {
    v31 = DXGGLOBAL::GetGlobal(v20, v19);
    v21 = DXGGLOBAL::GetMaximumAdapterCount(v31);
    v41.m128i_i32[0] = v21;
  }
  v22 = 1LL;
  if ( v21 > 1 )
    v22 = v21;
  PagedPoolZeroedArray<_D3DKMT_ADAPTERINFO,8>::AllocateElements(&P, v22);
  if ( !P )
  {
    v32 = WdLogNewEntry5_WdError(v24, v23, v25);
    v9 = -1073741801;
    *(_QWORD *)(v32 + 24) = -1073741801LL;
    WdLogEvent5_WdError(v32);
    v14 = P;
    v15 = P == v43;
    goto LABEL_23;
  }
  Src = P;
  HIDWORD(v38) = v21;
  v9 = DxgkEnumAdaptersInternal((struct ENUMADAPTERSINTERNAL *)&v38, v6, v5, a4);
  if ( (unsigned int)v38 > v21 )
  {
    v33 = WdLogNewEntry5_WdAssertion(v27, v26);
    *(_QWORD *)(v33 + 24) = 1191LL;
    WdLogEvent5_WdAssertion(v33);
  }
  v28 = HIDWORD(v38);
  if ( (unsigned int)v38 > HIDWORD(v38) )
  {
    v34 = WdLogNewEntry5_WdAssertion(HIDWORD(v38), v26);
    *(_QWORD *)(v34 + 24) = 1192LL;
    WdLogEvent5_WdAssertion(v34);
  }
  v29 = v39;
  if ( (unsigned int)v38 > (unsigned int)v39 )
  {
    v35 = WdLogNewEntry5_WdAssertion(v28, v26);
    *(_QWORD *)(v35 + 24) = 1193LL;
    WdLogEvent5_WdAssertion(v35);
    v29 = v39;
  }
  if ( v9 < 0 )
    goto LABEL_47;
  if ( HIDWORD(v38) >= v29 )
  {
    MaximumAdapterCount = v38;
    goto LABEL_9;
  }
  v9 = -1073741789;
  v41.m128i_i32[0] = 0;
LABEL_10:
  if ( v9 >= 0 )
  {
    if ( v6 == 1 )
    {
      if ( (unsigned __int64)&v7[1] > MmUserProbeAddress || &v7[1] <= v7 )
        *(_BYTE *)MmUserProbeAddress = 0;
      *v7 = v41;
    }
    else
    {
      memmove(v7, &v41, 0x10uLL);
    }
    if ( v8 )
    {
      if ( v6 == 1 )
      {
        v12 = 20LL * (unsigned int)v38;
        v13 = Src;
        if ( (unsigned __int64)&v8[v12] > MmUserProbeAddress || &v8[v12] <= v8 )
          *(_BYTE *)MmUserProbeAddress = 0;
        memmove(v8, v13, v12);
      }
      else
      {
        memmove(v8, Src, 20LL * (unsigned int)v38);
      }
    }
    goto LABEL_22;
  }
LABEL_47:
  for ( i = DXGPROCESS::GetCurrent(); ; DXGADAPTER::DestroyHandle(i, *((_DWORD *)Src + 5 * (unsigned int)(v37 - 1))) )
  {
    v37 = v38;
    if ( !(_DWORD)v38 )
      break;
    LODWORD(v38) = v38 - 1;
  }
LABEL_22:
  v14 = P;
  v15 = P == v43;
LABEL_23:
  if ( !v15 && v14 )
    ExFreePoolWithTag(v14, 0);
  return (unsigned int)v9;
}
