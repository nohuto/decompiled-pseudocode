/*
 * XREFs of MiComputeMaximumFaultCluster @ 0x140170328
 * Callers:
 *     MiDispatchFault @ 0x1400CBFD0 (MiDispatchFault.c)
 * Callees:
 *     MiLocateAddress @ 0x140073CF0 (MiLocateAddress.c)
 *     MiGetAnyMultiplexedVm @ 0x14008D9C0 (MiGetAnyMultiplexedVm.c)
 *     KeInvalidAccessAllowed @ 0x1401154F0 (KeInvalidAccessAllowed.c)
 *     MiFaultListPagesRemaining @ 0x140121AEC (MiFaultListPagesRemaining.c)
 */

unsigned __int64 __fastcall MiComputeMaximumFaultCluster(__int64 a1, unsigned __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rcx
  _BYTE *v7; // rax
  unsigned __int64 v8; // rbx
  unsigned __int64 v9; // rax
  __int64 v10; // r11
  unsigned __int64 v11; // rcx
  int v12; // r8d
  unsigned __int64 v13; // rdx
  unsigned __int64 v14; // rdi
  bool v16; // zf
  char v17; // al
  _QWORD *v18; // rcx
  unsigned __int64 v19; // r8
  unsigned __int64 v20; // r9
  unsigned __int64 v21; // r8
  unsigned __int64 Address; // rax

  v5 = *(_QWORD *)(a1 + 16);
  v7 = (_BYTE *)(v5 & 0xFFFFFFFFFFFFFFFEuLL);
  v8 = *(_QWORD *)a1 & 0xFFFFFFFFFFFFF000uLL;
  if ( v5 == (v5 & 0xFFFFFFFFFFFFFFFEuLL) )
  {
    v10 = 1LL;
    if ( (v5 & 1) != 0 && *v7 == 1 )
      return v10;
    if ( (v5 & 1) != 0 )
    {
      v16 = *v7 == 3;
    }
    else
    {
      v17 = KeInvalidAccessAllowed(v5, 0LL, a3, a4);
      v16 = v17 == (char)v10;
    }
    if ( v16 )
      return v10;
    v11 = v10;
    v12 = 0;
  }
  else
  {
    v9 = MiFaultListPagesRemaining((unsigned __int64 *)a1);
    v10 = 1LL;
    v11 = v9;
    v12 = 1;
  }
  if ( v11 == v10 )
    return v10;
  if ( a2 )
  {
    if ( a2 > v11 )
      a2 = v11;
    v11 = a2;
  }
  v13 = 512LL - (((unsigned int)(v8 >> 9) >> 3) & 0x1FF);
  v14 = v13;
  if ( v11 <= v13 )
    v14 = v11;
  if ( v8 < 0xFFFF800000000000uLL )
  {
    Address = *(_QWORD *)(a1 + 88);
    if ( Address || (Address = MiLocateAddress(v8)) != 0 )
      v13 = v10
          + (*(unsigned int *)(Address + 28) | ((unsigned __int64)*(unsigned __int8 *)(Address + 33) << 32))
          - (v8 >> 12);
    else
      v13 = v10;
  }
  else if ( !v12 && *(char **)(a1 + 56) == MiGetAnyMultiplexedVm(v10) )
  {
    v18 = (_QWORD *)qword_140464970;
    while ( v18 )
    {
      v19 = v18[4];
      v20 = v18[11] & 0xFFFFFFFFFFFFF000uLL;
      if ( v8 >= v19 + v20 )
      {
        v18 = (_QWORD *)v18[1];
      }
      else
      {
        if ( v8 >= v20 )
        {
          v13 = 8LL;
          v21 = (v19 >> 12) - ((v8 - (v18[11] & 0xFFFFFFFFFFFFF000uLL)) >> 12);
          if ( v21 < 8 )
            v13 = v21;
          break;
        }
        v18 = (_QWORD *)*v18;
      }
    }
  }
  if ( v14 <= v13 )
    return v14;
  return v13;
}
