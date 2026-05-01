/*
 * XREFs of ?SetRestoreRect@ApplicationViewOperation@@UEAAJUtagRECT@@@Z @ 0x1800873E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ApplicationViewOperation::SetRestoreRect(ApplicationViewOperation *this, struct tagRECT *a2)
{
  __int128 v2; // xmm0
  __int64 result; // rax

  v2 = (__int128)*a2;
  *((_BYTE *)this + 92) = 1;
  result = 0LL;
  *((_OWORD *)this + 6) = v2;
  return result;
}
