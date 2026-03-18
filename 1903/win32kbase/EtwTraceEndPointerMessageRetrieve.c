/*
 * XREFs of EtwTraceEndPointerMessageRetrieve @ 0x1C010DD00
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateK0pqq @ 0x1C01108A8 (McTemplateK0pqq.c)
 */

__int64 __fastcall EtwTraceEndPointerMessageRetrieve(int a1, char a2, int a3)
{
  __int64 result; // rax
  char v4; // al
  void *v5; // rdx

  result = (unsigned int)(a3 - 577);
  if ( a3 == 577 || a3 == 581 )
  {
    if ( (BYTE2(Microsoft_Windows_Win32kEnableBits) & 0x10) == 0 )
      return result;
    v4 = a2;
    v5 = &EndPointerUpdateMessageRetrieve;
  }
  else
  {
    if ( (BYTE2(Microsoft_Windows_Win32kEnableBits) & 8) == 0 )
      return result;
    v4 = a2;
    v5 = &EndPointerMessageRetrieve;
  }
  return McTemplateK0pqq(a1, (_DWORD)v5, a3, a1, v4, a3);
}
