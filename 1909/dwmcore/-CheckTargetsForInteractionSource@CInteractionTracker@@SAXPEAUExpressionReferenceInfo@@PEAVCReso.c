/*
 * XREFs of ?CheckTargetsForInteractionSource@CInteractionTracker@@SAXPEAUExpressionReferenceInfo@@PEAVCResource@@1@Z @ 0x1801D8460
 * Callers:
 *     ?QueryObjectPropertyValue@CExpressionValueStack@@AEAAJPEAVCExpression@@PEAUExpressionReferenceNode@@_KPEAVCExpressionValue@@PEAVSubchannelMaskInfo@@@Z @ 0x180202560 (-QueryObjectPropertyValue@CExpressionValueStack@@AEAAJPEAVCExpression@@PEAUExpressionReferenceNo.c)
 * Callees:
 *     ??1?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18002DE70 (--1-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?GetInteractionInternal@CVisual@@QEBAPEAVCInteraction@@XZ @ 0x18007897C (-GetInteractionInternal@CVisual@@QEBAPEAVCInteraction@@XZ.c)
 *     TraceLoggingProviderEnabled @ 0x1800A9B1C (TraceLoggingProviderEnabled.c)
 *     _TlgWrite @ 0x1800B3880 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x1800B539C (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x1800E7E60 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 *     ??0?$com_ptr_t@UIDXGIAdapter@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAUIDXGIAdapter@@@Z @ 0x18015A4B4 (--0-$com_ptr_t@UIDXGIAdapter@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAUIDXGIAdapter@@@Z.c)
 *     ?TryGetActiveChainingHelper@InteractionSourceManager@@QEBAPEAVCChainingHelper@@XZ @ 0x18021E1B4 (-TryGetActiveChainingHelper@InteractionSourceManager@@QEBAPEAVCChainingHelper@@XZ.c)
 */

void __fastcall CInteractionTracker::CheckTargetsForInteractionSource(
        struct ExpressionReferenceInfo *a1,
        struct CResource *a2,
        struct CResource *a3)
{
  CVisual *v6; // rbx
  struct CInteraction *InteractionInternal; // rax
  struct CInteraction *v8; // r11
  __int64 v9; // r11
  CVisual *v10; // [rsp+30h] [rbp-59h] BYREF
  CVisual *v11; // [rsp+38h] [rbp-51h] BYREF
  struct CResource *v12; // [rsp+40h] [rbp-49h] BYREF
  __int64 v13; // [rsp+48h] [rbp-41h] BYREF
  struct CResource *v14; // [rsp+50h] [rbp-39h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+60h] [rbp-29h] BYREF
  struct ExpressionReferenceInfo *v16; // [rsp+80h] [rbp-9h]
  int v17; // [rsp+88h] [rbp-1h]
  int v18; // [rsp+8Ch] [rbp+3h]
  CVisual **v19; // [rsp+90h] [rbp+7h]
  int v20; // [rsp+98h] [rbp+Fh]
  int v21; // [rsp+9Ch] [rbp+13h]
  struct CResource **v22; // [rsp+A0h] [rbp+17h]
  int v23; // [rsp+A8h] [rbp+1Fh]
  int v24; // [rsp+ACh] [rbp+23h]
  __int64 *v25; // [rsp+B0h] [rbp+27h]
  int v26; // [rsp+B8h] [rbp+2Fh]
  int v27; // [rsp+BCh] [rbp+33h]

  if ( TraceLoggingProviderEnabled((TraceLoggingHProvider)&dword_180337240, 4u, 2uLL)
    && a2
    && a3
    && (unsigned int)(*(_DWORD *)a1 - 1) <= 1
    && (*(unsigned __int8 (__fastcall **)(struct CResource *, __int64))(*(_QWORD *)a2 + 48LL))(a2, 189LL)
    && (*(unsigned __int8 (__fastcall **)(struct CResource *, __int64))(*(_QWORD *)a3 + 48LL))(a3, 88LL) )
  {
    wil::com_ptr_t<IDXGIAdapter,wil::err_returncode_policy>::com_ptr_t<IDXGIAdapter,wil::err_returncode_policy>(
      &v10,
      (__int64)a2);
    v14 = a3;
    (*(void (__fastcall **)(struct CResource *))(*(_QWORD *)a3 + 8LL))(a3);
    v6 = v10;
    *((_BYTE *)v10 + 272) |= 4u;
    if ( InteractionSourceManager::TryGetActiveChainingHelper((struct CResource *)((char *)a3 + 192)) )
    {
      if ( CVisual::GetInteractionInternal(v6) )
      {
        InteractionInternal = CVisual::GetInteractionInternal(v6);
        if ( InteractionInternal == v8 && dword_180337240 > 4u )
        {
          if ( TlgKeywordOn((TraceLoggingHProvider)&dword_180337240, 2uLL) )
          {
            v18 = 0;
            v21 = 0;
            v24 = 0;
            v27 = 0;
            v19 = &v11;
            v22 = &v12;
            v25 = &v13;
            v16 = a1;
            v17 = 4;
            v11 = v6;
            v20 = 8;
            v12 = a3;
            v23 = 8;
            v13 = v9;
            v26 = 8;
            TlgWrite((TraceLoggingHProvider)&dword_180337240, &unk_1802DA5C3, 0LL, 0LL, 6u, &pData);
          }
        }
      }
    }
    wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64 *)&v14);
    wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64 *)&v10);
  }
}
