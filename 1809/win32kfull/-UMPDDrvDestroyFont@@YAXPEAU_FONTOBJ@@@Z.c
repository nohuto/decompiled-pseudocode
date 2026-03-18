/*
 * XREFs of ?UMPDDrvDestroyFont@@YAXPEAU_FONTOBJ@@@Z @ 0x1C028CCC0
 * Callers:
 *     <none>
 * Callees:
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x1C008471C (--1RFONTOBJ@@QEAA@XZ.c)
 *     ?pfo@UMPDOBJ@@QEAAHPEAPEAU_FONTOBJ@@@Z @ 0x1C008BC48 (-pfo@UMPDOBJ@@QEAAHPEAPEAU_FONTOBJ@@@Z.c)
 *     ??1XUMPDOBJ@@QEAA@XZ @ 0x1C008DB54 (--1XUMPDOBJ@@QEAA@XZ.c)
 *     ?Thunk@UMPDOBJ@@QEAAKPEAXK0K@Z @ 0x1C008DD04 (-Thunk@UMPDOBJ@@QEAAKPEAXK0K@Z.c)
 *     ??0XUMPDOBJ@@QEAA@XZ @ 0x1C008E570 (--0XUMPDOBJ@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C015AF60 (__security_check_cookie.c)
 *     memset @ 0x1C0163640 (memset.c)
 */

void __fastcall UMPDDrvDestroyFont(struct _FONTOBJ *a1)
{
  UMPDOBJ *v2; // rbx
  size_t Size; // [rsp+20h] [rbp-60h]
  UMPDOBJ *v4; // [rsp+30h] [rbp-50h] BYREF
  _BYTE v5[8]; // [rsp+38h] [rbp-48h] BYREF
  __int64 v6; // [rsp+40h] [rbp-40h] BYREF
  int v7; // [rsp+48h] [rbp-38h]
  _QWORD v8[5]; // [rsp+50h] [rbp-30h] BYREF

  XUMPDOBJ::XUMPDOBJ((XUMPDOBJ *)&v4);
  v7 = 0;
  memset(v8, 0, sizeof(v8));
  v2 = v4;
  if ( v4 )
  {
    if ( a1 )
    {
      v8[0] = 0x2B00000028LL;
      v8[2] = *(_QWORD *)v4;
      v8[3] = a1[1].pvConsumer;
      v8[4] = a1;
      if ( (unsigned int)UMPDOBJ::pfo(v4, (__m128i **)&v8[4]) )
      {
        LODWORD(Size) = 4;
        UMPDOBJ::Thunk(v2, v8, 0x28u, v5, Size);
      }
    }
  }
  v6 = 0LL;
  RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v6);
  XUMPDOBJ::~XUMPDOBJ(&v4);
}
