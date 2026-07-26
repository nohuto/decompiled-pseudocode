/*
 * XREFs of ndisMSetPowerManagementCapabilities @ 0x1C001E1E8
 * Callers:
 *     ndisMSetGeneralAttributes @ 0x1C001DD54 (ndisMSetGeneralAttributes.c)
 * Callees:
 *     ndisRssPmObjectHeaderFixup @ 0x1C001E2CC (ndisRssPmObjectHeaderFixup.c)
 *     memmove @ 0x1C0026E40 (memmove.c)
 *     memset @ 0x1C0027180 (memset.c)
 *     WPP_SF_qq @ 0x1C003A868 (WPP_SF_qq.c)
 */

__int64 __fastcall ndisMSetPowerManagementCapabilities(_BYTE *a1, __int64 a2)
{
  void *v2; // rbp
  size_t v5; // rdi
  int v6; // r8d
  int v7; // r9d
  unsigned __int8 v8; // al
  __int16 v9; // ax
  unsigned __int8 v10; // al
  unsigned __int16 v12; // ax

  v2 = a1 + 1000;
  v5 = 60LL;
  memset(a1 + 1000, 0, 0x3CuLL);
  LOBYTE(v7) = 2;
  if ( *(_BYTE *)(a2 + 1) >= 2u )
  {
    v9 = 60;
  }
  else
  {
    v8 = a1[32];
    if ( v8 > 6u || v8 == 6 && a1[33] >= 0x50u )
    {
      if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 2u )
        WPP_SF_qq(129LL, &WPP_f453a6740ca1326a168191528118e90e_Traceguids, a1, a2);
      return 3223519276LL;
    }
    LOBYTE(v7) = 1;
    v9 = 52;
  }
  LOBYTE(v6) = 0x80;
  if ( (unsigned __int8)ndisRssPmObjectHeaderFixup((unsigned int)"PowerManagementCapabilities", a2, v6, v7, v9) )
  {
    v10 = a1[32];
    if ( v10 > 6u || v10 == 6 && a1[33] >= 0x50u )
      return 3223519276LL;
  }
  v12 = *(_WORD *)(a2 + 2);
  if ( v12 < 0x3Cu )
    v5 = v12;
  memmove(v2, (const void *)a2, v5);
  return 0LL;
}
