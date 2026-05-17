/*
 * XREFs of LdrpGetAlternateResourceModuleHandleEx @ 0x1800E2828
 * Callers:
 *     LdrpAccessResourceData @ 0x180014704 (LdrpAccessResourceData.c)
 * Callees:
 *     RtlReleaseSRWLockShared @ 0x180009E40 (RtlReleaseSRWLockShared.c)
 *     RtlAcquireSRWLockShared @ 0x180009F00 (RtlAcquireSRWLockShared.c)
 *     RtlImageNtHeader @ 0x180028AB0 (RtlImageNtHeader.c)
 *     LdrpGetMappingFromCacheEntry @ 0x1800E29B4 (LdrpGetMappingFromCacheEntry.c)
 */

__int64 __fastcall LdrpGetAlternateResourceModuleHandleEx(__int64 a1, char *a2, __int64 a3, _QWORD *a4)
{
  int v7; // ebx
  int i; // ecx
  __int64 v9; // rdx
  int v10; // edi
  bool v11; // sf
  __int64 v12; // rax
  __int64 v14; // [rsp+20h] [rbp-28h]
  __int64 v15; // [rsp+28h] [rbp-20h] BYREF
  _QWORD v16[3]; // [rsp+30h] [rbp-18h] BYREF

  v16[0] = 0LL;
  v15 = 0LL;
  RtlAcquireSRWLockShared(&MuiCacheSWRLock, a2, a3, (__int64)a4);
  *a4 = 0LL;
  v7 = AlternateResourceModuleCount;
  LODWORD(v14) = AlternateResourceModuleCount;
  for ( i = AlternateResourceModuleCount - 1; i >= 0; --i )
  {
    v9 = (__int64)i << 6;
    if ( *(_QWORD *)(v9 + AlternateResourceModules + 8) == a1 )
    {
      if ( v16[0] )
      {
        v10 = v7;
        for ( HIDWORD(v14) = v7; ; HIDWORD(v14) = v10 )
        {
          v11 = v10 < 0;
          if ( v10 < 0 )
            break;
          if ( *(_QWORD *)(((__int64)v10 << 6) + AlternateResourceModules + 8) == a1
            && (unsigned __int8)LdrpGetMappingFromCacheEntry((unsigned int)v10, a3, v16, &v15, v14) )
          {
            v7 = v10;
            v11 = v10 < 0;
            break;
          }
          --v10;
        }
        if ( v11 )
          v7 = AlternateResourceModuleCount;
        break;
      }
      v16[0] = *(_QWORD *)(v9 + AlternateResourceModules + 32);
      v15 = *(_QWORD *)(v9 + AlternateResourceModules + 48);
      v7 = i;
      LODWORD(v14) = i;
    }
  }
  if ( v7 == AlternateResourceModuleCount )
  {
    v16[0] = 0LL;
  }
  else
  {
    if ( !v15 )
    {
      v12 = RtlImageNtHeader(v16[0] & 0xFFFFFFFFFFFFFFFCuLL);
      if ( v12 )
      {
        if ( *(_WORD *)(v12 + 24) == 267 || *(_WORD *)(v12 + 24) == 523 )
          v15 = *(unsigned int *)(v12 + 80);
        else
          v15 = 0LL;
      }
    }
    *a4 = v15;
  }
  RtlReleaseSRWLockShared(&MuiCacheSWRLock);
  return v16[0];
}
