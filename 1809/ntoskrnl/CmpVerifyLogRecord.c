/*
 * XREFs of CmpVerifyLogRecord @ 0x140581E30
 * Callers:
 *     CmpRmReDoPhase @ 0x1407FA3E4 (CmpRmReDoPhase.c)
 * Callees:
 *     CmpVerifyCreateOrDeleteKeyLogRecord @ 0x140581DC4 (CmpVerifyCreateOrDeleteKeyLogRecord.c)
 *     CmpVerifyRenameKeyLogRecord @ 0x140581F1C (CmpVerifyRenameKeyLogRecord.c)
 *     CmpVerifySetOrDeleteValueLogRecord @ 0x140581F78 (CmpVerifySetOrDeleteValueLogRecord.c)
 *     CmpVerifySetSecurityDescriptorLogRecord @ 0x140581FFC (CmpVerifySetSecurityDescriptorLogRecord.c)
 *     HvBufferCheckSum @ 0x1406F9404 (HvBufferCheckSum.c)
 */

__int64 __fastcall CmpVerifyLogRecord(__int64 a1, unsigned int a2)
{
  __int64 result; // rax
  unsigned int v4; // edi
  int v5; // edx
  unsigned int v6; // eax
  unsigned __int16 v7; // ax
  unsigned int v8; // eax
  unsigned int v9; // eax
  unsigned int v10; // eax

  if ( a2 < 0x30 )
    return 3222863920LL;
  v4 = *(_DWORD *)(a1 + 4);
  if ( v4 > a2 || v4 < 0x30 )
    return 3222863920LL;
  v5 = HvBufferCheckSum(a1, v4);
  result = v5 != *(_DWORD *)a1 ? 0xC0190030 : 0;
  if ( *(_DWORD *)a1 == v5 )
  {
    v6 = *(_DWORD *)(a1 + 12);
    if ( v6 >= 0xB )
      return 3222863920LL;
    if ( v6 > 7 )
    {
      v9 = v6 - 8;
      if ( v9 )
      {
        v10 = v9 - 1;
        if ( !v10 )
        {
          result = CmpVerifyRenameKeyLogRecord(a1);
          goto LABEL_26;
        }
        if ( v10 != 1 )
          __fastfail(5u);
      }
      result = CmpVerifySetSecurityDescriptorLogRecord(a1);
    }
    else
    {
      if ( v6 == 7 )
      {
LABEL_13:
        if ( v4 < 0x38 )
          return 3222863920LL;
        v7 = *(_WORD *)(a1 + 32);
        if ( (v7 & 1) != 0 )
          return 3222863920LL;
        v8 = v7 + 56;
        if ( v8 < 0x38 || v4 < v8 )
          return 3222863920LL;
        return 0LL;
      }
      if ( !v6 )
        return 0LL;
      if ( v6 <= 2 )
      {
        result = CmpVerifyCreateOrDeleteKeyLogRecord(a1);
      }
      else
      {
        if ( v6 > 5 )
          goto LABEL_13;
        result = CmpVerifySetOrDeleteValueLogRecord(a1);
      }
    }
LABEL_26:
    if ( (int)result < 0 )
      return result;
    return 0LL;
  }
  return result;
}
