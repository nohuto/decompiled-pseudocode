/*
 * XREFs of ??0AlpcPortString@@QEAA@AEBU_GUID@@W4SIPC_SERVICE_BOUNDARY@@@Z @ 0x1800223A8
 * Callers:
 *     ?CreateServerPort@AlpcPort@@SAJAEBU_GUID@@W4SIPC_SERVICE_BOUNDARY@@PEAXAEAPEAVSipcPort@@@Z @ 0x180022190 (-CreateServerPort@AlpcPort@@SAJAEBU_GUID@@W4SIPC_SERVICE_BOUNDARY@@PEAXAEAPEAVSipcPort@@@Z.c)
 * Callees:
 *     ??$swprintf_s@$0FC@@@YAHAEAY0FC@GPEBGZZ @ 0x1800224AC (--$swprintf_s@$0FC@@@YAHAEAY0FC@GPEBGZZ.c)
 *     ?FailFast_Unexpected@in1diag0@details@wil@@YAXXZ @ 0x1800D554C (-FailFast_Unexpected@in1diag0@details@wil@@YAXXZ.c)
 */

__int64 __fastcall AlpcPortString::AlpcPortString(__int64 a1, unsigned int *a2, int a3)
{
  __int64 SessionId; // r8
  int v7; // ecx
  int v8; // r9d
  int v9; // ebx
  int v10; // eax
  int v11; // r10d
  int v12; // r11d
  int v13; // edi
  int v14; // esi
  int v15; // ebp
  int v16; // r14d
  const unsigned __int16 *v17; // rdx
  int v18; // eax
  wil::details::in1diag0 *v19; // rcx

  if ( a3 == 1 )
    SessionId = NtCurrentPeb()->SessionId;
  else
    SessionId = 0LL;
  v7 = *((unsigned __int8 *)a2 + 14);
  v8 = *((unsigned __int8 *)a2 + 13);
  v9 = *((unsigned __int8 *)a2 + 10);
  v10 = *((unsigned __int8 *)a2 + 15);
  v11 = *((unsigned __int8 *)a2 + 12);
  v12 = *((unsigned __int8 *)a2 + 11);
  v13 = *((unsigned __int8 *)a2 + 9);
  v14 = *((unsigned __int8 *)a2 + 8);
  v15 = *((unsigned __int16 *)a2 + 3);
  v16 = *((unsigned __int16 *)a2 + 2);
  v17 = L"\\Sessions\\%lu\\BaseNamedObjects\\SIPC_{%08lX-%04X-%04X-%02X%02X-%02X%02X%02X%02X%02X%02X}";
  if ( a3 != 1 )
    v17 = L"%.0lu\\BaseNamedObjects\\SIPC_{%08lX-%04X-%04X-%02X%02X-%02X%02X%02X%02X%02X%02X}";
  v18 = swprintf_s<82>(a1 + 16, v17, SessionId, *a2, v16, v15, v14, v13, v9, v12, v11, v8, v7, v10);
  if ( v18 <= 0 )
  {
    wil::details::in1diag0::FailFast_Unexpected(v19);
    JUMPOUT(0x1800224A4LL);
  }
  *(_QWORD *)(a1 + 8) = a1 + 16;
  *(_WORD *)a1 = 2 * v18;
  *(_WORD *)(a1 + 2) = 164;
  return a1;
}
