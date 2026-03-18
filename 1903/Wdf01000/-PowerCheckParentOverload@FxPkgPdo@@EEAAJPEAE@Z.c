/*
 * XREFs of ?PowerCheckParentOverload@FxPkgPdo@@EEAAJPEAE@Z @ 0x1C0017DC0
 * Callers:
 *     <none>
 * Callees:
 *     ?PowerPolicyCanChildPowerUp@FxPkgPnp@@QEAAJPEAE@Z @ 0x1C0017E10 (-PowerPolicyCanChildPowerUp@FxPkgPnp@@QEAAJPEAE@Z.c)
 */

int __fastcall FxPkgPdo::PowerCheckParentOverload(FxPkgPdo *this, bool *WaitForParentOn)
{
  int result; // eax
  unsigned __int8 parentOn; // [rsp+30h] [rbp+8h] BYREF

  if ( this->m_HasPowerDependencyOnParent )
  {
    result = FxPkgPnp::PowerPolicyCanChildPowerUp(
               *(FxPkgPnp **)(*(_QWORD *)&this->m_DeviceBase[1].m_ObjectFlags + 648LL),
               &parentOn);
    if ( result >= 0 )
      *WaitForParentOn = parentOn == 0;
  }
  else
  {
    *WaitForParentOn = 0;
    return 0;
  }
  return result;
}
