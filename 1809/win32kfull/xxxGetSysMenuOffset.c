/*
 * XREFs of xxxGetSysMenuOffset @ 0x1C02247D0
 * Callers:
 *     <none>
 * Callees:
 *     xxxGetSysMenuPtr @ 0x1C0020FE8 (xxxGetSysMenuPtr.c)
 */

__int64 __fastcall xxxGetSysMenuOffset(_QWORD *a1, __int64 a2)
{
  __int64 result; // rax

  result = xxxGetSysMenuPtr(a1, a2);
  if ( result )
    return *(_QWORD *)(result + 48);
  return result;
}
