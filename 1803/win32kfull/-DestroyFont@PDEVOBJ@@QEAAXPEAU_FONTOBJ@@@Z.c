/*
 * XREFs of ?DestroyFont@PDEVOBJ@@QEAAXPEAU_FONTOBJ@@@Z @ 0x1C00CE28C
 * Callers:
 *     ?vDeleteRFONT@RFONTOBJ@@QEAAXPEAVPDEVOBJ@@PEAVPFFOBJ@@H@Z @ 0x1C0088DC8 (-vDeleteRFONT@RFONTOBJ@@QEAAXPEAVPDEVOBJ@@PEAVPFFOBJ@@H@Z.c)
 *     ?MulDestroyFont@@YAXPEAU_FONTOBJ@@@Z @ 0x1C0272AC0 (-MulDestroyFont@@YAXPEAU_FONTOBJ@@@Z.c)
 *     ?vDestroyFont@RFONTOBJ@@QEAAXH@Z @ 0x1C0278498 (-vDestroyFont@RFONTOBJ@@QEAAXH@Z.c)
 * Callees:
 *     ??1ATTACHOBJ@@QEAA@XZ @ 0x1C0081724 (--1ATTACHOBJ@@QEAA@XZ.c)
 *     ?Initialize@ATTACHOBJ@@QEAAXPEAVPDEVOBJ@@@Z @ 0x1C0081758 (-Initialize@ATTACHOBJ@@QEAAXPEAVPDEVOBJ@@@Z.c)
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x1C0088BE8 (--1RFONTOBJ@@QEAA@XZ.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C0088FF8 (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     UnmapPrintKView @ 0x1C00FF6D0 (UnmapPrintKView.c)
 *     __security_check_cookie @ 0x1C0139660 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C013D370 (_guard_dispatch_icall_nop.c)
 */

void __fastcall PDEVOBJ::DestroyFont(PDEVOBJ *this, struct _FONTOBJ *a2)
{
  int v4; // ebx
  void (__fastcall *v5)(struct _FONTOBJ *); // rbx
  __int64 v6; // [rsp+20h] [rbp-88h] BYREF
  __int64 v7; // [rsp+28h] [rbp-80h] BYREF
  int v8; // [rsp+30h] [rbp-78h]
  struct _KAPC_STATE ApcState; // [rsp+40h] [rbp-68h] BYREF
  __int64 v10; // [rsp+78h] [rbp-30h]
  int v11; // [rsp+80h] [rbp-28h]
  char v12; // [rsp+84h] [rbp-24h]

  v8 = 0;
  v6 = ghsemPublicPFT;
  GreAcquireSemaphore(ghsemPublicPFT);
  v4 = *((_DWORD *)a2[1].pvConsumer + 17);
  SEMOBJ::vUnlock((SEMOBJ *)&v6);
  if ( v4 == 1 )
    UnmapPrintKView(*((_QWORD *)a2[1].pvConsumer + 10));
  v5 = *(void (__fastcall **)(struct _FONTOBJ *))(*(_QWORD *)this + 3024LL);
  if ( gpepCSRSS )
  {
    v10 = 0LL;
    v11 = 0;
    v12 = 0;
    ATTACHOBJ::Initialize(&ApcState, this);
    v5(a2);
    ATTACHOBJ::~ATTACHOBJ(&ApcState);
  }
  v7 = 0LL;
  RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v7);
}
