/*
 * XREFs of sub_18001EE1C @ 0x18001EE1C
 * Callers:
 *     RtlUnwindEx @ 0x18001D490 (RtlUnwindEx.c)
 *     sub_18001F4F0 @ 0x18001F4F0 (sub_18001F4F0.c)
 *     sub_18006A670 @ 0x18006A670 (sub_18006A670.c)
 * Callees:
 *     <none>
 */

bool __fastcall sub_18001EE1C(_QWORD *a1, PVOID *a2)
{
  struct _TEB *v2; // r8
  _UNKNOWN **StackLimit; // rax
  _UNKNOWN *retaddr; // [rsp+0h] [rbp+0h] BYREF

  v2 = NtCurrentTeb();
  *a2 = v2->NtTib.StackBase;
  StackLimit = (_UNKNOWN **)v2->NtTib.StackLimit;
  *a1 = StackLimit;
  return StackLimit <= &retaddr && &retaddr < *a2;
}
