/*
 * XREFs of GreCreateHalftonePalette @ 0x1C0287704
 * Callers:
 *     CreateDIBPalette @ 0x1C01D3448 (CreateDIBPalette.c)
 * Callees:
 *     ??0EPALOBJ@@QEAA@PEAUHPALETTE__@@@Z @ 0x1C00092F8 (--0EPALOBJ@@QEAA@PEAUHPALETTE__@@@Z.c)
 *     ??0MDCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C0078C50 (--0MDCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C0078C80 (--1DCOBJ@@QEAA@XZ.c)
 *     ??0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C007A0B0 (--0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ??1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C007A0F0 (--1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ?pDevHTInfo@PDEVOBJ@@QEAAPEAXXZ @ 0x1C00CF084 (-pDevHTInfo@PDEVOBJ@@QEAAPEAXXZ.c)
 *     ?bEnableHalftone@PDEVOBJ@@QEAAHPEAUtagCOLORADJUSTMENT@@@Z @ 0x1C00CF134 (-bEnableHalftone@PDEVOBJ@@QEAAHPEAUtagCOLORADJUSTMENT@@@Z.c)
 *     ??1EPALOBJ@@QEAA@XZ @ 0x1C00DCEC8 (--1EPALOBJ@@QEAA@XZ.c)
 *     ??1SEMOBJ@@QEAA@XZ @ 0x1C0197020 (--1SEMOBJ@@QEAA@XZ.c)
 *     ??1NEEDGRELOCK@@QEAA@XZ @ 0x1C01970F0 (--1NEEDGRELOCK@@QEAA@XZ.c)
 */

__int64 __fastcall GreCreateHalftonePalette(HDC a1)
{
  __int64 v1; // rbx
  __int64 v2; // rdx
  __int64 v3; // rdx
  HPALETTE *v4; // rax
  unsigned int v5; // r8d
  unsigned int *v6; // r9
  DYNAMICMODECHANGESHARELOCK *v7; // rcx
  _BYTE v9[8]; // [rsp+50h] [rbp-30h] BYREF
  __int64 *v10; // [rsp+58h] [rbp-28h] BYREF
  int v11; // [rsp+60h] [rbp-20h]
  _QWORD v12[3]; // [rsp+68h] [rbp-18h] BYREF
  __int64 v13; // [rsp+98h] [rbp+18h] BYREF
  __int64 v14; // [rsp+A0h] [rbp+20h] BYREF
  __int64 v15; // [rsp+A8h] [rbp+28h] BYREF

  MDCOBJ::MDCOBJ((MDCOBJ *)v12, a1);
  v1 = 0LL;
  if ( v12[0] )
  {
    v14 = *(_QWORD *)(v12[0] + 48LL);
    DYNAMICMODECHANGESHARELOCK::DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)&v13);
    NEEDGRELOCK::vLock((NEEDGRELOCK *)v9, (struct PDEVOBJ *)&v14);
    v15 = ghsemHT;
    GreAcquireSemaphore(ghsemHT);
    if ( PDEVOBJ::pDevHTInfo((PDEVOBJ *)&v14, v2) || (unsigned int)PDEVOBJ::bEnableHalftone((PDEVOBJ *)&v14, 0LL) )
    {
      v4 = (HPALETTE *)PDEVOBJ::pDevHTInfo((PDEVOBJ *)&v14, v3);
      EPALOBJ::EPALOBJ((EPALOBJ *)&v13, *v4);
      v11 = 0;
      v10 = 0LL;
      if ( v13 && (v5 = *(_DWORD *)(v13 + 28)) != 0 )
      {
        v6 = *(unsigned int **)(v13 + 112);
      }
      else
      {
        v5 = logDefaultPal[1];
        v6 = (unsigned int *)&logDefaultPal[2];
      }
      if ( PALMEMOBJ::bCreatePalette((PALMEMOBJ *)&v10, 1u, v5, v6, 0, 0, 0, 0x100500u, 0) )
      {
        v11 = 1;
        v1 = *v10;
      }
      PALMEMOBJ::~PALMEMOBJ((PALMEMOBJ *)&v10);
      EPALOBJ::~EPALOBJ((EPALOBJ *)&v13);
    }
    SEMOBJ::~SEMOBJ((SEMOBJ *)&v15);
    NEEDGRELOCK::~NEEDGRELOCK((NEEDGRELOCK *)v9);
    DYNAMICMODECHANGESHARELOCK::~DYNAMICMODECHANGESHARELOCK(v7);
  }
  else
  {
    EngSetLastError(6u);
  }
  DCOBJ::~DCOBJ((DCOBJ *)v12);
  return v1;
}
