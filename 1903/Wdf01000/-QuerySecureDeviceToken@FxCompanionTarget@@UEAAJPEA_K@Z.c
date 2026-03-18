/*
 * XREFs of ?QuerySecureDeviceToken@FxCompanionTarget@@UEAAJPEA_K@Z @ 0x1C0044B80
 * Callers:
 *     <none>
 * Callees:
 *     WPP_IFR_SF_q @ 0x1C0010E28 (WPP_IFR_SF_q.c)
 *     memset @ 0x1C001B300 (memset.c)
 *     ?QueryForInterface@FxDeviceBase@@QEAAJPEBU_GUID@@PEAU_INTERFACE@@GGPEAXPEAU_DEVICE_OBJECT@@@Z @ 0x1C00510BC (-QueryForInterface@FxDeviceBase@@QEAAJPEBU_GUID@@PEAU_INTERFACE@@GGPEAXPEAU_DEVICE_OBJECT@@@Z.c)
 */

__int64 __fastcall FxCompanionTarget::QuerySecureDeviceToken(FxCompanionTarget *this, unsigned __int64 *SecureToken)
{
  _LIST_ENTRY *Flink; // r10
  int v5; // edi
  unsigned __int64 v6; // rax
  void *Context; // rcx
  _LIST_ENTRY *v8; // rcx
  const void *v9; // rdx
  bool v10; // zf
  _FX_DRIVER_GLOBALS *v11; // rcx
  const void *v13; // rcx
  _SDEV_IDENTIFIER_INTERFACE Interface; // [rsp+40h] [rbp-38h] BYREF

  memset(&Interface, 0, sizeof(Interface));
  *SecureToken = -1LL;
  Flink = this->m_ChildListHead.Flink;
  if ( LOWORD(Flink[40].Blink->Blink) == 4353 )
  {
    v5 = FxDeviceBase::QueryForInterface(
           (FxDeviceBase *)Flink,
           &GUID_SDEV_IDENTIFIER_INTERFACE,
           &Interface.InterfaceHeader,
           0x28u,
           1u,
           0LL,
           0LL);
    if ( v5 < 0 )
    {
      v8 = this->m_ChildListHead.Flink;
      v9 = (const void *)((unsigned __int64)v8 ^ 0xFFFFFFFFFFFFFFF8uLL);
      v10 = WORD1(v8->Blink) == 0;
      v11 = (_FX_DRIVER_GLOBALS *)v8[1].Flink;
      if ( v10 )
        v9 = 0LL;
      WPP_IFR_SF_q(v11, 2u, 0xCu, 0xDu, WPP_FxCompanionTarget_cpp_Traceguids, v9);
    }
    else
    {
      v6 = Interface.GetIdentifier(Interface.InterfaceHeader.Context);
      Context = Interface.InterfaceHeader.Context;
      *SecureToken = v6;
      Interface.InterfaceHeader.InterfaceDereference(Context);
    }
    return (unsigned int)v5;
  }
  else
  {
    v13 = (const void *)((unsigned __int64)Flink ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !WORD1(Flink->Blink) )
      v13 = 0LL;
    WPP_IFR_SF_q((_FX_DRIVER_GLOBALS *)Flink[1].Flink, 2u, 0xCu, 0xCu, WPP_FxCompanionTarget_cpp_Traceguids, v13);
    return 3221225659LL;
  }
}
