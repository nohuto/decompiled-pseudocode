/*
 * XREFs of ?UMPDDrvResetPDEV@@YAHPEAUDHPDEV__@@0@Z @ 0x1C015B400
 * Callers:
 *     <none>
 * Callees:
 *     ??1XUMPDOBJ@@QEAA@XZ @ 0x1C004FD7C (--1XUMPDOBJ@@QEAA@XZ.c)
 *     ?Thunk@UMPDOBJ@@QEAAKPEAXK0K@Z @ 0x1C00503C4 (-Thunk@UMPDOBJ@@QEAAKPEAXK0K@Z.c)
 *     ??0XUMPDOBJ@@QEAA@XZ @ 0x1C00506CC (--0XUMPDOBJ@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C0162AB0 (__security_check_cookie.c)
 *     memset @ 0x1C0166840 (memset.c)
 */

_BOOL8 __fastcall UMPDDrvResetPDEV(struct DHPDEV__ *a1, struct DHPDEV__ *a2)
{
  BOOL v4; // ebx
  size_t Size; // [rsp+20h] [rbp-50h]
  int v7; // [rsp+30h] [rbp-40h] BYREF
  UMPDOBJ *v8; // [rsp+38h] [rbp-38h] BYREF
  _QWORD v9[5]; // [rsp+40h] [rbp-30h] BYREF

  XUMPDOBJ::XUMPDOBJ((XUMPDOBJ *)&v8);
  memset(v9, 0, sizeof(v9));
  v4 = 0;
  if ( v8 )
  {
    v9[0] = 0x700000028LL;
    v9[2] = *(_QWORD *)v8;
    v9[3] = a1;
    v9[4] = a2;
    LODWORD(Size) = 4;
    if ( (unsigned int)UMPDOBJ::Thunk(v8, v9, 40LL, &v7, Size) != -1 )
      v4 = v7 != 0;
  }
  XUMPDOBJ::~XUMPDOBJ(&v8);
  return v4;
}
