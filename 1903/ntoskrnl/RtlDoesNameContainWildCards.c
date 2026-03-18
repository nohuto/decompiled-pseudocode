/*
 * XREFs of RtlDoesNameContainWildCards @ 0x1400967E0
 * Callers:
 *     RtlpIsNameInExpressionPrivate @ 0x140096360 (RtlpIsNameInExpressionPrivate.c)
 * Callees:
 *     <none>
 */

BOOLEAN __stdcall RtlDoesNameContainWildCards(PUNICODE_STRING Name)
{
  wchar_t *Buffer; // r8
  wchar_t *i; // rax
  wchar_t v3; // cx

  if ( Name->Length )
  {
    Buffer = Name->Buffer;
    for ( i = &Buffer[((unsigned __int64)Name->Length >> 1) - 1]; i >= Buffer; --i )
    {
      v3 = *i;
      if ( *i == 92 )
        break;
      if ( v3 < 0x40u && (byte_14037C8B0[v3] & 8) != 0 )
        return 1;
    }
  }
  return 0;
}
