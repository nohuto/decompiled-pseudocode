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

BOOLEAN __fastcall LdrpCheckForRetryLoading(__int64 a1, char a2)
{
  BOOLEAN v2; // bl
  __int64 v5; // r13
  $7D93978C745EB1C2D28075BAF55422B4 v6; // al
  unsigned __int64 Root; // rdi
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
    RtlEnterCriticalSection(&LdrpWorkQueueLock);
    v6 = LdrpRetryingModuleIndex.0;
    Root = (unsigned __int64)LdrpRetryingModuleIndex.Root;
    if ( (*(_BYTE *)&LdrpRetryingModuleIndex.0 & 1) != 0 )
    {
      if ( LdrpRetryingModuleIndex.Root )
        v8 = (unsigned __int64)&LdrpRetryingModuleIndex ^ (unsigned __int64)LdrpRetryingModuleIndex.Root;
      else
        v8 = 0LL;
    }
    else
    {
      v8 = (unsigned __int64)LdrpRetryingModuleIndex.Root;
    }
    v9 = *(_BYTE *)&LdrpRetryingModuleIndex.0 & 1;
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
      v6 = LdrpRetryingModuleIndex.0;
      Root = (unsigned __int64)LdrpRetryingModuleIndex.Root;
    }
    if ( !a2 )
    {
LABEL_41:
      RtlLeaveCriticalSection(&LdrpWorkQueueLock);
      return v2;
    }
    if ( (*(_BYTE *)&v6 & 1) != 0 )
    {
      if ( Root )
        Root ^= (unsigned __int64)&LdrpRetryingModuleIndex;
      else
        Root = 0LL;
    }
    v12 = *(_BYTE *)&v6 & 1;
    if ( Root )
    {
      while ( 1 )
      {
        if ( (int)LdrpCompareModuleName(v5, Root) < 0 )
        {
          v13 = *(_QWORD *)Root;
          if ( v12 )
          {
            if ( !v13 )
              break;
            v13 ^= Root;
          }
          if ( !v13 )
            break;
        }
        else
        {
          v13 = *(_QWORD *)(Root + 8);
          if ( v12 )
          {
            if ( !v13 )
              goto LABEL_31;
            v13 ^= Root;
          }
          if ( !v13 )
          {
LABEL_31:
            v2 = 1;
            break;
          }
        }
        Root = v13;
      }
    }
    RtlRbInsertNodeEx(&LdrpRetryingModuleIndex, (PRTL_BALANCED_NODE)Root, v2, (PRTL_BALANCED_NODE)(v5 + 224));
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
