/*
 * XREFs of CcCopyBytesToUserBuffer @ 0x1400D7DE0
 * Callers:
 *     CcMapAndCopyFromCache @ 0x140687B10 (CcMapAndCopyFromCache.c)
 * Callees:
 *     MmUnlockPages @ 0x14006A390 (MmUnlockPages.c)
 *     IoFreeMdl @ 0x1400FCDD0 (IoFreeMdl.c)
 *     FsRtlIsNtstatusExpected @ 0x14012EF30 (FsRtlIsNtstatusExpected.c)
 *     memmove @ 0x1401D6880 (memmove.c)
 *     CcCopyReadExceptionFilter @ 0x14027D164 (CcCopyReadExceptionFilter.c)
 *     CcLockSystemCacheBuffer @ 0x14027D564 (CcLockSystemCacheBuffer.c)
 *     HviCopyMemory @ 0x14031B200 (HviCopyMemory.c)
 */

__int64 __fastcall CcCopyBytesToUserBuffer(char *a1, char *Src, size_t Size, char a4)
{
  unsigned int v5; // ebx
  char *v6; // r14
  unsigned int v8; // esi
  struct _MDL *v9; // r12
  __int64 v10; // rcx
  unsigned int v11; // edi
  __int64 v13; // [rsp+38h] [rbp-40h]
  struct _MDL *v14; // [rsp+40h] [rbp-38h] BYREF
  unsigned int v15; // [rsp+98h] [rbp+20h] BYREF

  v5 = Size;
  v6 = Src;
  v8 = 0;
  v9 = 0LL;
  v14 = 0LL;
  if ( !a4 )
  {
    v10 = (__int64)v14;
    goto LABEL_3;
  }
  v10 = CcLockSystemCacheBuffer(Src, &v14, Size, 0LL, &v15);
  v13 = v10;
  v9 = v14;
  if ( v10 )
  {
    while ( 1 )
    {
LABEL_4:
      if ( !v5 )
        goto LABEL_11;
      v11 = v5 >= 0x40000 ? 0x40000 : v5;
      if ( a4 )
        HviCopyMemory(a1, v10, v11);
      else
        memmove(a1, v6, v11);
      v5 -= v11;
      a1 += v11;
      v10 = v13;
      if ( a4 )
        break;
      v6 += v11;
    }
    v10 = v11 + v13;
LABEL_3:
    v13 = v10;
    goto LABEL_4;
  }
  v8 = v15;
LABEL_11:
  if ( v9 )
  {
    MmUnlockPages(v9);
    IoFreeMdl(v9);
  }
  return v8;
}
