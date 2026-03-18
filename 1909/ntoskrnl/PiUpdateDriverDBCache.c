/*
 * XREFs of PiUpdateDriverDBCache @ 0x14070BF80
 * Callers:
 *     PiIsDriverBlocked @ 0x14070BEAC (PiIsDriverBlocked.c)
 * Callees:
 *     RtlDeleteElementGenericTableAvl @ 0x140001CA0 (RtlDeleteElementGenericTableAvl.c)
 *     RtlInsertElementGenericTableAvl @ 0x140001F10 (RtlInsertElementGenericTableAvl.c)
 *     RtlLookupElementGenericTableAvl @ 0x1400028D0 (RtlLookupElementGenericTableAvl.c)
 *     RtlImageNtHeader @ 0x14005EE50 (RtlImageNtHeader.c)
 *     RtlNumberGenericTableElementsAvl @ 0x14011E880 (RtlNumberGenericTableElementsAvl.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     wcsrchr @ 0x1401A2830 (wcsrchr.c)
 *     memmove @ 0x1401D7480 (memmove.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 */

_QWORD *__fastcall PiUpdateDriverDBCache(__int64 a1, void *a2, __int64 a3, int a4, __int128 *a5)
{
  _QWORD *result; // rax
  _QWORD *v9; // r14
  wchar_t *v10; // rax
  wchar_t *v11; // rax
  __int64 v12; // rdi
  __int64 v13; // rcx
  _QWORD *v14; // rax
  __int128 v15; // xmm0
  const wchar_t *v16; // rcx
  wchar_t *v17; // rax
  _WORD *v18; // rbx
  _QWORD *v19; // rcx
  __int64 v20; // rcx
  __int64 v21; // rcx
  _QWORD *v22; // rdx
  void *v23; // rbx
  _QWORD Buffer[7]; // [rsp+20h] [rbp-40h] BYREF

  memset(Buffer, 0, sizeof(Buffer));
  result = RtlImageNtHeader(a2);
  v9 = result;
  if ( !result )
    return result;
  PiDDBCacheTable.TableContext = (void *)1;
  v10 = wcsrchr(*(const wchar_t **)(a1 + 8), 0x5Cu);
  if ( v10 )
    v11 = v10 + 1;
  else
    v11 = *(wchar_t **)(a1 + 8);
  v12 = -1LL;
  Buffer[3] = v11;
  v13 = -1LL;
  do
    ++v13;
  while ( v11[v13] );
  LOWORD(Buffer[2]) = 2 * v13;
  WORD1(Buffer[2]) = 2 * v13;
  v14 = RtlLookupElementGenericTableAvl(&PiDDBCacheTable, Buffer);
  if ( v14 )
  {
    v21 = *v14;
    if ( *(_QWORD **)(*v14 + 8LL) != v14 )
      goto LABEL_26;
    v22 = (_QWORD *)v14[1];
    if ( (_QWORD *)*v22 != v14 )
      goto LABEL_26;
    *v22 = v21;
    *(_QWORD *)(v21 + 8) = v22;
  }
  else
  {
    if ( RtlNumberGenericTableElementsAvl(&PiDDBCacheTable) < 0x100 )
      goto LABEL_8;
    v14 = PiDDBCacheList;
    v20 = *(_QWORD *)PiDDBCacheList;
    if ( *((PVOID **)PiDDBCacheList + 1) != &PiDDBCacheList || *(PVOID *)(v20 + 8) != PiDDBCacheList )
      goto LABEL_26;
    PiDDBCacheList = *(PVOID *)PiDDBCacheList;
    *(_QWORD *)(v20 + 8) = &PiDDBCacheList;
  }
  if ( v14 )
  {
    v23 = (void *)v14[3];
    RtlDeleteElementGenericTableAvl(&PiDDBCacheTable, v14);
    ExFreePoolWithTag(v23, 0);
  }
LABEL_8:
  v15 = *a5;
  v16 = *(const wchar_t **)(a1 + 8);
  HIDWORD(Buffer[4]) = a4;
  *(_OWORD *)&Buffer[5] = v15;
  LODWORD(Buffer[4]) = *((_DWORD *)v9 + 2);
  v17 = wcsrchr(v16, 0x5Cu);
  if ( v17 )
    v18 = v17 + 1;
  else
    v18 = *(_WORD **)(a1 + 8);
  do
    ++v12;
  while ( v18[v12] );
  WORD1(Buffer[2]) = 2 * v12;
  LOWORD(Buffer[2]) = 2 * v12;
  result = ExAllocatePoolWithTag(PagedPool, (unsigned __int16)(2 * v12), 0x20207050u);
  Buffer[3] = result;
  if ( result )
  {
    memmove(result, v18, LOWORD(Buffer[2]));
    result = RtlInsertElementGenericTableAvl(&PiDDBCacheTable, Buffer, 0x38u, 0LL);
    if ( result )
    {
      v19 = (_QWORD *)qword_1409AEB90;
      if ( *(PVOID **)qword_1409AEB90 == &PiDDBCacheList )
      {
        *result = &PiDDBCacheList;
        result[1] = v19;
        *v19 = result;
        qword_1409AEB90 = (__int64)result;
        return result;
      }
LABEL_26:
      __fastfail(3u);
    }
  }
  return result;
}
