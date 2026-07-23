/*
 * XREFs of IopLiveDumpValidateParameters @ 0x140821740
 * Callers:
 *     IoCaptureLiveDump @ 0x140820184 (IoCaptureLiveDump.c)
 * Callees:
 *     IopLiveDumpValidateCancelObject @ 0x140821688 (IopLiveDumpValidateCancelObject.c)
 *     IopLiveDumpValidateDumpFileHandle @ 0x1408216F0 (IopLiveDumpValidateDumpFileHandle.c)
 */

int __fastcall IopLiveDumpValidateParameters(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  int result; // eax
  unsigned int v6; // eax
  __int64 v7; // rcx
  unsigned int v8; // eax
  __int64 v9; // rcx

  v2 = 0LL;
  if ( !a2 )
    return -1073741811;
  if ( *(_DWORD *)a2 != 1 )
    return -1073741811;
  if ( *(_DWORD *)(a2 + 4) < 0x30u )
    return -1073741811;
  v6 = *(_DWORD *)(a2 + 28);
  if ( v6 >= 2 )
    return -1073741811;
  *(_DWORD *)(a1 + 44) = v6;
  if ( *(_DWORD *)(a2 + 36) || *(_DWORD *)(a2 + 32) )
    return -1073741811;
  v7 = *(_QWORD *)(a2 + 40);
  result = 0;
  while ( v7 )
  {
    if ( *(_DWORD *)(v7 + 28) )
      return -1073741811;
    if ( !*(_QWORD *)(v7 + 16) || !*(_DWORD *)(v7 + 24) )
    {
      result = -1073741811;
      break;
    }
    v7 = *(_QWORD *)(v7 + 32);
  }
  if ( result >= 0 )
  {
    *(_OWORD *)(a1 + 48) = *(_OWORD *)(a2 + 32);
    v8 = *(_DWORD *)(a2 + 24);
    if ( v8 < 0x20 )
    {
      if ( (v8 & 3) != 0 )
        return -1073741822;
      *(_DWORD *)(a1 + 40) = v8;
      result = IopLiveDumpValidateDumpFileHandle(*(void **)(a2 + 8));
      if ( result < 0 )
      {
        *(_QWORD *)(a1 + 64) = 0LL;
      }
      else
      {
        *(_QWORD *)(a1 + 64) = *(_QWORD *)(a2 + 8);
        result = IopLiveDumpValidateCancelObject(*(_QWORD *)(a2 + 16));
        if ( result >= 0 )
          v2 = v9;
        *(_QWORD *)(a1 + 72) = v2;
      }
      return result;
    }
    return -1073741811;
  }
  return result;
}
