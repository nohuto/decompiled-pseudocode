/*
 * XREFs of GreSetPaletteEntries @ 0x1C0287A50
 * Callers:
 *     <none>
 * Callees:
 *     ??0EPALOBJ@@QEAA@PEAUHPALETTE__@@@Z @ 0x1C00092F8 (--0EPALOBJ@@QEAA@PEAUHPALETTE__@@@Z.c)
 *     ??0MDCOBJA@@QEAA@PEAUHDC__@@H@Z @ 0x1C0009328 (--0MDCOBJA@@QEAA@PEAUHDC__@@H@Z.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C0088FF8 (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     ??1MDCOBJA@@QEAA@XZ @ 0x1C0139274 (--1MDCOBJA@@QEAA@XZ.c)
 *     ?ulSetEntries@XEPALOBJ@@QEAAKKKPEBUtagPALETTEENTRY@@@Z @ 0x1C028B234 (-ulSetEntries@XEPALOBJ@@QEAAKKKPEBUtagPALETTEENTRY@@@Z.c)
 */

__int64 __fastcall GreSetPaletteEntries(HPALETTE a1, unsigned int a2, unsigned int a3, struct tagPALETTEENTRY *a4)
{
  unsigned int v7; // r14d
  __int64 v8; // rbx
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rdx
  __int64 v14; // rcx
  HDC v15; // rsi
  unsigned int CurrentProcessId; // edi
  __int64 v17; // rdx
  __int64 v19; // [rsp+28h] [rbp-30h] BYREF
  __int64 v20; // [rsp+30h] [rbp-28h] BYREF
  _QWORD v21[4]; // [rsp+38h] [rbp-20h] BYREF

  v7 = 0;
  EPALOBJ::EPALOBJ((EPALOBJ *)&v19, a1);
  v8 = v19;
  if ( v19 )
  {
    v20 = ghsemPalette;
    GreAcquireSemaphore(ghsemPalette);
    v7 = XEPALOBJ::ulSetEntries((XEPALOBJ *)&v19, a2, a3, a4);
    GreAcquireHmgrSemaphore(v10, v9, v11, v12);
    v15 = *(HDC *)(v8 + 40);
    while ( v15 )
    {
      MDCOBJA::MDCOBJA((MDCOBJA *)v21, v15);
      CurrentProcessId = (unsigned int)PsGetCurrentProcessId();
      if ( (unsigned int)GreGetObjectOwner(v15, 1LL) == (CurrentProcessId & 0xFFFFFFFC) )
      {
        v17 = v21[0];
        *(_DWORD *)(*(_QWORD *)(v21[0] + 80LL) + 8LL) |= 0xFu;
      }
      else
      {
        v17 = v21[0];
        *(_DWORD *)(v21[0] + 324LL) |= 1u;
      }
      v15 = *(HDC *)(v17 + 1392);
      MDCOBJA::~MDCOBJA((MDCOBJA *)v21);
    }
    GreReleaseHmgrSemaphore(v14, v13);
    SEMOBJ::vUnlock((SEMOBJ *)&v20);
    if ( v8 )
      DEC_SHARE_REF_CNT(v8);
  }
  return v7;
}
