/*
 * XREFs of ?EndDisplayCalloutBatch@ADAPTER_DISPLAY@@QEAAJXZ @ 0x1C01576D4
 * Callers:
 *     DxgkEndDisplayCalloutBatch @ 0x1C01576B8 (DxgkEndDisplayCalloutBatch.c)
 * Callees:
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0006FF4 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00070E4 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0007560 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0007DEC (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000C320 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?IsAddapterSessionized@DXGADAPTER@@QEBA_NPEAU_LUID@@PEAIPEA_K@Z @ 0x1C000E028 (-IsAddapterSessionized@DXGADAPTER@@QEBA_NPEAU_LUID@@PEAIPEA_K@Z.c)
 *     ?SubmitBatch@DXGDISPLAYCALLOUTQUEUE@@QEAAJPEAU_LIST_ENTRY@@_K@Z @ 0x1C0246040 (-SubmitBatch@DXGDISPLAYCALLOUTQUEUE@@QEAAJPEAU_LIST_ENTRY@@_K@Z.c)
 */

__int64 __fastcall ADAPTER_DISPLAY::EndDisplayCalloutBatch(ADAPTER_DISPLAY *this)
{
  unsigned int v2; // esi
  __int64 v3; // rdx
  __int64 v4; // rcx
  struct _LUID *v5; // rdx
  __int64 v6; // rcx
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  struct DXGGLOBAL *Global; // rax
  _BYTE v13[24]; // [rsp+20h] [rbp-18h] BYREF
  unsigned __int64 v14; // [rsp+40h] [rbp+8h] BYREF

  v2 = 0;
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(*((DXGADAPTER **)this + 2)) )
  {
    v8 = WdLogNewEntry5_WdAssertion(v4, v3);
    *(_QWORD *)(v8 + 24) = 8615LL;
    WdLogEvent5_WdAssertion(v8);
  }
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v13, (ADAPTER_DISPLAY *)((char *)this + 440), 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v13);
  if ( !*((_BYTE *)this + 480) )
  {
    v9 = WdLogNewEntry5_WdAssertion(v6, v5);
    *(_QWORD *)(v9 + 24) = 8620LL;
    WdLogEvent5_WdAssertion(v9);
  }
  *((_BYTE *)this + 480) = 0;
  if ( *((ADAPTER_DISPLAY **)this + 61) != (ADAPTER_DISPLAY *)((char *)this + 488) )
  {
    DXGADAPTER::IsAddapterSessionized(*((DXGADAPTER **)this + 2), v5, 0LL, &v14);
    Global = DXGGLOBAL::GetGlobal(v11, v10);
    v2 = DXGDISPLAYCALLOUTQUEUE::SubmitBatch(
           (struct DXGGLOBAL *)((char *)Global + 1416),
           (struct _LIST_ENTRY *)((char *)this + 488),
           v14);
  }
  if ( v13[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v13);
  return v2;
}
