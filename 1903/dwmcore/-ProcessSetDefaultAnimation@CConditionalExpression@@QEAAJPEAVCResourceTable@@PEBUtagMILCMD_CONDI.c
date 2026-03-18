/*
 * XREFs of ?ProcessSetDefaultAnimation@CConditionalExpression@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_CONDITIONALEXPRESSION_SETDEFAULTANIMATION@@@Z @ 0x1801D4D54
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x18009D840 (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VID2DBitmap@@@WRL@Microsoft@@IEAAKXZ @ 0x18001F5BC (-InternalRelease@-$ComPtr@VID2DBitmap@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIMessageCallSendHost@@@WRL@Microsoft@@IEBAXXZ @ 0x1800223B8 (-InternalAddRef@-$ComPtr@UIMessageCallSendHost@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?GetResourceWithoutType@CResourceTable@@QEBAPEAVCResource@@I@Z @ 0x180083C40 (-GetResourceWithoutType@CResourceTable@@QEBAPEAVCResource@@I@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CConditionalExpression::ProcessSetDefaultAnimation(
        CConditionalExpression *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_CONDITIONALEXPRESSION_SETDEFAULTANIMATION *a3)
{
  struct CResource *ResourceWithoutType; // rax
  __int64 v5; // rbx
  __int64 v6; // rcx
  unsigned int v7; // ebx
  __int64 v9; // [rsp+50h] [rbp+18h] BYREF

  ResourceWithoutType = CResourceTable::GetResourceWithoutType(a2, *((_DWORD *)a3 + 2));
  v5 = (__int64)ResourceWithoutType;
  if ( !ResourceWithoutType
    || (*(unsigned __int8 (__fastcall **)(struct CResource *, __int64))(*(_QWORD *)ResourceWithoutType + 48LL))(
         ResourceWithoutType,
         55LL) )
  {
    v9 = v5;
    Microsoft::WRL::ComPtr<IMessageCallSendHost>::InternalAddRef(&v9);
    v9 = *((_QWORD *)this + 43);
    *((_QWORD *)this + 43) = v5;
    Microsoft::WRL::ComPtr<ID2DBitmap>::InternalRelease(&v9);
    return 0;
  }
  else
  {
    v7 = -2003303421;
    MilInstrumentationCheckHR_MaybeFailFast(v6, 0LL, 0, 0x88980403, 0x80u, 0LL);
  }
  return v7;
}
