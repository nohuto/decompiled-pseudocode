/*
 * XREFs of KiDisplayBlueScreen @ 0x1402A8D68
 * Callers:
 *     KeBugCheck2 @ 0x1402A78C0 (KeBugCheck2.c)
 * Callees:
 *     BgpFwReleaseLock @ 0x140178CE0 (BgpFwReleaseLock.c)
 *     BgpFwAcquireLock @ 0x140179150 (BgpFwAcquireLock.c)
 *     HeadlessDispatch @ 0x1401903B0 (HeadlessDispatch.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     memcmp @ 0x1401A1110 (memcmp.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     RtlStringCbPrintfExA @ 0x14027B808 (RtlStringCbPrintfExA.c)
 *     InbvAcquireDisplayOwnership @ 0x140291A90 (InbvAcquireDisplayOwnership.c)
 *     IoSaveBugCheckProgress @ 0x140295110 (IoSaveBugCheckProgress.c)
 *     KeGetBugMessageText @ 0x1402A8814 (KeGetBugMessageText.c)
 *     KiBugCheckConvertParameterValueToUnicodeString @ 0x1402A89BC (KiBugCheckConvertParameterValueToUnicodeString.c)
 *     KiDumpParameterImages @ 0x1402A90F0 (KiDumpParameterImages.c)
 *     KiHeadlessDisplayString @ 0x1402A9248 (KiHeadlessDisplayString.c)
 *     BgpFwDisplayBugCheckScreen @ 0x140349DF0 (BgpFwDisplayBugCheckScreen.c)
 */

__int64 __fastcall KiDisplayBlueScreen(int a1)
{
  __int64 v2; // rsi
  __int64 v3; // rbx
  unsigned __int64 *v4; // r15
  __int64 v5; // rdx
  char *v6; // rcx
  _OWORD *v7; // rax
  __int64 v8; // rcx
  char *v9; // rdx
  __int64 v10; // r12
  unsigned __int16 v11; // di
  _WORD *v12; // r8
  __int16 v13; // ax
  __int64 v14; // rax
  unsigned __int16 v15; // di
  int v16; // r14d
  unsigned __int16 *v17; // r14
  unsigned __int16 *v18; // rbx
  _OWORD *v19; // rbx
  __int64 v20; // r14
  _QWORD *v21; // rbx
  int v23; // [rsp+48h] [rbp-C0h] BYREF
  NTSTRSAFE_PSTR ppszDestEnd; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v25; // [rsp+58h] [rbp-B0h] BYREF
  char *v26; // [rsp+60h] [rbp-A8h]
  _OWORD v27[6]; // [rsp+68h] [rbp-A0h] BYREF
  char pszDest[16]; // [rsp+C8h] [rbp-40h] BYREF
  char v29; // [rsp+D8h] [rbp-30h] BYREF
  char v30; // [rsp+178h] [rbp+70h] BYREF

  memset(v27, 0, sizeof(v27));
  v25 = 0LL;
  v26 = 0LL;
  LODWORD(ppszDestEnd) = KiBugCheckData;
  LOBYTE(v23) = 1;
  HeadlessDispatch(14LL, 0LL, 0LL, 0LL, 0LL);
  HeadlessDispatch(1LL, (__int64)&v23, 1LL, 0LL, 0LL);
  v2 = 4LL;
  HeadlessDispatch(20LL, (__int64)&ppszDestEnd, 4LL, 0LL, 0LL);
  IoSaveBugCheckProgress(129);
  v3 = KiBugCheckDriver;
  v4 = (unsigned __int64 *)&qword_14044CF48;
  if ( KiBugCheckDriver || (KiDumpParameterImages(0LL), (v3 = KiBugCheckDriver) != 0) )
  {
    if ( *(_WORD *)v3 == 30 && !memcmp(*(const void **)(v3 + 8), L"VerifierExt.sys", 0x1EuLL) )
      LODWORD(v3) = 0;
  }
  v5 = 4LL;
  *((_QWORD *)&v27[1] + 1) = &v30;
  v6 = &v29;
  WORD1(v27[1]) = 256;
  v7 = &v27[2];
  do
  {
    *((_QWORD *)v7 + 1) = v6;
    v6 += 38;
    *(_DWORD *)v7++ = 2490404;
    --v5;
  }
  while ( v5 );
  if ( KeGetBugMessageText(KiBugCheckData, (__int64)&v25) )
  {
    v9 = v26;
    LOWORD(v8) = v25;
  }
  else
  {
    RtlStringCbPrintfExA(pszDest, 0xBuLL, &ppszDestEnd, 0LL, 0, "0x%08x", KiBugCheckData);
    LOWORD(v8) = (_WORD)ppszDestEnd - (unsigned __int16)pszDest;
    v9 = pszDest;
  }
  v10 = *((_QWORD *)&v27[1] + 1);
  v11 = 0;
  if ( (unsigned __int16)v8 >= (unsigned __int16)((WORD1(v27[1]) >> 1) - 1) )
    LOWORD(v8) = (WORD1(v27[1]) >> 1) - 1;
  if ( (_WORD)v8 )
  {
    v11 = v8;
    v12 = (_WORD *)*((_QWORD *)&v27[1] + 1);
    v8 = (unsigned __int16)v8;
    do
    {
      v13 = *v9++;
      *v12++ = v13;
      --v8;
    }
    while ( v8 );
  }
  v14 = v11;
  v15 = 2 * v11;
  LOWORD(v27[1]) = v15;
  *(_WORD *)(v10 + 2 * v14) = 0;
  InbvAcquireDisplayOwnership();
  IoSaveBugCheckProgress(130);
  v16 = KiBugCheckData;
  v27[0] = 0LL;
  BgpFwAcquireLock();
  if ( (dword_14042C010 & 2) != 0 )
  {
    BgpFwDisplayBugCheckScreen(v16, (unsigned int)&qword_14044CF48, v3, (unsigned int)v27, a1);
    v10 = *((_QWORD *)&v27[1] + 1);
    v15 = v27[1];
  }
  BgpFwReleaseLock();
  IoSaveBugCheckProgress(128);
  v17 = *(unsigned __int16 **)&v27[0];
  if ( *(_QWORD *)&v27[0] && (v18 = (unsigned __int16 *)*((_QWORD *)&v27[0] + 1)) != 0LL )
  {
    KiHeadlessDisplayString(L"\r\n", 6LL);
    KiHeadlessDisplayString(*((_QWORD *)v17 + 1), *v17);
    KiHeadlessDisplayString(L"\r\n", 6LL);
    KiHeadlessDisplayString(*((_QWORD *)v18 + 1), *v18);
  }
  else
  {
    v19 = &v27[2];
    v20 = 4LL;
    do
    {
      KiBugCheckConvertParameterValueToUnicodeString(*v4++, (__int64)v19++);
      --v20;
    }
    while ( v20 );
  }
  KiHeadlessDisplayString(L"\r\n", 6LL);
  KiHeadlessDisplayString(v10, v15);
  if ( KiBugCheckDriver )
  {
    KiHeadlessDisplayString(L"\r\n", 6LL);
    KiHeadlessDisplayString(*(_QWORD *)(KiBugCheckDriver + 8), *(unsigned __int16 *)KiBugCheckDriver);
  }
  KiHeadlessDisplayString(L"\r\n", 6LL);
  KiHeadlessDisplayString(L"\r\n", 6LL);
  v21 = (_QWORD *)&v27[2] + 1;
  do
  {
    KiHeadlessDisplayString(*v21, *((unsigned __int16 *)v21 - 4));
    KiHeadlessDisplayString(L"\r\n", 6LL);
    v21 += 2;
    --v2;
  }
  while ( v2 );
  return KiHeadlessDisplayString(L"\r\n", 6LL);
}
