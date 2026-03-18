/*
 * XREFs of ?Initialize@RIMDeadzone@@QEAAJXZ @ 0x1C012DAE0
 * Callers:
 *     RIMInitializeDeadzone @ 0x1C01182A8 (RIMInitializeDeadzone.c)
 * Callees:
 *     ?_ClearDeadzoneAreas@RIMDeadzone@@AEAAXXZ @ 0x1C012DFBC (-_ClearDeadzoneAreas@RIMDeadzone@@AEAAXXZ.c)
 *     ?_InitializeLeftHandedDeadzone@RIMDeadzone@@AEAAJXZ @ 0x1C012E134 (-_InitializeLeftHandedDeadzone@RIMDeadzone@@AEAAJXZ.c)
 *     ?_InitializeRightHandedDeadzone@RIMDeadzone@@AEAAJXZ @ 0x1C012E1E0 (-_InitializeRightHandedDeadzone@RIMDeadzone@@AEAAJXZ.c)
 *     ApiSetGetUserHandedness @ 0x1C016417C (ApiSetGetUserHandedness.c)
 */

__int64 __fastcall RIMDeadzone::Initialize(RIMDeadzone *this)
{
  int UserHandedness; // eax
  int v3; // edi

  *((_DWORD *)this + 2) = 1;
  UserHandedness = ApiSetGetUserHandedness();
  ++*((_DWORD *)this + 1);
  v3 = UserHandedness;
  if ( UserHandedness != *(_DWORD *)this )
    RIMDeadzone::_ClearDeadzoneAreas(this);
  *((_DWORD *)this + 10) = 1;
  if ( v3 == 1 )
    return RIMDeadzone::_InitializeRightHandedDeadzone(this);
  else
    return RIMDeadzone::_InitializeLeftHandedDeadzone(this);
}
