/*
 * XREFs of ?HampActCanBeStartedInHostState@@YA?AW4_HAM_ACTIVITY_START_DENY_REASON@@PEAU_HAM_ACTIVITY@@@Z @ 0x18002D240
 * Callers:
 *     ?HampActCanBeStarted@@YA?AW4_HAM_ACTIVITY_START_DENY_REASON@@PEAU_HAM_ACTIVITY@@@Z @ 0x18002CE60 (-HampActCanBeStarted@@YA-AW4_HAM_ACTIVITY_START_DENY_REASON@@PEAU_HAM_ACTIVITY@@@Z.c)
 * Callees:
 *     ?HampHostGetFirstActivity@@YAPEAU_HAM_ACTIVITY@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180017F34 (-HampHostGetFirstActivity@@YAPEAU_HAM_ACTIVITY@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampHostGetNextActivity@@YAPEAU_HAM_ACTIVITY@@PEAU1@@Z @ 0x18002BBCC (-HampHostGetNextActivity@@YAPEAU_HAM_ACTIVITY@@PEAU1@@Z.c)
 *     ?HampHostIsTerminateQueued@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18002D4EC (-HampHostIsTerminateQueued@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 */

__int64 __fastcall HampActCanBeStartedInHostState(__int64 a1)
{
  __int64 v3; // r9
  unsigned int v4; // ebx
  unsigned __int8 v5; // al
  int v6; // edx
  struct _RM_HAM_ACTIVITY_HOST *v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r8
  __int64 v10; // r8
  struct _HAM_ACTIVITY *FirstActivity; // rax
  int v12; // r8d
  DWORD v13; // ebp
  __int64 v14; // r14
  _QWORD *Value; // rdi
  int v16; // ebp
  _QWORD *v17; // rax

  if ( (*(_BYTE *)(a1 + 544) & 8) != 0 )
    return 14LL;
  v3 = *(_QWORD *)(a1 + 80);
  v4 = 0;
  v5 = (*(_QWORD *)(v3 + 632) >> 29) & 7;
  v6 = *(_DWORD *)(a1 + 116);
  if ( (v6 & 0x40) != 0 && v5 )
    return 8LL;
  if ( (v6 & 0x80u) != 0 && v5 > 2u )
    return 9LL;
  if ( (v6 & 0x100) != 0
    && (HampHostIsTerminateQueued((struct _RM_HAM_ACTIVITY_HOST *)v3) && (v8 & 0x8000000000LL) != 0
     || !HampHostIsTerminateQueued(v7) && (v9 & 0x4000000000LL) != 0) )
  {
    return 10LL;
  }
  if ( (*(_DWORD *)(a1 + 112) & 0x40000) != 0
    && (HampHostIsTerminateQueued((struct _RM_HAM_ACTIVITY_HOST *)v3) || (v10 & 0x2000000000000LL) == 0) )
  {
    return 12LL;
  }
  if ( (v6 & 0x200) != 0 )
  {
    FirstActivity = HampHostGetFirstActivity((struct _RM_HAM_ACTIVITY_HOST *)v3);
    if ( FirstActivity )
    {
      do
        FirstActivity = HampHostGetNextActivity(FirstActivity);
      while ( FirstActivity );
      if ( v12 == 1 )
        return 13LL;
    }
  }
  v13 = HampLockTrackerId;
  v14 = *(_QWORD *)(*(_QWORD *)(v3 + 752) + 88LL);
  if ( HampLockTrackerId != -1 )
  {
    Value = TlsGetValue(HampLockTrackerId);
    if ( (*(_QWORD *)TlsGetValue(v13) & 0xFFFFFFFFFFFFFFC0uLL) != 0 )
      __int2c();
    *Value |= 0x40uLL;
    ++Value[7];
  }
  RtlAcquireSRWLockShared(v14 + 304);
  v16 = *(_DWORD *)(v14 + 360);
  if ( HampLockTrackerId != -1 )
  {
    v17 = TlsGetValue(HampLockTrackerId);
    if ( (*(_BYTE *)v17 & 0x40) == 0 )
      __int2c();
    if ( v17[7]-- == 1LL )
      *v17 &= ~0x40uLL;
  }
  RtlReleaseSRWLockShared(v14 + 304);
  if ( (*(_DWORD *)(a1 + 112) & 0x8000) != 0 && (v16 & 1) != 0 )
    return 11;
  return v4;
}
