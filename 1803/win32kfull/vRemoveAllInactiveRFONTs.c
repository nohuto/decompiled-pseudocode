/*
 * XREFs of vRemoveAllInactiveRFONTs @ 0x1C0278678
 * Callers:
 *     ?bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z @ 0x1C00877F0 (-bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z.c)
 * Callees:
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x1C0088BE8 (--1RFONTOBJ@@QEAA@XZ.c)
 *     ?vRemove@RFONTOBJ@@QEAAXPEAPEAVRFONT@@W4_RFL_TYPE@@@Z @ 0x1C0088CB4 (-vRemove@RFONTOBJ@@QEAAXPEAPEAVRFONT@@W4_RFL_TYPE@@@Z.c)
 *     ?vDeleteRFONT@RFONTOBJ@@QEAAXPEAVPDEVOBJ@@PEAVPFFOBJ@@H@Z @ 0x1C0088DC8 (-vDeleteRFONT@RFONTOBJ@@QEAAXPEAVPDEVOBJ@@PEAVPFFOBJ@@H@Z.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C0088FF8 (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     ?prfntInactive@PDEVOBJ@@QEAAPEAVRFONT@@PEAV2@@Z @ 0x1C00CE3B0 (-prfntInactive@PDEVOBJ@@QEAAPEAVRFONT@@PEAV2@@Z.c)
 *     ?prfntInactive@PDEVOBJ@@QEAAPEAVRFONT@@XZ @ 0x1C00CEF40 (-prfntInactive@PDEVOBJ@@QEAAPEAVRFONT@@XZ.c)
 *     __security_check_cookie @ 0x1C0139660 (__security_check_cookie.c)
 *     memset @ 0x1C013D6C0 (memset.c)
 */

void __fastcall vRemoveAllInactiveRFONTs(__int64 a1)
{
  __int64 v2; // rsi
  struct RFONT *v3; // r14
  struct _FONTOBJ *v4; // rbx
  PVOID pvConsumer; // rbx
  struct RFONT *v6; // rax
  __int64 v7; // rbx
  struct _FONTOBJ **v8; // rdi
  _QWORD *v9; // rsi
  struct _FONTOBJ *v10; // rax
  struct RFONT *v11; // [rsp+28h] [rbp-E0h] BYREF
  struct _FONTOBJ *v12; // [rsp+30h] [rbp-D8h] BYREF
  __int64 v13; // [rsp+38h] [rbp-D0h]
  __int64 v14; // [rsp+40h] [rbp-C8h] BYREF
  __int64 v15; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v16; // [rsp+50h] [rbp-B8h] BYREF
  _BYTE v17[32]; // [rsp+58h] [rbp-B0h] BYREF
  _QWORD v18[130]; // [rsp+78h] [rbp-90h] BYREF

  v2 = 0LL;
  v16 = ghsemPublicPFT;
  GreAcquireSemaphore(ghsemPublicPFT);
  v15 = ghsemRFONTList;
  GreAcquireSemaphore(ghsemRFONTList);
  v14 = a1;
  v3 = PDEVOBJ::prfntInactive((PDEVOBJ *)&v14);
  while ( v3 )
  {
    LODWORD(v13) = 0;
    v18[v2] = v3;
    v4 = (struct _FONTOBJ *)v3;
    v3 = (struct RFONT *)*((_QWORD *)v3 + 82);
    v2 = (unsigned int)(v2 + 1);
    v12 = v4;
    v11 = PDEVOBJ::prfntInactive((PDEVOBJ *)&v14);
    RFONTOBJ::vRemove((__int64)&v12, (unsigned __int64 *)&v11, 1);
    PDEVOBJ::prfntInactive((PDEVOBJ *)&v14, v11);
    pvConsumer = v4[1].pvConsumer;
    v11 = (struct RFONT *)*((_QWORD *)pvConsumer + 9);
    RFONTOBJ::vRemove((__int64)&v12, (unsigned __int64 *)&v11, 0);
    v6 = v11;
    --*((_DWORD *)pvConsumer + 17);
    v12 = 0LL;
    *((_QWORD *)pvConsumer + 9) = v6;
    RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v12);
  }
  if ( (*(_DWORD *)(a1 + 40) & 0x800000) != 0 )
    *(_DWORD *)(*(_QWORD *)(a1 + 3512) + 1528LL) = 0;
  else
    *(_DWORD *)(a1 + 1528) = 0;
  SEMOBJ::vUnlock((SEMOBJ *)&v15);
  SEMOBJ::vUnlock((SEMOBJ *)&v16);
  v18[v2] = 0LL;
  v7 = (unsigned int)v2;
  if ( (_DWORD)v2 )
  {
    v8 = (struct _FONTOBJ **)v18;
    v9 = v18;
    do
    {
      v10 = *v8;
      LODWORD(v13) = 0;
      v12 = v10;
      memset(v17, 0, sizeof(v17));
      PushThreadGuardedObject(v17, v9, vRestartRemoveAllInactiveRFONTs);
      RFONTOBJ::vDeleteRFONT(&v12, 0LL, 0LL, 1);
      PopThreadGuardedObject(v17);
      v12 = 0LL;
      RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v12);
      ++v9;
      ++v8;
      --v7;
    }
    while ( v7 );
  }
}
