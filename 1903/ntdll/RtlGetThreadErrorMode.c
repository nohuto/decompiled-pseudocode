/*
 * XREFs of RtlGetThreadErrorMode @ 0x18007D250
 * Callers:
 *     sub_18007D1A8 @ 0x18007D1A8 (sub_18007D1A8.c)
 * Callees:
 *     <none>
 */

__int64 RtlGetThreadErrorMode()
{
  struct _TEB *v0; // rdx
  int SpareUlong0; // eax
  struct _TEB *v2; // r8
  __int64 v3; // rax
  struct _TEB *v4; // rcx
  __int64 v5; // rax

  v0 = NtCurrentTeb();
  SpareUlong0 = v0->SpareUlong0;
  if ( SpareUlong0 < 0 )
    LODWORD(v0) = SpareUlong0 + (_DWORD)v0;
  v2 = NtCurrentTeb();
  v3 = (int)v2->SpareUlong0;
  if ( (int)v3 < 0 )
    v2 = (struct _TEB *)((char *)v2 + v3);
  v4 = NtCurrentTeb();
  v5 = (int)v4->SpareUlong0;
  if ( (_DWORD)v0 == LODWORD(v2->NtTib.SubSystemTib) )
  {
    if ( (int)v5 < 0 )
      v4 = (struct _TEB *)((char *)v4 + v5);
    return LODWORD(v4->glDispatchTable[167]);
  }
  else
  {
    if ( (int)v5 < 0 )
      v4 = (struct _TEB *)((char *)v4 + v5);
    return v4->HardErrorMode;
  }
}
