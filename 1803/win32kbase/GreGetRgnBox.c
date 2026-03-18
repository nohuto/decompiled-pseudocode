/*
 * XREFs of GreGetRgnBox @ 0x1C005FE50
 * Callers:
 *     NtGdiGetRgnBox @ 0x1C005FE10 (NtGdiGetRgnBox.c)
 *     EngGetRgnBox @ 0x1C00D94A0 (EngGetRgnBox.c)
 * Callees:
 *     ?iComplexity@RGNOBJ@@QEBAJXZ @ 0x1C00220E8 (-iComplexity@RGNOBJ@@QEBAJXZ.c)
 *     ??1RGNOBJAPI@@QEAA@XZ @ 0x1C0023E80 (--1RGNOBJAPI@@QEAA@XZ.c)
 *     ??0RGNOBJAPI@@QEAA@PEAUHRGN__@@H@Z @ 0x1C00242E0 (--0RGNOBJAPI@@QEAA@PEAUHRGN__@@H@Z.c)
 */

__int64 __fastcall GreGetRgnBox(HRGN a1, __int64 a2)
{
  unsigned int v3; // edi
  _QWORD v5[5]; // [rsp+20h] [rbp-28h] BYREF

  v3 = 0;
  RGNOBJAPI::RGNOBJAPI((RGNOBJAPI *)v5, a1, 1);
  if ( a2 )
  {
    if ( v5[0] )
    {
      *(_OWORD *)a2 = *(_OWORD *)(v5[0] + 88LL);
      v3 = RGNOBJ::iComplexity((RGNOBJ *)v5);
      if ( v3 == 1 )
      {
        *(_DWORD *)a2 = 0;
        *(_DWORD *)(a2 + 4) = 0;
        *(_DWORD *)(a2 + 8) = 0;
        *(_DWORD *)(a2 + 12) = 0;
      }
    }
  }
  RGNOBJAPI::~RGNOBJAPI((RGNOBJAPI *)v5);
  return v3;
}
