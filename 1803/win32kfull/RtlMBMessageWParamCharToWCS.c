/*
 * XREFs of RtlMBMessageWParamCharToWCS @ 0x1C022B318
 * Callers:
 *     xxxDispatchMessage @ 0x1C0023E5C (xxxDispatchMessage.c)
 *     fnHkINLPMSG @ 0x1C00439D0 (fnHkINLPMSG.c)
 *     NtUserfnINWPARAMCHAR @ 0x1C01F8D10 (NtUserfnINWPARAMCHAR.c)
 * Callees:
 *     ConvertToAndFromWideChar @ 0x1C00DE960 (ConvertToAndFromWideChar.c)
 *     THREAD_CODEPAGE @ 0x1C01E0324 (THREAD_CODEPAGE.c)
 */

__int64 __fastcall RtlMBMessageWParamCharToWCS(__int64 a1, CHAR *a2)
{
  __int16 v2; // di
  BOOL v3; // ebp
  unsigned int v5; // ebx
  unsigned __int16 v6; // dx
  unsigned __int64 v7; // rcx
  unsigned int v8; // eax
  unsigned int UnicodeString; // [rsp+60h] [rbp+8h] BYREF

  v2 = *(_WORD *)a2;
  v3 = 0;
  v5 = a1;
  v6 = THREAD_CODEPAGE(a1, (__int64)a2);
  if ( v5 == 47 || v5 == 204 )
    goto LABEL_17;
  if ( v5 == 258 )
  {
    v3 = (*gpsi & 2) != 0 && (*(_QWORD *)a2 & 0x80000000LL) != 0;
LABEL_12:
    if ( (*gpsi & 2) != 0 )
    {
      if ( (v2 & 0xFF00) != 0 )
        v7 = HIBYTE(v2) | (unsigned __int64)(unsigned __int16)((unsigned __int8)v2 << 8);
      else
        v7 = (unsigned __int8)v2;
      *(_QWORD *)a2 = v7;
    }
    goto LABEL_17;
  }
  if ( v5 != 259 )
  {
    if ( v5 <= 0x105 )
      return 1LL;
    if ( v5 > 0x107 )
    {
      if ( v5 != 271 )
      {
        if ( v5 == 288 )
          goto LABEL_17;
        if ( v5 != 646 )
          return 1LL;
      }
      goto LABEL_12;
    }
  }
LABEL_17:
  UnicodeString = 0;
  if ( v6 == NlsAnsiCodePage || !v6 )
  {
    if ( RtlMultiByteToUnicodeN((PWCH)&UnicodeString, 4u, 0LL, a2, 2u) >= 0 )
      goto LABEL_20;
  }
  else if ( (unsigned int)ConvertToAndFromWideChar(v6, (WCHAR *)&UnicodeString, 4u, a2, 2u, 1) )
  {
LABEL_20:
    v8 = UnicodeString;
    if ( v3 )
      v8 = UnicodeString | 0x80000000;
    *(_QWORD *)a2 = v8;
    return 1LL;
  }
  return 0LL;
}
