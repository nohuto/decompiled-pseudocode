/*
 * XREFs of ?AveragePoint@@YA?AUtagPOINT@@PEBUInputInfo@@@Z @ 0x1800CFDE4
 * Callers:
 *     ?DeliverInput@MagnifierToggleTarget@@UEAAJPEAUInputInfo@@@Z @ 0x1800CFE70 (-DeliverInput@MagnifierToggleTarget@@UEAAJPEAUInputInfo@@@Z.c)
 *     ?DeliverInput@MagnifierGestureTarget@@UEAAJPEAUInputInfo@@@Z @ 0x1800CFEC0 (-DeliverInput@MagnifierGestureTarget@@UEAAJPEAUInputInfo@@@Z.c)
 * Callees:
 *     ?terminate@details@gsl@@YAXXZ @ 0x18001EB60 (-terminate@details@gsl@@YAXXZ.c)
 */

struct tagPOINT __fastcall AveragePoint(const struct InputInfo *a1)
{
  const struct InputInfo *v1; // r8
  int v2; // r9d
  _DWORD *v3; // rdx
  int v4; // r10d
  int v5; // eax
  __int64 v7; // [rsp+40h] [rbp+8h]

  v1 = (const struct InputInfo *)*((unsigned int *)a1 + 12);
  if ( a1 == (const struct InputInfo *)-56LL && MEMORY[0xFFFFFFFFFFFFFFF8] )
LABEL_8:
    gsl::details::terminate(a1);
  v2 = 0;
  v3 = (_DWORD *)((char *)a1 + 68);
  v4 = 0;
  a1 = 0LL;
  v5 = 0;
  while ( a1 != v1 )
  {
    v2 += *v3;
    v5 = v4 + *(v3 - 1);
    v4 = v5;
    if ( (__int64)a1 < 0 )
      goto LABEL_8;
    a1 = (const struct InputInfo *)((char *)a1 + 1);
    v3 += 8;
  }
  LODWORD(v7) = v5 / (int)v1;
  HIDWORD(v7) = v2 / (int)v1;
  return (struct tagPOINT)v7;
}
