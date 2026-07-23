/*
 * XREFs of CcInsertIntoCleanSharedCacheMapList @ 0x14011BA6C
 * Callers:
 *     CcAcquireByteRangeForWrite @ 0x14001F590 (CcAcquireByteRangeForWrite.c)
 *     CcUnpinFileDataEx @ 0x140020910 (CcUnpinFileDataEx.c)
 *     CcInitializeCacheMapEx @ 0x1400ABF90 (CcInitializeCacheMapEx.c)
 * Callees:
 *     DbgPrint @ 0x1401263A0 (DbgPrint.c)
 */

_QWORD *__fastcall CcInsertIntoCleanSharedCacheMapList(__int64 a1)
{
  __int64 v1; // rax
  __int64 v3; // rdi
  __int64 v4; // rsi
  _QWORD *v5; // rax
  __int64 v6; // rcx
  _QWORD *v7; // rdx
  _QWORD *v8; // rcx
  _QWORD *result; // rax
  __int64 v10; // rdx
  _QWORD *v11; // rcx
  _QWORD *v12; // rcx

  v1 = *(_QWORD *)(a1 + 528);
  v3 = v1 + 16;
  v4 = v1 + 32;
  if ( (_BYTE)KdDebuggerEnabled && !(_BYTE)KdDebuggerNotPresent && !*(_DWORD *)(a1 + 4) && !*(_DWORD *)(a1 + 112) )
  {
    DbgPrint("CC: SharedCacheMap->OpenCount == 0 && DirtyPages == 0 && going onto CleanList!\n");
    __debugbreak();
  }
  if ( (*(_DWORD *)(a1 + 152) & 0x3000000) != 0 )
  {
    v5 = (_QWORD *)(a1 + 120);
    v6 = *(_QWORD *)(a1 + 120);
    if ( *(_QWORD *)(v6 + 8) != a1 + 120
      || (v7 = *(_QWORD **)(a1 + 128), (_QWORD *)*v7 != v5)
      || (*v7 = v6, *(_QWORD *)(v6 + 8) = v7, v8 = *(_QWORD **)(v4 + 8), *v8 != v4) )
    {
LABEL_11:
      __fastfail(3u);
    }
    *v5 = v4;
    *(_QWORD *)(a1 + 128) = v8;
    *v8 = v5;
    *(_QWORD *)(v4 + 8) = v5;
  }
  result = (_QWORD *)(a1 + 136);
  v10 = *(_QWORD *)(a1 + 136);
  if ( *(_QWORD *)(v10 + 8) != a1 + 136 )
    goto LABEL_11;
  v11 = *(_QWORD **)(a1 + 144);
  if ( (_QWORD *)*v11 != result )
    goto LABEL_11;
  *v11 = v10;
  *(_QWORD *)(v10 + 8) = v11;
  v12 = *(_QWORD **)(v3 + 8);
  if ( *v12 != v3 )
    goto LABEL_11;
  *result = v3;
  *(_QWORD *)(a1 + 144) = v12;
  *v12 = result;
  *(_QWORD *)(v3 + 8) = result;
  return result;
}
