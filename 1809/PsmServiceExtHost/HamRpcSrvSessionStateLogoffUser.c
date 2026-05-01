/*
 * XREFs of HamRpcSrvSessionStateLogoffUser @ 0x18006BF80
 * Callers:
 *     <none>
 * Callees:
 *     ?HamSrvLogoffUser@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEAEKK@Z @ 0x1800673EC (-HamSrvLogoffUser@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEAEKK@Z.c)
 */

__int64 __fastcall HamRpcSrvSessionStateLogoffUser(
        struct _HAM_CLIENT_CONTEXT *a1,
        SID *a2,
        __int64 a3,
        unsigned int a4)
{
  __int64 result; // rax

  result = HamSrvLogoffUser(a1, a2, a3, a4);
  if ( (int)result >= 0 )
    return 0LL;
  return result;
}
