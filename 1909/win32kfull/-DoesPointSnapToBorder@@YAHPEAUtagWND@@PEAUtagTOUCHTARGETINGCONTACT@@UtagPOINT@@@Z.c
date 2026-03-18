/*
 * XREFs of ?DoesPointSnapToBorder@@YAHPEAUtagWND@@PEAUtagTOUCHTARGETINGCONTACT@@UtagPOINT@@@Z @ 0x1C020387C
 * Callers:
 *     ?CanPointStartResize@@YAHPEAUtagWND@@PEAUtagTOUCHTARGETINGCONTACT@@UtagPOINT@@@Z @ 0x1C02036B8 (-CanPointStartResize@@YAHPEAUtagWND@@PEAUtagTOUCHTARGETINGCONTACT@@UtagPOINT@@@Z.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall DoesPointSnapToBorder(struct tagWND *a1, struct tagTOUCHTARGETINGCONTACT *a2, struct tagPOINT a3)
{
  __int64 v3; // r10
  _DWORD *v5; // r9
  __int64 v6; // rdx
  __int64 v7; // rdx
  __int64 v8; // rdx
  _BOOL8 result; // rax

  v3 = *((int *)a2 + 46);
  v5 = (_DWORD *)*((_QWORD *)a1 + 5);
  v6 = v3 * (int)abs32(a3.x - v5[26]) / 1000;
  result = 1;
  if ( (unsigned __int64)(v6 + 0x80000000LL) > 0xFFFFFFFF || (int)v6 >= 120 )
  {
    v7 = v3 * (int)abs32(a3.x - v5[28]) / 1000;
    if ( (unsigned __int64)(v7 + 0x80000000LL) > 0xFFFFFFFF || (int)v7 >= 120 )
    {
      v8 = *((int *)a2 + 47) * (__int64)(int)abs32(a3.y - v5[29]) / 1000;
      if ( (unsigned __int64)(v8 + 0x80000000LL) > 0xFFFFFFFF || (int)v8 >= 120 )
        return 0;
    }
  }
  return result;
}
