/*
 * XREFs of ?bCleanupWorker@UMPDOBJ@@QEAAHXZ @ 0x1C00DC064
 * Callers:
 *     NtGdiSetPUMPDOBJ @ 0x1C00DBCC0 (NtGdiSetPUMPDOBJ.c)
 *     UMPDOBJ_bCleanupWrap @ 0x1C00DC050 (UMPDOBJ_bCleanupWrap.c)
 *     ??1UMPDREF@@QEAA@XZ @ 0x1C02AA25C (--1UMPDREF@@QEAA@XZ.c)
 * Callees:
 *     ?vClient@UMPDOBJ@@QEAAXPEAX@Z @ 0x1C00DC210 (-vClient@UMPDOBJ@@QEAAXPEAX@Z.c)
 *     EngDeletePath @ 0x1C0283180 (EngDeletePath.c)
 *     ?psoDest@UMPDOBJ@@QEAAHPEAPEAU_SURFOBJ@@H@Z @ 0x1C028D9C4 (-psoDest@UMPDOBJ@@QEAAHPEAPEAU_SURFOBJ@@H@Z.c)
 *     ?psoMask@UMPDOBJ@@QEAAHPEAPEAU_SURFOBJ@@H@Z @ 0x1C028D9E8 (-psoMask@UMPDOBJ@@QEAAHPEAPEAU_SURFOBJ@@H@Z.c)
 *     ?psoSrc@UMPDOBJ@@QEAAHPEAPEAU_SURFOBJ@@H@Z @ 0x1C028DA0C (-psoSrc@UMPDOBJ@@QEAAHPEAPEAU_SURFOBJ@@H@Z.c)
 */

__int64 __fastcall UMPDOBJ::bCleanupWorker(UMPDOBJ *this)
{
  __int64 result; // rax
  PATHOBJ *v3; // rcx
  void *v4; // rdx
  void *v5; // rdx
  void *v6; // rdx
  __int64 v7; // rdx
  __int64 v8; // rcx
  char v9; // [rsp+20h] [rbp-18h]
  struct _SURFOBJ *v10; // [rsp+40h] [rbp+8h] BYREF

  v9 = 17;
  result = HmgRemoveObject(*(_QWORD *)this, 0LL, 0LL, 1LL, v9, 0LL);
  if ( result )
  {
    v3 = (PATHOBJ *)*((_QWORD *)this + 30);
    if ( v3 )
      EngDeletePath(v3);
    if ( *((_DWORD *)this + 106) )
    {
      v10 = 0LL;
      v4 = (void *)*((_QWORD *)this + 8);
      if ( v4 )
      {
        UMPDOBJ::vClient((UMPDOBJ *)v3, v4);
        UMPDOBJ::psoDest(this, &v10, 0);
      }
      v5 = (void *)*((_QWORD *)this + 10);
      if ( v5 )
      {
        UMPDOBJ::vClient((UMPDOBJ *)v3, v5);
        UMPDOBJ::psoSrc(this, &v10, 0);
      }
      v6 = (void *)*((_QWORD *)this + 12);
      if ( v6 )
      {
        UMPDOBJ::vClient((UMPDOBJ *)v3, v6);
        UMPDOBJ::psoMask(this, &v10, 0);
      }
    }
    v7 = *((_QWORD *)this + 44);
    if ( v7 )
      MmUnmapViewOfSection(*((_QWORD *)this + 47), v7);
    v8 = *((_QWORD *)this + 48);
    if ( v8 )
      Win32FreePool(v8);
    return 1LL;
  }
  return result;
}
