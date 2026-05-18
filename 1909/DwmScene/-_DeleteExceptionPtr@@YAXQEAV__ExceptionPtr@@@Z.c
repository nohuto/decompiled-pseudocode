/*
 * XREFs of ?_DeleteExceptionPtr@@YAXQEAV__ExceptionPtr@@@Z @ 0x18000B0B0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000AFB8 @ 0x18000AFB8 (sub_18000AFB8.c)
 */

void __fastcall _DeleteExceptionPtr(struct __ExceptionPtr *const a1, _BYTE *a2, __int64 a3)
{
  sub_18000AFB8((unsigned __int64)a1, a2, a3);
  sub_18000C9C4(a1);
}
