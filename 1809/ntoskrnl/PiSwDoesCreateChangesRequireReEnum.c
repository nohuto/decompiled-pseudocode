/*
 * XREFs of PiSwDoesCreateChangesRequireReEnum @ 0x1407631A8
 * Callers:
 *     PiSwIrpStartCreateWorker @ 0x1406D80F8 (PiSwIrpStartCreateWorker.c)
 * Callees:
 *     _wcsicmp @ 0x140195A70 (_wcsicmp.c)
 *     memcmp @ 0x140196340 (memcmp.c)
 *     PnpCompareMultiSz @ 0x14083B468 (PnpCompareMultiSz.c)
 */

char __fastcall PiSwDoesCreateChangesRequireReEnum(__int64 a1, __int64 a2)
{
  _QWORD *v4; // rdx
  char v5; // bl
  _QWORD *v6; // r8
  const wchar_t *v7; // rcx
  const wchar_t *v8; // rdx
  const wchar_t *v9; // rcx
  const wchar_t *v10; // rdx
  int v11; // eax
  const WCHAR *v12; // rcx
  const WCHAR *v13; // rdx
  const WCHAR *v14; // rcx
  const WCHAR *v15; // rdx
  __int64 v17; // rcx

  if ( *(_DWORD *)(a1 + 64) != *(_DWORD *)(a2 + 64) )
    return 1;
  v4 = *(_QWORD **)(a1 + 40);
  v5 = 0;
  v6 = *(_QWORD **)(a2 + 56);
  if ( v4 != v6 )
  {
    if ( !v4 || !v6 )
      return 1;
    v17 = *v4 - *v6;
    if ( *v4 == *v6 )
      v17 = v4[1] - v6[1];
    if ( v17 )
      return 1;
  }
  if ( wcsicmp(*(const wchar_t **)(*(_QWORD *)(a1 + 112) + 8LL), *(const wchar_t **)(a2 + 8)) )
    return 1;
  v7 = *(const wchar_t **)(a1 + 48);
  v8 = *(const wchar_t **)(a2 + 72);
  if ( v7 != v8 && (!v7 || !v8 || wcsicmp(v7, v8)) )
    return 1;
  v9 = *(const wchar_t **)(a1 + 56);
  v10 = *(const wchar_t **)(a2 + 80);
  if ( v9 != v10 && (!v9 || !v10 || wcsicmp(v9, v10)) )
    return 1;
  v11 = *(_DWORD *)(a1 + 160);
  if ( v11 != *(_DWORD *)(a2 + 88)
    || v11 && memcmp(*(const void **)(a1 + 152), *(const void **)(a2 + 96), *(unsigned int *)(a1 + 160)) )
  {
    return 1;
  }
  v12 = *(const WCHAR **)(a1 + 24);
  v13 = *(const WCHAR **)(a2 + 32);
  if ( v12 != v13 && (!v12 || !v13 || !(unsigned __int8)PnpCompareMultiSz(v12, v13)) )
    return 1;
  v14 = *(const WCHAR **)(a1 + 32);
  v15 = *(const WCHAR **)(a2 + 48);
  if ( v14 != v15 && (!v14 || !v15 || !(unsigned __int8)PnpCompareMultiSz(v14, v15)) )
    return 1;
  return v5;
}
