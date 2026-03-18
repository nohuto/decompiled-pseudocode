/*
 * XREFs of ObpInsertHandleCount @ 0x1406BC6FC
 * Callers:
 *     ObpLockHandleDataBaseEntry @ 0x1406BC580 (ObpLockHandleDataBaseEntry.c)
 * Callees:
 *     OBJECT_HEADER_TO_HANDLE_INFO @ 0x14010AF68 (OBJECT_HEADER_TO_HANDLE_INFO.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     memmove @ 0x1401D6880 (memmove.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 */

char *__fastcall ObpInsertHandleCount(__int64 a1)
{
  int **v2; // r14
  __int64 *p_Src; // r12
  unsigned int v4; // esi
  int v5; // ebp
  unsigned int v6; // edi
  int *PoolWithTag; // rax
  int *v8; // r15
  char v9; // cl
  char *result; // rax
  int v11; // esi
  __int64 Src; // [rsp+20h] [rbp-48h] BYREF
  __int128 v13; // [rsp+28h] [rbp-40h]

  Src = 0LL;
  v13 = 0uLL;
  v2 = (int **)OBJECT_HEADER_TO_HANDLE_INFO(a1);
  if ( !v2 )
    return 0LL;
  if ( (*(_BYTE *)(a1 + 27) & 0x40) != 0 )
  {
    LODWORD(Src) = 1;
    p_Src = &Src;
    v4 = 24;
    v5 = 2;
    v13 = *(_OWORD *)v2;
    v6 = 40;
  }
  else
  {
    p_Src = (__int64 *)*v2;
    v11 = **v2;
    v5 = v11 + 4;
    v4 = 16 * v11 + 8;
    v6 = 16 * v5 + 8;
  }
  PoolWithTag = (int *)ExAllocatePoolWithTag(PagedPool, v6, 0x6448624Fu);
  v8 = PoolWithTag;
  if ( !PoolWithTag )
    return 0LL;
  memmove(PoolWithTag, p_Src, v4);
  v9 = *(_BYTE *)(a1 + 27);
  if ( (v9 & 0x40) != 0 )
    *(_BYTE *)(a1 + 27) = v9 & 0xBF;
  else
    ExFreePoolWithTag(p_Src, 0);
  memset((char *)v8 + v4, 0, v6 - v4);
  *v8 = v5;
  result = (char *)v8 + v4;
  *v2 = v8;
  return result;
}
