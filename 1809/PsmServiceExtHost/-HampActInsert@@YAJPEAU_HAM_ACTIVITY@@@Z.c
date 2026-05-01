/*
 * XREFs of ?HampActInsert@@YAJPEAU_HAM_ACTIVITY@@@Z @ 0x180019BD0
 * Callers:
 *     ?HampActCreate@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEAU_HOST_ACTIVITY_MANAGER@@PEAU_RM_HAM_ACTIVITY_HOST@@PEAU_HAM_ACTIVITY_PROPERTIES@@KPEAPEAU_HAM_ACTIVITY@@@Z @ 0x180019E60 (-HampActCreate@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEAU_HOST_ACTIVITY_MANAGER@@PEAU_RM_HAM_ACTIVITY_HOS.c)
 * Callees:
 *     CemRcTableFindOrInsertEx @ 0x180035C60 (CemRcTableFindOrInsertEx.c)
 */

__int64 __fastcall HampActInsert(struct _HAM_ACTIVITY *a1)
{
  DWORD v2; // esi
  unsigned __int64 v3; // r15
  __int64 v4; // rbp
  int v5; // r14d
  _QWORD *Value; // rdi
  _QWORD *v7; // rdx
  __int64 v8; // r8
  __int64 v9; // rcx
  _QWORD *v10; // rcx
  _QWORD *v11; // rax
  __int64 v12; // rax
  __int64 v13; // r14
  DWORD v14; // ebp
  _QWORD *v15; // rdi
  __int64 *v16; // rcx
  __int64 v17; // rax
  __int64 **v18; // rdx
  _QWORD *v19; // rax
  bool v20; // zf
  int v21; // edi
  __int64 v22; // rsi
  _QWORD *v23; // rax

  v2 = HampLockTrackerId;
  v3 = *((_QWORD *)a1 + 4) & 0xFFFFFFFFFFFFFFFCuLL;
  v4 = *((_QWORD *)a1 + 10);
  v5 = *((_DWORD *)a1 + 28);
  if ( HampLockTrackerId != -1 )
  {
    Value = TlsGetValue(HampLockTrackerId);
    if ( (*(_QWORD *)TlsGetValue(v2) & 0xFFFFFFFFFFFFFFFEuLL) != 0 )
      __int2c();
    *Value |= 2uLL;
    ++Value[2];
  }
  RtlAcquireSRWLockExclusive(v4);
  *(_DWORD *)(v4 + 8) = GetCurrentThreadId();
  if ( (v5 & 0x80000) != 0 && *(_QWORD *)(v4 + 584) != v4 + 584 )
  {
    v21 = -1071513591;
    goto LABEL_29;
  }
  v7 = (_QWORD *)(v4 + 584);
  v8 = 0LL;
  v9 = *(_QWORD *)(v4 + 584);
  if ( v9 != v4 + 584 )
    v8 = v9 - 96;
  if ( !v8 || (*(_DWORD *)(v8 + 112) & 0x80000) == 0 )
  {
    *((_BYTE *)a1 + 548) = 1;
    if ( _InterlockedIncrement64((volatile signed __int64 *)a1 + 3) <= 1 )
      __fastfail(0xEu);
    v10 = *(_QWORD **)(v4 + 592);
    v11 = (_QWORD *)((char *)a1 + 96);
    if ( (_QWORD *)*v10 == v7 )
    {
      *((_QWORD *)a1 + 13) = v10;
      *v11 = v7;
      *v10 = v11;
      *(_QWORD *)(v4 + 592) = v11;
      v12 = *(_QWORD *)(v4 + 632);
      if ( ((v12 & 0x2000000000000LL) == 0 || (_QWORD *)*v7 != v7)
        && (v12 & 0x4000000000000LL) != 0
        && (unsigned int)TpSetTimerEx(*(_QWORD *)(v4 + 800), 0LL, 0LL, 0LL) )
      {
        *(_QWORD *)(v4 + 632) &= ~0x4000000000000uLL;
      }
      v13 = *((_QWORD *)a1 + 8);
      if ( !v13 )
        goto LABEL_28;
      v14 = HampLockTrackerId;
      if ( HampLockTrackerId != -1 )
      {
        v15 = TlsGetValue(HampLockTrackerId);
        if ( (*(_QWORD *)TlsGetValue(v14) & 0xFFFFFFFFFFFFFE00uLL) != 0 )
          __int2c();
        *v15 |= 0x200uLL;
        ++v15[10];
      }
      RtlAcquireSRWLockExclusive(v13 + 24);
      *(_DWORD *)(v13 + 32) = GetCurrentThreadId();
      if ( _InterlockedIncrement64((volatile signed __int64 *)a1 + 3) <= 1 )
        __fastfail(0xEu);
      v16 = (__int64 *)((char *)a1 + 48);
      v17 = *((_QWORD *)a1 + 8) + 40LL;
      v18 = *(__int64 ***)(*((_QWORD *)a1 + 8) + 48LL);
      if ( *v18 == (__int64 *)v17 )
      {
        *v16 = v17;
        *((_QWORD *)a1 + 7) = v18;
        *v18 = v16;
        *(_QWORD *)(v17 + 8) = v16;
        if ( HampLockTrackerId != -1 )
        {
          v19 = TlsGetValue(HampLockTrackerId);
          if ( (*(_DWORD *)v19 & 0x200LL) == 0 )
            __int2c();
          v20 = v19[10]-- == 1LL;
          if ( v20 )
            *v19 &= ~0x200uLL;
        }
        *(_DWORD *)(v13 + 32) = 0;
        RtlReleaseSRWLockExclusive(v13 + 24);
LABEL_28:
        v21 = 0;
        goto LABEL_29;
      }
    }
    __fastfail(3u);
  }
  v21 = -1071513591;
LABEL_29:
  v22 = *((_QWORD *)a1 + 10);
  if ( HampLockTrackerId != -1 )
  {
    v23 = TlsGetValue(HampLockTrackerId);
    if ( (*(_BYTE *)v23 & 2) == 0 )
      __int2c();
    v20 = v23[2]-- == 1LL;
    if ( v20 )
      *v23 &= ~2uLL;
  }
  *(_DWORD *)(v22 + 8) = 0;
  RtlReleaseSRWLockExclusive(v22);
  if ( v21 >= 0 )
    CemRcTableFindOrInsertEx(v3, (_DWORD)a1 + 40, (unsigned int)HampActCompareByHandle, (_DWORD)a1);
  return (unsigned int)v21;
}
