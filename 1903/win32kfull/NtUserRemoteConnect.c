/*
 * XREFs of NtUserRemoteConnect @ 0x1C00E0E70
 * Callers:
 *     <none>
 * Callees:
 *     wcsncpycch @ 0x1C00E3A4C (wcsncpycch.c)
 *     __security_check_cookie @ 0x1C0162AB0 (__security_check_cookie.c)
 *     __report_rangecheckfailure @ 0x1C0162AF0 (__report_rangecheckfailure.c)
 *     memset @ 0x1C0166840 (memset.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall NtUserRemoteConnect(_OWORD *a1, unsigned int a2, volatile void *a3)
{
  SIZE_T v4; // rdi
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 CurrentProcess; // rax
  __int64 v11; // rcx
  _OWORD *v12; // rax
  __int64 v13; // rcx
  _OWORD *v14; // rax
  _OWORD *v15; // rcx
  __int64 v16; // rdx
  unsigned int v17; // ebx
  int v18; // eax
  unsigned int v19; // ebx
  _BYTE v21[320]; // [rsp+30h] [rbp-2F8h] BYREF
  _QWORD v22[10]; // [rsp+170h] [rbp-1B8h] BYREF
  _BYTE v23[320]; // [rsp+1C0h] [rbp-168h] BYREF
  _WORD v24[12]; // [rsp+300h] [rbp-28h] BYREF

  v4 = a2;
  memset(v22, 0, 0x48uLL);
  EtwActivityIdControl(3u, (LPGUID)&v22[1]);
  v22[8] = MEMORY[0xFFFFF78000000014];
  LODWORD(v22[3]) = 31;
  LOBYTE(v22[6]) = -1;
  memset(v23, 0, sizeof(v23));
  EnterCrit(0LL, 1LL);
  CurrentProcess = PsGetCurrentProcess(v7, v6, v8, v9);
  v11 = gpepCSRSS;
  if ( CurrentProcess == gpepCSRSS )
  {
    if ( a1 + 20 < a1 || (unsigned __int64)(a1 + 20) > MmUserProbeAddress )
      a1 = (_OWORD *)MmUserProbeAddress;
    v12 = v21;
    v13 = 2LL;
    do
    {
      *v12 = *a1;
      v12[1] = a1[1];
      v12[2] = a1[2];
      v12[3] = a1[3];
      v12[4] = a1[4];
      v12[5] = a1[5];
      v12[6] = a1[6];
      v12 += 8;
      *(v12 - 1) = a1[7];
      a1 += 8;
      --v13;
    }
    while ( v13 );
    *v12 = *a1;
    v12[1] = a1[1];
    v12[2] = a1[2];
    v12[3] = a1[3];
    v14 = v23;
    v15 = v21;
    v16 = 2LL;
    do
    {
      *v14 = *v15;
      v14[1] = v15[1];
      v14[2] = v15[2];
      v14[3] = v15[3];
      v14[4] = v15[4];
      v14[5] = v15[5];
      v14[6] = v15[6];
      v14 += 8;
      *(v14 - 1) = v15[7];
      v15 += 8;
      --v16;
    }
    while ( v16 );
    *v14 = *v15;
    v14[1] = v15[1];
    v14[2] = v15[2];
    v14[3] = v15[3];
    v17 = v4;
    ProbeForRead(a3, v4, 2u);
    if ( (unsigned int)v4 > 9 )
      v17 = 9;
    wcsncpycch(v24, a3, v17);
    if ( 2 * (unsigned __int64)v17 >= 0x14 )
      _report_rangecheckfailure();
    v24[v17] = 0;
    gptiTSRequest = gptiCurrent;
    v18 = xxxRemoteConnect(v23, v17, v24, v22);
    v19 = v18;
    if ( v18 < 0 )
    {
      v11 = gptiTSRequest;
      gptiTSRequest = 0LL;
    }
  }
  else
  {
    v19 = -1073741790;
  }
  UserSessionSwitchLeaveCrit(v11);
  return v19;
}
