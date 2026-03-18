/*
 * XREFs of MiGetPteFromCopyList @ 0x140138004
 * Callers:
 *     MiStealPage @ 0x1400C3928 (MiStealPage.c)
 *     MiSwapStackPage @ 0x140134EA4 (MiSwapStackPage.c)
 *     MiAddPagesToEnclave @ 0x1402D2F88 (MiAddPagesToEnclave.c)
 *     MiCopyPagesIntoEnclave @ 0x140892BA4 (MiCopyPagesIntoEnclave.c)
 *     MiFillPerSessionProtos @ 0x1408987B4 (MiFillPerSessionProtos.c)
 * Callees:
 *     MiPteInShadowRange @ 0x14002AC50 (MiPteInShadowRange.c)
 *     MiMakeValidPte @ 0x14002B050 (MiMakeValidPte.c)
 *     MiMakeProtectionPfnCompatible @ 0x14002C1E0 (MiMakeProtectionPfnCompatible.c)
 *     MiFlushTbList @ 0x140050080 (MiFlushTbList.c)
 *     MiInsertTbFlushEntry @ 0x140058D70 (MiInsertTbFlushEntry.c)
 *     MiWritePteShadow @ 0x1400F8750 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x1400F87B0 (MiPteHasShadow.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     memset @ 0x1401D77C0 (memset.c)
 */

_QWORD *__fastcall MiGetPteFromCopyList(unsigned int *a1, __int64 a2, __int64 a3)
{
  __int64 v6; // rdx
  int v7; // edi
  _QWORD *v8; // rbx
  int ProtectionPfnCompatible; // eax
  __int64 v10; // rdx
  int v11; // r8d
  int v12; // eax
  __int64 v13; // rdx
  _QWORD *v14; // r8
  int v15; // r9d
  __int64 v17; // r8
  __int64 v18; // rdx
  __int64 v19; // rdx
  __int64 v20; // r8
  __int64 v21; // r9
  bool v22; // zf
  bool v23; // zf
  _QWORD v24[24]; // [rsp+20h] [rbp-F8h] BYREF

  memset(v24, 0, 0xB8uLL);
  v6 = *a1;
  v7 = (a3 != -1) + 1;
  if ( (int)v6 + v7 > a1[1] )
  {
    v24[3] = 0LL;
    v17 = v6;
    v18 = *((_QWORD *)a1 + 2) << 25;
    LODWORD(v24[1]) = 20;
    MiInsertTbFlushEntry((__int64)v24, v18 >> 16, v17, 0);
    MiFlushTbList((int *)v24, v19, v20, v21);
    v6 = 0LL;
  }
  v8 = (_QWORD *)(*((_QWORD *)a1 + 2) + 8 * v6);
  *a1 = v7 + v6;
  ProtectionPfnCompatible = MiMakeProtectionPfnCompatible(4, 48 * a2 - 0x58000000000LL);
  MiMakeValidPte((unsigned __int64)v8, a2, ProtectionPfnCompatible | 0xA0000000);
  if ( MiPteInShadowRange((unsigned __int64)v8) )
  {
    if ( (unsigned int)MiPteHasShadow() )
    {
      v11 = 1;
      if ( HIBYTE(word_1404658EC) )
        goto LABEL_4;
      v22 = (v10 & 1) == 0;
    }
    else
    {
      if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[4] & 0x100000000000LL) == 0 )
        goto LABEL_4;
      v22 = (v10 & 1) == 0;
    }
    if ( !v22 )
      v10 |= 0x8000000000000000uLL;
  }
LABEL_4:
  *v8 = v10;
  if ( v11 )
    MiWritePteShadow((__int64)v8);
  if ( a3 != -1 )
  {
    v12 = MiMakeProtectionPfnCompatible(1, 48 * a3 - 0x58000000000LL);
    MiMakeValidPte((unsigned __int64)v8, a3, v12 | 0x20000000);
    if ( !MiPteInShadowRange((unsigned __int64)(v8 + 1)) )
      goto LABEL_8;
    if ( (unsigned int)MiPteHasShadow() )
    {
      v15 = 1;
      if ( !HIBYTE(word_1404658EC) )
      {
        v23 = (v13 & 1) == 0;
        goto LABEL_23;
      }
    }
    else if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[4] & 0x100000000000LL) != 0 )
    {
      v23 = (v13 & 1) == 0;
LABEL_23:
      if ( !v23 )
        v13 |= 0x8000000000000000uLL;
    }
LABEL_8:
    *v14 = v13;
    if ( v15 )
      MiWritePteShadow((__int64)v14);
  }
  return v8;
}
