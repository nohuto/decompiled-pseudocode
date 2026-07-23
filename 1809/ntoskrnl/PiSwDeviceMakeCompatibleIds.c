/*
 * XREFs of PiSwDeviceMakeCompatibleIds @ 0x1406D9A60
 * Callers:
 *     PiSwPdoPnPDispatch @ 0x1406D95D0 (PiSwPdoPnPDispatch.c)
 * Callees:
 *     _wcsicmp @ 0x140195A70 (_wcsicmp.c)
 *     memmove @ 0x1401D1640 (memmove.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall PiSwDeviceMakeCompatibleIds(__int64 a1, _QWORD *a2)
{
  const wchar_t *v2; // rbx
  unsigned int v3; // edi
  __int64 v6; // r14
  __int64 v7; // rsi
  __int64 v8; // rsi
  __int64 v9; // rdx
  _OWORD *PoolWithTag; // rax
  _OWORD *v11; // r12
  _WORD *v12; // r14
  _OWORD *v13; // rsi
  __int64 v14; // r15
  __int64 v15; // r15
  __int64 result; // rax

  v2 = *(const wchar_t **)(a1 + 32);
  v3 = 0;
  v6 = 0LL;
  if ( v2 )
  {
    while ( *v2 )
    {
      v7 = -1LL;
      do
        ++v7;
      while ( v2[v7] );
      v8 = v7 + 1;
      if ( wcsicmp(v2, L"SWD\\GenericRaw") && wcsicmp(v2, L"SWD\\Generic") )
        v6 += 2 * v8;
      v2 += v8;
    }
  }
  v9 = v6 + 30;
  if ( (*(_DWORD *)(a1 + 64) & 8) != 0 )
    v9 = v6;
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, v9 + 26, 0x57706E50u);
  v11 = PoolWithTag;
  if ( PoolWithTag )
  {
    v12 = *(_WORD **)(a1 + 32);
    v13 = PoolWithTag;
    if ( v12 )
    {
      while ( *v12 )
      {
        v14 = -1LL;
        do
          ++v14;
        while ( v12[v14] );
        v15 = v14 + 1;
        if ( wcsicmp(v12, L"SWD\\GenericRaw") && wcsicmp(v12, L"SWD\\Generic") )
        {
          memmove(v13, v12, 2 * v15);
          v13 = (_OWORD *)((char *)v13 + 2 * v15);
        }
        v12 += v15;
      }
    }
    if ( (*(_DWORD *)(a1 + 64) & 8) == 0 )
    {
      *v13 = *(_OWORD *)L"SWD\\GenericRaw";
      *((_QWORD *)v13 + 2) = *(_QWORD *)L"ricRaw";
      *((_DWORD *)v13 + 6) = *(_DWORD *)L"aw";
      *((_WORD *)v13 + 14) = PiSwGenericRawCompatibleId[14];
      v13 = (_OWORD *)((char *)v13 + 30);
    }
    *v13 = *(_OWORD *)L"SWD\\Generic";
    *((_QWORD *)v13 + 2) = *(_QWORD *)L"ric";
    *((_WORD *)v13 + 12) = 0;
  }
  else
  {
    v3 = -1073741670;
  }
  result = v3;
  *a2 = v11;
  return result;
}
