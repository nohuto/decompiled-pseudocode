/*
 * XREFs of ConvertToBuffer @ 0x1C0068CD8
 * Callers:
 *     ValidateArgTypes @ 0x1C00099D0 (ValidateArgTypes.c)
 *     Concat @ 0x1C00666C0 (Concat.c)
 *     ToBuffer @ 0x1C0068220 (ToBuffer.c)
 * Callees:
 *     IsCompatableDSDTRevision @ 0x1C0002280 (IsCompatableDSDTRevision.c)
 *     FreeDataBuffs @ 0x1C0002E30 (FreeDataBuffs.c)
 *     HeapAlloc @ 0x1C00088C0 (HeapAlloc.c)
 *     memmove @ 0x1C0030D80 (memmove.c)
 *     memset @ 0x1C00310C0 (memset.c)
 */

__int64 __fastcall ConvertToBuffer(__int64 a1, __int64 a2)
{
  unsigned int v4; // ebx
  unsigned __int16 v5; // ax
  unsigned int v6; // esi
  void *v7; // rax
  unsigned __int64 v8; // rdi
  unsigned int v9; // esi
  _BYTE *v10; // rax
  __int64 v11; // rcx
  __int128 v12; // xmm1
  __int64 v13; // xmm0_8
  _OWORD v15[3]; // [rsp+20h] [rbp-48h] BYREF

  v4 = 0;
  memset(v15, 0, 0x28uLL);
  v5 = *(_WORD *)(a1 + 2);
  WORD1(v15[0]) = 3;
  if ( v5 == 1 )
  {
    if ( IsCompatableDSDTRevision() )
    {
      v8 = *(_QWORD *)(a1 + 16);
      v9 = 8;
    }
    else
    {
      v8 = *(unsigned int *)(a1 + 16);
      v9 = 4;
    }
    DWORD2(v15[1]) = v9;
    WORD1(v15[0]) = 3;
    v10 = (_BYTE *)HeapAlloc((struct _SLIST_ENTRY *)gpheapGlobal, 1381258056, v9);
    *(_QWORD *)&v15[2] = v10;
    if ( v10 )
    {
      v11 = v9;
      do
      {
        *v10++ = v8;
        v8 >>= 8;
        --v11;
      }
      while ( v11 );
      goto LABEL_15;
    }
    return (unsigned int)-1073741670;
  }
  if ( v5 > 1u && v5 <= 3u )
  {
    v6 = *(_DWORD *)(a1 + 24);
    if ( !v6 )
    {
LABEL_15:
      FreeDataBuffs(a2, 1u);
      v12 = v15[1];
      *(_OWORD *)a2 = v15[0];
      v13 = *(_QWORD *)&v15[2];
      *(_OWORD *)(a2 + 16) = v12;
      *(_QWORD *)(a2 + 32) = v13;
      return v4;
    }
    DWORD2(v15[1]) = *(_DWORD *)(a1 + 24);
    v7 = (void *)HeapAlloc((struct _SLIST_ENTRY *)gpheapGlobal, 1381258056, v6);
    *(_QWORD *)&v15[2] = v7;
    if ( v7 )
    {
      memmove(v7, *(const void **)(a1 + 32), v6);
      goto LABEL_15;
    }
    return (unsigned int)-1073741670;
  }
  return (unsigned int)-1072431095;
}
