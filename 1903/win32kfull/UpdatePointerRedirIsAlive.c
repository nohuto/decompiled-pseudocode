/*
 * XREFs of UpdatePointerRedirIsAlive @ 0x1C0098244
 * Callers:
 *     xxxFreeWindow @ 0x1C00988D4 (xxxFreeWindow.c)
 *     IsPointerInputRedirected @ 0x1C01F317C (IsPointerInputRedirected.c)
 *     _RegisterPointerInputTarget @ 0x1C01F3744 (_RegisterPointerInputTarget.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall UpdatePointerRedirIsAlive(__int64 a1)
{
  __int64 *v2; // rdi
  unsigned int i; // ebx
  __int64 result; // rax
  __int64 v5; // rdx

  v2 = (__int64 *)(a1 + 216);
  for ( i = 0; i < 2; ++i )
  {
    result = *v2;
    if ( *v2 )
    {
      v5 = *(_QWORD *)(result + 40);
      if ( *(char *)(v5 + 20) < 0 || *(char *)(v5 + 19) < 0 )
        result = HMAssignmentUnlock(a1 + 8 * (i + 27LL));
    }
    ++v2;
  }
  return result;
}
