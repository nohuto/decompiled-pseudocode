/*
 * XREFs of ?lGetDefaultWorldHeight@@YAJPEAVDCOBJ@@@Z @ 0x1C015743C
 * Callers:
 *     ?bGetNtoW_Win31@@YAHPEAVMATRIX@@PEAUtagLOGFONTW@@AEAVIFIOBJ@@PEAVDCOBJ@@KH@Z @ 0x1C00476D0 (-bGetNtoW_Win31@@YAHPEAVMATRIX@@PEAUtagLOGFONTW@@AEAVIFIOBJ@@PEAVDCOBJ@@KH@Z.c)
 *     ?vGetNtoW@@YAXPEAVMATRIX@@PEAUtagLOGFONTW@@AEAVIFIOBJ@@PEAVDCOBJ@@@Z @ 0x1C009DD24 (-vGetNtoW@@YAXPEAVMATRIX@@PEAUtagLOGFONTW@@AEAVIFIOBJ@@PEAVDCOBJ@@@Z.c)
 * Callees:
 *     bFToL @ 0x1C00DC874 (bFToL.c)
 *     ?vSqrt@EFLOAT@@QEAAXXZ @ 0x1C01021F0 (-vSqrt@EFLOAT@@QEAAXXZ.c)
 *     ??0LFONTOBJ@@QEAA@PEAUHLFONT__@@PEAVPDEVOBJ@@@Z @ 0x1C013F6C8 (--0LFONTOBJ@@QEAA@PEAUHLFONT__@@PEAVPDEVOBJ@@@Z.c)
 */

__int64 __fastcall lGetDefaultWorldHeight(struct DCOBJ *a1)
{
  __int64 v2; // rdx
  int v3; // ebx
  struct LFONT *v5; // [rsp+30h] [rbp+8h] BYREF
  int v6; // [rsp+38h] [rbp+10h] BYREF

  v2 = *(_QWORD *)(*(_QWORD *)a1 + 48LL);
  if ( !v2 )
    return 24LL;
  LFONTOBJ::LFONTOBJ((LFONTOBJ *)&v5, *(struct HLFONT__ **)(v2 + 1432), 0LL);
  if ( !v5 )
    return 24LL;
  v3 = *((_DWORD *)v5 + 69);
  DEC_SHARE_REF_CNT_LAZY_DEL_LOGFONT(v5);
  if ( (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 976LL) + 340LL) & 0x802) != 0x802 )
  {
    *(float *)&v5 = (float)(*(float *)(*(_QWORD *)a1 + 332LL) * *(float *)(*(_QWORD *)a1 + 332LL))
                  + (float)(*(float *)(*(_QWORD *)a1 + 328LL) * *(float *)(*(_QWORD *)a1 + 328LL));
    EFLOAT::vSqrt((EFLOAT *)&v5);
    v6 = 0;
    bFToL((float)(16 * v3) * (float)(1.0 / *(float *)&v5), &v6, 0);
    v3 = v6;
  }
  if ( v3 )
    return (unsigned int)-v3;
  else
    return 24LL;
}
