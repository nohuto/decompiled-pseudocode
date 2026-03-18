/*
 * XREFs of ?UMPDDrvCompletePDEV@@YAXPEAUDHPDEV__@@PEAUHDEV__@@@Z @ 0x1C010CC10
 * Callers:
 *     <none>
 * Callees:
 *     ??1XUMPDOBJ@@QEAA@XZ @ 0x1C009958C (--1XUMPDOBJ@@QEAA@XZ.c)
 *     ?Thunk@UMPDOBJ@@QEAAKPEAXK0K@Z @ 0x1C0099C30 (-Thunk@UMPDOBJ@@QEAAKPEAXK0K@Z.c)
 *     ??0XUMPDOBJ@@QEAA@XZ @ 0x1C0099F38 (--0XUMPDOBJ@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C0163A80 (__security_check_cookie.c)
 *     memset @ 0x1C0168440 (memset.c)
 */

void __fastcall UMPDDrvCompletePDEV(struct DHPDEV__ *a1, _QWORD *a2)
{
  size_t v4; // [rsp+20h] [rbp-58h]
  UMPDOBJ *v5; // [rsp+30h] [rbp-48h] BYREF
  _QWORD v6[5]; // [rsp+38h] [rbp-40h] BYREF

  XUMPDOBJ::XUMPDOBJ((XUMPDOBJ *)&v5);
  memset(v6, 0, sizeof(v6));
  if ( v5 )
  {
    LODWORD(v4) = 0;
    v6[0] = 0x100000028LL;
    v6[2] = *(_QWORD *)v5;
    v6[4] = a2[2];
    v6[3] = a1;
    UMPDOBJ::Thunk(v5, v6, 40LL, 0LL, v4);
  }
  XUMPDOBJ::~XUMPDOBJ(&v5);
}
