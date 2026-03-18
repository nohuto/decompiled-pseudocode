/*
 * XREFs of RtlMBMessageWParamCharToWCS @ 0x1C02598C4
 * Callers:
 *     xxxDispatchMessage @ 0x1C002ADC8 (xxxDispatchMessage.c)
 *     fnHkINLPMSG @ 0x1C0047160 (fnHkINLPMSG.c)
 *     NtUserfnINWPARAMCHAR @ 0x1C0238B20 (NtUserfnINWPARAMCHAR.c)
 * Callees:
 *     ConvertToAndFromWideChar @ 0x1C011F234 (ConvertToAndFromWideChar.c)
 *     THREAD_CODEPAGE @ 0x1C015ED08 (THREAD_CODEPAGE.c)
 */

__int64 __fastcall RtlMBMessageWParamCharToWCS(__int64 a1, CHAR *a2, __int64 a3)
{
  unsigned __int16 v3; // si
  BOOL v4; // ebp
  unsigned int v6; // ebx
  unsigned __int16 v7; // dx
  unsigned __int64 v8; // rcx
  unsigned int v9; // eax
  unsigned int UnicodeString; // [rsp+60h] [rbp+8h] BYREF

  v3 = *(_WORD *)a2;
  v4 = 0;
  v6 = a1;
  v7 = THREAD_CODEPAGE(a1, (__int64)a2, a3);
  if ( v6 == 47 || v6 == 204 )
    goto LABEL_17;
  if ( v6 == 258 )
  {
    v4 = (*gpsi & 2) != 0 && (*(_QWORD *)a2 & 0x80000000LL) != 0;
LABEL_12:
    if ( (*gpsi & 2) != 0 )
    {
      if ( (v3 & 0xFF00) != 0 )
        v8 = ((unsigned __int64)v3 >> 8) | ((unsigned __int64)(unsigned __int8)v3 << 8);
      else
        v8 = (unsigned __int8)v3;
      *(_QWORD *)a2 = v8;
    }
    goto LABEL_17;
  }
  if ( v6 != 259 )
  {
    if ( v6 <= 0x105 )
      return 1LL;
    if ( v6 > 0x107 )
    {
      if ( v6 != 271 )
      {
        if ( v6 == 288 )
          goto LABEL_17;
        if ( v6 != 646 )
          return 1LL;
      }
      goto LABEL_12;
    }
  }
LABEL_17:
  UnicodeString = 0;
  if ( v7 == NlsAnsiCodePage || !v7 )
  {
    if ( RtlMultiByteToUnicodeN((PWCH)&UnicodeString, 4u, 0LL, a2, 2u) >= 0 )
      goto LABEL_20;
  }
  else if ( (unsigned int)ConvertToAndFromWideChar(v7, (WCHAR *)&UnicodeString, 4u, a2, 2u, 1) )
  {
LABEL_20:
    v9 = UnicodeString;
    if ( v4 )
      v9 = UnicodeString | 0x80000000;
    *(_QWORD *)a2 = v9;
    return 1LL;
  }
  return 0LL;
}
