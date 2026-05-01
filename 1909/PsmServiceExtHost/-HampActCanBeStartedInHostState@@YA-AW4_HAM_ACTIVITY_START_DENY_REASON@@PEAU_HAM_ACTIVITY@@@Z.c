/*
 * XREFs of ?HampActCanBeStartedInHostState@@YA?AW4_HAM_ACTIVITY_START_DENY_REASON@@PEAU_HAM_ACTIVITY@@@Z @ 0x180033B20
 * Callers:
 *     ?HampActCanBeStarted@@YA?AW4_HAM_ACTIVITY_START_DENY_REASON@@PEAU_HAM_ACTIVITY@@@Z @ 0x180033730 (-HampActCanBeStarted@@YA-AW4_HAM_ACTIVITY_START_DENY_REASON@@PEAU_HAM_ACTIVITY@@@Z.c)
 * Callees:
 *     ?HampHostGetFirstActivity@@YAPEAU_HAM_ACTIVITY@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18000E090 (-HampHostGetFirstActivity@@YAPEAU_HAM_ACTIVITY@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampHostGetNextActivity@@YAPEAU_HAM_ACTIVITY@@PEAU1@@Z @ 0x18000E0DC (-HampHostGetNextActivity@@YAPEAU_HAM_ACTIVITY@@PEAU1@@Z.c)
 */

__int64 __fastcall HampActCanBeStartedInHostState(__int64 a1)
{
  __int64 v2; // r8
  unsigned int v3; // r14d
  unsigned __int64 v4; // rdx
  unsigned __int8 v5; // cl
  int v6; // eax
  DWORD v7; // esi
  __int64 v8; // rbp
  _QWORD *Value; // rbx
  int v10; // esi
  _QWORD *v11; // rax
  struct _HAM_ACTIVITY *FirstActivity; // rax
  int v15; // r9d

  if ( (*(_BYTE *)(a1 + 544) & 8) != 0 )
    return 14LL;
  v2 = *(_QWORD *)(a1 + 80);
  v3 = 0;
  v4 = *(_QWORD *)(v2 + 648);
  v5 = (v4 >> 29) & 7;
  v6 = *(_DWORD *)(a1 + 116);
  if ( (v6 & 0x40) != 0 && v5 )
    return 8LL;
  if ( (v6 & 0x80u) != 0 && v5 > 2u )
    return 9LL;
  if ( (v6 & 0x100) != 0
    && ((v4 & 0x30000) != 0 && (v4 & 0x8000000000LL) != 0 || (v4 & 0x30000) == 0 && (v4 & 0x4000000000LL) != 0) )
  {
    return 10LL;
  }
  if ( (*(_DWORD *)(a1 + 112) & 0x40000) != 0 && ((v4 & 0x30000) != 0 || (v4 & 0x2000000000000LL) == 0) )
    return 12LL;
  if ( (v6 & 0x200) != 0 )
  {
    FirstActivity = HampHostGetFirstActivity((struct _RM_HAM_ACTIVITY_HOST *)v2);
    if ( FirstActivity )
    {
      do
        FirstActivity = HampHostGetNextActivity(FirstActivity);
      while ( FirstActivity );
      if ( v15 == 1 )
        return 13LL;
    }
  }
  v7 = HampLockTrackerId;
  v8 = *(_QWORD *)(*(_QWORD *)(v2 + 776) + 88LL);
  if ( HampLockTrackerId != -1 )
  {
    Value = TlsGetValue(HampLockTrackerId);
    if ( (*(_QWORD *)TlsGetValue(v7) & 0xFFFFFFFFFFFFFFC0uLL) != 0 )
      __int2c();
    *Value |= 0x40uLL;
    ++Value[7];
  }
  RtlAcquireSRWLockShared(v8 + 304);
  v10 = *(_DWORD *)(v8 + 348);
  if ( HampLockTrackerId != -1 )
  {
    v11 = TlsGetValue(HampLockTrackerId);
    if ( (*(_BYTE *)v11 & 0x40) == 0 )
      __int2c();
    if ( v11[7]-- == 1LL )
      *v11 &= ~0x40uLL;
  }
  RtlReleaseSRWLockShared(v8 + 304);
  if ( (*(_DWORD *)(a1 + 112) & 0x8000) != 0 && (v10 & 1) != 0 )
    return 11;
  return v3;
}
