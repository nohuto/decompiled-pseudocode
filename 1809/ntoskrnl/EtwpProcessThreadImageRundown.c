/*
 * XREFs of EtwpProcessThreadImageRundown @ 0x140727650
 * Callers:
 *     EtwpKernelTraceRundown @ 0x140727414 (EtwpKernelTraceRundown.c)
 * Callees:
 *     KeQueryTimeIncrement @ 0x1400077E0 (KeQueryTimeIncrement.c)
 *     _TlgKeywordOn @ 0x140012A04 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x140012EE4 (_TlgWrite.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     PsEnumProcesses @ 0x1405B2AFC (PsEnumProcesses.c)
 *     PsLookupProcessByProcessId @ 0x140647C40 (PsLookupProcessByProcessId.c)
 *     EtwpProcessEnumCallback @ 0x1407277C0 (EtwpProcessEnumCallback.c)
 *     EtwpIsStackWalkingEnabled @ 0x140727F70 (EtwpIsStackWalkingEnabled.c)
 */

__int64 __fastcall EtwpProcessThreadImageRundown(__int64 a1, __int64 a2, char a3, unsigned int **a4, unsigned int a5)
{
  NTSTATUS v8; // r15d
  __int64 v10; // rdx
  __int64 v11; // rax
  unsigned int v13; // ecx
  _DWORD *v14; // rax
  ULONG TimeIncrement; // eax
  int v16; // [rsp+30h] [rbp-D0h] BYREF
  ULONG v17; // [rsp+34h] [rbp-CCh] BYREF
  __int64 v18; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v19; // [rsp+40h] [rbp-C0h] BYREF
  PEPROCESS Process; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v21; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v22; // [rsp+58h] [rbp-A8h] BYREF
  _QWORD v23[14]; // [rsp+60h] [rbp-A0h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+D0h] [rbp-30h] BYREF
  int *v25; // [rsp+F0h] [rbp-10h]
  int v26; // [rsp+F8h] [rbp-8h]
  int v27; // [rsp+FCh] [rbp-4h]
  ULONG *v28; // [rsp+100h] [rbp+0h]
  int v29; // [rsp+108h] [rbp+8h]
  int v30; // [rsp+10Ch] [rbp+Ch]
  __int64 *v31; // [rsp+110h] [rbp+10h]
  int v32; // [rsp+118h] [rbp+18h]
  int v33; // [rsp+11Ch] [rbp+1Ch]
  char *v34; // [rsp+120h] [rbp+20h]
  int v35; // [rsp+128h] [rbp+28h]
  int v36; // [rsp+12Ch] [rbp+2Ch]
  __int64 *v37; // [rsp+130h] [rbp+30h]
  int v38; // [rsp+138h] [rbp+38h]
  int v39; // [rsp+13Ch] [rbp+3Ch]
  char *v40; // [rsp+140h] [rbp+40h]
  int v41; // [rsp+148h] [rbp+48h]
  int v42; // [rsp+14Ch] [rbp+4Ch]
  PEPROCESS *p_Process; // [rsp+150h] [rbp+50h]
  int v44; // [rsp+158h] [rbp+58h]
  int v45; // [rsp+15Ch] [rbp+5Ch]
  __int64 *v46; // [rsp+160h] [rbp+60h]
  int v47; // [rsp+168h] [rbp+68h]
  int v48; // [rsp+16Ch] [rbp+6Ch]
  __int64 *v49; // [rsp+170h] [rbp+70h]
  int v50; // [rsp+178h] [rbp+78h]
  int v51; // [rsp+17Ch] [rbp+7Ch]

  v8 = 0;
  memset(v23, 0, sizeof(v23));
  v23[0] = a1;
  v23[4] = a2;
  v10 = 1283LL;
  LOBYTE(v23[13]) = a3;
  if ( !a3 )
    v10 = 1284LL;
  BYTE2(v23[13]) = EtwpIsStackWalkingEnabled(a2, v10);
  if ( a1 && (*(_DWORD *)(a1 + 16) & 0x40) != 0 && (*(_DWORD *)(a2 + 12) & 0x2000000) != 0 )
    v23[1] = (char *)&EtwpObjectTypeFilter + 20 * *(unsigned __int8 *)(a2 + 834);
  v23[2] = ExAllocatePoolWithTag(NonPagedPoolNx, 0x2000uLL, 0x74777445u);
  if ( v23[2] )
    LOWORD(v23[3]) = 0x2000;
  v11 = EtwpOneMs / -4 * (unsigned int)EtwpStackCaptureTimeout / KeQueryTimeIncrement();
  if ( !(_DWORD)v11 )
    LODWORD(v11) = 1;
  LODWORD(v23[8]) = v11;
  if ( !a5 || !a4 )
  {
LABEL_10:
    EtwpProcessEnumCallback((ULONG_PTR)PsIdleProcess);
    PsEnumProcesses((__int64 (__fastcall *)(__int64, __int64))EtwpProcessEnumCallback, (__int64)v23);
LABEL_11:
    if ( BYTE2(v23[13]) && stru_140401308.LevelPlus1 > 5 && TlgKeywordOn(&stru_140401308, 0x200000000000uLL) )
    {
      v16 = EtwpStackCaptureTimeout;
      TimeIncrement = KeQueryTimeIncrement();
      v27 = 0;
      v30 = 0;
      v33 = 0;
      v36 = 0;
      v39 = 0;
      v42 = 0;
      v45 = 0;
      v48 = 0;
      v51 = 0;
      v17 = TimeIncrement;
      v18 = v23[9];
      v19 = v23[10];
      LODWORD(Process) = HIDWORD(v23[8]);
      v21 = v23[11];
      v22 = v23[12];
      v25 = &v16;
      v28 = &v17;
      v31 = &v18;
      v34 = (char *)&v18 + 4;
      v37 = &v19;
      v40 = (char *)&v19 + 4;
      p_Process = &Process;
      v46 = &v21;
      v49 = &v22;
      v26 = 4;
      v29 = 4;
      v32 = 4;
      v35 = 4;
      v38 = 4;
      v41 = 4;
      v44 = 4;
      v47 = 8;
      v50 = 8;
      TlgWrite(&stru_140401308, &unk_140374CC0, 0LL, 0LL, 0xBu, &pData);
    }
    goto LABEL_12;
  }
  v13 = 0;
  v14 = (_DWORD *)a4 + 3;
  while ( *v14 != -2147483644 )
  {
    ++v13;
    v14 += 4;
    if ( v13 >= a5 )
      goto LABEL_10;
  }
  v8 = PsLookupProcessByProcessId((HANDLE)**a4, &Process);
  if ( v8 >= 0 )
  {
    EtwpProcessEnumCallback((ULONG_PTR)Process);
    goto LABEL_11;
  }
LABEL_12:
  if ( v23[2] )
    ExFreePoolWithTag((PVOID)v23[2], 0);
  if ( v23[6] )
    ExFreePoolWithTag((PVOID)v23[6], 0);
  return (unsigned int)v8;
}
