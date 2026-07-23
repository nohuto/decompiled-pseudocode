/*
 * XREFs of MiFindActualFaultingPte @ 0x14002D0E8
 * Callers:
 *     MiIsFaultPteIntact @ 0x14002D02C (MiIsFaultPteIntact.c)
 *     MiFindActualFaultingPte @ 0x14002D0E8 (MiFindActualFaultingPte.c)
 * Callees:
 *     MiFindActualFaultingPte @ 0x14002D0E8 (MiFindActualFaultingPte.c)
 *     MiIsPrototypePteVadLookup @ 0x14002D250 (MiIsPrototypePteVadLookup.c)
 *     MiPteInShadowRange @ 0x14003D740 (MiPteInShadowRange.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14003EA80 (MI_READ_PTE_LOCK_FREE.c)
 *     MiCheckVirtualAddress @ 0x140098C30 (MiCheckVirtualAddress.c)
 *     MiFillPteHierarchy @ 0x140099020 (MiFillPteHierarchy.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 */

__int64 __fastcall MiFindActualFaultingPte(__int64 a1, unsigned __int64 a2)
{
  __int64 result; // rax
  __int64 v4; // rdx
  unsigned __int64 v5; // rbx
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // r8
  __int64 v10; // r11
  unsigned __int64 v11; // r8
  __int64 v12; // r10
  char v13; // al
  __int64 v14; // rax
  _BYTE v15[8]; // [rsp+28h] [rbp-79h] BYREF
  __int64 v16; // [rsp+30h] [rbp-71h] BYREF
  unsigned __int64 v17[4]; // [rsp+38h] [rbp-69h] BYREF
  unsigned __int64 v18[8]; // [rsp+58h] [rbp-49h] BYREF
  __int16 v19; // [rsp+9Ah] [rbp-7h]
  char v20; // [rsp+9Ch] [rbp-5h]
  char v21; // [rsp+9Dh] [rbp-4h]
  __int64 v22; // [rsp+A0h] [rbp-1h]

  if ( (*(_BYTE *)(a1 + 69) & 1) != 0 )
  {
    MiFillPteHierarchy(a2, v17);
    v12 = 4LL;
    while ( 1 )
    {
      v5 = v17[v12 - 1];
      v13 = MI_READ_PTE_LOCK_FREE(v5);
      if ( (v13 & 1) == 0 )
        return v5;
      if ( v13 < 0 )
        return 0LL;
      if ( v12 == 1 )
      {
        v5 = v17[0];
        goto LABEL_4;
      }
    }
  }
  result = *(_QWORD *)(a1 + 72);
  v4 = ((a2 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL;
  if ( result != v4 )
    return result;
  v5 = ((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
LABEL_4:
  if ( (unsigned int)MiPteInShadowRange(v5, v4, *(_QWORD *)v5)
    && (MiFlags & 0xC00000) != 0
    && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1 )
  {
    if ( (v7 & 1) == 0 )
      goto LABEL_6;
    if ( (v7 & 0x20) == 0 || (v7 & 0x42) == 0 )
    {
      v6 = KeGetCurrentThread()->ApcState.Process[2].Affinity.Bitmap[0];
      if ( v6 )
      {
        v14 = *(_QWORD *)(v6 + 8 * ((v5 >> 3) & 0x1FF));
        v6 = v7 | 0x20;
        if ( (v14 & 0x20) == 0 )
          v6 = v7;
        v7 = v6;
        if ( (v14 & 0x42) != 0 )
          v7 = v6 | 0x42;
      }
    }
  }
  if ( (v7 & 1) != 0 )
    return 0LL;
LABEL_6:
  if ( (v7 & 0x400) != 0 )
  {
    if ( !(unsigned int)MiIsPrototypePteVadLookup(v7, v6, v7, v8) )
    {
      if ( qword_14043B180 )
      {
        if ( (v9 & 0x10) == 0 )
          v9 &= ~qword_14043B180;
      }
      v11 = v9 >> 16;
LABEL_12:
      v21 &= ~1u;
      v18[0] = v11;
      v20 = 17;
      v19 = 0;
      v22 = ((v11 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL;
      result = MiFindActualFaultingPte(v18, v11);
      if ( result )
        return result;
      return v5;
    }
    v11 = MiCheckVirtualAddress(v10, v15, &v16);
    if ( v11 )
      goto LABEL_12;
    return 0LL;
  }
  return v5;
}
