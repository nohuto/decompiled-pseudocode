/*
 * XREFs of GetMenuStateWindow @ 0x1C0222B40
 * Callers:
 *     NtUserEndMenu @ 0x1C013F420 (NtUserEndMenu.c)
 *     xxxHandleMenuMessages @ 0x1C0220464 (xxxHandleMenuMessages.c)
 *     xxxMNDragOver @ 0x1C0246D1C (xxxMNDragOver.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GetMenuStateWindow(_QWORD *a1)
{
  _QWORD *v2; // rax

  if ( !a1 )
    return 0LL;
  v2 = (_QWORD *)*a1;
  if ( (*(_DWORD *)*a1 & 8) != 0 )
    return v2[2];
  if ( v2[3] )
    return v2[3];
  return v2[7];
}
