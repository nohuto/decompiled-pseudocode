/*
 * XREFs of ?GetId@MPCClickerProcessor@@UEAAJPEAU_GUID@@@Z @ 0x18000FB00
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall MPCClickerProcessor::GetId(MPCClickerProcessor *this, struct _GUID *a2)
{
  __int64 result; // rax

  result = 0LL;
  *a2 = (struct _GUID)PROCESSORID_MPCClicker;
  return result;
}
