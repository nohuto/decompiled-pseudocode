/*
 * XREFs of ?UMPDDrvDestroyFont@@YAXPEAU_FONTOBJ@@@Z @ 0x1C02A2CE0
 * Callers:
 *     <none>
 * Callees:
 *     ??1XUMPDOBJ@@QEAA@XZ @ 0x1C004FD7C (--1XUMPDOBJ@@QEAA@XZ.c)
 *     ?pfo@UMPDOBJ@@QEAAHPEAPEAU_FONTOBJ@@@Z @ 0x1C004FF1C (-pfo@UMPDOBJ@@QEAAHPEAPEAU_FONTOBJ@@@Z.c)
 *     ?Thunk@UMPDOBJ@@QEAAKPEAXK0K@Z @ 0x1C00503C4 (-Thunk@UMPDOBJ@@QEAAKPEAXK0K@Z.c)
 *     ??0XUMPDOBJ@@QEAA@XZ @ 0x1C00506CC (--0XUMPDOBJ@@QEAA@XZ.c)
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x1C0052D74 (--1RFONTOBJ@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C0162AB0 (__security_check_cookie.c)
 *     memset @ 0x1C0166840 (memset.c)
 */

void __fastcall UMPDDrvDestroyFont(struct _FONTOBJ *a1)
{
  UMPDOBJ *v2; // rbx
  size_t Size; // [rsp+20h] [rbp-50h]
  __int64 v4; // [rsp+30h] [rbp-40h] BYREF
  UMPDOBJ *v5; // [rsp+38h] [rbp-38h] BYREF
  _QWORD v6[5]; // [rsp+40h] [rbp-30h] BYREF

  XUMPDOBJ::XUMPDOBJ((XUMPDOBJ *)&v5);
  memset(v6, 0, sizeof(v6));
  v2 = v5;
  if ( v5 )
  {
    if ( a1 )
    {
      v6[0] = 0x2B00000028LL;
      v6[2] = *(_QWORD *)v5;
      v6[3] = a1[1].pvConsumer;
      v6[4] = a1;
      if ( (unsigned int)UMPDOBJ::pfo(v5, (__m128i **)&v6[4]) )
      {
        LODWORD(Size) = 4;
        UMPDOBJ::Thunk(v2, v6, 40LL, &v4, Size);
      }
    }
  }
  v4 = 0LL;
  RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v4);
  XUMPDOBJ::~XUMPDOBJ(&v5);
}
