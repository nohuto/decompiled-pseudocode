/*
 * XREFs of NtUserRemoteConnect @ 0x1C0130B30
 * Callers:
 *     <none>
 * Callees:
 *     wcsncpycch @ 0x1C00B0184 (wcsncpycch.c)
 *     __security_check_cookie @ 0x1C015AF60 (__security_check_cookie.c)
 *     __report_rangecheckfailure @ 0x1C015AFA0 (__report_rangecheckfailure.c)
 *     memset @ 0x1C0163640 (memset.c)
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
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rcx
  _OWORD *v15; // rax
  __int64 v16; // rcx
  _OWORD *v17; // rax
  _OWORD *v18; // rcx
  __int64 v19; // rdx
  unsigned int v20; // ebx
  __int64 v21; // rcx
  int v22; // eax
  unsigned int v23; // ebx
  _BYTE v25[320]; // [rsp+30h] [rbp-2F8h] BYREF
  _QWORD v26[10]; // [rsp+170h] [rbp-1B8h] BYREF
  _BYTE v27[320]; // [rsp+1C0h] [rbp-168h] BYREF
  _WORD v28[12]; // [rsp+300h] [rbp-28h] BYREF

  v4 = a2;
  memset(v26, 0, 0x48uLL);
  EtwActivityIdControl(3u, (LPGUID)&v26[1]);
  v26[8] = MEMORY[0xFFFFF78000000014];
  LODWORD(v26[3]) = 31;
  LOBYTE(v26[6]) = -1;
  EnterCrit(0LL, 1LL);
  CurrentProcess = PsGetCurrentProcess(v7, v6, v8, v9);
  v14 = gpepCSRSS;
  if ( CurrentProcess == gpepCSRSS )
  {
    if ( a1 + 20 < a1 || (unsigned __int64)(a1 + 20) > MmUserProbeAddress )
      a1 = (_OWORD *)MmUserProbeAddress;
    v15 = v25;
    v16 = 2LL;
    do
    {
      *v15 = *a1;
      v15[1] = a1[1];
      v15[2] = a1[2];
      v15[3] = a1[3];
      v15[4] = a1[4];
      v15[5] = a1[5];
      v15[6] = a1[6];
      v15 += 8;
      *(v15 - 1) = a1[7];
      a1 += 8;
      --v16;
    }
    while ( v16 );
    *v15 = *a1;
    v15[1] = a1[1];
    v15[2] = a1[2];
    v15[3] = a1[3];
    v17 = v27;
    v18 = v25;
    v19 = 2LL;
    do
    {
      *v17 = *v18;
      v17[1] = v18[1];
      v17[2] = v18[2];
      v17[3] = v18[3];
      v17[4] = v18[4];
      v17[5] = v18[5];
      v17[6] = v18[6];
      v17 += 8;
      *(v17 - 1) = v18[7];
      v18 += 8;
      --v19;
    }
    while ( v19 );
    *v17 = *v18;
    v17[1] = v18[1];
    v17[2] = v18[2];
    v17[3] = v18[3];
    v20 = v4;
    ProbeForRead(a3, v4, 2u);
    if ( (unsigned int)v4 > 9 )
      v20 = 9;
    wcsncpycch(v28, (__int64)a3, v20);
    if ( 2 * (unsigned __int64)v20 >= 0x14 )
      _report_rangecheckfailure(v21);
    v28[v20] = 0;
    gptiTSRequest = gptiCurrent;
    v22 = xxxRemoteConnect(v27, v20, v28, v26, v20);
    v23 = v22;
    if ( v22 < 0 )
    {
      v14 = gptiTSRequest;
      gptiTSRequest = 0LL;
    }
  }
  else
  {
    v23 = -1073741790;
  }
  UserSessionSwitchLeaveCrit(v14, v11, v12, v13);
  return v23;
}
