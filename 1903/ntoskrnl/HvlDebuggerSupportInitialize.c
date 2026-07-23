/*
 * XREFs of HvlDebuggerSupportInitialize @ 0x14019DD68
 * Callers:
 *     Phase1InitializationDiscard @ 0x140A07008 (Phase1InitializationDiscard.c)
 * Callees:
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     strncmp @ 0x14019F550 (strncmp.c)
 *     strstr @ 0x14019F610 (strstr.c)
 *     atol @ 0x14019F6C0 (atol.c)
 *     _guard_dispatch_icall @ 0x1401CC5F0 (_guard_dispatch_icall.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     RtlFreeAnsiString @ 0x14060B740 (RtlFreeAnsiString.c)
 *     RtlAnsiStringToUnicodeString @ 0x14063CAA0 (RtlAnsiStringToUnicodeString.c)
 */

// write access to const memory has been detected, the output may be wrong!
void __fastcall HvlDebuggerSupportInitialize(__int64 a1)
{
  const char *v2; // rcx
  char *v3; // rsi
  char *v4; // rbx
  char *v5; // rax
  char *v6; // rbx
  __int16 v7; // ax
  __int64 v8; // rax
  char *v9; // rax
  int v10; // eax
  int v11; // eax
  int v12; // eax
  char *v13; // rax
  const char *v14; // rbx
  int v15; // r14d
  char *v16; // rax
  const char *v17; // rbx
  char v18; // si
  char *v19; // rax
  int v20; // ebx
  char *v21; // rax
  char *v22; // rdi
  __int16 v23; // ax
  UNICODE_STRING DestinationString; // [rsp+20h] [rbp-E0h] BYREF
  ANSI_STRING SourceString; // [rsp+30h] [rbp-D0h] BYREF
  _QWORD v26[32]; // [rsp+40h] [rbp-C0h] BYREF

  memset(v26, 0, 0xF8uLL);
  *(_QWORD *)&DestinationString.Length = 0LL;
  DestinationString.Buffer = 0LL;
  if ( (HvlpRootFlags & 8) != 0 )
  {
    if ( a1 )
    {
      v2 = *(const char **)(a1 + 216);
      if ( v2 )
      {
        v3 = strstr(v2, "HYPERVISORDBGPORT=");
        v4 = strstr(*(const char **)(a1 + 216), "HYPERVISORDBGDEVICE=");
        v5 = strstr(*(const char **)(a1 + 216), "HYPERVISORDBGACPIPATH=");
        if ( v5 )
        {
          v6 = strstr(v5, "\\");
          if ( v6 )
          {
            HIDWORD(v26[27]) = 1;
            v7 = 0x8000;
            if ( !v3 )
              v7 = -32765;
            WORD2(v26[25]) = v7;
            v8 = (__int64)strstr(v6, " ");
            if ( v8 )
            {
              LOWORD(v8) = v8 - (_WORD)v6;
            }
            else
            {
              v8 = -1LL;
              do
                ++v8;
              while ( v6[v8] );
            }
            *(_DWORD *)(&SourceString.MaximumLength + 1) = 0;
            SourceString.Buffer = v6;
            SourceString.Length = v8;
            SourceString.MaximumLength = v8;
            if ( RtlAnsiStringToUnicodeString(&DestinationString, &SourceString, 1u) >= 0 )
            {
              v26[28] = DestinationString.Buffer;
              LODWORD(v26[29]) = DestinationString.Length;
              BYTE3(v26[2]) = 1;
              ((void (__fastcall *)(_QWORD, _QWORD *))off_140424440[0])(0LL, v26);
              RtlFreeAnsiString(&DestinationString);
            }
          }
        }
        else if ( v3 )
        {
          v9 = strstr(v3, "COM");
          if ( v9 )
          {
            v10 = atol(v9 + 3) - 1;
            if ( v10 )
            {
              v11 = v10 - 1;
              if ( v11 )
              {
                v12 = v11 - 1;
                if ( v12 )
                {
                  if ( v12 == 1 )
                    KdHvComPortInUse = 744LL;
                }
                else
                {
                  KdHvComPortInUse = 1000LL;
                }
              }
              else
              {
                KdHvComPortInUse = 760LL;
              }
            }
            else
            {
              KdHvComPortInUse = 1016LL;
            }
          }
        }
        else if ( v4 )
        {
          v13 = strstr(v4, "=");
          v14 = v13;
          if ( v13 )
          {
            v15 = atol(v13 + 1);
            v16 = strstr(v14, ".");
            if ( v16 )
            {
              v17 = v16 + 1;
              v18 = atol(v16 + 1);
              v19 = strstr(v17, ".");
              if ( v19 )
              {
                v20 = v18 & 0x1F | (32 * (atol(v19 + 1) & 7));
                v21 = strstr(*(const char **)(a1 + 216), "HYPERVISORDBGTYPE=");
                v22 = v21;
                if ( v21 )
                {
                  if ( !strncmp(v21 + 18, "1394", 4uLL) )
                  {
                    v23 = -32767;
                  }
                  else
                  {
                    if ( strncmp(v22 + 18, "NET", 3uLL) )
                      return;
                    v23 = -32765;
                  }
                  LODWORD(v26[1]) = -1;
                  BYTE3(v26[2]) = 1;
                  WORD2(v26[1]) = -1;
                  v26[0] = __PAIR64__(v20, v15);
                  if ( v23 == -32767 )
                  {
                    HIWORD(v26[1]) = 12;
                    LOBYTE(v26[2]) = 16;
                  }
                  else
                  {
                    HIWORD(v26[1]) = 2;
                    LOBYTE(v26[2]) = -1;
                  }
                  LODWORD(v26[24]) = 0;
                  ((void (__fastcall *)(_QWORD, _QWORD *))off_140424338[0])(0LL, v26);
                }
              }
            }
          }
        }
      }
    }
  }
}
