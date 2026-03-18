/*
 * XREFs of vRemoveAllInactiveRFONTs @ 0x1C028C03C
 * Callers:
 *     ?bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z @ 0x1C005FD30 (-bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z.c)
 * Callees:
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C004899C (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     ?prfntInactive@PDEVOBJ@@QEAAPEAVRFONT@@PEAV2@@Z @ 0x1C0080A24 (-prfntInactive@PDEVOBJ@@QEAAPEAVRFONT@@PEAV2@@Z.c)
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x1C008471C (--1RFONTOBJ@@QEAA@XZ.c)
 *     ?prfntInactive@PDEVOBJ@@QEAAPEAVRFONT@@XZ @ 0x1C00855AC (-prfntInactive@PDEVOBJ@@QEAAPEAVRFONT@@XZ.c)
 *     ?vDeleteRFONT@RFONTOBJ@@QEAAXPEAVPDEVOBJ@@PEAVPFFOBJ@@H@Z @ 0x1C00869C0 (-vDeleteRFONT@RFONTOBJ@@QEAAXPEAVPDEVOBJ@@PEAVPFFOBJ@@H@Z.c)
 *     ?vRemove@RFONTOBJ@@QEAAXPEAPEAVRFONT@@W4_RFL_TYPE@@@Z @ 0x1C0086C2C (-vRemove@RFONTOBJ@@QEAAXPEAPEAVRFONT@@W4_RFL_TYPE@@@Z.c)
 *     __security_check_cookie @ 0x1C015AF60 (__security_check_cookie.c)
 *     memset @ 0x1C0163640 (memset.c)
 */

void __fastcall vRemoveAllInactiveRFONTs(__int64 a1)
{
  __int64 v2; // rsi
  struct RFONT *v3; // r14
  struct RFONT *v4; // rbx
  __int64 v5; // rbx
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
    v4 = v3;
    v3 = (struct RFONT *)*((_QWORD *)v3 + 84);
    v2 = (unsigned int)(v2 + 1);
    v12 = (struct _FONTOBJ *)v4;
    v11 = PDEVOBJ::prfntInactive((PDEVOBJ *)&v14);
    RFONTOBJ::vRemove((__int64)&v12, (unsigned __int64 *)&v11, 1);
    PDEVOBJ::prfntInactive((PDEVOBJ *)&v14, v11);
    v5 = *((_QWORD *)v4 + 16);
    v11 = *(struct RFONT **)(v5 + 72);
    RFONTOBJ::vRemove((__int64)&v12, (unsigned __int64 *)&v11, 0);
    v6 = v11;
    --*(_DWORD *)(v5 + 68);
    v12 = 0LL;
    *(_QWORD *)(v5 + 72) = v6;
    RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v12);
  }
  if ( (*(_DWORD *)(a1 + 40) & 0x800000) != 0 )
    *(_DWORD *)(*(_QWORD *)(a1 + 3520) + 1536LL) = 0;
  else
    *(_DWORD *)(a1 + 1536) = 0;
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
