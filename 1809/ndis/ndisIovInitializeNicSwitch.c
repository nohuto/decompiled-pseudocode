/*
 * XREFs of ndisIovInitializeNicSwitch @ 0x1C007026C
 * Callers:
 *     ndisOidPostIovCreateNicSwitch @ 0x1C0070860 (ndisOidPostIovCreateNicSwitch.c)
 *     ndisIovCreateDefaultNicSwitch @ 0x1C00BDD6C (ndisIovCreateDefaultNicSwitch.c)
 * Callees:
 *     memset @ 0x1C0027180 (memset.c)
 */

__int64 __fastcall ndisIovInitializeNicSwitch(__int64 a1, __int64 a2, _QWORD *a3, _QWORD *a4, _QWORD *a5)
{
  unsigned int v5; // ebx
  _QWORD *PoolWithTag; // rax
  _QWORD *v11; // rdi
  _QWORD *v12; // rax
  _QWORD *v13; // r14
  _QWORD *v14; // rax
  _QWORD *v15; // rsi
  char v16; // cl

  v5 = 0;
  if ( !a3 || !a4 || !a5 )
    return (unsigned int)-1073741811;
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x2A0uLL, 0x6F69444Eu);
  v11 = PoolWithTag;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, 0x2A0uLL);
    v11[1] = v11;
    *v11 = v11;
    v11[11] = v11 + 10;
    v11[10] = v11 + 10;
    v11[8] = v11 + 7;
    v11[7] = v11 + 7;
    v11[2] = a1;
    *((_DWORD *)v11 + 9) = *(_DWORD *)(a2 + 12);
    *((_DWORD *)v11 + 8) = 1;
    v12 = ExAllocatePoolWithTag(NonPagedPoolNx, 0x30uLL, 0x6F69444Eu);
    v13 = v12;
    if ( v12 )
    {
      memset(v12, 0, 0x30uLL);
      *v13 = a1;
      v13[2] = v11;
      v13[5] = v13 + 4;
      v13[4] = v13 + 4;
      v11[5] = v13;
      v14 = ExAllocatePoolWithTag(NonPagedPoolNx, 0x388uLL, 0x6F69444Eu);
      v15 = v14;
      if ( v14 )
      {
        memset(v14, 0, 0x388uLL);
        v15[9] = a1;
        *((_DWORD *)v15 + 16) |= 1u;
        v15[10] = 0LL;
        v15[11] = v11;
        v15[12] = v13;
        v15[14] = 49283456LL;
        *((_DWORD *)v15 + 30) = *((_DWORD *)v11 + 9);
        *((_WORD *)v15 + 322) = -1;
        *((_DWORD *)v15 + 164) = 1;
        *((_DWORD *)v15 + 31) = 0;
        *((_DWORD *)v15 + 163) = 0;
        *((_DWORD *)v15 + 162) = *(_DWORD *)(a2 + 548);
        *((_WORD *)v15 + 336) = *(_WORD *)(a1 + 4420);
        v16 = *(_BYTE *)(a1 + 4422);
        v15[112] = 0LL;
        v15[111] = 0LL;
        v15[83] = 1LL << v16;
        v15[110] = v15 + 109;
        v15[109] = v15 + 109;
        *a3 = v11;
        *a4 = v13;
        *a5 = v15;
        return v5;
      }
      ExFreePoolWithTag(v13, 0);
    }
    ExFreePoolWithTag(v11, 0);
  }
  return (unsigned int)-1073741670;
}
