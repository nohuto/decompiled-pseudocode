/*
 * XREFs of NtMITSynthesizeTouchInput @ 0x1C00B4F90
 * Callers:
 *     <none>
 * Callees:
 *     UserSessionSwitchLeaveCrit @ 0x1C00303C0 (UserSessionSwitchLeaveCrit.c)
 *     ?IsInputThread@CInputThread@@QEBA_NXZ @ 0x1C0039F4C (-IsInputThread@CInputThread@@QEBA_NXZ.c)
 *     UserSetLastError @ 0x1C00598E8 (UserSetLastError.c)
 *     ??0EnterLeaveCrit@@QEAA@XZ @ 0x1C0073B10 (--0EnterLeaveCrit@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C0073C90 (__security_check_cookie.c)
 *     SynthesizeMitTouchInput @ 0x1C01323A4 (SynthesizeMitTouchInput.c)
 */

__int64 __fastcall NtMITSynthesizeTouchInput(_OWORD *a1, __int64 a2, __int64 a3)
{
  CInputThread *v4; // rcx
  int v5; // edi
  int v6; // ecx
  __int64 v7; // rcx
  _OWORD *v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  _OWORD *v11; // rax
  _OWORD *v12; // rcx
  _BYTE v14[32]; // [rsp+20h] [rbp-B98h] BYREF
  _BYTE v15[1456]; // [rsp+40h] [rbp-B78h] BYREF
  _BYTE v16[1456]; // [rsp+5F0h] [rbp-5C8h] BYREF

  EnterLeaveCrit::EnterLeaveCrit((EnterLeaveCrit *)v14, a2, a3);
  v5 = 0;
  if ( CInputThread::IsInputThread(v4) )
  {
    if ( a1 + 91 < a1 || (unsigned __int64)(a1 + 91) > MmUserProbeAddress )
      a1 = (_OWORD *)MmUserProbeAddress;
    v8 = v15;
    v9 = 11LL;
    v10 = 11LL;
    do
    {
      *v8 = *a1;
      v8[1] = a1[1];
      v8[2] = a1[2];
      v8[3] = a1[3];
      v8[4] = a1[4];
      v8[5] = a1[5];
      v8[6] = a1[6];
      v8 += 8;
      *(v8 - 1) = a1[7];
      a1 += 8;
      --v10;
    }
    while ( v10 );
    *v8 = *a1;
    v8[1] = a1[1];
    v8[2] = a1[2];
    v11 = v16;
    v12 = v15;
    do
    {
      *v11 = *v12;
      v11[1] = v12[1];
      v11[2] = v12[2];
      v11[3] = v12[3];
      v11[4] = v12[4];
      v11[5] = v12[5];
      v11[6] = v12[6];
      v11 += 8;
      *(v11 - 1) = v12[7];
      v12 += 8;
      --v9;
    }
    while ( v9 );
    *v11 = *v12;
    v11[1] = v12[1];
    v11[2] = v12[2];
    if ( (unsigned __int8)SynthesizeMitTouchInput(v16, 0LL, 128LL) )
    {
      v5 = 1;
      goto LABEL_14;
    }
    v6 = 5023;
  }
  else
  {
    v6 = 5;
  }
  UserSetLastError(v6);
LABEL_14:
  UserSessionSwitchLeaveCrit(v7);
  return v5;
}
