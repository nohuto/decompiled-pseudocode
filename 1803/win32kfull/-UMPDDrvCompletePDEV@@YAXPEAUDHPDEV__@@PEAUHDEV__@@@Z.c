/*
 * XREFs of ?UMPDDrvCompletePDEV@@YAXPEAUDHPDEV__@@PEAUHDEV__@@@Z @ 0x1C010A6A0
 * Callers:
 *     <none>
 * Callees:
 *     ??1XUMPDOBJ@@QEAA@XZ @ 0x1C0018734 (--1XUMPDOBJ@@QEAA@XZ.c)
 *     ??0XUMPDOBJ@@QEAA@XZ @ 0x1C00187A4 (--0XUMPDOBJ@@QEAA@XZ.c)
 *     ?Thunk@UMPDOBJ@@QEAAKPEAXK0K@Z @ 0x1C0018974 (-Thunk@UMPDOBJ@@QEAAKPEAXK0K@Z.c)
 *     __security_check_cookie @ 0x1C0139660 (__security_check_cookie.c)
 *     memset @ 0x1C013D6C0 (memset.c)
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
    UMPDOBJ::Thunk(v5, v6, 0x28u, 0LL, v4);
  }
  XUMPDOBJ::~XUMPDOBJ(&v5);
}
