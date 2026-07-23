/*
 * XREFs of MiGetPteFromCopyList @ 0x14012D8D8
 * Callers:
 *     MiStealPage @ 0x1400EBFC4 (MiStealPage.c)
 *     MiSwapStackPage @ 0x14012D250 (MiSwapStackPage.c)
 *     MiAddPagesToEnclave @ 0x1402BCAD4 (MiAddPagesToEnclave.c)
 *     MiCopyDirectMapHeader @ 0x140853E04 (MiCopyDirectMapHeader.c)
 *     MiCopyPagesIntoEnclave @ 0x14085A6EC (MiCopyPagesIntoEnclave.c)
 *     MiFillPerSessionProtos @ 0x14085D65C (MiFillPerSessionProtos.c)
 * Callees:
 *     MiMakeProtectionPfnCompatible @ 0x14002DDB4 (MiMakeProtectionPfnCompatible.c)
 *     MiPteInShadowRange @ 0x14003D740 (MiPteInShadowRange.c)
 *     MiMakeValidPte @ 0x14003D7F0 (MiMakeValidPte.c)
 *     MiFlushTbList @ 0x1400740B0 (MiFlushTbList.c)
 *     MiInsertTbFlushEntry @ 0x1400B3A30 (MiInsertTbFlushEntry.c)
 *     MiWritePteShadow @ 0x140120F40 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140120FA0 (MiPteHasShadow.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 */

__int64 *__fastcall MiGetPteFromCopyList(unsigned int *a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rdx
  int v7; // esi
  __int64 *v8; // rbx
  int ProtectionPfnCompatible; // eax
  __int64 v10; // rdx
  int v11; // r8d
  int v12; // eax
  __int64 v13; // rdx
  __int64 *v14; // r8
  int v15; // r9d
  __int64 v17; // r8
  __int64 v18; // rdx
  __int64 v19; // rdx
  __int64 v20; // r8
  __int64 v21; // r9
  bool v22; // zf
  bool v23; // zf
  int v24; // [rsp+20h] [rbp-F8h] BYREF
  __int16 v25; // [rsp+24h] [rbp-F4h]
  int v26; // [rsp+28h] [rbp-F0h]
  int v27; // [rsp+2Ch] [rbp-ECh]
  __int64 v28; // [rsp+30h] [rbp-E8h]
  __int64 v29; // [rsp+38h] [rbp-E0h]

  v4 = *a1;
  v7 = (a3 != -1) + 1;
  if ( (int)v4 + v7 > a1[1] )
  {
    v27 = 0;
    v17 = v4;
    v18 = *((_QWORD *)a1 + 2);
    v24 = 0;
    v25 = 0;
    v28 = 0LL;
    v29 = 0LL;
    v26 = 20;
    MiInsertTbFlushEntry((__int64)&v24, v18 << 25 >> 16, v17, 0);
    MiFlushTbList(&v24, v19, v20, v21);
    *a1 = 0;
    v4 = 0LL;
  }
  v8 = (__int64 *)(*((_QWORD *)a1 + 2) + 8 * v4);
  *a1 = v7 + v4;
  ProtectionPfnCompatible = MiMakeProtectionPfnCompatible(4, 48 * a2 - 0x58000000000LL);
  MiMakeValidPte((unsigned __int64)v8, a2, ProtectionPfnCompatible | 0xA0000000);
  if ( MiPteInShadowRange((unsigned __int64)v8) )
  {
    if ( (unsigned int)MiPteHasShadow() )
    {
      v11 = 1;
      if ( HIBYTE(word_14043B26C) )
        goto LABEL_4;
      v22 = (v10 & 1) == 0;
    }
    else
    {
      if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[0] & 0x100000000000LL) == 0 )
        goto LABEL_4;
      v22 = (v10 & 1) == 0;
    }
    if ( !v22 )
      v10 |= 0x8000000000000000uLL;
  }
LABEL_4:
  *v8 = v10;
  if ( v11 )
    MiWritePteShadow((__int64)v8, v10);
  if ( a3 != -1 )
  {
    v12 = MiMakeProtectionPfnCompatible(1, 48 * a3 - 0x58000000000LL);
    MiMakeValidPte((unsigned __int64)v8, a3, v12 | 0x20000000);
    if ( !MiPteInShadowRange((unsigned __int64)(v8 + 1)) )
      goto LABEL_8;
    if ( (unsigned int)MiPteHasShadow() )
    {
      v15 = 1;
      if ( !HIBYTE(word_14043B26C) )
      {
        v23 = (v13 & 1) == 0;
        goto LABEL_23;
      }
    }
    else if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[0] & 0x100000000000LL) != 0 )
    {
      v23 = (v13 & 1) == 0;
LABEL_23:
      if ( !v23 )
        v13 |= 0x8000000000000000uLL;
    }
LABEL_8:
    *v14 = v13;
    if ( v15 )
      MiWritePteShadow((__int64)v14, v13);
  }
  return v8;
}
