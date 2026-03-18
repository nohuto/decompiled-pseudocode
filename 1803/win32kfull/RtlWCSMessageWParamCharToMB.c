/*
 * XREFs of RtlWCSMessageWParamCharToMB @ 0x1C010E578
 * Callers:
 *     xxxDispatchMessage @ 0x1C0023E5C (xxxDispatchMessage.c)
 *     fnHkINLPMSG @ 0x1C00439D0 (fnHkINLPMSG.c)
 *     SfnINWPARAMDBCSCHAR @ 0x1C0134860 (SfnINWPARAMDBCSCHAR.c)
 *     SfnINWPARAMCHAR @ 0x1C01DE070 (SfnINWPARAMCHAR.c)
 * Callees:
 *     ConvertToAndFromWideChar @ 0x1C00DE960 (ConvertToAndFromWideChar.c)
 *     THREAD_CODEPAGE @ 0x1C01E0324 (THREAD_CODEPAGE.c)
 */

__int64 __fastcall RtlWCSMessageWParamCharToMB(unsigned int a1, __int64 a2)
{
  unsigned __int16 v4; // ax
  ULONG BytesInUnicodeString; // edx
  unsigned __int64 v6; // rdx
  unsigned int MultiByteString; // [rsp+40h] [rbp+8h] BYREF

  if ( a1 == 47
    || a1 == 204
    || a1 > 0x101 && (a1 <= 0x103 || a1 > 0x105 && (a1 <= 0x107 || a1 == 271 || a1 == 288 || a1 == 646)) )
  {
    v4 = THREAD_CODEPAGE();
    MultiByteString = 0;
    BytesInUnicodeString = (*gpsi & 2) != 0 ? 2 : 4;
    if ( v4 == NlsAnsiCodePage || !v4 )
    {
      if ( RtlUnicodeToMultiByteN((PCHAR)&MultiByteString, 4u, 0LL, (PCWCH)a2, BytesInUnicodeString) < 0 )
        goto LABEL_14;
    }
    else if ( !(unsigned int)ConvertToAndFromWideChar(
                               v4,
                               (WCHAR *)a2,
                               BytesInUnicodeString,
                               (CHAR *)&MultiByteString,
                               4u,
                               0) )
    {
LABEL_14:
      *(_QWORD *)a2 = 0LL;
      return 1LL;
    }
    if ( (*gpsi & 2) != 0 )
    {
      if ( (MultiByteString & 0xFF00) != 0 )
        v6 = BYTE1(MultiByteString) | (unsigned __int16)((unsigned __int8)MultiByteString << 8) | (unsigned __int64)(*(unsigned __int16 *)(a2 + 2) << 16);
      else
        v6 = (unsigned __int8)MultiByteString;
      *(_QWORD *)a2 = v6;
    }
    else
    {
      *(_QWORD *)a2 = MultiByteString;
    }
  }
  return 1LL;
}
