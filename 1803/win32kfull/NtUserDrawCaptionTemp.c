/*
 * XREFs of NtUserDrawCaptionTemp @ 0x1C01ED0F0
 * Callers:
 *     <none>
 * Callees:
 *     HMValidateHandle @ 0x1C0015A84 (HMValidateHandle.c)
 *     PopAndFreeAlwaysW32ThreadLock @ 0x1C001B160 (PopAndFreeAlwaysW32ThreadLock.c)
 *     PushW32ThreadLock @ 0x1C005D730 (PushW32ThreadLock.c)
 *     xxxDrawCaptionTemp @ 0x1C0132880 (xxxDrawCaptionTemp.c)
 *     __security_check_cookie @ 0x1C0139660 (__security_check_cookie.c)
 *     memmove @ 0x1C013D380 (memmove.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02AFC0C (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall NtUserDrawCaptionTemp(
        __int64 a1,
        HDC a2,
        _OWORD *a3,
        __int64 a4,
        __int64 a5,
        ULONG64 a6,
        unsigned int a7)
{
  ULONG64 v9; // r12
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // r14
  unsigned int v15; // edi
  __int64 v16; // rsi
  int v17; // eax
  void *v18; // r12
  void *v19; // rdi
  size_t v20; // r15
  ULONG64 v21; // rdx
  _BYTE **v22; // rcx
  __int64 v23; // rax
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r8
  int v31; // [rsp+40h] [rbp-D8h]
  int v32; // [rsp+48h] [rbp-D0h]
  int v33; // [rsp+50h] [rbp-C8h] BYREF
  void *v34; // [rsp+58h] [rbp-C0h]
  __int64 v35; // [rsp+60h] [rbp-B8h]
  HDC v36; // [rsp+68h] [rbp-B0h]
  _QWORD v37[3]; // [rsp+78h] [rbp-A0h] BYREF
  _QWORD v38[3]; // [rsp+90h] [rbp-88h] BYREF
  _QWORD v39[3]; // [rsp+A8h] [rbp-70h] BYREF
  __int64 v40[2]; // [rsp+C0h] [rbp-58h] BYREF

  v35 = a4;
  v36 = a2;
  v9 = a6;
  v31 = 0;
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
    v16 = HMValidateHandle(a5, 3);
    if ( !v16 )
      goto LABEL_3;
  }
  else
  {
    v16 = 0LL;
  }
  if ( (unsigned __int64)a3 >= MmUserProbeAddress )
    a3 = (_OWORD *)MmUserProbeAddress;
  *(_OWORD *)v40 = *a3;
  if ( a6 >= MmUserProbeAddress )
    v9 = MmUserProbeAddress;
  v17 = *(_DWORD *)v9;
  v32 = *(_DWORD *)v9;
  v33 = *(_DWORD *)v9;
  v18 = *(void **)(v9 + 8);
  v19 = v18;
  v34 = v18;
  if ( v18 )
  {
    if ( ((unsigned __int8)v18 & 1) != 0 )
      ExRaiseDatatypeMisalignment();
    v20 = (unsigned __int16)v17;
    v21 = (ULONG64)v18 + (unsigned __int16)v17 + 2;
    v22 = (_BYTE **)MmUserProbeAddress;
    if ( v21 < MmUserProbeAddress && (unsigned __int16)v17 <= HIWORD(v32) )
    {
      if ( (v17 & 1) != 0 )
        goto LABEL_21;
      if ( v21 > (unsigned __int64)v18 )
      {
LABEL_23:
        v23 = Win32AllocPoolWithQuota(v20 + 2, 2020897621LL);
        v19 = (void *)v23;
        v34 = (void *)v23;
        if ( !v23 )
          ExRaiseStatus(-1073741801);
        v31 = 1;
        PushW32ThreadLock(v23, v39, (__int64)Win32FreePool);
        memmove(v19, v18, v20);
        *((_WORD *)v19 + (v20 >> 1)) = 0;
        HIWORD(v33) = v20 + 2;
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
  v37[0] = *(_QWORD *)(gptiCurrent + 408LL);
  *(_QWORD *)(gptiCurrent + 408LL) = v37;
  v37[1] = v14;
  if ( v14 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v14 + 8));
    v19 = v34;
  }
  v38[0] = *(_QWORD *)(gptiCurrent + 408LL);
  *(_QWORD *)(gptiCurrent + 408LL) = v38;
  v38[1] = v16;
  if ( v16 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v16 + 8));
    v19 = v34;
  }
  v15 = xxxDrawCaptionTemp(
          (__int64 *)v14,
          v36,
          (RECT *)v40,
          v35,
          (struct tagCURSOR *)v16,
          (unsigned __int16 **)((unsigned __int64)&v33 & -(__int64)(v19 != 0LL)),
          a7);
  ThreadUnlock1(v25, v24, v26);
  ThreadUnlock1(v28, v27, v29);
  if ( v31 )
    PopAndFreeAlwaysW32ThreadLock((__int64)v39);
LABEL_33:
  UserSessionSwitchLeaveCrit(v11, v10, v12, v13);
  return v15;
}
