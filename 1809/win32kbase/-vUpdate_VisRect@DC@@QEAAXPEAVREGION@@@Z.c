/*
 * XREFs of ?vUpdate_VisRect@DC@@QEAAXPEAVREGION@@@Z @ 0x1C0021520
 * Callers:
 *     GreCreateDisplayDC @ 0x1C001D950 (GreCreateDisplayDC.c)
 *     ?bCompute@DC@@QEAAHXZ @ 0x1C0025890 (-bCompute@DC@@QEAAHXZ.c)
 *     ?hbmSelectBitmapInternal@@YAPEAUHBITMAP__@@AEAVXDCOBJ@@PEAU1@HHH@Z @ 0x1C00AB4F0 (-hbmSelectBitmapInternal@@YAPEAUHBITMAP__@@AEAVXDCOBJ@@PEAU1@HHH@Z.c)
 *     GreRestoreDCInternal @ 0x1C00ACC60 (GreRestoreDCInternal.c)
 * Callees:
 *     ?GetEntryFromObject@GdiHandleManager@@QEAAPEAU_ENTRY@@PEAVOBJECT@@@Z @ 0x1C0022D80 (-GetEntryFromObject@GdiHandleManager@@QEAAPEAU_ENTRY@@PEAVOBJECT@@@Z.c)
 *     ?iComplexity@RGNOBJ@@QEBAJXZ @ 0x1C0023940 (-iComplexity@RGNOBJ@@QEBAJXZ.c)
 */

void __fastcall DC::vUpdate_VisRect(DC *this, struct REGION *a2)
{
  __m128i v4; // xmm0
  int v5; // ecx
  int v6; // eax
  __int128 v7; // xmm0
  struct _ENTRY *EntryFromObject; // rax
  __int128 v9; // [rsp+20h] [rbp-10h]
  struct REGION *v10; // [rsp+50h] [rbp+20h] BYREF

  if ( (*((_BYTE *)GdiHandleManager::GetEntryFromObject(gpHandleManager, this) + 15) & 4) != 0 )
  {
    if ( !a2
      || (v10 = a2,
          *(_DWORD *)(*((_QWORD *)this + 122) + 116LL) = RGNOBJ::iComplexity((RGNOBJ *)&v10),
          (unsigned int)RGNOBJ::iComplexity((RGNOBJ *)&v10) == 1) )
    {
      v7 = xmmword_1C0196B00;
    }
    else
    {
      v5 = *((_DWORD *)this + 258);
      v9 = *(_OWORD *)((char *)a2 + 88);
      v4 = (__m128i)v9;
      DWORD2(v9) -= v5;
      LODWORD(v9) = _mm_cvtsi128_si32(v4) - v5;
      v6 = *((_DWORD *)this + 259);
      DWORD1(v9) -= v6;
      HIDWORD(v9) -= v6;
      v7 = v9;
    }
    *(_OWORD *)(*((_QWORD *)this + 122) + 120LL) = v7;
    EntryFromObject = GdiHandleManager::GetEntryFromObject(gpHandleManager, this);
    *((_BYTE *)EntryFromObject + 15) &= ~4u;
  }
}
