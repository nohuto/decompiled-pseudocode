/*
 * XREFs of MiEliminateZeroPages @ 0x14066D070
 * Callers:
 *     MiCopyToCfgBitMap @ 0x1405F3A10 (MiCopyToCfgBitMap.c)
 *     MiUpdateCfgSystemWideBitmapWorker @ 0x1405F4130 (MiUpdateCfgSystemWideBitmapWorker.c)
 * Callees:
 *     MiGetPteAddress @ 0x140065DD8 (MiGetPteAddress.c)
 *     MiInsertTbFlushEntry @ 0x1400B3A30 (MiInsertTbFlushEntry.c)
 *     MiGetPdeAddress @ 0x1400EDBE4 (MiGetPdeAddress.c)
 *     MiInitializeTbFlushList @ 0x1400EDC04 (MiInitializeTbFlushList.c)
 *     MiTbFlushType @ 0x1400EDC24 (MiTbFlushType.c)
 *     MiConvertAndFlushWsleVas @ 0x1400EEC60 (MiConvertAndFlushWsleVas.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 */

void __fastcall MiEliminateZeroPages(__int64 a1, unsigned __int64 a2, unsigned __int64 a3)
{
  int v6; // eax
  __int64 PteAddress; // r14
  unsigned __int64 v8; // rdi
  __int64 v9; // r15
  _QWORD *v10; // r8
  _QWORD *v11; // rdx
  __int64 PdeAddress; // rbx
  _BYTE v13[4]; // [rsp+60h] [rbp-F8h] BYREF
  char v14; // [rsp+64h] [rbp-F4h]
  int v15; // [rsp+68h] [rbp-F0h]
  int v16; // [rsp+6Ch] [rbp-ECh]

  v6 = MiTbFlushType(a1);
  MiInitializeTbFlushList((__int64)v13, v6, 20);
  v14 |= 4u;
  PteAddress = MiGetPteAddress(a2);
  v8 = a3 >> 12;
  v9 = 0LL;
  while ( v8 )
  {
    v10 = (_QWORD *)a2;
    v11 = (_QWORD *)(a2 + 4088);
    do
    {
      if ( *v10 | *v11 )
        break;
      ++v10;
      --v11;
    }
    while ( v10 <= v11 );
    if ( v10 > v11 )
    {
      PdeAddress = MiGetPdeAddress(a2);
      if ( v9 != PdeAddress )
      {
        if ( v16 )
          MiConvertAndFlushWsleVas(a1, (__int64)v13);
        v9 = PdeAddress;
      }
      MiInsertTbFlushEntry((__int64)v13, a2, 1LL, 0);
      if ( v16 == v15 )
        MiConvertAndFlushWsleVas(a1, (__int64)v13);
    }
    PteAddress += 8LL;
    a2 += 4096LL;
    --v8;
  }
  if ( v16 )
    MiConvertAndFlushWsleVas(a1, (__int64)v13);
}
