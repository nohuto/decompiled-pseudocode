/*
 * XREFs of ?UMPDMyDrvFree@@YAXPEAVUMPDOBJ@@PEAUDHPDEV__@@PEAXK@Z @ 0x1C027CAC4
 * Callers:
 *     ?UMPDDrvQueryFont@@YAPEAU_IFIMETRICS@@PEAUDHPDEV__@@_KKPEAK@Z @ 0x1C027B7C0 (-UMPDDrvQueryFont@@YAPEAU_IFIMETRICS@@PEAUDHPDEV__@@_KKPEAK@Z.c)
 *     ?UMPDDrvQueryFontTree@@YAPEAXPEAUDHPDEV__@@_KKKPEAK@Z @ 0x1C027BB60 (-UMPDDrvQueryFontTree@@YAPEAXPEAUDHPDEV__@@_KKKPEAK@Z.c)
 * Callees:
 *     ?Thunk@UMPDOBJ@@QEAAKPEAXK0K@Z @ 0x1C0018974 (-Thunk@UMPDOBJ@@QEAAKPEAXK0K@Z.c)
 *     __security_check_cookie @ 0x1C0139660 (__security_check_cookie.c)
 *     memset @ 0x1C013D6C0 (memset.c)
 */

void __fastcall UMPDMyDrvFree(struct UMPDOBJ *this, struct DHPDEV__ *a2, void *a3, int a4)
{
  __int64 v8; // rax
  size_t v9; // [rsp+20h] [rbp-78h]
  _QWORD v10[6]; // [rsp+30h] [rbp-68h] BYREF

  memset(v10, 0, sizeof(v10));
  v8 = *(_QWORD *)this;
  LODWORD(v9) = 0;
  v10[0] = 0x2A00000030LL;
  v10[2] = v8;
  v10[3] = a2;
  v10[4] = a3;
  LODWORD(v10[5]) = a4;
  UMPDOBJ::Thunk(this, v10, 0x30u, 0LL, v9);
}
