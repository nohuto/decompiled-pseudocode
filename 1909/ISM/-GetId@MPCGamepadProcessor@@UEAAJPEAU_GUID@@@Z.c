/*
 * XREFs of ?GetId@MPCGamepadProcessor@@UEAAJPEAU_GUID@@@Z @ 0x18000F960
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall MPCGamepadProcessor::GetId(MPCGamepadProcessor *this, struct _GUID *a2)
{
  __int64 result; // rax

  result = 0LL;
  *a2 = (struct _GUID)PROCESSORID_MPCGamepad;
  return result;
}
