/*
 * XREFs of sub_180006358 @ 0x180006358
 * Callers:
 *     sub_180006FCC @ 0x180006FCC (sub_180006FCC.c)
 *     sub_180007658 @ 0x180007658 (sub_180007658.c)
 *     sub_1800076B4 @ 0x1800076B4 (sub_1800076B4.c)
 * Callees:
 *     ZwAlertThreadByThreadId @ 0x18009D4B0 (ZwAlertThreadByThreadId.c)
 */

__int64 __fastcall sub_180006358(__int64 a1)
{
  unsigned __int64 v1; // rcx
  unsigned __int64 v2; // rbx
  __int64 result; // rax

  v1 = a1 & 0xFFFFFFFFFFFFFFFCuLL;
  if ( v1 )
  {
    do
    {
      v2 = *(_QWORD *)(v1 + 16);
      result = (unsigned int)_InterlockedExchange((volatile __int32 *)(v1 + 40), 2);
      if ( !(_DWORD)result )
        result = ZwAlertThreadByThreadId(*(_QWORD *)(v1 + 8));
      v1 = v2;
    }
    while ( v2 );
  }
  return result;
}
