/*
 * XREFs of HvlHalGetVpIndexFromApicId @ 0x140287F70
 * Callers:
 *     <none>
 * Callees:
 *     HvlpGetVpIndexFromApicId @ 0x140285D74 (HvlpGetVpIndexFromApicId.c)
 */

__int64 __fastcall HvlHalGetVpIndexFromApicId(int a1, _DWORD *a2)
{
  __int64 result; // rax
  int v4; // [rsp+38h] [rbp+10h] BYREF

  result = HvlpGetVpIndexFromApicId(a1, &v4);
  *a2 = v4;
  return result;
}
