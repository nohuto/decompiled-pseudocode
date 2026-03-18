/*
 * XREFs of GreCreateHalftonePalette @ 0x1C02AFD6C
 * Callers:
 *     CreateDIBPalette @ 0x1C020DE04 (CreateDIBPalette.c)
 * Callees:
 *     ??1EPALOBJ@@QEAA@XZ @ 0x1C004E634 (--1EPALOBJ@@QEAA@XZ.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C00AB2B4 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C00AD630 (--1DCOBJ@@QEAA@XZ.c)
 *     ??0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C00BFEF8 (--0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ??1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C00BFF44 (--1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ?pDevHTInfo@PDEVOBJ@@QEAAPEAXXZ @ 0x1C00C144C (-pDevHTInfo@PDEVOBJ@@QEAAPEAXXZ.c)
 *     ?bEnableHalftone@PDEVOBJ@@QEAAHPEAUtagCOLORADJUSTMENT@@@Z @ 0x1C00C62BC (-bEnableHalftone@PDEVOBJ@@QEAAHPEAUtagCOLORADJUSTMENT@@@Z.c)
 *     ??0EPALOBJ@@QEAA@PEAUHPALETTE__@@@Z @ 0x1C00CD28C (--0EPALOBJ@@QEAA@PEAUHPALETTE__@@@Z.c)
 *     ??1NEEDGRELOCK@@QEAA@XZ @ 0x1C026A538 (--1NEEDGRELOCK@@QEAA@XZ.c)
 *     ??1SEMOBJ@@QEAA@XZ @ 0x1C026AB64 (--1SEMOBJ@@QEAA@XZ.c)
 */

__int64 __fastcall GreCreateHalftonePalette(HDC a1)
{
  __int64 v1; // rbx
  __int64 v2; // rdx
  __int64 v3; // r8
  __int64 v4; // rdx
  __int64 v5; // r8
  HPALETTE *v6; // rax
  unsigned int v7; // r8d
  const unsigned int *v8; // r9
  DYNAMICMODECHANGESHARELOCK *v9; // rcx
  _BYTE v11[8]; // [rsp+50h] [rbp-30h] BYREF
  __int64 *v12; // [rsp+58h] [rbp-28h] BYREF
  int v13; // [rsp+60h] [rbp-20h]
  _QWORD v14[3]; // [rsp+68h] [rbp-18h] BYREF
  __int64 v15; // [rsp+98h] [rbp+18h] BYREF
  __int64 v16; // [rsp+A0h] [rbp+20h] BYREF
  __int64 v17; // [rsp+A8h] [rbp+28h] BYREF

  DCOBJ::DCOBJ((DCOBJ *)v14, a1);
  v1 = 0LL;
  if ( v14[0] )
  {
    v16 = *(_QWORD *)(v14[0] + 48LL);
    DYNAMICMODECHANGESHARELOCK::DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)&v15);
    NEEDGRELOCK::vLock((NEEDGRELOCK *)v11, (struct PDEVOBJ *)&v16);
    v17 = ghsemHT;
    GreAcquireSemaphore(ghsemHT);
    if ( PDEVOBJ::pDevHTInfo((PDEVOBJ *)&v16, v2, v3) || (unsigned int)PDEVOBJ::bEnableHalftone((PDEVOBJ *)&v16, 0LL) )
    {
      v6 = (HPALETTE *)PDEVOBJ::pDevHTInfo((PDEVOBJ *)&v16, v4, v5);
      EPALOBJ::EPALOBJ((EPALOBJ *)&v15, *v6);
      v13 = 0;
      v12 = 0LL;
      if ( v15 && (v7 = *(_DWORD *)(v15 + 28)) != 0 )
      {
        v8 = *(const unsigned int **)(v15 + 112);
      }
      else
      {
        v7 = logDefaultPal[1];
        v8 = (const unsigned int *)&logDefaultPal[2];
      }
      if ( PALMEMOBJ::bCreatePalette((PALMEMOBJ *)&v12, 1u, v7, v8, 0, 0, 0, 0x100500u, 0) )
      {
        v13 = 1;
        v1 = *v12;
      }
      PALMEMOBJ::~PALMEMOBJ((PALMEMOBJ *)&v12);
      EPALOBJ::~EPALOBJ((EPALOBJ *)&v15);
    }
    SEMOBJ::~SEMOBJ((SEMOBJ *)&v17);
    NEEDGRELOCK::~NEEDGRELOCK((NEEDGRELOCK *)v11);
    DYNAMICMODECHANGESHARELOCK::~DYNAMICMODECHANGESHARELOCK(v9);
  }
  else
  {
    EngSetLastError(6u);
  }
  DCOBJ::~DCOBJ((DCOBJ *)v14);
  return v1;
}
