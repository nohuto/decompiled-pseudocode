/*
 * XREFs of NtUserDrawCaptionTemp @ 0x1C0213480
 * Callers:
 *     <none>
 * Callees:
 *     PopAndFreeAlwaysW32ThreadLock @ 0x1C0023060 (PopAndFreeAlwaysW32ThreadLock.c)
 *     HMValidateHandle @ 0x1C006CDAC (HMValidateHandle.c)
 *     PushW32ThreadLock @ 0x1C00AF710 (PushW32ThreadLock.c)
 *     xxxDrawCaptionTemp @ 0x1C0150E88 (xxxDrawCaptionTemp.c)
 *     __security_check_cookie @ 0x1C015AF60 (__security_check_cookie.c)
 *     memmove @ 0x1C0163300 (memmove.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02C1D60 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall NtUserDrawCaptionTemp(
        __int64 a1,
        HDC a2,
        struct tagRECT *a3,
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
  __int64 v26; // rdx
  __int64 v27; // rcx
  int v29; // [rsp+40h] [rbp-D8h]
  int v30; // [rsp+48h] [rbp-D0h]
  int v31; // [rsp+50h] [rbp-C8h] BYREF
  void *v32; // [rsp+58h] [rbp-C0h]
  __int64 v33; // [rsp+60h] [rbp-B8h]
  HDC v34; // [rsp+68h] [rbp-B0h]
  _QWORD v35[3]; // [rsp+78h] [rbp-A0h] BYREF
  _QWORD v36[3]; // [rsp+90h] [rbp-88h] BYREF
  _QWORD v37[3]; // [rsp+A8h] [rbp-70h] BYREF
  struct tagRECT v38; // [rsp+C0h] [rbp-58h] BYREF

  v33 = a4;
  v34 = a2;
  v9 = a6;
  v29 = 0;
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
    v16 = HMValidateHandle(a5, v10);
    if ( !v16 )
      goto LABEL_3;
  }
  else
  {
    v16 = 0LL;
  }
  if ( (unsigned __int64)a3 >= MmUserProbeAddress )
    a3 = (struct tagRECT *)MmUserProbeAddress;
  v38 = *a3;
  if ( a6 >= MmUserProbeAddress )
    v9 = MmUserProbeAddress;
  v17 = *(_DWORD *)v9;
  v30 = *(_DWORD *)v9;
  v31 = *(_DWORD *)v9;
  v18 = *(void **)(v9 + 8);
  v19 = v18;
  v32 = v18;
  if ( v18 )
  {
    if ( ((unsigned __int8)v18 & 1) != 0 )
      ExRaiseDatatypeMisalignment();
    v20 = (unsigned __int16)v17;
    v21 = (ULONG64)v18 + (unsigned __int16)v17 + 2;
    v22 = (_BYTE **)MmUserProbeAddress;
    if ( v21 < MmUserProbeAddress && (unsigned __int16)v17 <= HIWORD(v30) )
    {
      if ( (v17 & 1) != 0 )
        goto LABEL_21;
      if ( v21 > (unsigned __int64)v18 )
      {
LABEL_23:
        v23 = Win32AllocPoolWithQuota(v20 + 2, 2020897621LL);
        v19 = (void *)v23;
        v32 = (void *)v23;
        if ( !v23 )
          ExRaiseStatus(-1073741801);
        v29 = 1;
        PushW32ThreadLock(v23, v37, (__int64)Win32FreePool);
        memmove(v19, v18, v20);
        *((_WORD *)v19 + (v20 >> 1)) = 0;
        HIWORD(v31) = v20 + 2;
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
  v35[0] = *(_QWORD *)(gptiCurrent + 416LL);
  *(_QWORD *)(gptiCurrent + 416LL) = v35;
  v35[1] = v14;
  if ( v14 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v14 + 8));
    v19 = v32;
  }
  v36[0] = *(_QWORD *)(gptiCurrent + 416LL);
  *(_QWORD *)(gptiCurrent + 416LL) = v36;
  v36[1] = v16;
  if ( v16 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v16 + 8));
    v19 = v32;
  }
  v15 = xxxDrawCaptionTemp(
          (__int64 *)v14,
          v34,
          &v38,
          v33,
          (struct tagCURSOR *)v16,
          (unsigned __int16 **)((unsigned __int64)&v31 & -(__int64)(v19 != 0LL)),
          a7);
  ThreadUnlock1(v25, v24);
  ThreadUnlock1(v27, v26);
  if ( v29 )
    PopAndFreeAlwaysW32ThreadLock((__int64)v37, v10);
LABEL_33:
  UserSessionSwitchLeaveCrit(v11, v10, v12, v13);
  return v15;
}
