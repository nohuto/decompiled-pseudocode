/*
 * XREFs of ?KnownInputTypeFromLinpSource@@YA?AW4InputType@@W4_LINP_SOURCE@@@Z @ 0x1C00362EC
 * Callers:
 *     ?UpdateInputGlobals@CInputGlobals@@QEAA_N_KW4_LINP_SOURCE@@GKK@Z @ 0x1C0035C80 (-UpdateInputGlobals@CInputGlobals@@QEAA_N_KW4_LINP_SOURCE@@GKK@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KnownInputTypeFromLinpSource(int a1)
{
  int v1; // ecx
  __int64 result; // rax
  int v3; // ecx
  int v4; // ecx

  v1 = a1 - 1;
  if ( !v1 )
    return 4LL;
  v3 = v1 - 1;
  if ( !v3 )
    return 2LL;
  result = 8LL;
  v4 = v3 - 8;
  if ( v4 )
  {
    if ( v4 == 2 )
      return 16LL;
    else
      return 0LL;
  }
  return result;
}
