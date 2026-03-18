/*
 * XREFs of ?ResetCachedInteractionOutput@CInteractionContextWrapper@@AEAAX_N@Z @ 0x180089550
 * Callers:
 *     ??0CInteractionContextWrapper@@QEAA@XZ @ 0x180089448 (--0CInteractionContextWrapper@@QEAA@XZ.c)
 *     ?ProcessInput@CInteractionContextWrapper@@UEAAJAEBUtagPOINTER_INFO@@AEBVCMILMatrix@@I@Z @ 0x1801F4360 (-ProcessInput@CInteractionContextWrapper@@UEAAJAEBUtagPOINTER_INFO@@AEBVCMILMatrix@@I@Z.c)
 *     ?ResetOutput@CInteractionContextWrapper@@UEAAXXZ @ 0x1801F49B0 (-ResetOutput@CInteractionContextWrapper@@UEAAXXZ.c)
 * Callees:
 *     _anonymous_namespace_::ResetInteractionOutput @ 0x180089580 (_anonymous_namespace_--ResetInteractionOutput.c)
 */

void __fastcall CInteractionContextWrapper::ResetCachedInteractionOutput(CInteractionContextWrapper *this, __int64 a2)
{
  __int64 v2; // r8
  __int64 v3; // rdx
  __int64 v4; // r8
  __int64 v5; // rdx

  anonymous_namespace_::ResetInteractionOutput((char *)this + 32, a2, this);
  anonymous_namespace_::ResetInteractionOutput(v2 + 96, v3, v2);
  anonymous_namespace_::ResetInteractionOutput(v4 + 160, v5, v4);
}
