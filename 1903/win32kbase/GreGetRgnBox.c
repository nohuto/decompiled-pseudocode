/*
 * XREFs of GreGetRgnBox @ 0x1C0015570
 * Callers:
 *     NtGdiGetRgnBox @ 0x1C0092460 (NtGdiGetRgnBox.c)
 *     EngGetRgnBox @ 0x1C0131510 (EngGetRgnBox.c)
 * Callees:
 *     ?iComplexity@RGNOBJ@@QEBAJXZ @ 0x1C0015978 (-iComplexity@RGNOBJ@@QEBAJXZ.c)
 *     ?UpdateUserRgn@RGNOBJ@@QEAAXXZ @ 0x1C0026BE0 (-UpdateUserRgn@RGNOBJ@@QEAAXXZ.c)
 *     ??0RGNOBJAPI@@QEAA@PEAUHRGN__@@H@Z @ 0x1C0026F10 (--0RGNOBJAPI@@QEAA@PEAUHRGN__@@H@Z.c)
 */

__int64 __fastcall GreGetRgnBox(HRGN a1, __int64 a2)
{
  unsigned int v3; // esi
  __int64 v4; // rdi
  _QWORD v6[2]; // [rsp+20h] [rbp-28h] BYREF
  int v7; // [rsp+30h] [rbp-18h]

  v3 = 0;
  RGNOBJAPI::RGNOBJAPI((RGNOBJAPI *)v6, a1, 1);
  v4 = v6[0];
  if ( a2 )
  {
    if ( v6[0] )
    {
      *(_OWORD *)a2 = *(_OWORD *)(v6[0] + 88LL);
      v3 = RGNOBJ::iComplexity((RGNOBJ *)v6);
      if ( v3 == 1 )
      {
        *(_DWORD *)a2 = 0;
        *(_DWORD *)(a2 + 4) = 0;
        *(_DWORD *)(a2 + 8) = 0;
        *(_DWORD *)(a2 + 12) = 0;
      }
    }
  }
  if ( !v7 )
    RGNOBJ::UpdateUserRgn((RGNOBJ *)v6);
  if ( v4 )
    _InterlockedDecrement((volatile signed __int32 *)(v4 + 12));
  return v3;
}
