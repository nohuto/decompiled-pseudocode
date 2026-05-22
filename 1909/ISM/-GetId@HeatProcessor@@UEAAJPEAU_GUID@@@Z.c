/*
 * XREFs of ?GetId@HeatProcessor@@UEAAJPEAU_GUID@@@Z @ 0x18000F820
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall HeatProcessor::GetId(HeatProcessor *this, struct _GUID *a2)
{
  __int64 result; // rax

  result = 0LL;
  *a2 = (struct _GUID)PROCESSORID_Heat;
  return result;
}
