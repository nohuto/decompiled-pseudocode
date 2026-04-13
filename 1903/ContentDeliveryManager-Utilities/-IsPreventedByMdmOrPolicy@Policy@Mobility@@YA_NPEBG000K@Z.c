/*
 * XREFs of ?IsPreventedByMdmOrPolicy@Policy@Mobility@@YA_NPEBG000K@Z @ 0x18000AF74
 * Callers:
 *     ?isTaskbarIconCreationBlockedByPolicy@Policy@Mobility@@YA_NXZ @ 0x18000B048 (-isTaskbarIconCreationBlockedByPolicy@Policy@Mobility@@YA_NXZ.c)
 * Callees:
 *     <none>
 */

bool __fastcall Mobility::Policy::IsPreventedByMdmOrPolicy(
        Mobility::Policy *this,
        const unsigned __int16 *a2,
        const unsigned __int16 *a3,
        const unsigned __int16 *a4,
        const unsigned __int16 *a5)
{
  DWORD pcbData; // [rsp+40h] [rbp-18h] BYREF
  int pvData; // [rsp+44h] [rbp-14h] BYREF
  _DWORD v12[4]; // [rsp+48h] [rbp-10h] BYREF

  if ( !(unsigned int)PolicyManager_IsPolicySetByMobileDeviceManager(this, a2, v12) )
  {
    if ( v12[0] )
    {
      pcbData = 0;
      if ( !(unsigned int)PolicyManager_GetPolicyInt(this, a2, &pcbData) )
        return (int)pcbData <= 0;
    }
    else
    {
      pvData = 0;
      pcbData = 4;
      if ( !RegGetValueW(HKEY_LOCAL_MACHINE, a3, a4, 0x10u, 0LL, &pvData, &pcbData) && pcbData == 4 )
        return pvData == (_DWORD)a5;
    }
  }
  return 0;
}
