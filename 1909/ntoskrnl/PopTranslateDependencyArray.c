/*
 * XREFs of PopTranslateDependencyArray @ 0x1402F664C
 * Callers:
 *     PopProcessorIdleSelectNotification @ 0x1402F62A0 (PopProcessorIdleSelectNotification.c)
 *     PopProcessorQueryPlatformStateNotification @ 0x1402F6590 (PopProcessorQueryPlatformStateNotification.c)
 * Callees:
 *     PopFxBugCheck @ 0x1402F1DB0 (PopFxBugCheck.c)
 */

void __fastcall PopTranslateDependencyArray(
        ULONG_PTR BugCheckParameter2,
        ULONG_PTR BugCheckParameter3,
        ULONG_PTR BugCheckParameter1,
        unsigned int a4,
        unsigned int a5,
        __int64 a6)
{
  unsigned int v6; // r11d

  if ( a5 > a4 )
    goto LABEL_6;
  v6 = 0;
  if ( a5 )
  {
    while ( *(_QWORD *)a6 )
    {
      ++v6;
      *(_QWORD *)a6 = *(_QWORD *)(*(_QWORD *)a6 + 192LL);
      a6 += 16LL;
      if ( v6 >= a5 )
        return;
    }
LABEL_6:
    PopFxBugCheck((unsigned int)BugCheckParameter1, BugCheckParameter2, BugCheckParameter3, 0LL);
  }
}
