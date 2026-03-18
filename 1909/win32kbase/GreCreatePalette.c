/*
 * XREFs of GreCreatePalette @ 0x1C012D720
 * Callers:
 *     <none>
 * Callees:
 *     ??1PALMEMOBJ@@QEAA@XZ @ 0x1C0018630 (--1PALMEMOBJ@@QEAA@XZ.c)
 *     ?bCreatePalette@PALMEMOBJ@@QEAAHKKPEBKKKKKH@Z @ 0x1C00BAC30 (-bCreatePalette@PALMEMOBJ@@QEAAHKKPEBKKKKKH@Z.c)
 */

struct _SLIST_ENTRY *__fastcall GreCreatePalette(__int64 a1)
{
  struct _SLIST_ENTRY *Next; // rbx
  unsigned int v2; // r8d
  struct _SLIST_ENTRY *v4; // [rsp+50h] [rbp-18h] BYREF
  int v5; // [rsp+58h] [rbp-10h]

  Next = 0LL;
  if ( *(_WORD *)a1 == 768 )
  {
    v2 = *(unsigned __int16 *)(a1 + 2);
    if ( *(_WORD *)(a1 + 2) )
    {
      v5 = 0;
      v4 = 0LL;
      if ( (unsigned int)PALMEMOBJ::bCreatePalette(&v4, 1, v2, (const unsigned int *)(a1 + 4), 0, 0, 0, 0x500u, 0) )
      {
        v5 = 1;
        Next = v4->Next;
      }
      PALMEMOBJ::~PALMEMOBJ((PALMEMOBJ *)&v4);
    }
  }
  return Next;
}
