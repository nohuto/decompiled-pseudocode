/*
 * XREFs of ?vUpdate_VisRect@DC@@QEAAXPEAVREGION@@@Z @ 0x1C001B7A0
 * Callers:
 *     GreCreateDisplayDC @ 0x1C001A610 (GreCreateDisplayDC.c)
 *     hbmSelectBitmapInternal @ 0x1C00BB910 (hbmSelectBitmapInternal.c)
 *     GreRestoreDCInternal @ 0x1C00BCED0 (GreRestoreDCInternal.c)
 * Callees:
 *     ?iComplexity@RGNOBJ@@QEBAJXZ @ 0x1C001B860 (-iComplexity@RGNOBJ@@QEBAJXZ.c)
 *     ?GetEntryFromObject@GdiHandleManager@@QEAAPEAU_ENTRY@@PEAVOBJECT@@@Z @ 0x1C001F210 (-GetEntryFromObject@GdiHandleManager@@QEAAPEAU_ENTRY@@PEAVOBJECT@@@Z.c)
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
      v7 = xmmword_1C01DB088;
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
