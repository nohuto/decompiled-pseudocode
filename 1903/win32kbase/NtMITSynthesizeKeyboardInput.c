/*
 * XREFs of NtMITSynthesizeKeyboardInput @ 0x1C0115520
 * Callers:
 *     <none>
 * Callees:
 *     EnterCrit @ 0x1C0025E70 (EnterCrit.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C0028720 (UserSessionSwitchLeaveCrit.c)
 *     UserSetLastError @ 0x1C00292EC (UserSetLastError.c)
 *     HMValidateHandle @ 0x1C002E8E4 (HMValidateHandle.c)
 *     ?IsInputThread@CInputThread@@QEBA_NXZ @ 0x1C0034500 (-IsInputThread@CInputThread@@QEBA_NXZ.c)
 *     xxxUpdateGlobalsAndSendKeyEvent @ 0x1C003FF50 (xxxUpdateGlobalsAndSendKeyEvent.c)
 *     __security_check_cookie @ 0x1C00BAF90 (__security_check_cookie.c)
 *     memset @ 0x1C00C1440 (memset.c)
 *     VirtualizeKeyboardInput @ 0x1C0184D24 (VirtualizeKeyboardInput.c)
 *     ProcessKeyboardInjectedInput @ 0x1C0185764 (ProcessKeyboardInjectedInput.c)
 */

__int64 __fastcall NtMITSynthesizeKeyboardInput(
        unsigned int a1,
        ULONG64 a2,
        __int64 a3,
        int *a4,
        volatile void *Address)
{
  int v9; // ebx
  unsigned int v10; // edi
  CInputThread *v11; // rcx
  __int64 v12; // rdx
  __int64 v13; // rcx
  ULONG64 v14; // rcx
  __int64 CurrentProcessWow64Process; // rax
  int v16; // r8d
  int i; // r9d
  int v18; // esi
  unsigned __int64 v19; // rbx
  unsigned __int8 v20; // r11
  __int64 v21; // rax
  _DWORD v23[8]; // [rsp+60h] [rbp-C8h] BYREF
  int v24; // [rsp+80h] [rbp-A8h]
  __int128 v25; // [rsp+A0h] [rbp-88h]
  __int128 v26; // [rsp+B0h] [rbp-78h]
  __int64 v27; // [rsp+C0h] [rbp-68h]
  _BYTE v28[40]; // [rsp+C8h] [rbp-60h] BYREF

  v9 = 0;
  v10 = 0;
  v23[4] = 0;
  EnterCrit(0, 1);
  memset(v28, 0, sizeof(v28));
  v23[0] = 0;
  if ( !CInputThread::IsInputThread(v11) )
  {
    v13 = 5LL;
LABEL_3:
    UserSetLastError(v13, v12);
    goto LABEL_29;
  }
  v14 = a2 + 40;
  if ( a2 + 40 < a2 || v14 > MmUserProbeAddress )
    a2 = MmUserProbeAddress;
  v25 = *(_OWORD *)a2;
  v26 = *(_OWORD *)(a2 + 16);
  v27 = *(_QWORD *)(a2 + 32);
  *(_OWORD *)v28 = v25;
  *(_OWORD *)&v28[16] = v26;
  *(_QWORD *)&v28[32] = v27;
  if ( a4 )
  {
    v14 = (ULONG64)(a4 + 1);
    if ( a4 + 1 < a4 || v14 > MmUserProbeAddress )
      a4 = (int *)MmUserProbeAddress;
    v24 = *a4;
    v23[0] = v24;
  }
  if ( (a1 & 3) != 0 )
  {
    v10 = VirtualizeKeyboardInput(a1, v23, v28, a3);
    goto LABEL_29;
  }
  if ( a1 != 4 )
  {
    if ( a1 != 8 )
      goto LABEL_29;
    v21 = HMValidateHandle(a3, 19);
    if ( !a3 || v21 )
    {
      ProcessKeyboardInjectedInput(v28, v21, &v28[24]);
      v10 = 1;
      goto LABEL_29;
    }
    v10 = 0;
    v13 = 6LL;
    goto LABEL_3;
  }
  xxxUpdateGlobalsAndSendKeyEvent(
    *(__int16 *)&v28[8],
    *(unsigned __int16 *)v28,
    *(int *)&v28[12],
    0LL,
    a3,
    0LL,
    *(__int16 *)&v28[16],
    *(unsigned int *)&v28[4],
    0,
    0LL,
    0LL,
    (__int64)&v28[24]);
  v10 = 1;
  if ( Address )
  {
    CurrentProcessWow64Process = PsGetCurrentProcessWow64Process(v14);
    ProbeForWrite(Address, 0x100uLL, CurrentProcessWow64Process != 0 ? 1 : 4);
    v16 = 0;
    for ( i = 0; ; i = v16 )
    {
      v23[1] = v9;
      if ( v16 >= 256 )
        break;
      v18 = v9 & 3;
      v19 = (unsigned __int64)(unsigned __int8)v9 >> 2;
      v20 = *((_BYTE *)&gafAsyncKeyState + v19);
      if ( ((unsigned __int8)(1 << (2 * v18)) & v20) != 0 )
      {
        *((_BYTE *)Address + i) = *((_BYTE *)Address + v16) | 0x80;
        v20 = *((_BYTE *)&gafAsyncKeyState + v19);
      }
      v14 = (unsigned int)(2 * v18 + 1);
      v12 = (unsigned int)(1 << (2 * v18 + 1));
      if ( ((unsigned __int8)v12 & v20) != 0 )
      {
        LOBYTE(v14) = *((_BYTE *)Address + v16) | 1;
        *((_BYTE *)Address + i) = v14;
      }
      v9 = ++v16;
    }
  }
LABEL_29:
  UserSessionSwitchLeaveCrit(v14, v12);
  return v10;
}
