/*
 * XREFs of TppCleanupGroupRemoveMember @ 0x18002F0D4
 * Callers:
 *     TppCleanupGroupMemberDestroy @ 0x18002D600 (TppCleanupGroupMemberDestroy.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180015B60 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180015FF0 (RtlAcquireSRWLockExclusive.c)
 */

signed __int64 __fastcall TppCleanupGroupRemoveMember(
        __int64 a1,
        unsigned __int64 a2,
        unsigned __int64 *a3,
        __int64 a4)
{
  signed __int64 result; // rax
  _QWORD *v5; // rbx
  volatile signed __int64 *v6; // rdi
  __int64 v7; // rdx
  _QWORD *v8; // rax

  result = *(_QWORD *)(a1 + 16);
  v5 = (_QWORD *)(a1 + 40);
  if ( (_QWORD *)*v5 != v5 )
  {
    v6 = (volatile signed __int64 *)(result + 8);
    RtlAcquireSRWLockExclusive(result + 8, a2, a3, a4);
    v7 = *v5;
    v8 = (_QWORD *)v5[1];
    if ( *(_QWORD **)(*v5 + 8LL) != v5 || (_QWORD *)*v8 != v5 )
      __fastfail(3u);
    *v8 = v7;
    *(_QWORD *)(v7 + 8) = v8;
    return RtlReleaseSRWLockExclusive(v6);
  }
  return result;
}
