/*
 * XREFs of ?UnlinkAndFreeEntry@@YAXPEAUtagINPUTTRANSFORMENTRY@@@Z @ 0x1C01BDAD0
 * Callers:
 *     xxxFreeWindow @ 0x1C0036A54 (xxxFreeWindow.c)
 * Callees:
 *     <none>
 */

void __fastcall UnlinkAndFreeEntry(struct tagINPUTTRANSFORMENTRY ***a1)
{
  struct tagINPUTTRANSFORMENTRY **v1; // rdx
  struct tagINPUTTRANSFORMENTRY **v2; // rax

  v1 = *a1;
  if ( (*a1)[1] != (struct tagINPUTTRANSFORMENTRY *)a1 || (v2 = a1[1], *v2 != (struct tagINPUTTRANSFORMENTRY *)a1) )
    __fastfail(3u);
  *v2 = (struct tagINPUTTRANSFORMENTRY *)v1;
  v1[1] = (struct tagINPUTTRANSFORMENTRY *)v2;
  Win32FreePool(a1);
}
