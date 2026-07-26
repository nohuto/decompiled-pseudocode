/*
 * XREFs of ?NdisTraceLoggingOffloadConfigRead@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C00306A4
 * Callers:
 *     ndisReadOffloadRegistry @ 0x1C002B2B4 (ndisReadOffloadRegistry.c)
 * Callees:
 *     _TlgWrite @ 0x1C0020F10 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x1C0031284 (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x1C0040760 (__security_check_cookie.c)
 */

void __fastcall NdisTraceLoggingOffloadConfigRead(struct _NDIS_MINIPORT_BLOCK *a1)
{
  const GUID *v1; // r8
  const GUID *v2; // r9
  unsigned int Data1; // [rsp+30h] [rbp-68h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-58h] BYREF
  unsigned __int8 *Data4; // [rsp+60h] [rbp-38h]
  int v6; // [rsp+68h] [rbp-30h]
  int v7; // [rsp+6Ch] [rbp-2Ch]
  unsigned int *p_Data1; // [rsp+70h] [rbp-28h]
  int v9; // [rsp+78h] [rbp-20h]
  int v10; // [rsp+7Ch] [rbp-1Ch]

  if ( hProvider.LevelPlus1 > 5 )
  {
    if ( TlgKeywordOn(&hProvider, 0x200000000000uLL) )
    {
      v7 = 0;
      v10 = 0;
      Data4 = v2[250].Data4;
      Data1 = v2[230].Data1;
      p_Data1 = &Data1;
      v6 = 16;
      v9 = 4;
      TlgWrite(&hProvider, &unk_1C00D0DAE, v1, v2, 4u, &pData);
    }
  }
}
