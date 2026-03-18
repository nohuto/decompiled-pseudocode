/*
 * XREFs of ?SpbTransfer@@YAHPEAUtagSPB@@PEAUtagWND@@H@Z @ 0x1C0208D70
 * Callers:
 *     CreateSpb @ 0x1C015D8BC (CreateSpb.c)
 *     ?SpbTransfer@@YAHPEAUtagSPB@@PEAUtagWND@@H@Z @ 0x1C0208D70 (-SpbTransfer@@YAHPEAUtagSPB@@PEAUtagWND@@H@Z.c)
 * Callees:
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C00BFAE8 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C00BFB44 (--1UserAtomicCheck@@QEAA@XZ.c)
 *     xxxInternalInvalidate @ 0x1C00C3B70 (xxxInternalInvalidate.c)
 *     IntersectWithParents @ 0x1C00C4444 (IntersectWithParents.c)
 *     __security_check_cookie @ 0x1C0162AB0 (__security_check_cookie.c)
 *     ?SpbCheckRect2@@YAHPEAUtagSPB@@PEAUtagWND@@PEAUtagRECT@@K@Z @ 0x1C0208C90 (-SpbCheckRect2@@YAHPEAUtagSPB@@PEAUtagWND@@PEAUtagRECT@@K@Z.c)
 *     ?SpbTransfer@@YAHPEAUtagSPB@@PEAUtagWND@@H@Z @ 0x1C0208D70 (-SpbTransfer@@YAHPEAUtagSPB@@PEAUtagWND@@H@Z.c)
 */

__int64 __fastcall SpbTransfer(struct tagSPB *a1, struct tagWND *a2, int a3)
{
  unsigned __int64 v6; // rcx
  __int64 i; // rbx
  _BYTE v9[8]; // [rsp+20h] [rbp-28h] BYREF
  struct tagRECT v10; // [rsp+28h] [rbp-20h] BYREF

  v6 = *(_QWORD *)(*((_QWORD *)a2 + 5) + 136LL);
  if ( !v6 )
    goto LABEL_8;
  if ( (*(_DWORD *)(*(_QWORD *)(*((_QWORD *)a2 + 2) + 416LL) + 812LL) & 0x400) != 0 )
    return 1LL;
  *(_QWORD *)&v10.left = 0LL;
  *(_QWORD *)&v10.right = 0LL;
  if ( v6 <= 1 || (unsigned int)GreGetRgnBox(v6, &v10) )
    v10 = *(struct tagRECT *)(*((_QWORD *)a2 + 5) + 88LL);
  if ( !(unsigned int)IntersectWithParents((__int64)a2, &v10)
    || (UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)v9),
        xxxInternalInvalidate(a2, ghrgnSPB2, 0x48u),
        UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)v9),
        (unsigned int)SpbCheckRect2(a1, a2, &v10)) )
  {
LABEL_8:
    if ( a3 )
    {
      for ( i = *((_QWORD *)a2 + 14); i; i = *(_QWORD *)(i + 88) )
      {
        if ( !(unsigned int)SpbTransfer(a1, (struct tagWND *)i, 1) )
          return 0LL;
      }
    }
    return 1LL;
  }
  return 0LL;
}
