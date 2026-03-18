/*
 * XREFs of bDeleteRegion @ 0x1C0016D00
 * Callers:
 *     GreDeleteObject @ 0x1C0016C60 (GreDeleteObject.c)
 *     ?vCleanupRegions@@YAXK@Z @ 0x1C005272C (-vCleanupRegions@@YAXK@Z.c)
 * Callees:
 *     ?bDeleteRGNOBJAPI@RGNOBJAPI@@QEAAHXZ @ 0x1C0017500 (-bDeleteRGNOBJAPI@RGNOBJAPI@@QEAAHXZ.c)
 *     ?UpdateUserRgn@RGNOBJ@@QEAAXXZ @ 0x1C0026BE0 (-UpdateUserRgn@RGNOBJ@@QEAAXXZ.c)
 *     ??0RGNOBJAPI@@QEAA@PEAUHRGN__@@H@Z @ 0x1C0026F10 (--0RGNOBJAPI@@QEAA@PEAUHRGN__@@H@Z.c)
 */

_BOOL8 __fastcall bDeleteRegion(HRGN a1)
{
  __int64 v1; // rbx
  int v2; // eax
  BOOL v3; // edi
  _QWORD v5[2]; // [rsp+20h] [rbp-28h] BYREF
  int v6; // [rsp+30h] [rbp-18h]

  RGNOBJAPI::RGNOBJAPI((RGNOBJAPI *)v5, a1, 0);
  v1 = v5[0];
  v3 = 0;
  if ( v5[0] )
  {
    if ( !*(_DWORD *)(v5[0] + 32LL) )
    {
      v2 = RGNOBJAPI::bDeleteRGNOBJAPI((RGNOBJAPI *)v5);
      v1 = v5[0];
      if ( v2 )
        v3 = 1;
    }
  }
  if ( !v6 )
    RGNOBJ::UpdateUserRgn((RGNOBJ *)v5);
  if ( v1 )
    _InterlockedDecrement((volatile signed __int32 *)(v1 + 12));
  return v3;
}
