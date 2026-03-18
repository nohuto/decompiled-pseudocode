/*
 * XREFs of ?GetCLIPOBJPath@UMPDOBJ@@QEAAPEAU_PATHOBJ@@PEAU_CLIPOBJ@@@Z @ 0x1C028DF4C
 * Callers:
 *     NtGdiCLIPOBJ_ppoGetPath @ 0x1C02AB1D0 (NtGdiCLIPOBJ_ppoGetPath.c)
 * Callees:
 *     ?ThunkDDIOBJ@UMPDOBJ@@AEAAHPEAU_DDIOBJMAP@@PEAPEAXKPEAX@Z @ 0x1C00501E4 (-ThunkDDIOBJ@UMPDOBJ@@AEAAHPEAU_DDIOBJMAP@@PEAPEAXKPEAX@Z.c)
 *     ?ppoGetPath@XCLIPOBJ@@QEAAPEAU_PATHOBJ@@XZ @ 0x1C026B008 (-ppoGetPath@XCLIPOBJ@@QEAAPEAU_PATHOBJ@@XZ.c)
 *     EngDeletePath @ 0x1C0283840 (EngDeletePath.c)
 *     ??$GetDDIOBJ@U_CLIPOBJ@@@UMPDOBJ@@QEAAPEAU_CLIPOBJ@@PEAU1@@Z @ 0x1C028DCF0 (--$GetDDIOBJ@U_CLIPOBJ@@@UMPDOBJ@@QEAAPEAU_CLIPOBJ@@PEAU1@@Z.c)
 */

struct _PATHOBJ *__fastcall UMPDOBJ::GetCLIPOBJPath(UMPDOBJ *this, struct _CLIPOBJ *a2)
{
  XCLIPOBJ *v3; // rax
  struct _PATHOBJ *v4; // rbx
  void *v6; // [rsp+40h] [rbp+8h] BYREF

  if ( *((_QWORD *)this + 31) )
    return 0LL;
  v3 = (XCLIPOBJ *)UMPDOBJ::GetDDIOBJ<_CLIPOBJ>((__int64)this, (__int64)a2);
  v4 = v3 ? XCLIPOBJ::ppoGetPath(v3) : 0LL;
  v6 = v4;
  if ( !v4 )
    return 0LL;
  if ( !(unsigned int)UMPDOBJ::ThunkDDIOBJ(this, (UMPDOBJ *)((char *)this + 240), (const void **)&v6, 8u, 0LL) )
  {
    EngDeletePath(v4);
    return 0LL;
  }
  return (struct _PATHOBJ *)v6;
}
