/*
 * XREFs of ?bFastFillWrapper@RGNMEMOBJ@@AEAAHAEAVEPATHOBJ@@@Z @ 0x1C00200BC
 * Callers:
 *     ?vCreate@RGNMEMOBJ@@QEAAXAEAVEPATHOBJ@@KPEAU_RECTL@@@Z @ 0x1C0020210 (-vCreate@RGNMEMOBJ@@QEAAXAEAVEPATHOBJ@@KPEAU_RECTL@@@Z.c)
 * Callees:
 *     PATHOBJ_bEnum @ 0x1C001CCA0 (PATHOBJ_bEnum.c)
 *     ?bFastFill@RGNMEMOBJ@@AEAAHAEAVEPATHOBJ@@JPEAU_POINTFIX@@@Z @ 0x1C001FA74 (-bFastFill@RGNMEMOBJ@@AEAAHAEAVEPATHOBJ@@JPEAU_POINTFIX@@@Z.c)
 *     __security_check_cookie @ 0x1C0073C90 (__security_check_cookie.c)
 *     memmove @ 0x1C0079B80 (memmove.c)
 */

__int64 __fastcall RGNMEMOBJ::bFastFillWrapper(RGNMEMOBJ *this, struct EPATHOBJ *a2)
{
  unsigned int v4; // esi
  ULONG count; // edi
  BOOL v6; // eax
  unsigned int v7; // ecx
  BOOL v8; // r12d
  ULONG v9; // r14d
  POINTFIX *pptfx; // r9
  ULONG v11; // r8d
  __int64 v12; // rcx
  PATHDATA ppd; // [rsp+20h] [rbp-E0h] BYREF
  struct _POINTFIX v15[40]; // [rsp+30h] [rbp-D0h] BYREF

  *(_DWORD *)a2 &= ~8u;
  v4 = 0;
  *(_QWORD *)(*((_QWORD *)a2 + 1) + 72LL) = *(_QWORD *)(*((_QWORD *)a2 + 1) + 32LL);
  if ( PATHOBJ_bEnum((PATHOBJ *)a2, &ppd) )
  {
    if ( (ppd.flags & 2) == 0 && *((_DWORD *)a2 + 1) <= 0x28u )
    {
      count = ppd.count;
      if ( ppd.count > 0x28 )
        count = 40;
      memmove(v15, ppd.pptfx, 8LL * count);
      while ( 1 )
      {
        v6 = PATHOBJ_bEnum((PATHOBJ *)a2, &ppd);
        v7 = -1;
        v8 = v6;
        v9 = ppd.count + count;
        if ( ppd.count + count >= count )
          v7 = ppd.count + count;
        if ( (ppd.flags & 1) != 0 || v7 > 0x28 || v9 < count )
          break;
        memmove(&v15[count], ppd.pptfx, 8LL * ppd.count);
        count = v9;
        if ( !v8 )
        {
          pptfx = v15;
          v11 = v9;
          goto LABEL_14;
        }
      }
    }
  }
  else
  {
    v11 = ppd.count;
    if ( ppd.count <= 1 )
    {
      v4 = 1;
    }
    else
    {
      pptfx = ppd.pptfx;
LABEL_14:
      v4 = RGNMEMOBJ::bFastFill(this, a2, v11, pptfx);
    }
  }
  v12 = *((_QWORD *)a2 + 1);
  *(_DWORD *)a2 &= ~8u;
  *(_QWORD *)(v12 + 72) = *(_QWORD *)(v12 + 32);
  return v4;
}
