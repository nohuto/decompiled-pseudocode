/*
 * XREFs of ?VidSchiSelectReadyNode@@YAPEAU_VIDSCH_NODE@@PEAU_VIDSCH_GLOBAL@@@Z @ 0x1C002B2E8
 * Callers:
 *     VidSchiSelectContext @ 0x1C002FDD8 (VidSchiSelectContext.c)
 * Callees:
 *     <none>
 */

struct _VIDSCH_NODE *__fastcall VidSchiSelectReadyNode(struct _VIDSCH_GLOBAL *a1)
{
  struct _VIDSCH_NODE *result; // rax
  _QWORD *v3; // rdi
  char *v4; // rsi
  __int64 SetBits; // rax
  unsigned int v6; // edx
  struct _VIDSCH_NODE **v7; // rax

  if ( *((_DWORD *)a1 + 17) == 1 )
  {
    result = (struct _VIDSCH_NODE *)**((_QWORD **)a1 + 77);
    if ( *((_DWORD *)result + 438) )
      return result;
    return 0LL;
  }
  v3 = (_QWORD *)((char *)a1 + 520);
  v4 = (char *)a1 + 424;
  RtlCopyBitMapEx((char *)a1 + 424, (char *)a1 + 520, 0LL);
  RtlIntersectBitMapsEx(v3, (char *)a1 + 472);
  if ( (unsigned __int8)RtlAreBitsClearEx(v3, 0LL, *v3) )
    RtlCopyBitMapEx(v4, v3, 0LL);
  SetBits = RtlFindSetBitsEx(v3, 1LL, (unsigned int)(*((_DWORD *)a1 + 174) + 1));
  v6 = SetBits;
  if ( SetBits == -1 )
    return 0LL;
  v7 = (struct _VIDSCH_NODE **)*((_QWORD *)a1 + 77);
  if ( v6 < *((_DWORD *)a1 + 172) )
    v7 += v6;
  result = *v7;
  *((_DWORD *)a1 + 174) = v6;
  return result;
}
