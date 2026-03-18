/*
 * XREFs of ??RCCD_BTL_CONNECTIVITY_COLLECTOR@@QEAAJXZ @ 0x1C00DA5EC
 * Callers:
 *     ?RetrieveConnectivitySetId@CCD_BTL@@UEAAJPEAVCCD_SET_STRING_ID@@@Z @ 0x1C00DA5C0 (-RetrieveConnectivitySetId@CCD_BTL@@UEAAJPEAVCCD_SET_STRING_ID@@@Z.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000C510 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??_V@YAXPEAX@Z @ 0x1C000C530 (--_V@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C000C5A0 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ??0CCD_SET_STRING_ID@@QEAA@AEBU_UNICODE_STRING@@@Z @ 0x1C00DA910 (--0CCD_SET_STRING_ID@@QEAA@AEBU_UNICODE_STRING@@@Z.c)
 *     ??4CCD_SET_STRING_ID@@QEAAAEAV0@AEBV0@@Z @ 0x1C00DAB40 (--4CCD_SET_STRING_ID@@QEAAAEAV0@AEBV0@@Z.c)
 *     ?_Cleanup@CCD_SET_STRING_ID@@AEAAXXZ @ 0x1C00DDF10 (-_Cleanup@CCD_SET_STRING_ID@@AEAAXXZ.c)
 *     ?IterateAdaptersWithCallback@DXGGLOBAL@@QEAAJP6AJPEAVDXGADAPTER@@PEAX@Z1W4_ITERATE_ADAPTER_FLAGS@@@Z @ 0x1C010287C (-IterateAdaptersWithCallback@DXGGLOBAL@@QEAAJP6AJPEAVDXGADAPTER@@PEAX@Z1W4_ITERATE_ADAPTER_FLAGS.c)
 */

__int64 __fastcall CCD_BTL_CONNECTIVITY_COLLECTOR::operator()(_DWORD **a1)
{
  unsigned __int64 v2; // rsi
  SIZE_T v3; // rax
  _DWORD *v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  struct DXGGLOBAL *Global; // rax
  int v10; // eax
  __int64 v11; // rcx
  unsigned int v12; // edi
  const struct _UNICODE_STRING *v13; // rdx
  __int64 result; // rax
  __int64 v15; // rax
  _BYTE v16[64]; // [rsp+20h] [rbp-48h] BYREF

  v2 = 0LL;
  do
  {
    v2 += 2048LL;
    operator delete[](a1[2]);
    if ( v2 >= 0x4000 )
      return 3221225473LL;
    v3 = 2 * (v2 >> 1);
    if ( !is_mul_ok(v2 >> 1, 2uLL) )
      v3 = -1LL;
    v4 = operator new[](v3, 0x63644356u, PagedPool);
    a1[2] = v4;
    if ( !v4 )
    {
      v15 = WdLogNewEntry5_WdLowResource(v6, v5, v7, v8);
      *(_QWORD *)(v15 + 24) = v2;
      *(_QWORD *)(v15 + 32) = a1;
      WdLogEvent5_WdLowResource(v15);
      return 3221225495LL;
    }
    *((_WORD *)a1 + 4) = 0;
    *((_WORD *)a1 + 5) = v2;
    Global = DXGGLOBAL::GetGlobal(v6, v5);
    v10 = DXGGLOBAL::IterateAdaptersWithCallback(
            Global,
            BtlPreAcquireSharedAccess__CCD_BTL_CONNECTIVITY_COLLECTOR::_AppendConnectedSetAdaptersCallback_0_1_,
            a1,
            4LL);
    v12 = v10;
  }
  while ( v10 == -1073741789 );
  if ( v10 >= 0 )
  {
    v13 = (const struct _UNICODE_STRING *)(a1 + 1);
    if ( *((_WORD *)a1 + 4) )
    {
      CCD_SET_STRING_ID::CCD_SET_STRING_ID((CCD_SET_STRING_ID *)v16, v13);
      CCD_SET_STRING_ID::operator=((CCD_SET_STRING_ID *)*a1);
      CCD_SET_STRING_ID::_Cleanup((CCD_SET_STRING_ID *)v16);
      v12 = **a1;
    }
    else
    {
      v12 = -1073741823;
      *(_QWORD *)(WdLogNewEntry5_WdTrace(v11, v13) + 24) = a1;
    }
  }
  operator delete[](a1[2]);
  result = v12;
  a1[2] = 0LL;
  return result;
}
