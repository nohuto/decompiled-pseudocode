/*
 * XREFs of UIPISQMChangeFilter @ 0x1C0087C78
 * Callers:
 *     _ChangeWindowMessageFilter @ 0x1C0087660 (_ChangeWindowMessageFilter.c)
 *     _ChangeWindowMessageFilterEx @ 0x1C0087AE8 (_ChangeWindowMessageFilterEx.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0162AB0 (__security_check_cookie.c)
 *     memset @ 0x1C0166840 (memset.c)
 *     ?MsgSQMPopulateProcessSQMInfo@@YAXPEAUtagPROCESSINFO@@PEAUtagMSGSQM_PROCESSSQMINFO@@@Z @ 0x1C020CB60 (-MsgSQMPopulateProcessSQMInfo@@YAXPEAUtagPROCESSINFO@@PEAUtagMSGSQM_PROCESSSQMINFO@@@Z.c)
 */

void *__fastcall UIPISQMChangeFilter(struct tagPROCESSINFO *a1, int a2, int a3, int a4)
{
  void *result; // rax
  int v9; // edi
  const wchar_t *v10; // rcx
  const wchar_t *v11; // rax
  const wchar_t *v12; // rax
  bool v13; // zf
  _DWORD v14[12]; // [rsp+20h] [rbp-E0h] BYREF
  _QWORD v15[16]; // [rsp+50h] [rbp-B0h] BYREF
  _BYTE v16[512]; // [rsp+D0h] [rbp-30h] BYREF

  result = memset(v15, 0, sizeof(v15));
  v9 = 0;
  if ( gfWinMsgSQMIsOptedIn )
  {
    memset(v14, 0, 0x2CuLL);
    MsgSQMPopulateProcessSQMInfo(a1, (struct tagMSGSQM_PROCESSSQMINFO *)v14);
    if ( (unsigned __int16)a3 >= 0xC000u )
      LOBYTE(v9) = (unsigned int)UserGetAtomName((unsigned __int16)a3, v16, 255LL) != 0;
    v10 = L"(null)";
    LODWORD(v15[11]) = a3;
    LODWORD(v15[0]) = 2;
    v11 = (const wchar_t *)v14;
    if ( !LOWORD(v14[0]) )
      v11 = L"(null)";
    LODWORD(v15[14]) = 2;
    v15[1] = v11;
    LODWORD(v15[3]) = v14[8];
    LODWORD(v15[5]) = v14[9];
    LODWORD(v15[7]) = v14[10];
    LODWORD(v15[2]) = 1;
    LODWORD(v15[9]) = a2 != 0;
    LODWORD(v15[4]) = 1;
    v12 = (const wchar_t *)v16;
    if ( !v9 )
      v12 = L"(null)";
    LODWORD(v15[6]) = 1;
    LODWORD(v15[8]) = 1;
    LODWORD(v15[10]) = 1;
    LODWORD(v15[12]) = 1;
    v13 = *v12 == 0;
    LODWORD(v15[13]) = a4;
    if ( !v13 )
      v10 = v12;
    v15[15] = v10;
    return (void *)WinSqmAddToStream(gSqmSession, 6265LL, 8LL, v15);
  }
  return result;
}
