/*
 * XREFs of ?bCleanupWorker@UMPDOBJ@@QEAAHXZ @ 0x1C00792B4
 * Callers:
 *     NtGdiSetPUMPDOBJ @ 0x1C0078F10 (NtGdiSetPUMPDOBJ.c)
 *     UMPDOBJ_bCleanupWrap @ 0x1C00792A0 (UMPDOBJ_bCleanupWrap.c)
 *     ??1UMPDREF@@QEAA@XZ @ 0x1C02AA70C (--1UMPDREF@@QEAA@XZ.c)
 * Callees:
 *     ?vClient@UMPDOBJ@@QEAAXPEAX@Z @ 0x1C007A1A0 (-vClient@UMPDOBJ@@QEAAXPEAX@Z.c)
 *     EngDeletePath @ 0x1C0283840 (EngDeletePath.c)
 */

__int64 __fastcall UMPDOBJ::bCleanupWorker(UMPDOBJ *this)
{
  __int64 result; // rax
  PATHOBJ *v3; // rcx
  __int64 v4; // rdx
  __int64 v5; // rcx
  void *v6; // rdx
  void *v7; // rdx
  void *v8; // rdx

  result = HmgRemoveObject(*(_QWORD *)this, 0LL, 0LL, 1LL, 17, 0LL);
  if ( result )
  {
    v3 = (PATHOBJ *)*((_QWORD *)this + 30);
    if ( v3 )
      EngDeletePath(v3);
    if ( *((_DWORD *)this + 106) )
    {
      v6 = (void *)*((_QWORD *)this + 8);
      if ( v6 )
        UMPDOBJ::vClient((UMPDOBJ *)v3, v6);
      v7 = (void *)*((_QWORD *)this + 10);
      if ( v7 )
        UMPDOBJ::vClient((UMPDOBJ *)v3, v7);
      v8 = (void *)*((_QWORD *)this + 12);
      if ( v8 )
        UMPDOBJ::vClient((UMPDOBJ *)v3, v8);
    }
    v4 = *((_QWORD *)this + 44);
    if ( v4 )
      MmUnmapViewOfSection(*((_QWORD *)this + 47), v4);
    v5 = *((_QWORD *)this + 48);
    if ( v5 )
      Win32FreePool(v5);
    return 1LL;
  }
  return result;
}
