/*
 * XREFs of ?UMPDDrvDisableSurface@@YAXPEAUDHPDEV__@@@Z @ 0x1C01156B0
 * Callers:
 *     <none>
 * Callees:
 *     ??1XUMPDOBJ@@QEAA@XZ @ 0x1C009958C (--1XUMPDOBJ@@QEAA@XZ.c)
 *     ?Thunk@UMPDOBJ@@QEAAKPEAXK0K@Z @ 0x1C0099C30 (-Thunk@UMPDOBJ@@QEAAKPEAXK0K@Z.c)
 *     ??0XUMPDOBJ@@QEAA@XZ @ 0x1C0099F38 (--0XUMPDOBJ@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C0163A80 (__security_check_cookie.c)
 *     memset @ 0x1C0168440 (memset.c)
 */

void __fastcall UMPDDrvDisableSurface(struct DHPDEV__ *a1)
{
  size_t v2; // [rsp+20h] [rbp-48h]
  UMPDOBJ *v3; // [rsp+30h] [rbp-38h] BYREF
  _QWORD v4[4]; // [rsp+38h] [rbp-30h] BYREF

  XUMPDOBJ::XUMPDOBJ((XUMPDOBJ *)&v3);
  memset(v4, 0, sizeof(v4));
  if ( v3 )
  {
    LODWORD(v2) = 0;
    v4[0] = 0x400000020LL;
    v4[2] = *(_QWORD *)v3;
    v4[3] = a1;
    UMPDOBJ::Thunk(v3, v4, 32LL, 0LL, v2);
  }
  XUMPDOBJ::~XUMPDOBJ(&v3);
}
