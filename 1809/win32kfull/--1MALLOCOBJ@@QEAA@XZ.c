/*
 * XREFs of ??1MALLOCOBJ@@QEAA@XZ @ 0x1C007D8A0
 * Callers:
 *     bAddFlEntry @ 0x1C0080280 (bAddFlEntry.c)
 * Callees:
 *     <none>
 */

void __fastcall MALLOCOBJ::~MALLOCOBJ(MALLOCOBJ *this)
{
  __int64 v2; // rcx

  v2 = *(_QWORD *)this;
  if ( v2 )
  {
    Win32FreePool(v2);
    *(_QWORD *)this = 0LL;
  }
}
