/*
 * XREFs of UMPDDrvDeleteDeviceBitmap @ 0x1C02A63F0
 * Callers:
 *     <none>
 * Callees:
 *     ??1XUMPDOBJ@@QEAA@XZ @ 0x1C004FD7C (--1XUMPDOBJ@@QEAA@XZ.c)
 *     ?Thunk@UMPDOBJ@@QEAAKPEAXK0K@Z @ 0x1C00503C4 (-Thunk@UMPDOBJ@@QEAAKPEAXK0K@Z.c)
 *     ??0XUMPDOBJ@@QEAA@XZ @ 0x1C00506CC (--0XUMPDOBJ@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C0162AB0 (__security_check_cookie.c)
 */

void __fastcall UMPDDrvDeleteDeviceBitmap(__int64 a1, __int64 a2)
{
  size_t v4; // [rsp+20h] [rbp-58h]
  UMPDOBJ *v5; // [rsp+30h] [rbp-48h] BYREF
  _DWORD v6[2]; // [rsp+38h] [rbp-40h] BYREF
  __int128 v7; // [rsp+40h] [rbp-38h]
  __int128 v8; // [rsp+50h] [rbp-28h]

  XUMPDOBJ::XUMPDOBJ((XUMPDOBJ *)&v5);
  if ( v5 )
  {
    LODWORD(v4) = 0;
    v6[1] = 11;
    v7 = 0LL;
    v6[0] = 40;
    v8 = 0LL;
    *((_QWORD *)&v7 + 1) = *(_QWORD *)v5;
    *(_QWORD *)&v8 = a1;
    *((_QWORD *)&v8 + 1) = a2;
    UMPDOBJ::Thunk(v5, v6, 40LL, 0LL, v4);
  }
  XUMPDOBJ::~XUMPDOBJ(&v5);
}
