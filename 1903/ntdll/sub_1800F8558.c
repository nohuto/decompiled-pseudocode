/*
 * XREFs of sub_1800F8558 @ 0x1800F8558
 * Callers:
 *     sub_1800F8260 @ 0x1800F8260 (sub_1800F8260.c)
 *     sub_1800F8464 @ 0x1800F8464 (sub_1800F8464.c)
 * Callees:
 *     ZwSetEvent @ 0x18009C8A0 (ZwSetEvent.c)
 *     ZwWaitForMultipleObjects @ 0x18009D230 (ZwWaitForMultipleObjects.c)
 */

char sub_1800F8558()
{
  NTSTATUS v0; // eax
  HANDLE Handles; // [rsp+30h] [rbp-18h] BYREF
  __int64 v3; // [rsp+38h] [rbp-10h]
  LARGE_INTEGER Timeout; // [rsp+50h] [rbp+8h] BYREF

  Handles = 0LL;
  v3 = 0LL;
  if ( !qword_180166A10
    || (Handles = (HANDLE)*((_QWORD *)qword_180166A10 + 1),
        v3 = *((_QWORD *)qword_180166A10 + 3),
        Timeout.QuadPart = -100000000LL,
        ZwSetEvent(*((HANDLE *)qword_180166A10 + 2), 0LL),
        v0 = ZwWaitForMultipleObjects(2u, &Handles, WaitAny, 0, &Timeout),
        v0 != 1) )
  {
    byte_180166A30 = 1;
    LOBYTE(v0) = 0;
  }
  return v0;
}
