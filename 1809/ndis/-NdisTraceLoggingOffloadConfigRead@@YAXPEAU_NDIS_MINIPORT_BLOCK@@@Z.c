/*
 * XREFs of ?NdisTraceLoggingOffloadConfigRead@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C001D01C
 * Callers:
 *     ndisReadOffloadRegistry @ 0x1C00C623C (ndisReadOffloadRegistry.c)
 * Callees:
 *     _TlgWrite @ 0x1C0013A1C (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x1C001DC2C (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x1C0026050 (__security_check_cookie.c)
 */

void __fastcall NdisTraceLoggingOffloadConfigRead(struct _NDIS_MINIPORT_BLOCK *a1)
{
  const GUID *v1; // r8
  __int64 v2; // r9
  int v3; // [rsp+30h] [rbp-68h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-58h] BYREF
  __int64 v5; // [rsp+60h] [rbp-38h]
  int v6; // [rsp+68h] [rbp-30h]
  int v7; // [rsp+6Ch] [rbp-2Ch]
  int *v8; // [rsp+70h] [rbp-28h]
  int v9; // [rsp+78h] [rbp-20h]
  int v10; // [rsp+7Ch] [rbp-1Ch]

  if ( hProvider.LevelPlus1 > 5 )
  {
    if ( TlgKeywordOn(&hProvider, 0x200000000000uLL) )
    {
      v7 = 0;
      v10 = 0;
      v5 = v2 + 4040;
      v3 = *(_DWORD *)(v2 + 3704);
      v8 = &v3;
      v6 = 16;
      v9 = 4;
      TlgWrite(&hProvider, &unk_1C008C015, v1, (LPCGUID)v2, 4u, &pData);
    }
  }
}
