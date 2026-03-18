/*
 * XREFs of UShortAdd @ 0x1C01032D4
 * Callers:
 *     AllocateUnicodeString @ 0x1C010321C (AllocateUnicodeString.c)
 *     bVerifyMsftHighByteTable @ 0x1C021A7CC (bVerifyMsftHighByteTable.c)
 *     RowBytesAlign32 @ 0x1C02B82F8 (RowBytesAlign32.c)
 * Callees:
 *     <none>
 */

HRESULT __stdcall UShortAdd(USHORT usAugend, USHORT usAddend, USHORT *pusResult)
{
  USHORT v3; // ax
  USHORT v4; // dx

  v3 = usAddend + usAugend;
  if ( (unsigned __int16)(usAddend + usAugend) < usAugend )
    v4 = -1;
  else
    v4 = usAddend + usAugend;
  *pusResult = v4;
  return v3 < usAugend ? 0x80070216 : 0;
}
