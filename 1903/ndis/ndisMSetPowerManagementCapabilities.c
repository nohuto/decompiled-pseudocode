/*
 * XREFs of ndisMSetPowerManagementCapabilities @ 0x1C00300B8
 * Callers:
 *     ?ndisMSetGeneralAttributes@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_MINIPORT_ADAPTER_GENERAL_ATTRIBUTES@@@Z @ 0x1C002FBC4 (-ndisMSetGeneralAttributes@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_MINIPORT_ADAPTER_GENERAL_ATTR.c)
 * Callees:
 *     WPP_RECORDER_SF_qq @ 0x1C00066A0 (WPP_RECORDER_SF_qq.c)
 *     ndisRssPmObjectHeaderFixup @ 0x1C0030254 (ndisRssPmObjectHeaderFixup.c)
 *     memmove @ 0x1C0041100 (memmove.c)
 *     memset @ 0x1C0041440 (memset.c)
 */

__int64 __fastcall ndisMSetPowerManagementCapabilities(_BYTE *a1, __int64 a2)
{
  void *v2; // rbp
  size_t v5; // rdi
  int v6; // edx
  int v7; // r8d
  int v8; // r9d
  unsigned __int8 v9; // al
  char v10; // al
  __int16 v11; // cx
  unsigned __int8 v12; // al
  unsigned __int16 v14; // ax

  v2 = a1 + 1000;
  v5 = 60LL;
  memset(a1 + 1000, 0, 0x3CuLL);
  if ( *(_BYTE *)(a2 + 1) >= 2u )
  {
    v10 = 2;
    v11 = 60;
  }
  else
  {
    v9 = a1[32];
    if ( v9 > 6u || v9 == 6 && a1[33] >= 0x50u )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v6) = 2;
        WPP_RECORDER_SF_qq(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          v6,
          1,
          127,
          (struct _GUID *)&WPP_529e9a8d17733b7c5a0c4606a55c84c2_Traceguids,
          (char)a1,
          a2);
      }
      return 3223519276LL;
    }
    v10 = 1;
    v11 = 52;
  }
  LOBYTE(v8) = v10;
  LOBYTE(v7) = 0x80;
  if ( (unsigned __int8)ndisRssPmObjectHeaderFixup((unsigned int)"PowerManagementCapabilities", a2, v7, v8, v11) )
  {
    v12 = a1[32];
    if ( v12 > 6u || v12 == 6 && a1[33] >= 0x50u )
      return 3223519276LL;
  }
  v14 = *(_WORD *)(a2 + 2);
  if ( v14 < 0x3Cu )
    v5 = v14;
  memmove(v2, (const void *)a2, v5);
  return 0LL;
}
