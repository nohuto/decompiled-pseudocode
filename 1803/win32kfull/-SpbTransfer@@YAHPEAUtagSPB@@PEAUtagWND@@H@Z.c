/*
 * XREFs of ?SpbTransfer@@YAHPEAUtagSPB@@PEAUtagWND@@H@Z @ 0x1C01CE4E0
 * Callers:
 *     CreateSpb @ 0x1C0136078 (CreateSpb.c)
 *     ?SpbTransfer@@YAHPEAUtagSPB@@PEAUtagWND@@H@Z @ 0x1C01CE4E0 (-SpbTransfer@@YAHPEAUtagSPB@@PEAUtagWND@@H@Z.c)
 * Callees:
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C0029B88 (--1UserAtomicCheck@@QEAA@XZ.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C0029BD8 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     xxxInternalInvalidate @ 0x1C002AC50 (xxxInternalInvalidate.c)
 *     IntersectWithParents @ 0x1C002B4F4 (IntersectWithParents.c)
 *     __security_check_cookie @ 0x1C0139660 (__security_check_cookie.c)
 *     ?SpbCheckRect2@@YAHPEAUtagSPB@@PEAUtagWND@@PEAUtagRECT@@K@Z @ 0x1C01CE418 (-SpbCheckRect2@@YAHPEAUtagSPB@@PEAUtagWND@@PEAUtagRECT@@K@Z.c)
 *     ?SpbTransfer@@YAHPEAUtagSPB@@PEAUtagWND@@H@Z @ 0x1C01CE4E0 (-SpbTransfer@@YAHPEAUtagSPB@@PEAUtagWND@@H@Z.c)
 */

__int64 __fastcall SpbTransfer(struct tagSPB *a1, struct tagWND *a2, int a3)
{
  unsigned __int64 v6; // rcx
  __int64 i; // rbx
  _BYTE v9[8]; // [rsp+20h] [rbp-28h] BYREF
  struct tagRECT v10; // [rsp+28h] [rbp-20h] BYREF

  v6 = *(_QWORD *)(*((_QWORD *)a2 + 5) + 136LL);
  if ( !v6 )
  {
LABEL_9:
    if ( a3 )
    {
      for ( i = *((_QWORD *)a2 + 11); i; i = *(_QWORD *)(i + 64) )
      {
        if ( !(unsigned int)SpbTransfer(a1, (struct tagWND *)i, 1) )
          return 0LL;
      }
    }
    return 1LL;
  }
  if ( (*(_DWORD *)(*(_QWORD *)(*((_QWORD *)a2 + 2) + 416LL) + 812LL) & 0x400) == 0 )
  {
    *(_QWORD *)&v10.left = 0LL;
    *(_QWORD *)&v10.right = 0LL;
    if ( v6 <= 1 || (unsigned int)GreGetRgnBox(v6, &v10) )
      v10 = *(struct tagRECT *)(*((_QWORD *)a2 + 5) + 88LL);
    if ( (unsigned int)IntersectWithParents((__int64)a2, &v10) )
    {
      UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)v9);
      xxxInternalInvalidate(a2, ghrgnSPB2, 0x48u);
      UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)v9);
      if ( !(unsigned int)SpbCheckRect2(a1, a2, &v10) )
        return 0LL;
    }
    goto LABEL_9;
  }
  return 1LL;
}
