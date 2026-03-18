/*
 * XREFs of xxxGetSysMenuOffset @ 0x1C023C640
 * Callers:
 *     <none>
 * Callees:
 *     xxxGetSysMenuPtr @ 0x1C004A6F8 (xxxGetSysMenuPtr.c)
 */

__int64 __fastcall xxxGetSysMenuOffset(_QWORD *a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax

  result = xxxGetSysMenuPtr(a1, a2, a3);
  if ( result )
    return *(_QWORD *)(result + 48);
  return result;
}
