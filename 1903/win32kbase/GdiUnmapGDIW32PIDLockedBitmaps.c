/*
 * XREFs of GdiUnmapGDIW32PIDLockedBitmaps @ 0x1C0080300
 * Callers:
 *     GdiProcessCallout @ 0x1C007FB20 (GdiProcessCallout.c)
 * Callees:
 *     EngAcquireSemaphore @ 0x1C0014600 (EngAcquireSemaphore.c)
 *     ??0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C00151C0 (--0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C0018218 (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C0077760 (EtwTraceGreLockReleaseSemaphore.c)
 */

__int64 __fastcall GdiUnmapGDIW32PIDLockedBitmaps(__int64 a1)
{
  __int64 **v2; // r8
  __int64 **v3; // rbx
  __int64 *v4; // rdx
  __int64 v5; // r8
  __int64 result; // rax
  __int64 v7; // rcx
  __int64 *v8; // rax
  __int64 *v9; // rcx
  __int64 v10; // rax
  struct _ERESOURCE *v11; // [rsp+30h] [rbp+8h] BYREF

  DYNAMICMODECHANGESHARELOCK::DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)&v11);
  v11 = (struct _ERESOURCE *)ghsemMapRot;
  EngAcquireSemaphore(ghsemMapRot);
  v3 = (__int64 **)(a1 + 224);
  v4 = *v3;
  if ( *v3 )
  {
    while ( v4 != (__int64 *)v3 )
    {
      v8 = v4;
      v9 = v4;
      v4 = (__int64 *)*v4;
      *(v8 - 33) = 0LL;
      *(v8 - 34) = 0LL;
      v10 = *v8;
      if ( *(__int64 **)(v10 + 8) != v9 || (v2 = (__int64 **)v9[1], *v2 != v9) )
        __fastfail(3u);
      *v2 = (__int64 *)v10;
      *(_QWORD *)(v10 + 8) = v2;
      v9[1] = (__int64)v9;
      *v9 = (__int64)v9;
    }
  }
  v3[1] = (__int64 *)v3;
  *v3 = (__int64 *)v3;
  SEMOBJ::vUnlock(&v11, (__int64)v4, (__int64)v2);
  result = EtwTraceGreLockReleaseSemaphore((__int64)L"ghsemDynamicModeChange", (__int64)ghsemDynamicModeChange, v5);
  if ( ghsemDynamicModeChange )
  {
    ExReleaseResourceAndLeaveCriticalRegion(ghsemDynamicModeChange);
    return PsLeavePriorityRegion(v7);
  }
  return result;
}
