/*
 * XREFs of sub_18009B7E4 @ 0x18009B7E4
 * Callers:
 *     sub_18009A918 @ 0x18009A918 (sub_18009A918.c)
 *     sub_18009ADB4 @ 0x18009ADB4 (sub_18009ADB4.c)
 *     sub_18009AE0C @ 0x18009AE0C (sub_18009AE0C.c)
 * Callees:
 *     AlpcMaxAllowedMessageLength @ 0x180083BC0 (AlpcMaxAllowedMessageLength.c)
 *     sub_18008C6D8 @ 0x18008C6D8 (sub_18008C6D8.c)
 */

ULONG __fastcall sub_18009B7E4(unsigned __int16 **a1)
{
  ULONG result; // eax
  bool v3; // sf
  unsigned __int16 *v4; // rcx

  if ( a1 )
  {
    v3 = *((_DWORD *)a1 + 2) - 2 < 0;
    *((_DWORD *)a1 + 2) -= 2;
    if ( v3 )
    {
      return AlpcMaxAllowedMessageLength();
    }
    else
    {
      v4 = *a1;
      result = *v4;
      *a1 = v4 + 1;
    }
  }
  else
  {
    sub_18008C6D8();
    return 0xFFFF;
  }
  return result;
}
