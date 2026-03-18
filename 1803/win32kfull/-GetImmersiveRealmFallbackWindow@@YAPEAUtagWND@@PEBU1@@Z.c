/*
 * XREFs of ?GetImmersiveRealmFallbackWindow@@YAPEAUtagWND@@PEBU1@@Z @ 0x1C006B654
 * Callers:
 *     xxxActivateWindow @ 0x1C006D170 (xxxActivateWindow.c)
 * Callees:
 *     FBadWindow @ 0x1C006BF08 (FBadWindow.c)
 */

struct tagWND *__fastcall GetImmersiveRealmFallbackWindow(const struct tagWND *a1)
{
  int v1; // ecx
  __int64 v2; // rbx

  if ( a1 )
  {
    v1 = *(_DWORD *)(*((_QWORD *)a1 + 5) + 236LL);
    if ( v1 == 2 || v1 == 16 )
      return 0LL;
  }
  v2 = *(_QWORD *)(*(_QWORD *)(gptiCurrent + 448LL) + 296LL);
  if ( (unsigned int)FBadWindow(v2) )
    return 0LL;
  else
    return (struct tagWND *)v2;
}
