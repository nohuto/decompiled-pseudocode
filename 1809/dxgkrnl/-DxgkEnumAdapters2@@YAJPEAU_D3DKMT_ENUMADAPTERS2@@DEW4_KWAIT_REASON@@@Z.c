/*
 * XREFs of ?DxgkEnumAdapters2@@YAJPEAU_D3DKMT_ENUMADAPTERS2@@DEW4_KWAIT_REASON@@@Z @ 0x1C00CD6C0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0011DE0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     __security_check_cookie @ 0x1C0020760 (__security_check_cookie.c)
 *     memmove @ 0x1C0022E80 (memmove.c)
 *     ?GetMaximumAdapterCount@DXGGLOBAL@@QEAAKXZ @ 0x1C00CD9C0 (-GetMaximumAdapterCount@DXGGLOBAL@@QEAAKXZ.c)
 *     ?AllocateElements@?$PagedPoolZeroedArray@U_D3DKMT_ADAPTERINFO@@$07@@QEAAPEAU_D3DKMT_ADAPTERINFO@@I@Z @ 0x1C00CD9E4 (-AllocateElements@-$PagedPoolZeroedArray@U_D3DKMT_ADAPTERINFO@@$07@@QEAAPEAU_D3DKMT_ADAPTERINFO@.c)
 *     ?DxgkEnumAdaptersInternal@@YAJPEAUENUMADAPTERSINTERNAL@@DEW4_KWAIT_REASON@@@Z @ 0x1C00E1578 (-DxgkEnumAdaptersInternal@@YAJPEAUENUMADAPTERSINTERNAL@@DEW4_KWAIT_REASON@@@Z.c)
 *     ?DestroyHandle@DXGADAPTER@@SAJPEAVDXGPROCESS@@I@Z @ 0x1C00EE924 (-DestroyHandle@DXGADAPTER@@SAJPEAVDXGPROCESS@@I@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0102F10 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall DxgkEnumAdapters2(__m128i *a1, char a2, unsigned __int8 a3, enum _KWAIT_REASON a4)
{
  __m128i *v7; // rdi
  DXGGLOBAL *Global; // rax
  unsigned int MaximumAdapterCount; // eax
  __int64 v10; // rcx
  char *v11; // r14
  int v12; // ebx
  size_t v13; // r8
  void *v14; // rdx
  PVOID v15; // rcx
  bool v16; // zf
  unsigned int v18; // esi
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // rcx
  __int64 v22; // rcx
  unsigned int v23; // eax
  __int64 v24; // rax
  DXGGLOBAL *v25; // rax
  __int64 v26; // rax
  __int64 v27; // rax
  __int64 v28; // rax
  __int64 v29; // rax
  struct DXGPROCESS *i; // rdi
  int v31; // ecx
  __int64 v32; // [rsp+28h] [rbp-110h] BYREF
  __int64 v33; // [rsp+30h] [rbp-108h]
  void *Src; // [rsp+38h] [rbp-100h]
  __m128i v35; // [rsp+40h] [rbp-F8h] BYREF
  PVOID P; // [rsp+50h] [rbp-E8h] BYREF
  _BYTE v37[160]; // [rsp+58h] [rbp-E0h] BYREF
  int v38; // [rsp+F8h] [rbp-40h]

  v7 = a1;
  if ( !a1 )
  {
    v24 = WdLogNewEntry5_WdError(0LL);
    v12 = -1073741811;
    *(_QWORD *)(v24 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v24);
    return (unsigned int)v12;
  }
  v35 = 0uLL;
  v32 = 0LL;
  v33 = 0LL;
  Src = 0LL;
  P = 0LL;
  v38 = 0;
  if ( a2 == 1 )
  {
    if ( ++a1 < v7 || (unsigned __int64)a1 > MmUserProbeAddress )
    {
      a1 = (__m128i *)MmUserProbeAddress;
      *(_BYTE *)MmUserProbeAddress = 0;
    }
    v35 = *v7;
  }
  else
  {
    v35 = *a1;
  }
  Global = DXGGLOBAL::GetGlobal((__int64)a1);
  MaximumAdapterCount = DXGGLOBAL::GetMaximumAdapterCount(Global);
  v11 = (char *)_mm_srli_si128(_mm_loadu_si128(&v35), 8).m128i_u64[0];
  if ( !v11 )
  {
    v12 = 0;
LABEL_9:
    v35.m128i_i32[0] = MaximumAdapterCount;
    goto LABEL_10;
  }
  v18 = v35.m128i_i32[0];
  if ( MaximumAdapterCount < v35.m128i_i32[0] )
  {
    v25 = DXGGLOBAL::GetGlobal(v10);
    v18 = DXGGLOBAL::GetMaximumAdapterCount(v25);
    v35.m128i_i32[0] = v18;
  }
  v19 = 1LL;
  if ( v18 > 1 )
    v19 = v18;
  PagedPoolZeroedArray<_D3DKMT_ADAPTERINFO,8>::AllocateElements(&P, v19);
  if ( !P )
  {
    v26 = WdLogNewEntry5_WdError(v20);
    v12 = -1073741801;
    *(_QWORD *)(v26 + 24) = -1073741801LL;
    WdLogEvent5_WdError(v26);
    v15 = P;
    v16 = P == v37;
    goto LABEL_23;
  }
  Src = P;
  HIDWORD(v32) = v18;
  v12 = DxgkEnumAdaptersInternal((struct ENUMADAPTERSINTERNAL *)&v32, a2, a3, a4);
  if ( (unsigned int)v32 > v18 )
  {
    v27 = WdLogNewEntry5_WdAssertion(v21);
    *(_QWORD *)(v27 + 24) = 901LL;
    WdLogEvent5_WdAssertion(v27);
  }
  v22 = HIDWORD(v32);
  if ( (unsigned int)v32 > HIDWORD(v32) )
  {
    v28 = WdLogNewEntry5_WdAssertion(HIDWORD(v32));
    *(_QWORD *)(v28 + 24) = 902LL;
    WdLogEvent5_WdAssertion(v28);
  }
  v23 = v33;
  if ( (unsigned int)v32 > (unsigned int)v33 )
  {
    v29 = WdLogNewEntry5_WdAssertion(v22);
    *(_QWORD *)(v29 + 24) = 903LL;
    WdLogEvent5_WdAssertion(v29);
    v23 = v33;
  }
  if ( v12 < 0 )
    goto LABEL_47;
  if ( HIDWORD(v32) >= v23 )
  {
    MaximumAdapterCount = v32;
    goto LABEL_9;
  }
  v12 = -1073741789;
  v35.m128i_i32[0] = 0;
LABEL_10:
  if ( v12 >= 0 )
  {
    if ( a2 == 1 )
    {
      if ( (unsigned __int64)&v7[1] > MmUserProbeAddress || &v7[1] <= v7 )
        *(_BYTE *)MmUserProbeAddress = 0;
      *v7 = v35;
    }
    else
    {
      memmove(v7, &v35, 0x10uLL);
    }
    if ( v11 )
    {
      if ( a2 == 1 )
      {
        v13 = 20LL * (unsigned int)v32;
        v14 = Src;
        if ( (unsigned __int64)&v11[v13] > MmUserProbeAddress || &v11[v13] <= v11 )
          *(_BYTE *)MmUserProbeAddress = 0;
        memmove(v11, v14, v13);
      }
      else
      {
        memmove(v11, Src, 20LL * (unsigned int)v32);
      }
    }
    goto LABEL_22;
  }
LABEL_47:
  for ( i = DXGPROCESS::GetCurrent(); ; DXGADAPTER::DestroyHandle(i, *((_DWORD *)Src + 5 * (unsigned int)(v31 - 1))) )
  {
    v31 = v32;
    if ( !(_DWORD)v32 )
      break;
    LODWORD(v32) = v32 - 1;
  }
LABEL_22:
  v15 = P;
  v16 = P == v37;
LABEL_23:
  if ( !v16 && v15 )
    ExFreePoolWithTag(v15, 0);
  return (unsigned int)v12;
}
