/*
 * XREFs of KiDisplayBlueScreen @ 0x140292764
 * Callers:
 *     KeBugCheck2 @ 0x140291380 (KeBugCheck2.c)
 * Callees:
 *     RtlUnicodeStringPrintf @ 0x14015D81C (RtlUnicodeStringPrintf.c)
 *     BgpFwReleaseLock @ 0x14016F308 (BgpFwReleaseLock.c)
 *     BgpFwAcquireLock @ 0x14016F358 (BgpFwAcquireLock.c)
 *     HeadlessDispatch @ 0x140186250 (HeadlessDispatch.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     memcmp @ 0x140196340 (memcmp.c)
 *     RtlStringCbPrintfExA @ 0x140268CD8 (RtlStringCbPrintfExA.c)
 *     InbvAcquireDisplayOwnership @ 0x14027D4A0 (InbvAcquireDisplayOwnership.c)
 *     IoSaveBugCheckProgress @ 0x140280410 (IoSaveBugCheckProgress.c)
 *     KeGetBugMessageText @ 0x140292354 (KeGetBugMessageText.c)
 *     KiDumpParameterImages @ 0x140292AC4 (KiDumpParameterImages.c)
 *     KiHeadlessDisplayString @ 0x140292C1C (KiHeadlessDisplayString.c)
 *     BgpFwDisplayBugCheckScreen @ 0x140328CFC (BgpFwDisplayBugCheckScreen.c)
 */

__int64 __fastcall KiDisplayBlueScreen(int a1)
{
  __int64 v2; // r14
  __int64 v3; // rbx
  __int64 *v4; // rsi
  unsigned __int16 v5; // ax
  char *v6; // rdx
  unsigned __int16 v7; // cx
  _WORD *v8; // r8
  __int64 v9; // r9
  __int16 v10; // ax
  __int64 v11; // rax
  __int64 v12; // rdx
  wchar_t *v13; // rcx
  UNICODE_STRING *p_DestinationString; // rax
  int v15; // edi
  unsigned __int16 *v16; // rdi
  unsigned __int16 *v17; // rbx
  UNICODE_STRING *v18; // rbx
  __int64 v19; // rdi
  wchar_t **p_Buffer; // rbx
  int v22; // [rsp+48h] [rbp-C0h] BYREF
  NTSTRSAFE_PSTR ppszDestEnd[2]; // [rsp+50h] [rbp-B8h] BYREF
  __int128 v24; // [rsp+68h] [rbp-A0h] BYREF
  unsigned __int16 v25; // [rsp+78h] [rbp-90h]
  __int16 v26; // [rsp+7Ah] [rbp-8Eh]
  _WORD *v27; // [rsp+80h] [rbp-88h]
  UNICODE_STRING DestinationString; // [rsp+88h] [rbp-80h] BYREF
  char pszDest[16]; // [rsp+C8h] [rbp-40h] BYREF
  _WORD v30[128]; // [rsp+D8h] [rbp-30h] BYREF
  char v31; // [rsp+1D8h] [rbp+D0h] BYREF

  LODWORD(ppszDestEnd[0]) = KiBugCheckData;
  LOBYTE(v22) = 1;
  HeadlessDispatch(14LL, 0LL, 0LL, 0LL, 0LL);
  HeadlessDispatch(1LL, (__int64)&v22, 1LL, 0LL, 0LL);
  v2 = 4LL;
  HeadlessDispatch(20LL, (__int64)ppszDestEnd, 4LL, 0LL, 0LL);
  IoSaveBugCheckProgress(0x81u);
  v3 = KiBugCheckDriver;
  v4 = &qword_140422688;
  if ( KiBugCheckDriver || (KiDumpParameterImages(0LL), (v3 = KiBugCheckDriver) != 0) )
  {
    if ( *(_WORD *)v3 == 30 && !memcmp(*(const void **)(v3 + 8), L"VerifierExt.sys", 0x1EuLL) )
      LODWORD(v3) = 0;
  }
  v27 = v30;
  v26 = 256;
  if ( KeGetBugMessageText(KiBugCheckData, (__int64)ppszDestEnd) )
  {
    v6 = ppszDestEnd[1];
    v5 = (unsigned __int16)ppszDestEnd[0];
  }
  else
  {
    RtlStringCbPrintfExA(pszDest, 0xBuLL, ppszDestEnd, 0LL, 0, "0x%08x", KiBugCheckData);
    v5 = LOWORD(ppszDestEnd[0]) - (unsigned __int16)pszDest;
    v6 = pszDest;
  }
  if ( v5 >= 0x7Fu )
    v5 = 127;
  v7 = 0;
  if ( v5 )
  {
    v7 = v5;
    v8 = v30;
    v9 = v5;
    do
    {
      v10 = *v6++;
      *v8++ = v10;
      --v9;
    }
    while ( v9 );
  }
  v11 = v7;
  v12 = 4LL;
  v25 = 2 * v7;
  v13 = (wchar_t *)&v31;
  v30[v11] = 0;
  p_DestinationString = &DestinationString;
  do
  {
    p_DestinationString->Buffer = v13;
    v13 += 19;
    *(_DWORD *)&p_DestinationString->Length = 2490404;
    ++p_DestinationString;
    --v12;
  }
  while ( v12 );
  v24 = 0LL;
  InbvAcquireDisplayOwnership();
  IoSaveBugCheckProgress(0x82u);
  v15 = KiBugCheckData;
  BgpFwAcquireLock();
  if ( (dword_140406AD0 & 2) != 0 )
    BgpFwDisplayBugCheckScreen(v15, (unsigned int)&qword_140422688, v3, (unsigned int)&v24, a1);
  BgpFwReleaseLock();
  IoSaveBugCheckProgress(0x80u);
  v16 = (unsigned __int16 *)v24;
  if ( (_QWORD)v24 && (v17 = (unsigned __int16 *)*((_QWORD *)&v24 + 1)) != 0LL )
  {
    KiHeadlessDisplayString(L"\r\n", 6LL);
    KiHeadlessDisplayString(*((_QWORD *)v16 + 1), *v16);
    KiHeadlessDisplayString(L"\r\n", 6LL);
    KiHeadlessDisplayString(*((_QWORD *)v17 + 1), *v17);
  }
  else
  {
    v18 = &DestinationString;
    v19 = 4LL;
    do
    {
      RtlUnicodeStringPrintf(v18++, L"0x%016llX", *v4++);
      --v19;
    }
    while ( v19 );
  }
  KiHeadlessDisplayString(L"\r\n", 6LL);
  KiHeadlessDisplayString(v27, v25);
  if ( KiBugCheckDriver )
  {
    KiHeadlessDisplayString(L"\r\n", 6LL);
    KiHeadlessDisplayString(*(_QWORD *)(KiBugCheckDriver + 8), *(unsigned __int16 *)KiBugCheckDriver);
  }
  KiHeadlessDisplayString(L"\r\n", 6LL);
  KiHeadlessDisplayString(L"\r\n", 6LL);
  p_Buffer = &DestinationString.Buffer;
  do
  {
    KiHeadlessDisplayString(*p_Buffer, *((unsigned __int16 *)p_Buffer - 4));
    KiHeadlessDisplayString(L"\r\n", 6LL);
    p_Buffer += 2;
    --v2;
  }
  while ( v2 );
  return KiHeadlessDisplayString(L"\r\n", 6LL);
}
