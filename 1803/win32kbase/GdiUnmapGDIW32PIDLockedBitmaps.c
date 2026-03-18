/*
 * XREFs of GdiUnmapGDIW32PIDLockedBitmaps @ 0x1C00346E0
 * Callers:
 *     GdiProcessCallout @ 0x1C0060F90 (GdiProcessCallout.c)
 * Callees:
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C00334E0 (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     ??0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C0033588 (--0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     EngAcquireSemaphore @ 0x1C0033690 (EngAcquireSemaphore.c)
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C005AB30 (EtwTraceGreLockReleaseSemaphore.c)
 */

__int64 __fastcall GdiUnmapGDIW32PIDLockedBitmaps(__int64 a1)
{
  __int64 v2; // r8
  _QWORD *v3; // rbx
  _QWORD *v4; // rdx
  __int64 result; // rax
  _QWORD *v6; // rax
  _QWORD *v7; // rcx
  _QWORD *v8; // rax
  struct _ERESOURCE *v9; // [rsp+30h] [rbp+8h] BYREF

  DYNAMICMODECHANGESHARELOCK::DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)&v9);
  v9 = (struct _ERESOURCE *)ghsemMapRot;
  EngAcquireSemaphore(ghsemMapRot);
  v3 = (_QWORD *)(a1 + 224);
  v4 = (_QWORD *)*v3;
  if ( *v3 )
  {
    while ( v4 != v3 )
    {
      v6 = v4;
      v7 = v4;
      v4 = (_QWORD *)*v4;
      *(v6 - 33) = 0LL;
      *(v6 - 34) = 0LL;
      v2 = *v7;
      if ( *(_QWORD **)(*v7 + 8LL) != v7 || (v8 = (_QWORD *)v7[1], (_QWORD *)*v8 != v7) )
        __fastfail(3u);
      *v8 = v2;
      *(_QWORD *)(v2 + 8) = v8;
      v7[1] = v7;
      *v7 = v7;
    }
  }
  v3[1] = v3;
  *v3 = v3;
  SEMOBJ::vUnlock(&v9, (__int64)v4, v2);
  result = EtwTraceGreLockReleaseSemaphore(L"ghsemDynamicModeChange", ghsemDynamicModeChange);
  if ( ghsemDynamicModeChange )
  {
    ExReleaseResourceAndLeaveCriticalRegion(ghsemDynamicModeChange);
    return PsLeavePriorityRegion();
  }
  return result;
}
