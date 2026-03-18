/*
 * XREFs of VfZwReplaceKey @ 0x140949950
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1401C5EB0 (_guard_dispatch_icall.c)
 *     ViZwCheckObjectAttributes @ 0x14094A69C (ViZwCheckObjectAttributes.c)
 *     ViZwShouldCheck @ 0x14094A7CC (ViZwShouldCheck.c)
 */

__int64 __fastcall VfZwReplaceKey(__int64 a1, __int64 a2, __int64 a3)
{
  void *retaddr; // [rsp+28h] [rbp+0h]

  if ( (unsigned int)ViZwShouldCheck() )
  {
    ViZwCheckObjectAttributes(a1, retaddr);
    ViZwCheckObjectAttributes(a3, retaddr);
  }
  return ((__int64 (__fastcall *)(__int64, __int64, __int64))pXdvZwReplaceKey)(a1, a2, a3);
}
