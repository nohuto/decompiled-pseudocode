/*
 * XREFs of MiComputeMaximumFaultCluster @ 0x140168D38
 * Callers:
 *     MiDispatchFault @ 0x140045FD0 (MiDispatchFault.c)
 * Callees:
 *     MiGetAnyMultiplexedVm @ 0x140028884 (MiGetAnyMultiplexedVm.c)
 *     MiLocateAddress @ 0x140087850 (MiLocateAddress.c)
 *     KeInvalidAccessAllowed @ 0x140117D7C (KeInvalidAccessAllowed.c)
 *     MiFaultListPagesRemaining @ 0x140120778 (MiFaultListPagesRemaining.c)
 */

unsigned __int64 __fastcall MiComputeMaximumFaultCluster(__int64 a1, unsigned __int64 a2)
{
  __int64 v3; // rcx
  _BYTE *v5; // rax
  unsigned __int64 v6; // r11
  unsigned __int64 v7; // rax
  __int64 v8; // r10
  unsigned __int64 v9; // rcx
  int v10; // r8d
  unsigned __int64 v11; // rdx
  unsigned __int64 v12; // rbx
  bool v14; // zf
  char v15; // al
  unsigned __int64 v16; // r11
  _QWORD *v17; // rcx
  unsigned __int64 v18; // r8
  unsigned __int64 v19; // r9
  unsigned __int64 v20; // r8
  unsigned __int64 Address; // rax

  v3 = *(_QWORD *)(a1 + 16);
  v5 = (_BYTE *)(v3 & 0xFFFFFFFFFFFFFFFEuLL);
  v6 = *(_QWORD *)a1 & 0xFFFFFFFFFFFFF000uLL;
  if ( v3 == (v3 & 0xFFFFFFFFFFFFFFFEuLL) )
  {
    v8 = 1LL;
    if ( (v3 & 1) != 0 && *v5 == 1 )
      return v8;
    if ( (v3 & 1) != 0 )
    {
      v14 = *v5 == 3;
    }
    else
    {
      v15 = KeInvalidAccessAllowed(v3);
      v14 = v15 == (char)v8;
    }
    if ( v14 )
      return v8;
    v9 = v8;
    v10 = 0;
  }
  else
  {
    v7 = MiFaultListPagesRemaining((unsigned __int64 *)a1);
    v8 = 1LL;
    v9 = v7;
    v10 = 1;
  }
  if ( v9 == v8 )
    return v8;
  if ( a2 )
  {
    if ( a2 > v9 )
      a2 = v9;
    v9 = a2;
  }
  v11 = 512LL - (((unsigned int)(v6 >> 9) >> 3) & 0x1FF);
  v12 = v11;
  if ( v9 <= v11 )
    v12 = v9;
  if ( v6 < 0xFFFF800000000000uLL )
  {
    Address = *(_QWORD *)(a1 + 88);
    if ( Address || (Address = MiLocateAddress(v6)) != 0 )
      v11 = v8
          + (*(unsigned int *)(Address + 28) | ((unsigned __int64)*(unsigned __int8 *)(Address + 33) << 32))
          - (v6 >> 12);
    else
      v11 = v8;
  }
  else if ( !v10 && *(char **)(a1 + 56) == MiGetAnyMultiplexedVm(v8) )
  {
    v17 = (_QWORD *)qword_14043A010;
    while ( v17 )
    {
      v18 = v17[4];
      v19 = v17[11] & 0xFFFFFFFFFFFFF000uLL;
      if ( v16 >= v18 + v19 )
      {
        v17 = (_QWORD *)v17[1];
      }
      else
      {
        if ( v16 >= v19 )
        {
          v11 = 8LL;
          v20 = (v18 >> 12) - ((v16 - (v17[11] & 0xFFFFFFFFFFFFF000uLL)) >> 12);
          if ( v20 < 8 )
            v11 = v20;
          break;
        }
        v17 = (_QWORD *)*v17;
      }
    }
  }
  if ( v12 <= v11 )
    return v12;
  return v11;
}
