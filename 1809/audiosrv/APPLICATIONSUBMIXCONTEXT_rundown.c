/*
 * XREFs of APPLICATIONSUBMIXCONTEXT_rundown @ 0x1800F22A0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800688D0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall APPLICATIONSUBMIXCONTEXT_rundown(__int64 a1)
{
  __int64 v2; // [rsp+30h] [rbp+8h] BYREF

  v2 = a1;
  return (*(__int64 (__fastcall **)(struct IProcessSubmixManager *, __int64 *))(*(_QWORD *)g_ProcessSubmixManager + 40LL))(
           g_ProcessSubmixManager,
           &v2);
}
