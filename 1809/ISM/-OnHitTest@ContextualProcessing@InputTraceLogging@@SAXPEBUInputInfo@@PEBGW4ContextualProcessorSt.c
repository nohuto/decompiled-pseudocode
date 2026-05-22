/*
 * XREFs of ?OnHitTest@ContextualProcessing@InputTraceLogging@@SAXPEBUInputInfo@@PEBGW4ContextualProcessorState@@@Z @ 0x1800C1E80
 * Callers:
 *     ?OnHitTest@ContextualProcessorManager@@QEAAJPEAUInputInfo@@PEAUInputContext@@PEAUIInputBuffer@@PEAPEAUIInputTarget@@@Z @ 0x1800C2300 (-OnHitTest@ContextualProcessorManager@@QEAAJPEAUInputInfo@@PEAUInputContext@@PEAUIInputBuffer@@P.c)
 * Callees:
 *     _TlgWrite @ 0x180001144 (_TlgWrite.c)
 *     ?Provider@InputTraceLogging@@SAQEBU_TlgProvider_t@@XZ @ 0x1800527F0 (-Provider@InputTraceLogging@@SAQEBU_TlgProvider_t@@XZ.c)
 *     ?InputTypeToString@InputTraceLogging@@CAPEBDW4InputType@@@Z @ 0x180052A10 (-InputTypeToString@InputTraceLogging@@CAPEBDW4InputType@@@Z.c)
 *     __security_check_cookie @ 0x18012BF70 (__security_check_cookie.c)
 */

int __fastcall InputTraceLogging::ContextualProcessing::OnHitTest(__int64 a1, const WCHAR *a2, int a3)
{
  const struct _TlgProvider_t *v6; // rax
  const struct _TlgProvider_t *v7; // r10
  int v8; // r9d
  int v9; // ecx
  const char *v10; // rax
  const GUID *v11; // r9
  const struct _TlgProvider_t *v12; // r10
  __int64 v13; // rcx
  const unsigned __int16 *v14; // r8
  __int64 v15; // rdx
  const WCHAR *v16; // rdx
  __int64 v17; // rax
  int v18; // ebx
  int v19; // ebx
  const char *v20; // rax
  int v22; // [rsp+38h] [rbp-39h] BYREF
  __int64 v23; // [rsp+40h] [rbp-31h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+48h] [rbp-29h] BYREF
  __int64 *v25; // [rsp+68h] [rbp-9h]
  __int64 v26; // [rsp+70h] [rbp-1h]
  const unsigned __int16 *v27; // [rsp+78h] [rbp+7h]
  int v28; // [rsp+80h] [rbp+Fh]
  int v29; // [rsp+84h] [rbp+13h]
  int *v30; // [rsp+88h] [rbp+17h]
  __int64 v31; // [rsp+90h] [rbp+1Fh]
  const WCHAR *v32; // [rsp+98h] [rbp+27h]
  int v33; // [rsp+A0h] [rbp+2Fh]
  int v34; // [rsp+A4h] [rbp+33h]
  const char *v35; // [rsp+A8h] [rbp+37h]
  int v36; // [rsp+B0h] [rbp+3Fh]
  int v37; // [rsp+B4h] [rbp+43h]

  v6 = InputTraceLogging::Provider();
  v7 = v6;
  if ( *(_DWORD *)v6 > 4u )
  {
    v8 = *((_DWORD *)v6 + 4);
    LODWORD(v6) = 1024;
    if ( (v8 & 0x400) != 0 && (*((_QWORD *)v7 + 3) & 0x400LL) == *((_QWORD *)v7 + 3) )
    {
      v9 = *(_DWORD *)a1;
      v23 = *(_QWORD *)(a1 + 16);
      v25 = &v23;
      v26 = 8LL;
      v10 = InputTraceLogging::InputTypeToString(v9);
      v13 = -1LL;
      v14 = &word_18014A10A;
      LODWORD(v15) = (_DWORD)v11;
      if ( v10 )
      {
        v14 = (const unsigned __int16 *)v10;
        v15 = -1LL;
        do
          ++v15;
        while ( v10[v15] != (_BYTE)v11 );
      }
      v27 = v14;
      v28 = v15 + 1;
      v16 = &sourceString;
      v22 = *(_DWORD *)(a1 + 4);
      v30 = &v22;
      LODWORD(v17) = (_DWORD)v11;
      v29 = (int)v11;
      v31 = 4LL;
      if ( a2 )
      {
        v16 = a2;
        v17 = -1LL;
        do
          ++v17;
        while ( a2[v17] != (_WORD)v11 );
      }
      v32 = v16;
      v33 = 2 * v17 + 2;
      v34 = (int)v11;
      if ( a3 )
      {
        v18 = a3 - 1;
        if ( v18 )
        {
          v19 = v18 - 1;
          if ( v19 )
          {
            if ( v19 == 1 )
              v20 = "Listen";
            else
              v20 = "UNKNOWN";
          }
          else
          {
            v20 = "Handle";
          }
        }
        else
        {
          v20 = "Buffer";
        }
      }
      else
      {
        v20 = "Ignore";
      }
      do
        ++v13;
      while ( v20[v13] != (_BYTE)v11 );
      v35 = v20;
      v36 = v13 + 1;
      v37 = (int)v11;
      LODWORD(v6) = TlgWrite(v12, &unk_18016AC0C, 0LL, v11, 7u, &pData);
    }
  }
  return (int)v6;
}
