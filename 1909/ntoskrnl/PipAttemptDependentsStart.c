/*
 * XREFs of PipAttemptDependentsStart @ 0x140700AE0
 * Callers:
 *     IoResolveDependency @ 0x140192FF0 (IoResolveDependency.c)
 *     PnpStartedDeviceNodeDependencyCheck @ 0x140700AA8 (PnpStartedDeviceNodeDependencyCheck.c)
 * Callees:
 *     PiGetDependentList @ 0x140700B14 (PiGetDependentList.c)
 *     PiEnumerateDependentListEntry @ 0x14085D668 (PiEnumerateDependentListEntry.c)
 *     PipAttemptDependentStart @ 0x14085D824 (PipAttemptDependentStart.c)
 */

_QWORD **__fastcall PipAttemptDependentsStart(__int64 a1)
{
  _QWORD **result; // rax
  _QWORD *v2; // rdi
  _QWORD *v3; // rbx
  char v4; // [rsp+30h] [rbp+8h] BYREF
  PVOID Object; // [rsp+38h] [rbp+10h] BYREF

  result = (_QWORD **)PiGetDependentList(*(_QWORD *)(a1 + 32));
  v2 = result;
  v3 = *result;
  while ( v3 != v2 )
  {
    result = (_QWORD **)PiEnumerateDependentListEntry(v3, &Object, &v4);
    v3 = (_QWORD *)*v3;
    if ( Object )
      result = (_QWORD **)PipAttemptDependentStart(Object);
  }
  return result;
}
