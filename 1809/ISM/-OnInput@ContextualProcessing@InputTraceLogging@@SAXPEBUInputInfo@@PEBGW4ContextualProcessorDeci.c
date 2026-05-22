/*
 * XREFs of ?OnInput@ContextualProcessing@InputTraceLogging@@SAXPEBUInputInfo@@PEBGW4ContextualProcessorDecision@@PEBUIInputTarget@@J@Z @ 0x1800C2BAC
 * Callers:
 *     ?DeliverInput@ContextualProcessorBuffer@@UEAAJPEAUInputInfo@@@Z @ 0x1800C3220 (-DeliverInput@ContextualProcessorBuffer@@UEAAJPEAUInputInfo@@@Z.c)
 * Callees:
 *     _TlgWrite @ 0x180001144 (_TlgWrite.c)
 *     ?Provider@InputTraceLogging@@SAQEBU_TlgProvider_t@@XZ @ 0x1800527F0 (-Provider@InputTraceLogging@@SAQEBU_TlgProvider_t@@XZ.c)
 *     ?InputTypeToString@InputTraceLogging@@CAPEBDW4InputType@@@Z @ 0x180052A10 (-InputTypeToString@InputTraceLogging@@CAPEBDW4InputType@@@Z.c)
 *     __security_check_cookie @ 0x18012BF70 (__security_check_cookie.c)
 */

int __fastcall InputTraceLogging::ContextualProcessing::OnInput(
        __int64 a1,
        const WCHAR *a2,
        int a3,
        __int64 a4,
        char a5)
{
  const struct _TlgProvider_t *v9; // rax
  const struct _TlgProvider_t *v10; // r11
  int v11; // r10d
  int v12; // ecx
  const char *v13; // rax
  const GUID *v14; // r9
  const struct _TlgProvider_t *v15; // r11
  __int64 v16; // rdx
  const unsigned __int16 *v17; // r8
  __int64 v18; // rcx
  const WCHAR *v19; // rcx
  __int64 v20; // rax
  int v21; // ebx
  int v22; // ebx
  int v23; // ebx
  const char *v24; // rax
  int v26; // [rsp+38h] [rbp-71h] BYREF
  __int64 v27; // [rsp+40h] [rbp-69h] BYREF
  __int64 v28; // [rsp+48h] [rbp-61h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+58h] [rbp-51h] BYREF
  __int64 *v30; // [rsp+78h] [rbp-31h]
  __int64 v31; // [rsp+80h] [rbp-29h]
  const unsigned __int16 *v32; // [rsp+88h] [rbp-21h]
  int v33; // [rsp+90h] [rbp-19h]
  int v34; // [rsp+94h] [rbp-15h]
  int *v35; // [rsp+98h] [rbp-11h]
  __int64 v36; // [rsp+A0h] [rbp-9h]
  const WCHAR *v37; // [rsp+A8h] [rbp-1h]
  int v38; // [rsp+B0h] [rbp+7h]
  int v39; // [rsp+B4h] [rbp+Bh]
  const char *v40; // [rsp+B8h] [rbp+Fh]
  int v41; // [rsp+C0h] [rbp+17h]
  int v42; // [rsp+C4h] [rbp+1Bh]
  __int64 *v43; // [rsp+C8h] [rbp+1Fh]
  __int64 v44; // [rsp+D0h] [rbp+27h]
  char *v45; // [rsp+D8h] [rbp+2Fh]
  __int64 v46; // [rsp+E0h] [rbp+37h]

  v9 = InputTraceLogging::Provider();
  v10 = v9;
  if ( *(_DWORD *)v9 > 4u )
  {
    v11 = *((_DWORD *)v9 + 4);
    LODWORD(v9) = 1024;
    if ( (v11 & 0x400) != 0 && (*((_QWORD *)v10 + 3) & 0x400LL) == *((_QWORD *)v10 + 3) )
    {
      v12 = *(_DWORD *)a1;
      v27 = *(_QWORD *)(a1 + 16);
      v30 = &v27;
      v31 = 8LL;
      v13 = InputTraceLogging::InputTypeToString(v12);
      v16 = -1LL;
      v17 = &word_18014A10A;
      LODWORD(v18) = (_DWORD)v14;
      if ( v13 )
      {
        v17 = (const unsigned __int16 *)v13;
        v18 = -1LL;
        do
          ++v18;
        while ( v13[v18] != (_BYTE)v14 );
      }
      v32 = v17;
      v33 = v18 + 1;
      v19 = &sourceString;
      v26 = *(_DWORD *)(a1 + 4);
      v35 = &v26;
      LODWORD(v20) = (_DWORD)v14;
      v34 = (int)v14;
      v36 = 4LL;
      if ( a2 )
      {
        v19 = a2;
        v20 = -1LL;
        do
          ++v20;
        while ( a2[v20] != (_WORD)v14 );
      }
      v37 = v19;
      v38 = 2 * v20 + 2;
      v39 = (int)v14;
      if ( a3 )
      {
        v21 = a3 - 1;
        if ( v21 )
        {
          v22 = v21 - 1;
          if ( v22 )
          {
            v23 = v22 - 1;
            if ( v23 )
            {
              if ( v23 == 1 )
                v24 = "Listen";
              else
                v24 = "UNKNOWN";
            }
            else
            {
              v24 = "Drop";
            }
          }
          else
          {
            v24 = "Send";
          }
        }
        else
        {
          v24 = "Buffer";
        }
      }
      else
      {
        v24 = "Ignore";
      }
      do
        ++v16;
      while ( v24[v16] != (_BYTE)v14 );
      v40 = v24;
      v41 = v16 + 1;
      v43 = &v28;
      v45 = &a5;
      v42 = (int)v14;
      v28 = a4;
      v44 = 8LL;
      v46 = 4LL;
      LODWORD(v9) = TlgWrite(v15, &unk_18016AD24, 0LL, v14, 9u, &pData);
    }
  }
  return (int)v9;
}
