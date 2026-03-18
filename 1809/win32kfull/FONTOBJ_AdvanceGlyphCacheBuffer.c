/*
 * XREFs of FONTOBJ_AdvanceGlyphCacheBuffer @ 0x1C0161CA8
 * Callers:
 *     ?CaptureUsermodeParameters@QueryGlyphMetricsPlusBitsRequest@@UEAAXPEAX@Z @ 0x1C0162DB0 (-CaptureUsermodeParameters@QueryGlyphMetricsPlusBitsRequest@@UEAAXPEAX@Z.c)
 * Callees:
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x1C008471C (--1RFONTOBJ@@QEAA@XZ.c)
 */

void __fastcall FONTOBJ_AdvanceGlyphCacheBuffer(__int64 a1, __int64 a2, __int64 a3, unsigned int a4)
{
  int v4; // eax
  __int64 v5; // rax
  __int64 v6; // rax
  __int64 v7; // [rsp+20h] [rbp-18h] BYREF
  int v8; // [rsp+28h] [rbp-10h]

  v4 = *(_DWORD *)(a1 + 644);
  v8 = 0;
  if ( (v4 & 4) != 0 )
  {
    v5 = *(_QWORD *)(a1 + 512);
    if ( a2 == v5 )
    {
      if ( *(_DWORD *)(a1 + 640) )
        v6 = v5 + 24;
      else
        v6 = v5 + 64;
      *(_QWORD *)(a1 + 512) = v6;
    }
    if ( a3 )
      *(_QWORD *)(a1 + 584) += a4;
  }
  v7 = 0LL;
  RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v7);
}
