/*
 * XREFs of EtwpSampledProfileRunDown @ 0x1408FC1E4
 * Callers:
 *     EtwpKernelTraceRundown @ 0x14070999C (EtwpKernelTraceRundown.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x14003FB10 (KeWaitForSingleObject.c)
 *     KeReleaseMutex @ 0x14006BC60 (KeReleaseMutex.c)
 *     EtwpLogKernelEvent @ 0x1400A2990 (EtwpLogKernelEvent.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1401CD170 (_guard_dispatch_icall.c)
 */

void __fastcall EtwpSampledProfileRunDown(__int64 a1, char a2, char a3)
{
  unsigned __int16 v5; // di
  char *v6; // rcx
  unsigned int v7; // eax
  __int16 *v8; // rsi
  __int64 v9; // r15
  int v10; // r14d
  int v11; // eax
  const WCHAR *v12; // rcx
  const WCHAR *v13; // rdx
  __int64 v14; // rax
  unsigned int v15; // r8d
  __int64 v16; // rdx
  int v17; // [rsp+38h] [rbp-29h] BYREF
  __int64 v18; // [rsp+40h] [rbp-21h] BYREF
  __int64 v19; // [rsp+48h] [rbp-19h]
  const WCHAR *v20; // [rsp+50h] [rbp-11h]
  __int64 v21; // [rsp+58h] [rbp-9h] BYREF
  int v22; // [rsp+60h] [rbp-1h]
  _QWORD v23[3]; // [rsp+68h] [rbp+7h] BYREF
  int v24; // [rsp+80h] [rbp+1Fh]
  int v25; // [rsp+84h] [rbp+23h]

  v21 = 0LL;
  v22 = 0;
  v18 = 0LL;
  v5 = 3914 - (a2 != 0);
  v19 = 0LL;
  v20 = 0LL;
  if ( a3 )
  {
    v6 = (char *)&EtwpProfileObject;
    v7 = 1;
  }
  else
  {
    KeWaitForSingleObject(&EtwpGroupMaskMutex, Executive, 0, 0, 0LL);
    v7 = EtwpPmcProfile;
    v6 = (char *)qword_140432A88;
    if ( !EtwpPmcProfile )
    {
LABEL_14:
      KeReleaseMutex(&EtwpGroupMaskMutex, 0);
      return;
    }
  }
  v23[1] = 12LL;
  v23[0] = &v21;
  v8 = (__int16 *)(v6 + 240);
  v25 = 0;
  v9 = v7;
  do
  {
    v10 = *v8;
    v17 = 0;
    LODWORD(v18) = v10;
    if ( ((int (__fastcall *)(__int64, __int64, __int64 *, int *))off_140426798[0])(1LL, 24LL, &v18, &v17) < 0 )
    {
      v11 = 0;
      v12 = L"Unknown";
    }
    else
    {
      v11 = v19;
      v12 = v20;
    }
    HIDWORD(v21) = v11;
    v13 = L"Unknown";
    v22 = v11;
    if ( v12 )
      v13 = v12;
    LODWORD(v21) = v10;
    v23[2] = v13;
    v14 = -1LL;
    do
      ++v14;
    while ( v13[v14] );
    v15 = *(_DWORD *)a1;
    v16 = *(_QWORD *)(a1 + 1080);
    v24 = 2 * v14 + 2;
    EtwpLogKernelEvent((__int64)v23, v16, v15, 2u, v5, 0x401903u);
    v8 += 124;
    --v9;
  }
  while ( v9 );
  if ( !a3 )
    goto LABEL_14;
}
