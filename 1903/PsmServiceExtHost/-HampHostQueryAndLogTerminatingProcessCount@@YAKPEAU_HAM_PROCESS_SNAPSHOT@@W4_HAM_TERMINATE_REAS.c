/*
 * XREFs of ?HampHostQueryAndLogTerminatingProcessCount@@YAKPEAU_HAM_PROCESS_SNAPSHOT@@W4_HAM_TERMINATE_REASON@@@Z @ 0x18000D648
 * Callers:
 *     ?HampHostTerminateWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x18000DA90 (-HampHostTerminateWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z.c)
 * Callees:
 *     _TlgWrite @ 0x18002EC10 (_TlgWrite.c)
 *     __security_check_cookie @ 0x180047C10 (__security_check_cookie.c)
 */

__int64 __fastcall HampHostQueryAndLogTerminatingProcessCount(__int64 a1, int a2)
{
  unsigned int v2; // r8d
  unsigned int v3; // edi
  __int64 v4; // rsi
  unsigned int i; // ebx
  unsigned int v8; // r12d
  __int64 v10; // [rsp+30h] [rbp-69h] BYREF
  __int64 v11; // [rsp+38h] [rbp-61h] BYREF
  _BYTE ProcessInformation[64]; // [rsp+40h] [rbp-59h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+80h] [rbp-19h] BYREF
  __int64 *v14; // [rsp+A0h] [rbp+7h]
  int v15; // [rsp+A8h] [rbp+Fh]
  int v16; // [rsp+ACh] [rbp+13h]
  __int64 *v17; // [rsp+B0h] [rbp+17h]
  int v18; // [rsp+B8h] [rbp+1Fh]
  int v19; // [rsp+BCh] [rbp+23h]

  v2 = *(_DWORD *)(a1 + 16);
  v3 = 0;
  v4 = 0LL;
  for ( i = 4; (unsigned int)v4 < v2; v4 = (unsigned int)(v4 + 1) )
  {
    NtQueryInformationProcess(
      *(HANDLE *)(*(_QWORD *)a1 + 8 * v4),
      ProcessBasicInformation,
      ProcessInformation,
      0x40u,
      0LL);
    if ( (ProcessInformation[56] & 4) != 0 )
    {
      ++v3;
    }
    else
    {
      if ( a2 == 256 )
      {
        i = 0;
      }
      else if ( a2 != 512 )
      {
        i = 2;
        if ( a2 != 2048 )
          i = 4;
      }
      v8 = *(_DWORD *)(*(_QWORD *)(a1 + 8) + 4 * v4);
      if ( (int)WerpAddTerminationReason(v8, i, L"HAM", 0LL) < 0 )
        WerpAddTerminationReason(v8, i, L"HAM", 0LL);
      i = 4;
    }
    v2 = *(_DWORD *)(a1 + 16);
  }
  if ( dword_1800AB2C0 > 4u )
  {
    v16 = 0;
    v19 = 0;
    v10 = v3;
    v14 = &v10;
    v11 = v2;
    v17 = &v11;
    v15 = 8;
    v18 = 8;
    TlgWrite((TraceLoggingHProvider)&dword_1800AB2C0, &unk_180098AA1, 0LL, 0LL, 4u, &pData);
  }
  return v3;
}
