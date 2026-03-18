/*
 * XREFs of GreGetSystemPaletteEntries @ 0x1C02AFEF0
 * Callers:
 *     CreateScreenPalette @ 0x1C024015C (CreateScreenPalette.c)
 * Callees:
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C00AB2B4 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?vUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C00AD68C (-vUnlockFast@XDCOBJ@@QEAAXXZ.c)
 *     ??0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C00BFEF8 (--0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ??1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C00BFF44 (--1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ?ulGetEntries@XEPALOBJ@@QEAAKKKPEAUtagPALETTEENTRY@@H@Z @ 0x1C00CCB8C (-ulGetEntries@XEPALOBJ@@QEAAKKKPEAUtagPALETTEENTRY@@H@Z.c)
 */

__int64 __fastcall GreGetSystemPaletteEntries(HDC a1, unsigned int a2, unsigned int a3, struct tagPALETTEENTRY *a4)
{
  unsigned int Entries; // edi
  __int64 v8; // rbx
  DYNAMICMODECHANGESHARELOCK *v9; // rcx
  _BYTE v11[8]; // [rsp+30h] [rbp-28h] BYREF
  __int64 v12; // [rsp+38h] [rbp-20h] BYREF
  _QWORD v13[3]; // [rsp+40h] [rbp-18h] BYREF

  Entries = 0;
  DCOBJ::DCOBJ((DCOBJ *)v13, a1);
  if ( v13[0] )
  {
    v8 = *(_QWORD *)(v13[0] + 48LL);
    DYNAMICMODECHANGESHARELOCK::DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)v11);
    if ( (*(_DWORD *)(v8 + 2172) & 0x100) != 0 )
    {
      v12 = *(_QWORD *)(v8 + 1808);
      Entries = XEPALOBJ::ulGetEntries((XEPALOBJ *)&v12, a2, a3, a4, 1);
    }
    DYNAMICMODECHANGESHARELOCK::~DYNAMICMODECHANGESHARELOCK(v9);
    if ( v13[0] )
      XDCOBJ::vUnlockFast((XDCOBJ *)v13);
  }
  return Entries;
}
