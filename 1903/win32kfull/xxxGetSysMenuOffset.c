/*
 * XREFs of xxxGetSysMenuOffset @ 0x1C023CC60
 * Callers:
 *     <none>
 * Callees:
 *     xxxGetSysMenuPtr @ 0x1C00A9918 (xxxGetSysMenuPtr.c)
 */

__int64 __fastcall xxxGetSysMenuOffset(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 result; // rax

  result = xxxGetSysMenuPtr(a1, a2, a3, a4);
  if ( result )
    return *(_QWORD *)(result + 48);
  return result;
}
