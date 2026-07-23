/*
 * XREFs of EtwpGetPsmKeyExtendedHeaderItem @ 0x1408B60D0
 * Callers:
 *     EtwpWriteUserEvent @ 0x1406483F0 (EtwpWriteUserEvent.c)
 * Callees:
 *     ObFastDereferenceObject @ 0x14004D9D0 (ObFastDereferenceObject.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     PsReferencePrimaryToken @ 0x1405DE640 (PsReferencePrimaryToken.c)
 *     PsQueryProcessAttributesByToken @ 0x140626980 (PsQueryProcessAttributesByToken.c)
 *     EtwpQueryPsmKey @ 0x1408B61A4 (EtwpQueryPsmKey.c)
 */

void *__fastcall EtwpGetPsmKeyExtendedHeaderItem(__int64 a1)
{
  _KPROCESS *Process; // rbp
  __int64 v3; // r14
  PACCESS_TOKEN v4; // rsi
  int v5; // eax
  __int64 v6; // rbx
  char v8; // [rsp+50h] [rbp+8h] BYREF
  char v9; // [rsp+58h] [rbp+10h] BYREF
  __int64 v10; // [rsp+60h] [rbp+18h] BYREF

  v10 = 0LL;
  Process = KeGetCurrentThread()->ApcState.Process;
  v3 = 8LL;
  v4 = PsReferencePrimaryToken(Process);
  PsQueryProcessAttributesByToken((__int64)v4, &v8, &v9);
  if ( v8 )
  {
    v10 = 466LL;
    v5 = EtwpQueryPsmKey(v4, a1 + 8, &v10);
    v6 = v10;
    if ( v5 < 0 )
      v6 = 0LL;
    v3 = v6 + 8;
  }
  else
  {
    LOWORD(v6) = v10;
  }
  ObFastDereferenceObject((signed __int64 *)&Process[1].Affinity.Bitmap[5], (unsigned __int64)v4);
  *(_DWORD *)(a1 + 2) = 9;
  *(_WORD *)(a1 + 6) = v6;
  *(_WORD *)a1 = (v3 + 7) & 0xFFF8;
  return memset((void *)(v3 + a1), 0, (((_DWORD)v3 + 7) & 0xFFFFFFF8) - v3);
}
