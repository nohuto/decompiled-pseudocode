/*
 * XREFs of LdrpCheckForRetryLoading @ 0x18002ADB8
 * Callers:
 *     LdrpMinimalMapModule @ 0x180021EDC (LdrpMinimalMapModule.c)
 *     LdrpMapDllNtFileName @ 0x18002ABA0 (LdrpMapDllNtFileName.c)
 * Callees:
 *     RtlLeaveCriticalSection @ 0x180014020 (RtlLeaveCriticalSection.c)
 *     RtlEnterCriticalSection @ 0x180014370 (RtlEnterCriticalSection.c)
 *     RtlRbInsertNodeEx @ 0x18001F940 (RtlRbInsertNodeEx.c)
 *     LdrpCompareModuleName @ 0x180054144 (LdrpCompareModuleName.c)
 */

bool __fastcall LdrpCheckForRetryLoading(__int64 a1, char a2)
{
  bool v2; // bl
  __int64 v5; // r13
  char v6; // al
  unsigned __int64 v7; // rdi
  unsigned __int64 v8; // rsi
  int v9; // r14d
  int v10; // eax
  unsigned __int64 v11; // rax
  int v12; // esi
  unsigned __int64 v13; // rax
  _QWORD *v14; // rcx
  _QWORD *v15; // rax

  v2 = 0;
  if ( !*(_QWORD *)(a1 + 168) && (*(_DWORD *)(a1 + 32) & 0x4100000) == 0 )
  {
    v5 = *(_QWORD *)(a1 + 56);
    RtlEnterCriticalSection((__int64)&LdrpWorkQueueLock);
    v6 = BYTE8(LdrpRetryingModuleIndex);
    v7 = LdrpRetryingModuleIndex;
    if ( (BYTE8(LdrpRetryingModuleIndex) & 1) != 0 )
    {
      if ( (_QWORD)LdrpRetryingModuleIndex )
        v8 = (unsigned __int64)&LdrpRetryingModuleIndex ^ LdrpRetryingModuleIndex;
      else
        v8 = 0LL;
    }
    else
    {
      v8 = LdrpRetryingModuleIndex;
    }
    v9 = BYTE8(LdrpRetryingModuleIndex) & 1;
    if ( v8 )
    {
      do
      {
        v10 = LdrpCompareModuleName(v5, v8);
        if ( v10 >= 0 )
        {
          if ( v10 <= 0 )
            break;
          v11 = *(_QWORD *)(v8 + 8);
        }
        else
        {
          v11 = *(_QWORD *)v8;
        }
        if ( v9 && v11 )
          v8 ^= v11;
        else
          v8 = v11;
      }
      while ( v8 );
      if ( v8 )
        goto LABEL_33;
      v6 = BYTE8(LdrpRetryingModuleIndex);
      v7 = LdrpRetryingModuleIndex;
    }
    if ( !a2 )
    {
LABEL_41:
      RtlLeaveCriticalSection((__int64)&LdrpWorkQueueLock);
      return v2;
    }
    if ( (v6 & 1) != 0 )
    {
      if ( v7 )
        v7 ^= (unsigned __int64)&LdrpRetryingModuleIndex;
      else
        v7 = 0LL;
    }
    v12 = v6 & 1;
    if ( v7 )
    {
      while ( 1 )
      {
        if ( (int)LdrpCompareModuleName(v5, v7) < 0 )
        {
          v13 = *(_QWORD *)v7;
          if ( v12 )
          {
            if ( !v13 )
              break;
            v13 ^= v7;
          }
          if ( !v13 )
            break;
        }
        else
        {
          v13 = *(_QWORD *)(v7 + 8);
          if ( v12 )
          {
            if ( !v13 )
              goto LABEL_31;
            v13 ^= v7;
          }
          if ( !v13 )
          {
LABEL_31:
            v2 = 1;
            break;
          }
        }
        v7 = v13;
      }
    }
    RtlRbInsertNodeEx((unsigned __int64)&LdrpRetryingModuleIndex, v7, v2, (_QWORD *)(v5 + 224));
LABEL_33:
    *(_DWORD *)(a1 + 32) |= 0x100000u;
    v14 = (_QWORD *)qword_180165278;
    v15 = (_QWORD *)(a1 + 64);
    if ( *(__int64 **)qword_180165278 != &LdrpRetryQueue )
      __fastfail(3u);
    *v15 = &LdrpRetryQueue;
    v2 = 1;
    *(_QWORD *)(a1 + 72) = v14;
    *v14 = v15;
    qword_180165278 = a1 + 64;
    goto LABEL_41;
  }
  return v2;
}
