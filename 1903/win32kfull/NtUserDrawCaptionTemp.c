/*
 * XREFs of NtUserDrawCaptionTemp @ 0x1C022B300
 * Callers:
 *     <none>
 * Callees:
 *     PushW32ThreadLock @ 0x1C001F0A0 (PushW32ThreadLock.c)
 *     HMValidateHandle @ 0x1C002F96C (HMValidateHandle.c)
 *     PopAndFreeAlwaysW32ThreadLock @ 0x1C0096A50 (PopAndFreeAlwaysW32ThreadLock.c)
 *     xxxDrawCaptionTemp @ 0x1C0157378 (xxxDrawCaptionTemp.c)
 *     __security_check_cookie @ 0x1C0162AB0 (__security_check_cookie.c)
 *     memmove @ 0x1C0166500 (memmove.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02D4E10 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
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
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rcx
  ULONG_PTR v14; // r14
  unsigned int v15; // edi
  struct tagCURSOR *v16; // rsi
  int v17; // eax
  void *v18; // r12
  void *v19; // rdi
  size_t v20; // r15
  ULONG64 v21; // rdx
  _BYTE **v22; // rcx
  __int64 v23; // rax
  __int64 v24; // r9
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v31; // rdx
  __int64 v32; // r8
  __int64 v33; // r9
  int v35; // [rsp+40h] [rbp-D8h]
  int v36; // [rsp+48h] [rbp-D0h]
  __int64 v37; // [rsp+50h] [rbp-C8h] BYREF
  __int64 v38; // [rsp+58h] [rbp-C0h]
  __int64 v39; // [rsp+60h] [rbp-B8h]
  HDC v40; // [rsp+68h] [rbp-B0h]
  __int64 v41; // [rsp+70h] [rbp-A8h] BYREF
  ULONG_PTR v42; // [rsp+78h] [rbp-A0h]
  __int64 v43; // [rsp+80h] [rbp-98h]
  __int64 v44; // [rsp+88h] [rbp-90h] BYREF
  struct tagCURSOR *v45; // [rsp+90h] [rbp-88h]
  __int64 v46; // [rsp+98h] [rbp-80h]
  _QWORD v47[4]; // [rsp+A0h] [rbp-78h] BYREF
  struct tagRECT v48; // [rsp+C0h] [rbp-58h] BYREF

  v39 = a4;
  v40 = a2;
  v9 = a6;
  v44 = 0LL;
  v45 = 0LL;
  v46 = 0LL;
  v37 = 0LL;
  v38 = 0LL;
  v41 = 0LL;
  v42 = 0LL;
  v43 = 0LL;
  memset(v47, 0, 24);
  v35 = 0;
  EnterCrit(0LL, 1LL);
  if ( a1 )
  {
    v14 = ValidateHwnd(a1);
    if ( !v14 )
    {
LABEL_3:
      v15 = 0;
      goto LABEL_33;
    }
  }
  else
  {
    v14 = 0LL;
  }
  if ( a5 )
  {
    LOBYTE(v10) = 3;
    v16 = (struct tagCURSOR *)HMValidateHandle(a5, v10, v11, v12);
    if ( !v16 )
      goto LABEL_3;
  }
  else
  {
    v16 = 0LL;
  }
  if ( (unsigned __int64)a3 >= MmUserProbeAddress )
    a3 = (struct tagRECT *)MmUserProbeAddress;
  v48 = *a3;
  if ( a6 >= MmUserProbeAddress )
    v9 = MmUserProbeAddress;
  v17 = *(_DWORD *)v9;
  v36 = *(_DWORD *)v9;
  LODWORD(v37) = *(_DWORD *)v9;
  v18 = *(void **)(v9 + 8);
  v19 = v18;
  v38 = (__int64)v18;
  if ( v18 )
  {
    if ( ((unsigned __int8)v18 & 1) != 0 )
      ExRaiseDatatypeMisalignment();
    v20 = (unsigned __int16)v17;
    v21 = (ULONG64)v18 + (unsigned __int16)v17 + 2;
    v22 = (_BYTE **)MmUserProbeAddress;
    if ( v21 < MmUserProbeAddress && (unsigned __int16)v17 <= HIWORD(v36) )
    {
      if ( (v17 & 1) != 0 )
        goto LABEL_21;
      if ( v21 > (unsigned __int64)v18 )
      {
LABEL_23:
        v23 = Win32AllocPoolWithQuota(v20 + 2, 2020897621LL);
        v19 = (void *)v23;
        v38 = v23;
        if ( !v23 )
          ExRaiseStatus(-1073741801);
        v35 = 1;
        PushW32ThreadLock(v23, v47, (__int64)Win32FreePool, v24);
        memmove(v19, v18, v20);
        *((_WORD *)v19 + (v20 >> 1)) = 0;
        WORD1(v37) = v20 + 2;
        goto LABEL_25;
      }
    }
    if ( (v17 & 1) == 0 )
    {
LABEL_22:
      **v22 = 0;
      goto LABEL_23;
    }
LABEL_21:
    MicrosoftTelemetryAssertTriggeredNoArgsKM(MmUserProbeAddress);
    v22 = (_BYTE **)MmUserProbeAddress;
    goto LABEL_22;
  }
LABEL_25:
  v41 = *(_QWORD *)(gptiCurrent + 408LL);
  *(_QWORD *)(gptiCurrent + 408LL) = &v41;
  v42 = v14;
  if ( v14 )
    HMLockObject(v14);
  v44 = *(_QWORD *)(gptiCurrent + 408LL);
  *(_QWORD *)(gptiCurrent + 408LL) = &v44;
  v45 = v16;
  if ( v16 )
    HMLockObject(v16);
  v15 = xxxDrawCaptionTemp(
          v14,
          v40,
          &v48,
          v39,
          v16,
          (unsigned __int16 *)((unsigned __int64)&v37 & -(__int64)(v19 != 0LL)),
          a7);
  ThreadUnlock1(v26, v25, v27);
  ThreadUnlock1(v29, v28, v30);
  if ( v35 )
    PopAndFreeAlwaysW32ThreadLock((__int64)v47, v31, v32, v33);
LABEL_33:
  UserSessionSwitchLeaveCrit(v13);
  return v15;
}
