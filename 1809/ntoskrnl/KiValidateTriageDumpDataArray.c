/*
 * XREFs of KiValidateTriageDumpDataArray @ 0x140293200
 * Callers:
 *     KeAddTriageDumpDataBlock @ 0x140291260 (KeAddTriageDumpDataBlock.c)
 *     KiInvokeBugCheckAddTriageDumpDataCallbacks @ 0x140292C50 (KiInvokeBugCheckAddTriageDumpDataCallbacks.c)
 * Callees:
 *     KiIsAddressRangeValid @ 0x140191F34 (KiIsAddressRangeValid.c)
 */

char __fastcall KiValidateTriageDumpDataArray(__int64 a1, __int64 a2, unsigned int a3)
{
  unsigned int v5; // edi
  unsigned int v6; // eax
  unsigned __int64 v7; // rdx
  unsigned int v8; // r9d
  unsigned int v9; // edx
  _QWORD *v10; // r8
  unsigned int v11; // r10d
  unsigned int v12; // ecx
  int v13; // eax

  v5 = 0;
  if ( KiIsAddressRangeValid(a1, 40LL) )
  {
    v6 = *(_DWORD *)(a1 + 20);
    if ( *(_DWORD *)(a1 + 16) <= v6 )
    {
      v7 = 16LL * v6;
      if ( v7 <= 0xFFFFFFFF
        && (int)v7 + 40 >= (unsigned int)v7
        && KiIsAddressRangeValid(a1 + 40, v7)
        && KiIsAddressRangeValid(*(_QWORD *)a1, 16LL)
        && KiIsAddressRangeValid(*(_QWORD *)(a1 + 8), 16LL)
        && *(_QWORD *)(*(_QWORD *)a1 + 8LL) == a1
        && **(_QWORD **)(a1 + 8) == a1 )
      {
        if ( !a3 )
          return 1;
        v8 = *(_DWORD *)(a1 + 16);
        v9 = 0;
        if ( v8 )
        {
          v10 = (_QWORD *)(a1 + 48);
          do
          {
            v11 = v5;
            if ( *v10 > 0xFFFFFFFFuLL )
              return 0;
            v12 = v5 + *v10;
            v13 = -1;
            if ( v12 >= v5 )
              v13 = v5 + *v10;
            v5 = v13;
            if ( v12 < v11 )
              return 0;
            ++v9;
            v10 += 2;
          }
          while ( v9 < v8 );
        }
        if ( *(_DWORD *)(a1 + 24) == v5 && v5 <= a3 )
          return 1;
      }
    }
  }
  return 0;
}
