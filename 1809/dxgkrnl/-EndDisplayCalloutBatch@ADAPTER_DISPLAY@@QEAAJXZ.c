/*
 * XREFs of ?EndDisplayCalloutBatch@ADAPTER_DISPLAY@@QEAAJXZ @ 0x1C01C2938
 * Callers:
 *     DxgkEndDisplayCalloutBatch @ 0x1C01C5768 (DxgkEndDisplayCalloutBatch.c)
 * Callees:
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000DF84 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000E054 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C000E790 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0011DE0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0011E50 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?IsAddapterSessionized@DXGADAPTER@@QEAA_NPEAU_LUID@@PEAIPEA_K@Z @ 0x1C00205AC (-IsAddapterSessionized@DXGADAPTER@@QEAA_NPEAU_LUID@@PEAIPEA_K@Z.c)
 *     ?SubmitBatch@DXGDISPLAYCALLOUTQUEUE@@QEAAJPEAU_LIST_ENTRY@@_K@Z @ 0x1C02123E4 (-SubmitBatch@DXGDISPLAYCALLOUTQUEUE@@QEAAJPEAU_LIST_ENTRY@@_K@Z.c)
 */

__int64 __fastcall ADAPTER_DISPLAY::EndDisplayCalloutBatch(ADAPTER_DISPLAY *this)
{
  unsigned int v2; // esi
  __int64 v3; // rcx
  __int64 v4; // rax
  struct _LUID *v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rax
  __int64 v8; // rcx
  struct DXGGLOBAL *Global; // rax
  _BYTE v11[24]; // [rsp+20h] [rbp-18h] BYREF
  unsigned __int64 v12; // [rsp+40h] [rbp+8h] BYREF

  v2 = 0;
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(*((DXGADAPTER **)this + 2)) )
  {
    v4 = WdLogNewEntry5_WdAssertion(v3);
    *(_QWORD *)(v4 + 24) = 8165LL;
    WdLogEvent5_WdAssertion(v4);
  }
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v11, (ADAPTER_DISPLAY *)((char *)this + 336), 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v11);
  if ( !*((_BYTE *)this + 376) )
  {
    v7 = WdLogNewEntry5_WdAssertion(v6);
    *(_QWORD *)(v7 + 24) = 8170LL;
    WdLogEvent5_WdAssertion(v7);
  }
  *((_BYTE *)this + 376) = 0;
  if ( *((ADAPTER_DISPLAY **)this + 48) != (ADAPTER_DISPLAY *)((char *)this + 384) )
  {
    DXGADAPTER::IsAddapterSessionized(*((DXGADAPTER **)this + 2), v5, 0LL, &v12);
    Global = DXGGLOBAL::GetGlobal(v8);
    v2 = DXGDISPLAYCALLOUTQUEUE::SubmitBatch(
           (struct DXGGLOBAL *)((char *)Global + 1448),
           (struct _LIST_ENTRY *)this + 24,
           v12);
  }
  if ( v11[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v11);
  return v2;
}
