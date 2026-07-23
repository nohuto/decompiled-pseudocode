/*
 * XREFs of MmNotifyProcessInSwapTrigger @ 0x14010CCA8
 * Callers:
 *     KiRequestProcessInSwap @ 0x14010CB00 (KiRequestProcessInSwap.c)
 * Callees:
 *     _TlgCreateSz @ 0x140003938 (_TlgCreateSz.c)
 *     _TlgKeywordOn @ 0x140012A04 (_TlgKeywordOn.c)
 *     _TlgWriteEx @ 0x140100938 (_TlgWriteEx.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 */

char __fastcall MmNotifyProcessInSwapTrigger(__int64 a1)
{
  char result; // al
  __int64 v2; // r10
  ULONG64 v3; // r8
  TraceLoggingHProvider v4; // r9
  const GUID *v5; // [rsp+20h] [rbp-88h]
  const GUID *v6; // [rsp+28h] [rbp-80h]
  int v7; // [rsp+40h] [rbp-68h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+50h] [rbp-58h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+70h] [rbp-38h] BYREF
  int *v10; // [rsp+80h] [rbp-28h]
  int v11; // [rsp+88h] [rbp-20h]
  int v12; // [rsp+8Ch] [rbp-1Ch]

  result = *(_BYTE *)(a1 + 1467) & 0x60;
  if ( result == 64 && hProvider && hProvider->LevelPlus1 > 5 )
  {
    result = TlgKeywordOn(hProvider, 0x400000000008uLL);
    if ( result )
    {
      v7 = *(_DWORD *)(v2 + 736);
      TlgCreateSz(&pDesc, (LPCSTR)(v2 + 1104));
      v12 = 0;
      v10 = &v7;
      v11 = 4;
      return TlgWriteEx(v4, &unk_14036E954, v3, (ULONG)v4, v5, v6, 4u, &pData);
    }
  }
  return result;
}
