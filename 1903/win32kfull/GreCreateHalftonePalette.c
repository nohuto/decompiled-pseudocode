/*
 * XREFs of GreCreateHalftonePalette @ 0x1C02B021C
 * Callers:
 *     CreateDIBPalette @ 0x1C020E0B4 (CreateDIBPalette.c)
 * Callees:
 *     ??1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C0032BB8 (--1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ??0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C0032BFC (--0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ?pDevHTInfo@PDEVOBJ@@QEAAPEAXXZ @ 0x1C0036D30 (-pDevHTInfo@PDEVOBJ@@QEAAPEAXXZ.c)
 *     ?bEnableHalftone@PDEVOBJ@@QEAAHPEAUtagCOLORADJUSTMENT@@@Z @ 0x1C003BBA0 (-bEnableHalftone@PDEVOBJ@@QEAAHPEAUtagCOLORADJUSTMENT@@@Z.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C0061358 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C0079AE0 (--1DCOBJ@@QEAA@XZ.c)
 *     ??1EPALOBJ@@QEAA@XZ @ 0x1C00AD814 (--1EPALOBJ@@QEAA@XZ.c)
 *     ??0EPALOBJ@@QEAA@PEAUHPALETTE__@@@Z @ 0x1C00EE508 (--0EPALOBJ@@QEAA@PEAUHPALETTE__@@@Z.c)
 *     ??1NEEDGRELOCK@@QEAA@XZ @ 0x1C026AC68 (--1NEEDGRELOCK@@QEAA@XZ.c)
 *     ??1SEMOBJ@@QEAA@XZ @ 0x1C026B294 (--1SEMOBJ@@QEAA@XZ.c)
 */

__int64 __fastcall GreCreateHalftonePalette(HDC a1)
{
  __int64 v1; // rbx
  __int64 v2; // rdx
  __int64 v3; // r8
  __int64 v4; // r9
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // r9
  HPALETTE *v8; // rax
  unsigned int v9; // r8d
  const unsigned int *v10; // r9
  DYNAMICMODECHANGESHARELOCK *v11; // rcx
  _BYTE v13[8]; // [rsp+50h] [rbp-30h] BYREF
  __int64 *v14; // [rsp+58h] [rbp-28h] BYREF
  int v15; // [rsp+60h] [rbp-20h]
  _QWORD v16[3]; // [rsp+68h] [rbp-18h] BYREF
  __int64 v17; // [rsp+98h] [rbp+18h] BYREF
  __int64 v18; // [rsp+A0h] [rbp+20h] BYREF
  __int64 v19; // [rsp+A8h] [rbp+28h] BYREF

  DCOBJ::DCOBJ((DCOBJ *)v16, a1);
  v1 = 0LL;
  if ( v16[0] )
  {
    v18 = *(_QWORD *)(v16[0] + 48LL);
    DYNAMICMODECHANGESHARELOCK::DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)&v17);
    NEEDGRELOCK::vLock((NEEDGRELOCK *)v13, (struct PDEVOBJ *)&v18);
    v19 = ghsemHT;
    GreAcquireSemaphore(ghsemHT);
    if ( PDEVOBJ::pDevHTInfo((PDEVOBJ *)&v18, v2, v3, v4)
      || (unsigned int)PDEVOBJ::bEnableHalftone((PDEVOBJ *)&v18, 0LL) )
    {
      v8 = (HPALETTE *)PDEVOBJ::pDevHTInfo((PDEVOBJ *)&v18, v5, v6, v7);
      EPALOBJ::EPALOBJ((EPALOBJ *)&v17, *v8);
      v15 = 0;
      v14 = 0LL;
      if ( v17 && (v9 = *(_DWORD *)(v17 + 28)) != 0 )
      {
        v10 = *(const unsigned int **)(v17 + 112);
      }
      else
      {
        v9 = logDefaultPal[1];
        v10 = (const unsigned int *)&logDefaultPal[2];
      }
      if ( PALMEMOBJ::bCreatePalette((PALMEMOBJ *)&v14, 1u, v9, v10, 0, 0, 0, 0x100500u, 0) )
      {
        v15 = 1;
        v1 = *v14;
      }
      PALMEMOBJ::~PALMEMOBJ((PALMEMOBJ *)&v14);
      EPALOBJ::~EPALOBJ((EPALOBJ *)&v17);
    }
    SEMOBJ::~SEMOBJ((SEMOBJ *)&v19);
    NEEDGRELOCK::~NEEDGRELOCK((NEEDGRELOCK *)v13);
    DYNAMICMODECHANGESHARELOCK::~DYNAMICMODECHANGESHARELOCK(v11);
  }
  else
  {
    EngSetLastError(6u);
  }
  DCOBJ::~DCOBJ((DCOBJ *)v16);
  return v1;
}
