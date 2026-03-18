/*
 * XREFs of ??8DMMVIDPNSOURCEMODE@@QEBA_NAEBV0@@Z @ 0x1C0006290
 * Callers:
 *     ??$Add@VDMMVIDPNSOURCEMODE@@@?$IndexedSet@VDMMVIDPNSOURCEMODE@@@@QEAA?AW4SETSTATUS@0@PEAVDMMVIDPNSOURCEMODE@@@Z @ 0x1C000B9E0 (--$Add@VDMMVIDPNSOURCEMODE@@@-$IndexedSet@VDMMVIDPNSOURCEMODE@@@@QEAA-AW4SETSTATUS@0@PEAVDMMVIDP.c)
 *     ??8DMMVIDPNSOURCEMODE@@QEBA_NAEBU_D3DKMDT_VIDPN_SOURCE_MODE@@@Z @ 0x1C004C8DC (--8DMMVIDPNSOURCEMODE@@QEBA_NAEBU_D3DKMDT_VIDPN_SOURCE_MODE@@@Z.c)
 *     ?IsVidPnPathModeMatch@DMMVIDPNPRESENTPATH@@QEBA_NAEBV1@E@Z @ 0x1C00D4CF8 (-IsVidPnPathModeMatch@DMMVIDPNPRESENTPATH@@QEBA_NAEBV1@E@Z.c)
 * Callees:
 *     ??8@YA_NAEBU_D3DKMDT_GRAPHICS_RENDERING_FORMAT@@0@Z @ 0x1C00062C4 (--8@YA_NAEBU_D3DKMDT_GRAPHICS_RENDERING_FORMAT@@0@Z.c)
 */

char __fastcall DMMVIDPNSOURCEMODE::operator==(__int64 a1, __int64 a2)
{
  int v2; // eax
  __int64 v4; // rax

  v2 = *(_DWORD *)(a1 + 72);
  if ( v2 != *(_DWORD *)(a2 + 72) )
    return 0;
  if ( v2 == 1 )
    return operator==(a1 + 76, a2 + 76);
  if ( v2 != 2 )
  {
    if ( v2 > 2 && v2 <= 4 )
      return operator==(a1 + 76, a2 + 76);
    if ( (unsigned int)(v2 - 1) <= 3 )
    {
      v4 = WdLogNewEntry5_WdAssertion();
      WdLogEvent5_WdAssertion(v4);
    }
    return 0;
  }
  return *(_DWORD *)(a1 + 76) == *(_DWORD *)(a2 + 76);
}
