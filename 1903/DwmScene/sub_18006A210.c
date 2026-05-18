/*
 * XREFs of sub_18006A210 @ 0x18006A210
 * Callers:
 *     sub_18003BEB0 @ 0x18003BEB0 (sub_18003BEB0.c)
 *     ?do_while@details@Concurrency@@YA?AV?$task@_N@2@V?$function@$$A6A?AV?$task@_N@Concurrency@@XZ@std@@@Z @ 0x1800DE270 (-do_while@details@Concurrency@@YA-AV-$task@_N@2@V-$function@$$A6A-AV-$task@_N@Concurrency@@XZ@st.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180127630 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_18006A210(_QWORD **a1, __int64 a2, __int64 a3)
{
  (*(void (__fastcall **)(_QWORD *, _QWORD **))(*a1[12] + 8LL))(a1[12], a1);
  ((void (__fastcall *)(_QWORD **, __int64, __int64))(*a1)[31])(a1, a2, a3);
  return ((__int64 (__fastcall *)(_QWORD **))(*a1)[37])(a1);
}
