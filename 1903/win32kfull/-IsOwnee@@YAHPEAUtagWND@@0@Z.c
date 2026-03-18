/*
 * XREFs of ?IsOwnee@@YAHPEAUtagWND@@0@Z @ 0x1C008A1C0
 * Callers:
 *     ?ZOrderByOwner2@@YAPEAUtagSMWP@@PEAU1@H@Z @ 0x1C0089FA8 (-ZOrderByOwner2@@YAPEAUtagSMWP@@PEAU1@H@Z.c)
 *     ?HasOwnedWindowInTree@@YAHPEAUtagWND@@0@Z @ 0x1C008A16C (-HasOwnedWindowInTree@@YAHPEAUtagWND@@0@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall IsOwnee(struct tagWND *a1, struct tagWND *a2)
{
  struct tagWND *v2; // r8
  struct tagWND *v3; // rax
  struct tagWND *v4; // rax

  v2 = a1;
  if ( !a1 )
    return 0LL;
  while ( 1 )
  {
    v3 = v2;
    if ( v2 )
      break;
LABEL_5:
    v4 = 0LL;
    if ( *((struct tagWND **)v2 + 15) != v2 )
      v4 = (struct tagWND *)*((_QWORD *)v2 + 15);
    v2 = v4;
    if ( !v4 )
      return 0LL;
  }
  while ( v3 != a2 )
  {
    v3 = (struct tagWND *)*((_QWORD *)v3 + 13);
    if ( !v3 )
      goto LABEL_5;
  }
  return 1LL;
}
