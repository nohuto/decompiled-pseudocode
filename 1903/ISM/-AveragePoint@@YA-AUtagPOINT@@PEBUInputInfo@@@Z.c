/*
 * XREFs of ?AveragePoint@@YA?AUtagPOINT@@PEBUInputInfo@@@Z @ 0x180105C68
 * Callers:
 *     ?DeliverInput@MagnifierGestureTarget@@UEAAJPEAUInputInfo@@@Z @ 0x180105CF0 (-DeliverInput@MagnifierGestureTarget@@UEAAJPEAUInputInfo@@@Z.c)
 *     ?DeliverInput@MagnifierToggleTarget@@UEAAJPEAUInputInfo@@@Z @ 0x180105E20 (-DeliverInput@MagnifierToggleTarget@@UEAAJPEAUInputInfo@@@Z.c)
 * Callees:
 *     <none>
 */

struct tagPOINT __fastcall AveragePoint(const struct InputInfo *a1)
{
  __int64 v1; // r9
  int v2; // eax
  char *v3; // rcx
  int v4; // r8d
  char *v5; // rdx
  int v6; // r10d
  __int64 v8; // [rsp+30h] [rbp+8h]

  v1 = *((unsigned int *)a1 + 53);
  v2 = 0;
  v3 = (char *)a1 + 216;
  if ( !v3 && v1 )
  {
    _o_terminate(0LL);
    __debugbreak();
  }
  v4 = 0;
  v5 = &v3[144 * v1];
  if ( v3 != v5 )
  {
    v6 = 0;
    do
    {
      v6 += *((_DWORD *)v3 + 12);
      v4 += *((_DWORD *)v3 + 13);
      v3 += 144;
    }
    while ( v3 != v5 );
    v2 = v6;
  }
  LODWORD(v8) = v2 / (int)v1;
  HIDWORD(v8) = v4 / (int)v1;
  return (struct tagPOINT)v8;
}
