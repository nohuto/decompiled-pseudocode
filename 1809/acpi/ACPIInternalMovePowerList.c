/*
 * XREFs of ACPIInternalMovePowerList @ 0x1C00209AC
 * Callers:
 *     ACPIDevicePowerDpc @ 0x1C001FAE0 (ACPIDevicePowerDpc.c)
 *     ACPIMovePowerListUnblockedItems @ 0x1C005021C (ACPIMovePowerListUnblockedItems.c)
 * Callees:
 *     <none>
 */

void __fastcall ACPIInternalMovePowerList(_QWORD *a1, __int64 a2)
{
  _QWORD *v2; // r9
  _QWORD *v5; // rcx
  int v6; // edx
  bool v7; // zf
  int v8; // eax
  _QWORD *v9; // rcx
  _QWORD *v10; // rax
  int v11; // eax

  v2 = (_QWORD *)*a1;
  if ( (_QWORD *)*a1 == a1 )
    goto LABEL_9;
  do
  {
    v5 = v2;
    v2 = (_QWORD *)*v2;
    if ( *((_DWORD *)v5 + 12) )
      goto LABEL_7;
    v6 = *(_DWORD *)(v5[5] + 692LL);
    v7 = v6 == 0;
    if ( v6 > 0 )
    {
      v11 = *((_DWORD *)v5 + 14);
      if ( (v11 & 0x2000000) == 0 )
      {
        *((_DWORD *)v5 + 14) = v11 | 0x2000000;
        _InterlockedIncrement(&AcpiPowerCurrentPagingPathTransitions);
        goto LABEL_7;
      }
      v7 = v6 == 0;
    }
    if ( v7 )
    {
      v8 = *((_DWORD *)v5 + 14);
      if ( (v8 & 0x2000000) != 0 )
      {
        *((_DWORD *)v5 + 14) = v8 & 0xFDFFFFFF;
        _InterlockedDecrement(&AcpiPowerCurrentPagingPathTransitions);
      }
    }
LABEL_7:
    _InterlockedExchange((volatile __int32 *)v5 + 52, 3);
  }
  while ( v2 != a1 );
  v2 = (_QWORD *)*a1;
LABEL_9:
  if ( v2 != a1 )
  {
    v9 = *(_QWORD **)(a2 + 8);
    v10 = (_QWORD *)a1[1];
    *v10 = a2;
    *(_QWORD *)(a2 + 8) = v10;
    v2[1] = v9;
    *v9 = v2;
    a1[1] = a1;
    *a1 = a1;
  }
}
