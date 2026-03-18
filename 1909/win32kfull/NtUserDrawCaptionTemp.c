/*
 * XREFs of NtUserDrawCaptionTemp @ 0x1C022ACE0
 * Callers:
 *     <none>
 * Callees:
 *     PushW32ThreadLock @ 0x1C001EF30 (PushW32ThreadLock.c)
 *     HMValidateHandle @ 0x1C0024F2C (HMValidateHandle.c)
 *     PopAndFreeAlwaysW32ThreadLock @ 0x1C0037780 (PopAndFreeAlwaysW32ThreadLock.c)
 *     xxxDrawCaptionTemp @ 0x1C0158138 (xxxDrawCaptionTemp.c)
 *     __security_check_cookie @ 0x1C0163A80 (__security_check_cookie.c)
 *     memmove @ 0x1C0168100 (memmove.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02D4960 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall NtUserDrawCaptionTemp(
        __int64 a1,
        HDC a2,
        struct tagRECT *a3,
        __int64 a4,
        unsigned __int64 a5,
        ULONG64 a6,
        unsigned int a7)
{
  ULONG64 v9; // r12
  __int64 v10; // rcx
  __int64 *v11; // r14
  unsigned int v12; // edi
  struct tagCURSOR *v13; // rsi
  int v14; // eax
  void *v15; // r12
  void *v16; // rdi
  size_t v17; // r15
  ULONG64 v18; // rdx
  _BYTE **v19; // rcx
  __int64 v20; // rax
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // rdx
  __int64 v28; // r8
  int v30; // [rsp+40h] [rbp-D8h]
  int v31; // [rsp+48h] [rbp-D0h]
  __int64 v32; // [rsp+50h] [rbp-C8h] BYREF
  __int64 v33; // [rsp+58h] [rbp-C0h]
  __int64 v34; // [rsp+60h] [rbp-B8h]
  HDC v35; // [rsp+68h] [rbp-B0h]
  __int64 v36; // [rsp+70h] [rbp-A8h] BYREF
  __int64 *v37; // [rsp+78h] [rbp-A0h]
  __int64 v38; // [rsp+80h] [rbp-98h]
  __int64 v39; // [rsp+88h] [rbp-90h] BYREF
  struct tagCURSOR *v40; // [rsp+90h] [rbp-88h]
  __int64 v41; // [rsp+98h] [rbp-80h]
  _QWORD v42[4]; // [rsp+A0h] [rbp-78h] BYREF
  struct tagRECT v43; // [rsp+C0h] [rbp-58h] BYREF

  v34 = a4;
  v35 = a2;
  v9 = a6;
  v39 = 0LL;
  v40 = 0LL;
  v41 = 0LL;
  v32 = 0LL;
  v33 = 0LL;
  v36 = 0LL;
  v37 = 0LL;
  v38 = 0LL;
  memset(v42, 0, 24);
  v30 = 0;
  EnterCrit(0LL, 1LL);
  if ( a1 )
  {
    v11 = (__int64 *)ValidateHwnd(a1);
    if ( !v11 )
    {
LABEL_3:
      v12 = 0;
      goto LABEL_33;
    }
  }
  else
  {
    v11 = 0LL;
  }
  if ( a5 )
  {
    v13 = (struct tagCURSOR *)HMValidateHandle(a5, 3);
    if ( !v13 )
      goto LABEL_3;
  }
  else
  {
    v13 = 0LL;
  }
  if ( (unsigned __int64)a3 >= MmUserProbeAddress )
    a3 = (struct tagRECT *)MmUserProbeAddress;
  v43 = *a3;
  if ( a6 >= MmUserProbeAddress )
    v9 = MmUserProbeAddress;
  v14 = *(_DWORD *)v9;
  v31 = *(_DWORD *)v9;
  LODWORD(v32) = *(_DWORD *)v9;
  v15 = *(void **)(v9 + 8);
  v16 = v15;
  v33 = (__int64)v15;
  if ( v15 )
  {
    if ( ((unsigned __int8)v15 & 1) != 0 )
      ExRaiseDatatypeMisalignment();
    v17 = (unsigned __int16)v14;
    v18 = (ULONG64)v15 + (unsigned __int16)v14 + 2;
    v19 = (_BYTE **)MmUserProbeAddress;
    if ( v18 < MmUserProbeAddress && (unsigned __int16)v14 <= HIWORD(v31) )
    {
      if ( (v14 & 1) != 0 )
        goto LABEL_21;
      if ( v18 > (unsigned __int64)v15 )
      {
LABEL_23:
        v20 = Win32AllocPoolWithQuota(v17 + 2, 2020897621LL);
        v16 = (void *)v20;
        v33 = v20;
        if ( !v20 )
          ExRaiseStatus(-1073741801);
        v30 = 1;
        PushW32ThreadLock(v20, v42, (__int64)Win32FreePool);
        memmove(v16, v15, v17);
        *((_WORD *)v16 + (v17 >> 1)) = 0;
        WORD1(v32) = v17 + 2;
        goto LABEL_25;
      }
    }
    if ( (v14 & 1) == 0 )
    {
LABEL_22:
      **v19 = 0;
      goto LABEL_23;
    }
LABEL_21:
    MicrosoftTelemetryAssertTriggeredNoArgsKM(MmUserProbeAddress);
    v19 = (_BYTE **)MmUserProbeAddress;
    goto LABEL_22;
  }
LABEL_25:
  v36 = *(_QWORD *)(gptiCurrent + 408LL);
  *(_QWORD *)(gptiCurrent + 408LL) = &v36;
  v37 = v11;
  if ( v11 )
    HMLockObject(v11);
  v39 = *(_QWORD *)(gptiCurrent + 408LL);
  *(_QWORD *)(gptiCurrent + 408LL) = &v39;
  v40 = v13;
  if ( v13 )
    HMLockObject(v13);
  v12 = xxxDrawCaptionTemp(
          v11,
          v35,
          &v43,
          v34,
          v13,
          (unsigned __int16 *)((unsigned __int64)&v32 & -(__int64)(v16 != 0LL)),
          a7);
  ThreadUnlock1(v22, v21, v23);
  ThreadUnlock1(v25, v24, v26);
  if ( v30 )
    PopAndFreeAlwaysW32ThreadLock((__int64)v42, v27, v28);
LABEL_33:
  UserSessionSwitchLeaveCrit(v10);
  return v12;
}
