/*
 * XREFs of ?UMPDDrvGetGlyphMode@@YAKPEAUDHPDEV__@@PEAU_FONTOBJ@@@Z @ 0x1C00FC510
 * Callers:
 *     <none>
 * Callees:
 *     ??1XUMPDOBJ@@QEAA@XZ @ 0x1C009958C (--1XUMPDOBJ@@QEAA@XZ.c)
 *     ?pfo@UMPDOBJ@@QEAAHPEAPEAU_FONTOBJ@@@Z @ 0x1C009972C (-pfo@UMPDOBJ@@QEAAHPEAPEAU_FONTOBJ@@@Z.c)
 *     ?Thunk@UMPDOBJ@@QEAAKPEAXK0K@Z @ 0x1C0099C30 (-Thunk@UMPDOBJ@@QEAAKPEAXK0K@Z.c)
 *     ??0XUMPDOBJ@@QEAA@XZ @ 0x1C0099F38 (--0XUMPDOBJ@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C0163A80 (__security_check_cookie.c)
 *     memset @ 0x1C0168440 (memset.c)
 */

__int64 __fastcall UMPDDrvGetGlyphMode(struct DHPDEV__ *a1, struct _FONTOBJ *a2)
{
  UMPDOBJ *v4; // rbx
  int v5; // eax
  unsigned int v6; // ebx
  size_t Size; // [rsp+20h] [rbp-50h]
  unsigned int v9; // [rsp+30h] [rbp-40h] BYREF
  UMPDOBJ *v10; // [rsp+38h] [rbp-38h] BYREF
  _QWORD v11[5]; // [rsp+40h] [rbp-30h] BYREF

  XUMPDOBJ::XUMPDOBJ((XUMPDOBJ *)&v10);
  memset(v11, 0, sizeof(v11));
  v4 = v10;
  if ( !v10
    || (v11[0] = 0x2500000028LL,
        v11[2] = *(_QWORD *)v10,
        v11[3] = a1,
        v11[4] = a2,
        !(unsigned int)UMPDOBJ::pfo(v10, (__m128i **)&v11[4]))
    || (LODWORD(Size) = 4, v5 = UMPDOBJ::Thunk(v4, v11, 40LL, &v9, Size), v6 = v9, v5 == -1) )
  {
    v6 = 1;
  }
  XUMPDOBJ::~XUMPDOBJ(&v10);
  return v6;
}
