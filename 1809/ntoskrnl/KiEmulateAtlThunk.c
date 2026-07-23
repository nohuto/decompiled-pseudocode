/*
 * XREFs of KiEmulateAtlThunk @ 0x14029F914
 * Callers:
 *     KiCheckForAtlThunk @ 0x14029C5EC (KiCheckForAtlThunk.c)
 * Callees:
 *     MmCheckForSafeExecution @ 0x140859E44 (MmCheckForSafeExecution.c)
 */

__int64 __fastcall KiEmulateAtlThunk(unsigned int *a1, _DWORD *a2, unsigned int *a3, unsigned int *a4, _DWORD *a5)
{
  unsigned int *v5; // r14
  __int64 v10; // rbx
  _WORD *v11; // rax
  char v12; // si
  int v13; // eax
  unsigned int v14; // r14d
  __int64 v15; // rax
  unsigned int v16; // r15d
  unsigned int v17; // esi
  __int64 v18; // r9
  unsigned int *v19; // rsi
  __int64 v20; // rax
  __int64 v21; // r15
  unsigned int v22; // [rsp+20h] [rbp-48h]
  unsigned __int64 v23; // [rsp+30h] [rbp-38h]

  v5 = a4;
  if ( (KeGetCurrentThread()->ApcState.Process->Flags.ExecuteOptionsNV & 4) != 0 )
    return 0LL;
  v10 = *a1;
  v23 = (unsigned int)*a2;
  v22 = 0;
  v11 = (_WORD *)&KeGetPcr()->NtTib.$D0B1ACB34FBE4905ECC1583689CC2FF1::$FA8FFF1520DD35500AAEFA9E987D7DBA::Self[218].SubSystemTib
      + 1;
  v12 = *v11 & 1;
  if ( v12 )
    *v11 &= ~1u;
  v13 = *(_DWORD *)v10;
  if ( *(_DWORD *)v10 == 69485767 && *(_BYTE *)(v10 + 8) == 0xE9 )
  {
    v14 = *(_DWORD *)(v10 + 9) + v10 + 13;
    LOBYTE(a4) = 1;
    if ( !(unsigned __int8)MmCheckForSafeExecution(v10, v23, v14, a4) || !v12 )
      return v22;
    v15 = v23 + 4;
    if ( v23 + 4 >= 0x7FFFFFFF0000LL )
      v15 = 0x7FFFFFFF0000LL;
    *(_DWORD *)v15 = *(_DWORD *)(v10 + 4);
    *a1 = v14;
    return 1;
  }
  if ( (_BYTE)v13 == 0xB9 )
  {
    LOBYTE(v13) = -71;
    if ( *(_BYTE *)(v10 + 5) == 0xE9 )
    {
      v16 = *(_DWORD *)(v10 + 6) + v10 + 10;
      LOBYTE(a4) = 1;
      if ( !(unsigned __int8)MmCheckForSafeExecution(v10, v23, v16, a4) || !v12 )
        return v22;
      *v5 = *(_DWORD *)(v10 + 1);
LABEL_18:
      *a1 = v16;
      return 1;
    }
  }
  if ( (_BYTE)v13 != 0xBA || *(_BYTE *)(v10 + 5) != 0xB9 || *(_WORD *)(v10 + 10) != 0xE1FF )
  {
    if ( (_BYTE)v13 != 0xB9
      || (LOBYTE(v13) = -71, *(_BYTE *)(v10 + 5) != 0xB8)
      || (v18 = 57599LL, *(_WORD *)(v10 + 10) != 0xE0FF) )
    {
      if ( (_BYTE)v13 != 89
        || BYTE1(*(_DWORD *)v10) != 88
        || (unsigned __int8)BYTE2(*(_DWORD *)v10) != 81
        || __PAIR16__(*(_BYTE *)(v10 + 4), HIBYTE(*(_DWORD *)v10)) != 24831
        || *(_BYTE *)(v10 + 5) != 4 )
      {
        return v22;
      }
      v19 = (unsigned int *)(v23 + 4);
      v20 = v23 + 4;
      if ( v23 + 4 >= 0x7FFFFFFF0000LL )
        v20 = 0x7FFFFFFF0000LL;
      v21 = *(unsigned int *)(unsigned int)(*(_DWORD *)v20 + 4);
      if ( !(unsigned __int8)MmCheckForSafeExecution(v10, v23, v21, 0LL) )
        return v22;
      *v5 = *(_DWORD *)v23;
      *a3 = *v19;
      *v19 = *v5;
      *a1 = v21;
      *a2 = (_DWORD)v19;
      return 1;
    }
    v16 = *(_DWORD *)(v10 + 6);
    LOBYTE(v18) = 1;
    if ( !(unsigned __int8)MmCheckForSafeExecution(v10, v23, v16, v18) || !v12 )
      return v22;
    *v5 = *(_DWORD *)(v10 + 1);
    *a3 = v16;
    goto LABEL_18;
  }
  v17 = *(_DWORD *)(v10 + 6);
  if ( (unsigned __int8)MmCheckForSafeExecution(v10, v23, v17, 0LL) )
  {
    *a5 = *(_DWORD *)(v10 + 1);
    *v5 = v17;
    *a1 = v17;
    return 1;
  }
  return v22;
}
