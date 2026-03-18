/*
 * XREFs of ?GetOrUpdateCheckPointIfNotPresent@@YAPEAUtagCHECKPOINT@@PEAU_MOVESIZEDATA@@@Z @ 0x1C01FA254
 * Callers:
 *     ?SizeRect@@YAHPEAU_MOVESIZEDATA@@KPEAUtagMONITOR@@PEAK@Z @ 0x1C01FB604 (-SizeRect@@YAHPEAU_MOVESIZEDATA@@KPEAUtagMONITOR@@PEAK@Z.c)
 *     ?xxxSizeOrMoveRect@@YAHPEAU_MOVESIZEDATA@@KPEAKPEAUtagRECT@@PEAPEAUtagCHECKPOINT@@@Z @ 0x1C01FF16C (-xxxSizeOrMoveRect@@YAHPEAU_MOVESIZEDATA@@KPEAKPEAUtagRECT@@PEAPEAUtagCHECKPOINT@@@Z.c)
 * Callees:
 *     CkptRestore @ 0x1C0090C80 (CkptRestore.c)
 *     _GetProp @ 0x1C00C7C1C (_GetProp.c)
 *     GetRect @ 0x1C00CB3EC (GetRect.c)
 *     __security_check_cookie @ 0x1C0162AB0 (__security_check_cookie.c)
 */

struct tagCHECKPOINT *__fastcall GetOrUpdateCheckPointIfNotPresent(struct _MOVESIZEDATA *a1)
{
  struct tagCHECKPOINT *Prop; // rcx
  struct tagCHECKPOINT *result; // rax
  int v4; // eax
  __int128 v5; // xmm0
  __int128 v6; // [rsp+20h] [rbp-28h] BYREF

  v6 = 0uLL;
  Prop = (struct tagCHECKPOINT *)GetProp(
                                   *((_QWORD *)a1 + 2),
                                   *((unsigned __int16 *)&WPP_MAIN_CB.DeviceQueue.Size + 1),
                                   1LL);
  if ( Prop
    || (GetRect(*((_QWORD *)a1 + 2), (__int64)&v6, 66),
        result = (struct tagCHECKPOINT *)CkptRestore(*((_QWORD *)a1 + 2), &v6),
        (Prop = result) != 0LL) )
  {
    v4 = *((_DWORD *)a1 + 49);
    if ( (v4 & 0x1000000) == 0 )
    {
      v5 = *(_OWORD *)Prop;
      *((_DWORD *)a1 + 49) = v4 | 0x1000000;
      *(_OWORD *)((char *)a1 + 152) = v5;
    }
    return Prop;
  }
  return result;
}
