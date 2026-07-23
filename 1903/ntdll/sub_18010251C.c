/*
 * XREFs of sub_18010251C @ 0x18010251C
 * Callers:
 *     sub_180101B5C @ 0x180101B5C (sub_180101B5C.c)
 *     sub_180102590 @ 0x180102590 (sub_180102590.c)
 *     sub_180102784 @ 0x180102784 (sub_180102784.c)
 * Callees:
 *     RtlRunOnceExecuteOnce @ 0x18000AFD0 (RtlRunOnceExecuteOnce.c)
 *     RtlRunOnceBeginInitialize @ 0x18004A890 (RtlRunOnceBeginInitialize.c)
 */

NTSTATUS __fastcall sub_18010251C(__int64 a1, int a2, PVOID *a3)
{
  __int64 v4; // rax
  _RTL_RUN_ONCE *v5; // rcx
  NTSTATUS result; // eax
  PVOID Context; // [rsp+30h] [rbp+8h] BYREF

  v4 = 104LL;
  if ( *(_DWORD *)(a1 + 16) != -571548178 )
    v4 = 368LL;
  v5 = (_RTL_RUN_ONCE *)(v4 + a1);
  if ( a2 )
    result = RtlRunOnceExecuteOnce(v5, (PRTL_RUN_ONCE_INIT_FN)sub_1801018F0, 0LL, &Context);
  else
    result = RtlRunOnceBeginInitialize(v5, 1u, &Context);
  if ( result >= 0 )
  {
    *a3 = Context;
    return 0;
  }
  return result;
}
