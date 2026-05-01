/*
 * XREFs of ?GetID@CVirtualDesktop@@UEAAJPEAU_GUID@@@Z @ 0x180083300
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CVirtualDesktop::GetID(struct _GUID *this, struct _GUID *a2)
{
  __int64 result; // rax

  result = 0LL;
  *a2 = this[5];
  return result;
}
