/*
 * XREFs of ?AeServerApiCreatePort@HandleSendReceiveServer@@AEAAJPEAPEAG@Z @ 0x1400415B8
 * Callers:
 *     ?Initialize@HandleSendReceiveServer@@QEAAJPEAPEAG@Z @ 0x140041C40 (-Initialize@HandleSendReceiveServer@@QEAAJPEAPEAG@Z.c)
 * Callees:
 *     ?StringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x14000778C (-StringCchPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     __security_check_cookie @ 0x140015A80 (__security_check_cookie.c)
 *     memset_0 @ 0x1400168B6 (memset_0.c)
 *     ?SecurityCreateSecurityDescriptor@HandleSendReceiveServer@@AEAAJPEAPEAX@Z @ 0x140041CEC (-SecurityCreateSecurityDescriptor@HandleSendReceiveServer@@AEAAJPEAPEAX@Z.c)
 */

__int64 __fastcall HandleSendReceiveServer::AeServerApiCreatePort(HandleSendReceiveServer *this, PCWSTR *a2)
{
  int v4; // r12d
  int v5; // ebx
  unsigned __int16 *v6; // rax
  wchar_t *v7; // rbx
  ULONG v8; // eax
  ULONG v9; // r14d
  HandleSendReceiveServer *v10; // rcx
  int inited; // esi
  HLOCAL v12; // r15
  int v13; // eax
  int v14; // eax
  wchar_t *v15; // rbx
  ULONG v16; // eax
  signed int LastError; // eax
  __int64 v19; // [rsp+28h] [rbp-A1h]
  __int64 Seed; // [rsp+30h] [rbp-99h] BYREF
  int v21; // [rsp+38h] [rbp-91h]
  HLOCAL hMem; // [rsp+40h] [rbp-89h] BYREF
  int v23; // [rsp+48h] [rbp-81h] BYREF
  __int64 v24; // [rsp+50h] [rbp-79h]
  _UNICODE_STRING *p_DestinationString; // [rsp+58h] [rbp-71h]
  int v26; // [rsp+60h] [rbp-69h]
  HLOCAL v27; // [rsp+68h] [rbp-61h]
  __int64 v28; // [rsp+70h] [rbp-59h]
  _UNICODE_STRING DestinationString; // [rsp+78h] [rbp-51h] BYREF
  _BYTE v30[16]; // [rsp+90h] [rbp-39h] BYREF
  __int64 v31; // [rsp+A0h] [rbp-29h]

  v4 = 0;
  if ( !a2 )
    return (unsigned int)-2147024809;
  v6 = (unsigned __int16 *)CoTaskMemAlloc(0x80uLL);
  *a2 = v6;
  if ( !v6 )
    return (unsigned int)-2147024882;
  *v6 = 0;
  v7 = (wchar_t *)*a2;
  LODWORD(Seed) = MEMORY[0x7FFE0320];
  do
  {
    v8 = RtlRandomEx((PULONG)&Seed);
    v9 = v8;
  }
  while ( !v8 );
  v5 = StringCchPrintfW(v7, 64LL, L"%ws%ws%ld", L"\\BaseNamedObjects\\", L"AudioEngineDuplicateHandleApiPort", v8, Seed);
  if ( v5 >= 0 )
  {
    inited = RtlInitUnicodeStringEx(&DestinationString, *a2);
    if ( inited < 0 )
      goto LABEL_26;
    v5 = HandleSendReceiveServer::SecurityCreateSecurityDescriptor(v10, &hMem);
    if ( v5 < 0 )
      goto LABEL_25;
    v28 = 0LL;
    v24 = 0LL;
    v12 = hMem;
    v23 = 48;
    v26 = 64;
    p_DestinationString = &DestinationString;
    v27 = hMem;
    memset_0(v30, 0, 0x48uLL);
    v13 = 3;
    v31 = 48LL;
    while ( 1 )
    {
      v21 = v13 - 1;
      v14 = NtAlpcCreatePort((char *)this + 8, &v23, v30);
      inited = v14;
      if ( v14 != -1073741771 && v14 != 0x40000000 )
      {
LABEL_24:
        LocalFree(v12);
LABEL_25:
        if ( inited < 0 )
        {
LABEL_26:
          RtlSetLastWin32ErrorAndNtStatusFromNtStatus(inited);
          LastError = GetLastError();
          v5 = LastError;
          if ( LastError > 0 )
            v5 = (unsigned __int16)LastError | 0x80070000;
          CoTaskMemFree((LPVOID)*a2);
          *a2 = 0LL;
        }
        return (unsigned int)v5;
      }
      v15 = (wchar_t *)*a2;
      if ( ++v4 )
      {
        if ( !v9 )
        {
          v5 = -2147024809;
          goto LABEL_21;
        }
        v16 = v4 + v9;
      }
      else
      {
        HIDWORD(Seed) = MEMORY[0x7FFE0320];
        do
          v16 = RtlRandomEx((PULONG)&Seed + 1);
        while ( !v16 );
        v12 = hMem;
        v9 = v16;
      }
      LODWORD(v19) = v16;
      v5 = StringCchPrintfW(v15, 64LL, L"%ws%ws%ld", L"\\BaseNamedObjects\\", L"AudioEngineDuplicateHandleApiPort", v19);
LABEL_21:
      if ( v5 >= 0 && RtlInitUnicodeStringEx(&DestinationString, *a2) >= 0 )
      {
        v24 = 0LL;
        v28 = 0LL;
        p_DestinationString = &DestinationString;
        v13 = v21;
        v23 = 48;
        v26 = 64;
        v27 = v12;
        if ( v21 > 0 )
          continue;
      }
      goto LABEL_24;
    }
  }
  return (unsigned int)v5;
}
