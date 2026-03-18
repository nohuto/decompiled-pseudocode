/*
 * XREFs of ?UMPDDrvEnableDriver@@YAHPEAGPEAPEAX@Z @ 0x1C00F6520
 * Callers:
 *     ?UMPD_ldevLoadDriver@@YAPEAU_LDEV@@PEAGW4_LDEVTYPE@@@Z @ 0x1C00F62D8 (-UMPD_ldevLoadDriver@@YAPEAU_LDEV@@PEAGW4_LDEVTYPE@@@Z.c)
 * Callees:
 *     ??1XUMPDOBJ@@QEAA@XZ @ 0x1C009958C (--1XUMPDOBJ@@QEAA@XZ.c)
 *     ?Thunk@UMPDOBJ@@QEAAKPEAXK0K@Z @ 0x1C0099C30 (-Thunk@UMPDOBJ@@QEAAKPEAXK0K@Z.c)
 *     ??0XUMPDOBJ@@QEAA@XZ @ 0x1C0099F38 (--0XUMPDOBJ@@QEAA@XZ.c)
 *     ?ThunkStringW@UMPDOBJ@@QEAAHPEAPEAG@Z @ 0x1C00F6988 (-ThunkStringW@UMPDOBJ@@QEAAHPEAPEAG@Z.c)
 *     __security_check_cookie @ 0x1C0163A80 (__security_check_cookie.c)
 *     memset @ 0x1C0168440 (memset.c)
 */

_BOOL8 __fastcall UMPDDrvEnableDriver(unsigned __int16 *a1, void **a2)
{
  UMPDOBJ *v4; // rbx
  BOOL v5; // edi
  size_t Size; // [rsp+20h] [rbp-58h]
  UMPDOBJ *v8; // [rsp+30h] [rbp-48h] BYREF
  _QWORD v9[4]; // [rsp+38h] [rbp-40h] BYREF

  XUMPDOBJ::XUMPDOBJ((XUMPDOBJ *)&v8);
  memset(v9, 0, sizeof(v9));
  v4 = v8;
  v5 = 0;
  if ( v8 )
  {
    if ( a1 )
    {
      v9[0] = 0x6900000020LL;
      v9[2] = *(_QWORD *)v8;
      v9[3] = a1;
      if ( (unsigned int)UMPDOBJ::ThunkStringW(v8, (unsigned __int16 **)&v9[3]) )
      {
        LODWORD(Size) = 8;
        v5 = UMPDOBJ::Thunk(v4, v9, 32LL, a2, Size) != -1;
      }
    }
  }
  XUMPDOBJ::~XUMPDOBJ(&v8);
  return v5;
}
