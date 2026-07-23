/*
 * XREFs of UsifPutByte @ 0x14032DD30
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 */

__int64 __fastcall UsifPutByte(__int64 *a1, unsigned __int8 a2, char a3)
{
  __int64 v5; // rcx

  if ( a1 )
  {
    v5 = *a1;
    if ( v5 )
    {
      if ( a3 )
      {
        while ( (((__int64 (__fastcall *)(__int64))off_140402720)(*a1 + 68) & 0xFF0000) != 0 )
          ;
        goto LABEL_7;
      }
      if ( (((__int64 (__fastcall *)(__int64))off_140402720)(v5 + 68) & 0xFF0000) == 0 )
      {
LABEL_7:
        ((void (__fastcall *)(__int64, _QWORD))off_140402728)(*a1 + 0x40000, a2);
        return 0LL;
      }
    }
  }
  return 3LL;
}
