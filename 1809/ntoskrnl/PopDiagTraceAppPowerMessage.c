/*
 * XREFs of PopDiagTraceAppPowerMessage @ 0x1406E2158
 * Callers:
 *     NtPowerInformation @ 0x14058D170 (NtPowerInformation.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140051510 (ObfDereferenceObjectWithTag.c)
 *     EtwEventEnabled @ 0x14005B2D0 (EtwEventEnabled.c)
 *     EtwWrite @ 0x1400CAE00 (EtwWrite.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     PsLookupProcessByProcessId @ 0x140647C40 (PsLookupProcessByProcessId.c)
 */

void __fastcall PopDiagTraceAppPowerMessage(HANDLE *a1)
{
  NTSTATUS v2; // eax
  PEPROCESS v3; // rbx
  unsigned __int16 *v4; // r8
  unsigned __int16 v5; // ax
  __int64 v6; // rax
  int v7; // ecx
  __int16 v8; // [rsp+30h] [rbp-50h] BYREF
  int v9; // [rsp+34h] [rbp-4Ch] BYREF
  PEPROCESS Process; // [rsp+38h] [rbp-48h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+40h] [rbp-40h] BYREF
  __int16 *v12; // [rsp+50h] [rbp-30h]
  int v13; // [rsp+58h] [rbp-28h]
  int v14; // [rsp+5Ch] [rbp-24h]
  __int64 v15; // [rsp+60h] [rbp-20h]
  int v16; // [rsp+68h] [rbp-18h]
  int v17; // [rsp+6Ch] [rbp-14h]

  Process = 0LL;
  if ( PopDiagHandleRegistered && EtwEventEnabled(PopDiagHandle, &POP_ETW_EVENT_SUSPENDAPP) )
  {
    v2 = PsLookupProcessByProcessId(*a1, &Process);
    v3 = Process;
    if ( v2 >= 0 )
    {
      v4 = (unsigned __int16 *)Process[1].ActiveProcessors.Bitmap[15];
      v9 = *(_DWORD *)a1;
      v5 = *v4;
      UserData.Reserved = 0;
      v14 = 0;
      v8 = v5 >> 1;
      UserData.Ptr = (ULONGLONG)&v9;
      v12 = &v8;
      UserData.Size = 4;
      v13 = 2;
      v6 = *((_QWORD *)v4 + 1);
      v7 = *v4;
      v17 = 0;
      v15 = v6;
      v16 = v7;
      EtwWrite(PopDiagHandle, &POP_ETW_EVENT_SUSPENDAPP, 0LL, 3u, &UserData);
    }
    if ( v3 )
      ObfDereferenceObjectWithTag(v3, 0x746C6644u);
  }
}
