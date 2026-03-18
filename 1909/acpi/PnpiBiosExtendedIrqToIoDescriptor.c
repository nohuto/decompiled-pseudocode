/*
 * XREFs of PnpiBiosExtendedIrqToIoDescriptor @ 0x1C00B3758
 * Callers:
 *     PnpBiosResourcesToNtResources @ 0x1C0095CE4 (PnpBiosResourcesToNtResources.c)
 * Callees:
 *     PnpiUpdateResourceList @ 0x1C0096428 (PnpiUpdateResourceList.c)
 *     PnpiUpdateForceActiveBothInterrupts @ 0x1C00B3A64 (PnpiUpdateForceActiveBothInterrupts.c)
 */

__int64 __fastcall PnpiBiosExtendedIrqToIoDescriptor(__int64 a1, __int64 a2, __int64 a3, __int64 a4, unsigned int a5)
{
  char v6; // si
  int v9; // ebp
  __int64 result; // rax
  char v11; // r15
  char v12; // r14
  unsigned int v13; // edx
  unsigned int v14; // ecx
  int updated; // r8d
  _BYTE *v16; // rdx
  char v17; // al
  unsigned __int8 v18; // al
  int v19; // eax
  _BYTE *v20; // [rsp+58h] [rbp+10h] BYREF

  v6 = a3;
  if ( (unsigned __int8)a3 < *(_BYTE *)(a2 + 4) )
  {
    v9 = *(_DWORD *)(a2 + 4LL * (unsigned __int8)a3 + 5);
    if ( !v9 )
      return 0LL;
    v11 = 0;
    v12 = *(_BYTE *)(a2 + 3) & 2;
    if ( !a1 )
      goto LABEL_13;
    result = PnpiUpdateForceActiveBothInterrupts();
    if ( (int)result < 0 )
      return result;
    v13 = *(_DWORD *)(a1 + 656);
    v14 = 0;
    if ( !v13 )
    {
LABEL_13:
      updated = PnpiUpdateResourceList((const void **)(a4 + 8LL * a5), &v20, a3);
      if ( updated < 0 )
        return (unsigned int)updated;
      v16 = v20;
      *v20 = v6 != 0 ? 8 : 0;
      v16[1] = 2;
      *((_DWORD *)v16 + 2) = v9;
      *((_DWORD *)v16 + 3) = v9;
      *((_WORD *)v16 + 2) = 0;
      if ( v12 )
      {
        *((_WORD *)v16 + 2) = 1;
        if ( (*(_BYTE *)(a2 + 3) & 8) == 0 )
        {
          v16[2] = 1;
          goto LABEL_20;
        }
        v17 = (v11 != 0) + 2;
      }
      else
      {
        *((_WORD *)v16 + 2) = 0;
        v17 = (unsigned __int8)(*(_BYTE *)(a2 + 3) & 8 | 4) >> 2;
      }
      v16[2] = v17;
LABEL_20:
      v18 = *(_BYTE *)(a2 + 3);
      if ( (v18 & 0x10) != 0 )
      {
        *((_WORD *)v16 + 2) |= 0x20u;
        v18 = *(_BYTE *)(a2 + 3);
      }
      v19 = (v18 >> 1) & 2;
      *((_DWORD *)v16 + 4) = v19;
      if ( v11 )
        *((_DWORD *)v16 + 4) = v19 | 8;
      return (unsigned int)updated;
    }
    a3 = *(_QWORD *)(a1 + 648);
    while ( v9 != *(_DWORD *)(a3 + 4LL * v14) )
    {
      if ( ++v14 >= v13 )
        goto LABEL_13;
    }
    if ( v12 )
    {
      v11 = 1;
      goto LABEL_13;
    }
  }
  return 3221225485LL;
}
