/*
 * XREFs of NtMITSynthesizeMouseInput @ 0x1C00B4D40
 * Callers:
 *     <none>
 * Callees:
 *     UserSessionSwitchLeaveCrit @ 0x1C00303C0 (UserSessionSwitchLeaveCrit.c)
 *     ?IsInputThread@CInputThread@@QEBA_NXZ @ 0x1C0039F4C (-IsInputThread@CInputThread@@QEBA_NXZ.c)
 *     UserSetLastError @ 0x1C00598E8 (UserSetLastError.c)
 *     ??0EnterLeaveCrit@@QEAA@XZ @ 0x1C0073B10 (--0EnterLeaveCrit@@QEAA@XZ.c)
 *     SynthesizeMouseInputData @ 0x1C012EA00 (SynthesizeMouseInputData.c)
 */

__int64 __fastcall NtMITSynthesizeMouseInput(ULONG64 a1, __int64 a2, __int64 a3)
{
  __int64 *v3; // rdi
  unsigned int v4; // r15d
  __int64 v6; // rbx
  CInputThread *v7; // rcx
  unsigned int v8; // esi
  __int64 v9; // rcx
  __int64 v11; // [rsp+28h] [rbp-80h] BYREF
  _OWORD v12[2]; // [rsp+40h] [rbp-68h] BYREF
  __int64 v13; // [rsp+60h] [rbp-48h]
  __int128 v14; // [rsp+68h] [rbp-40h]
  __int128 v15; // [rsp+78h] [rbp-30h]
  __int64 v16; // [rsp+88h] [rbp-20h]
  __int64 v17; // [rsp+C8h] [rbp+20h] BYREF

  v3 = (__int64 *)a3;
  v4 = a2;
  LODWORD(v6) = 0;
  v11 = 0LL;
  EnterLeaveCrit::EnterLeaveCrit((EnterLeaveCrit *)&v17, a2, a3);
  v8 = 0;
  if ( CInputThread::IsInputThread(v7) )
  {
    if ( a1 + 40 < a1 || a1 + 40 > MmUserProbeAddress )
      a1 = MmUserProbeAddress;
    v14 = *(_OWORD *)a1;
    v15 = *(_OWORD *)(a1 + 16);
    v16 = *(_QWORD *)(a1 + 32);
    v12[0] = v14;
    v12[1] = v15;
    v13 = v16;
    if ( v3 )
    {
      if ( v3 + 1 < v3 || (unsigned __int64)(v3 + 1) > MmUserProbeAddress )
        v3 = (__int64 *)MmUserProbeAddress;
      v6 = *v3;
      v11 = *v3;
    }
    v8 = SynthesizeMouseInputData(v12, v4, (unsigned __int64)&v11 & -(__int64)((_DWORD)v6 != 0));
  }
  else
  {
    UserSetLastError(5);
  }
  UserSessionSwitchLeaveCrit(v9);
  return v8;
}
