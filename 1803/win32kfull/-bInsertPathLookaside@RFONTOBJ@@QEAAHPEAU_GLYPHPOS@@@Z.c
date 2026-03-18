/*
 * XREFs of ?bInsertPathLookaside@RFONTOBJ@@QEAAHPEAU_GLYPHPOS@@@Z @ 0x1C02A6244
 * Callers:
 *     ?bInsertGlyphbitsLookaside@RFONTOBJ@@QEAAHPEAU_GLYPHPOS@@K@Z @ 0x1C02A6038 (-bInsertGlyphbitsLookaside@RFONTOBJ@@QEAAHPEAU_GLYPHPOS@@K@Z.c)
 * Callees:
 *     ?QueryFontData@PFFOBJ@@QEAAJPEAUDHPDEV__@@PEAU_FONTOBJ@@KKPEAU_GLYPHDATA@@PEAXK@Z @ 0x1C0080A04 (-QueryFontData@PFFOBJ@@QEAAJPEAUDHPDEV__@@PEAU_FONTOBJ@@KKPEAU_GLYPHDATA@@PEAXK@Z.c)
 *     PALLOCMEM2 @ 0x1C00CB03C (PALLOCMEM2.c)
 *     ?vInit@EPATHFONTOBJ@@QEAAXK@Z @ 0x1C01282B4 (-vInit@EPATHFONTOBJ@@QEAAXK@Z.c)
 *     __security_check_cookie @ 0x1C0139660 (__security_check_cookie.c)
 */

__int64 __fastcall RFONTOBJ::bInsertPathLookaside(struct _FONTOBJ **this, struct _GLYPHPOS *a2)
{
  unsigned int v4; // ebx
  struct _FONTOBJ *v5; // r8
  struct DHPDEV__ *sizLogResPpi; // rdx
  unsigned int v7; // eax
  struct _FONTOBJ *v8; // rdi
  unsigned int v9; // r14d
  unsigned __int64 v10; // r15
  SIZE v11; // rcx
  GLYPHDEF *v12; // rdi
  EPATHOBJ *v13; // rcx
  PVOID v15[2]; // [rsp+40h] [rbp-C0h] BYREF
  char v16[8]; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v17; // [rsp+58h] [rbp-A8h]
  struct _GLYPHDATA v18; // [rsp+D0h] [rbp-30h] BYREF

  PATHMEMOBJ::PATHMEMOBJ((PATHMEMOBJ *)v16);
  v4 = 0;
  if ( v17 )
  {
    v5 = *this;
    sizLogResPpi = (struct DHPDEV__ *)(*this)[1].sizLogResPpi;
    v15[0] = (*this)[1].pvConsumer;
    if ( (unsigned int)PFFOBJ::QueryFontData((PFFOBJ *)v15, sizLogResPpi, v5, 2u, a2->hg, &v18, v16, 0) != -1 )
    {
      v7 = EPATHOBJ::cjSize((EPATHOBJ *)v16);
      v8 = *this;
      v9 = v7 + 488;
      v10 = v7 + 488;
      if ( *(_QWORD *)&(*this)[9].ulStyleSize < v10 )
      {
        v11 = v8[9].sizLogResPpi;
        if ( v11 )
        {
          ((void (__fastcall *)(_QWORD))Win32FreePool)(v11);
          (*this)[9].sizLogResPpi = 0LL;
          *(_QWORD *)&(*this)[9].ulStyleSize = 0LL;
          v8 = *this;
        }
      }
      if ( v8[9].sizLogResPpi )
        goto LABEL_9;
      (*this)[9].sizLogResPpi = (SIZE)PALLOCMEM2(v9, 1667326791LL, 1);
      if ( (*this)[9].sizLogResPpi )
      {
        *(_QWORD *)&(*this)[9].ulStyleSize = v10;
        v8 = *this;
LABEL_9:
        v12 = (GLYPHDEF *)v8[9].sizLogResPpi;
        EPATHFONTOBJ::vInit((EPATHFONTOBJ *)&v12[8], v9 - 64);
        EPATHOBJ::bClone(v13, (struct EPATHOBJ *)v16);
        *(struct _GLYPHDATA *)&v12->pgb = v18;
        a2->pgdf = v12;
        v12->pgb = (GLYPHBITS *)&v12[8];
        v4 = 1;
      }
    }
  }
  PATHMEMOBJ::~PATHMEMOBJ((PATHMEMOBJ *)v16);
  return v4;
}
