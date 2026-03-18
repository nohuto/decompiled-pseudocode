/*
 * XREFs of GreSetPaletteEntries @ 0x1C02B05C0
 * Callers:
 *     <none>
 * Callees:
 *     ?vAltUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C00EE3F4 (-vAltUnlockFast@XDCOBJ@@QEAAXXZ.c)
 *     ??0EPALOBJ@@QEAA@PEAUHPALETTE__@@@Z @ 0x1C00EE508 (--0EPALOBJ@@QEAA@PEAUHPALETTE__@@@Z.c)
 *     ??0MDCOBJA@@QEAA@PEAUHDC__@@H@Z @ 0x1C00EE53C (--0MDCOBJA@@QEAA@PEAUHDC__@@H@Z.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C0107FBC (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     ?ulSetEntries@XEPALOBJ@@QEAAKKKPEBUtagPALETTEENTRY@@@Z @ 0x1C02B5BD0 (-ulSetEntries@XEPALOBJ@@QEAAKKKPEBUtagPALETTEENTRY@@@Z.c)
 */

__int64 __fastcall GreSetPaletteEntries(HPALETTE a1, unsigned int a2, unsigned int a3, struct tagPALETTEENTRY *a4)
{
  unsigned int v7; // esi
  __int64 *v8; // rbx
  __int64 v9; // rdx
  __int64 *v10; // rcx
  HDC v11; // rdi
  __int64 *v13[2]; // [rsp+20h] [rbp-28h] BYREF
  _QWORD v14[3]; // [rsp+30h] [rbp-18h] BYREF

  v7 = 0;
  EPALOBJ::EPALOBJ((EPALOBJ *)v13, a1);
  v8 = v13[0];
  if ( v13[0] )
  {
    v14[0] = ghsemPalette;
    GreAcquireSemaphore(ghsemPalette);
    v7 = XEPALOBJ::ulSetEntries((XEPALOBJ *)v13, a2, a3, a4);
    GreAcquireHmgrSemaphore();
    v11 = (HDC)v8[5];
    while ( v11 )
    {
      MDCOBJA::MDCOBJA((MDCOBJA *)v13, v11);
      v10 = v13[0];
      if ( !v13[0] )
        break;
      *((_DWORD *)v13[0] + 79) |= 0xFu;
      v11 = (HDC)v10[123];
      XDCOBJ::vAltUnlockFast(v13);
    }
    GreReleaseHmgrSemaphore(v10, v9);
    SEMOBJ::vUnlock((SEMOBJ *)v14);
    DEC_SHARE_REF_CNT(v8);
  }
  return v7;
}
