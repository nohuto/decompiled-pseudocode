/*
 * XREFs of ?RmpGameModeTryApplyPriorityClass@@YAJPEAU_RM_GAME_MODE_CONTEXT@@PEAU_RM_GAME_MODE_RECIPIENT_PROCESS@@@Z @ 0x18006CCA0
 * Callers:
 *     <none>
 * Callees:
 *     _TlgWrite @ 0x18002EC10 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x18002F81C (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x180047C10 (__security_check_cookie.c)
 */

__int64 __fastcall RmpGameModeTryApplyPriorityClass(
        struct _RM_GAME_MODE_CONTEXT *a1,
        struct _RM_GAME_MODE_RECIPIENT_PROCESS *a2)
{
  char v2; // di
  unsigned int v4; // r9d
  void *v5; // rcx
  int v6; // edx
  const struct _TlgProvider_t *v7; // rcx
  int v8; // r10d
  _WORD ProcessInformation[2]; // [rsp+30h] [rbp-29h] BYREF
  NTSTATUS InformationProcess; // [rsp+34h] [rbp-25h] BYREF
  int v12; // [rsp+38h] [rbp-21h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-19h] BYREF
  NTSTATUS *p_InformationProcess; // [rsp+60h] [rbp+7h]
  int v15; // [rsp+68h] [rbp+Fh]
  int v16; // [rsp+6Ch] [rbp+13h]
  int *v17; // [rsp+70h] [rbp+17h]
  int v18; // [rsp+78h] [rbp+1Fh]
  int v19; // [rsp+7Ch] [rbp+23h]
  _WORD *v20; // [rsp+80h] [rbp+27h]
  int v21; // [rsp+88h] [rbp+2Fh]
  int v22; // [rsp+8Ch] [rbp+33h]
  char *v23; // [rsp+90h] [rbp+37h]
  int v24; // [rsp+98h] [rbp+3Fh]
  int v25; // [rsp+9Ch] [rbp+43h]

  v2 = *((_BYTE *)a2 + 148);
  if ( v2 )
  {
    InformationProcess = NtQueryInformationProcess(
                           *((HANDLE *)a2 + 5),
                           ProcessPriorityClass,
                           ProcessInformation,
                           2u,
                           0LL);
    v4 = InformationProcess;
    if ( InformationProcess >= 0 )
    {
      v5 = (void *)*((_QWORD *)a2 + 5);
      *((_WORD *)a2 + 84) = ProcessInformation[0];
      HIBYTE(ProcessInformation[0]) = v2;
      v4 = NtSetInformationProcess(v5, ProcessPriorityClass, ProcessInformation, 2u);
      InformationProcess = v4;
    }
  }
  else
  {
    v4 = 255;
    InformationProcess = 255;
  }
  if ( hProvider > 4u && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 1uLL) )
  {
    v16 = 0;
    v19 = 0;
    v22 = 0;
    v25 = 0;
    p_InformationProcess = &InformationProcess;
    v12 = *((_DWORD *)a2 + 27);
    v17 = &v12;
    v20 = ProcessInformation;
    v23 = (char *)ProcessInformation + 1;
    v15 = v8;
    v18 = v8;
    v21 = v6;
    v24 = v6;
    TlgWrite(v7, &unk_1800948A4, 0LL, 0LL, 6u, &pData);
    return (unsigned int)InformationProcess;
  }
  return v4;
}
