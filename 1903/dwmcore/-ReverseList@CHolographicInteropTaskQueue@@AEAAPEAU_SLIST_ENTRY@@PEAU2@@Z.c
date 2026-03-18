/*
 * XREFs of ?ReverseList@CHolographicInteropTaskQueue@@AEAAPEAU_SLIST_ENTRY@@PEAU2@@Z @ 0x1802486C0
 * Callers:
 *     CHolographicInteropTaskQueue::ProcessPendingMessages__lambda_db6293ec4389496e05a5db7898b72386___ @ 0x1802406AC (CHolographicInteropTaskQueue--ProcessPendingMessages__lambda_db6293ec4389496e05a5db7898b72386___.c)
 *     CHolographicInteropTaskQueue::ProcessPendingMessages__lambda_28c328954791820f868badd95a7a324d___ @ 0x1802486E0 (CHolographicInteropTaskQueue--ProcessPendingMessages__lambda_28c328954791820f868badd95a7a324d___.c)
 *     ??1CHolographicClient@@MEAA@XZ @ 0x180248890 (--1CHolographicClient@@MEAA@XZ.c)
 * Callees:
 *     <none>
 */

struct _SLIST_ENTRY *__fastcall CHolographicInteropTaskQueue::ReverseList(
        CHolographicInteropTaskQueue *this,
        struct _SLIST_ENTRY *a2)
{
  struct _SLIST_ENTRY *result; // rax
  struct _SLIST_ENTRY *Next; // rcx

  result = 0LL;
  if ( a2 )
  {
    do
    {
      Next = a2->Next;
      a2->Next = result;
      result = a2;
      a2 = Next;
    }
    while ( Next );
  }
  return result;
}
