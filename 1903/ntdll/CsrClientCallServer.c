/*
 * XREFs of CsrClientCallServer @ 0x18004BE40
 * Callers:
 *     sub_18004BD54 @ 0x18004BD54 (sub_18004BD54.c)
 * Callees:
 *     ZwRequestWaitReplyPort @ 0x18009CB20 (ZwRequestWaitReplyPort.c)
 *     _guard_dispatch_icall_nop @ 0x1800A0100 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CsrClientCallServer(char *ReplyMessage, __int64 a2, int a3, int a4)
{
  unsigned int v7; // r8d
  int v8; // ecx
  __int64 v9; // r8
  int v10; // ecx
  char **v11; // rdx
  char *v12; // rax
  NTSTATUS v13; // eax
  __int64 v14; // r9
  __int64 *v15; // rdx
  int i; // r8d
  __int64 v17; // rcx
  char *v18; // rcx

  if ( byte_180165430 )
    return 3221225659LL;
  v7 = a3 & 0xEFFFFFFF;
  v8 = a3 & 0x10000000;
  if ( a4 < 0 )
  {
    a4 = -a4;
    *((_WORD *)ReplyMessage + 2) = 0;
  }
  else
  {
    *((_DWORD *)ReplyMessage + 1) = 0;
  }
  *((_QWORD *)ReplyMessage + 5) = 0LL;
  *((_DWORD *)ReplyMessage + 12) = v7;
  *(_DWORD *)ReplyMessage = (a4 | (a4 << 16)) + 4194328;
  if ( (NtCurrentPeb()->BitField & 2) != 0
    && ((v7 & 0xFFFF0000) == 0x20000 || v8 && (NtCurrentPeb()->BitField & 0x40) == 0) )
  {
    *((_DWORD *)ReplyMessage + 13) = -1073741790;
    return 3221225506LL;
  }
  else
  {
    if ( byte_180165B10 )
    {
      if ( a2 )
      {
        v9 = qword_180165B40;
        *((_QWORD *)ReplyMessage + 5) = qword_180165B40 + a2;
        v10 = *(_DWORD *)(a2 + 16);
        *(_QWORD *)(a2 + 24) = 0LL;
        v11 = (char **)(a2 + 32);
        while ( v10 )
        {
          v12 = *v11;
          --v10;
          ++v11;
          if ( v12 )
          {
            *(_QWORD *)v12 += v9;
            *(v11 - 1) = (char *)(v12 - ReplyMessage);
          }
        }
      }
      v13 = ZwRequestWaitReplyPort(PortHandle, (PPORT_MESSAGE)ReplyMessage, (PPORT_MESSAGE)ReplyMessage);
      if ( a2 )
      {
        v14 = qword_180165B40;
        v15 = (__int64 *)(a2 + 32);
        *((_QWORD *)ReplyMessage + 5) -= qword_180165B40;
        for ( i = *(_DWORD *)(a2 + 16); i; --i )
        {
          v17 = *v15++;
          if ( v17 )
          {
            v18 = &ReplyMessage[v17];
            *(v15 - 1) = (__int64)v18;
            *(_QWORD *)v18 -= v14;
          }
        }
      }
    }
    else
    {
      *(CLIENT_ID *)(ReplyMessage + 8) = NtCurrentTeb()->ClientId;
      v13 = ((__int64 (__fastcall *)(char *, char *))ProcedureAddress)(ReplyMessage, ReplyMessage);
    }
    if ( v13 < 0 )
      *((_DWORD *)ReplyMessage + 13) = v13;
    return *((unsigned int *)ReplyMessage + 13);
  }
}
