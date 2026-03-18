/*
 * XREFs of NtUserGetClassInfoEx @ 0x1C00AEA20
 * Callers:
 *     <none>
 * Callees:
 *     PopAndFreeAlwaysW32ThreadLock @ 0x1C0023060 (PopAndFreeAlwaysW32ThreadLock.c)
 *     RegisterDefaultClass @ 0x1C00230C8 (RegisterDefaultClass.c)
 *     UserSetLastError @ 0x1C0073CC4 (UserSetLastError.c)
 *     _GetClassInfoEx @ 0x1C00AED40 (_GetClassInfoEx.c)
 *     PushW32ThreadLock @ 0x1C00AF710 (PushW32ThreadLock.c)
 *     RegisterIconTitleClass @ 0x1C0119D7C (RegisterIconTitleClass.c)
 *     memmove @ 0x1C0163300 (memmove.c)
 *     memset @ 0x1C0163640 (memset.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02C1D60 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall NtUserGetClassInfoEx(__int64 a1, ULONG64 a2, ULONG64 a3, _QWORD *a4, int a5)
{
  _QWORD *v5; // r12
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9
  int v11; // edi
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  ULONG64 v16; // rcx
  int v17; // edi
  wchar_t *v18; // r14
  _BYTE **v19; // rax
  unsigned __int64 v20; // r15
  __int16 v21; // r12
  wchar_t *v22; // rax
  wchar_t *v23; // rdi
  __int64 v24; // rax
  _BYTE *v25; // rdx
  _DWORD *v26; // rdx
  unsigned __int16 ClassInfo; // ax
  int v29; // [rsp+30h] [rbp-E8h]
  int v30; // [rsp+34h] [rbp-E4h]
  __int64 v31; // [rsp+48h] [rbp-D0h] BYREF
  int v32; // [rsp+50h] [rbp-C8h]
  wchar_t *Str1; // [rsp+58h] [rbp-C0h]
  __int64 v34; // [rsp+68h] [rbp-B0h]
  _OWORD v35[6]; // [rsp+70h] [rbp-A8h] BYREF
  _BYTE v36[32]; // [rsp+D0h] [rbp-48h] BYREF

  v5 = a4;
  v31 = 0LL;
  memset(v35, 0, 0x50uLL);
  v29 = 0;
  EnterCrit(0LL, 1LL);
  if ( (*(_DWORD *)(*(_QWORD *)(gptiCurrent + 424LL) + 12LL) & 0x10000000) == 0
    && !(unsigned int)RegisterIconTitleClass() )
  {
LABEL_3:
    v11 = 0;
    UserSetLastError(87LL, v8, v9, v10);
    goto LABEL_33;
  }
  v16 = MmUserProbeAddress;
  if ( a2 >= MmUserProbeAddress )
    a2 = MmUserProbeAddress;
  v17 = *(_DWORD *)a2;
  v30 = *(_DWORD *)a2;
  v32 = *(_DWORD *)a2;
  v18 = *(wchar_t **)(a2 + 8);
  Str1 = v18;
  if ( ((unsigned __int64)v18 & 0xFFFFFFFFFFFF0000uLL) != 0 )
  {
    if ( ((unsigned __int8)v18 & 1) != 0 )
      ExRaiseDatatypeMisalignment();
    v16 = (ULONG64)v18 + (unsigned __int16)v17 + 2;
    v19 = (_BYTE **)MmUserProbeAddress;
    if ( v16 < MmUserProbeAddress && (unsigned __int16)v17 <= HIWORD(v30) )
    {
      if ( (v17 & 1) != 0 )
        goto LABEL_14;
      if ( v16 > (unsigned __int64)v18 )
        goto LABEL_16;
    }
    if ( (v17 & 1) == 0 )
    {
LABEL_15:
      **v19 = 0;
      goto LABEL_16;
    }
LABEL_14:
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v16);
    v19 = (_BYTE **)MmUserProbeAddress;
    goto LABEL_15;
  }
LABEL_16:
  if ( ((unsigned __int64)v18 & 0xFFFFFFFFFFFF0000uLL) != 0 )
  {
    v20 = (unsigned __int16)v17;
    v21 = v17 + 2;
    v22 = (wchar_t *)Win32AllocPoolWithQuota((unsigned __int16)v17 + 2LL, 2020897621LL);
    v23 = v22;
    Str1 = v22;
    if ( !v22 )
      ExRaiseStatus(-1073741801);
    v29 = 1;
    PushW32ThreadLock(v22, v36, Win32FreePool);
    memmove(v23, v18, (unsigned int)v20);
    v23[v20 >> 1] = 0;
    HIWORD(v32) = v21;
    v5 = a4;
  }
  if ( PsGetCurrentProcessWow64Process(v16) )
  {
    v34 = 1LL;
    v24 = 0LL;
  }
  else
  {
    v34 = 4LL;
    v24 = 3LL;
  }
  if ( (v24 & a3) != 0 )
    ExRaiseDatatypeMisalignment();
  v25 = (_BYTE *)a3;
  if ( a3 >= MmUserProbeAddress )
    v25 = (_BYTE *)MmUserProbeAddress;
  *v25 = *v25;
  v25[79] = v25[79];
  v26 = v5;
  if ( (unsigned __int64)v5 >= MmUserProbeAddress )
    v26 = (_DWORD *)MmUserProbeAddress;
  *v26 = *v26;
  v35[0] = *(_OWORD *)a3;
  v35[1] = *(_OWORD *)(a3 + 16);
  v35[2] = *(_OWORD *)(a3 + 32);
  v35[3] = *(_OWORD *)(a3 + 48);
  v35[4] = *(_OWORD *)(a3 + 64);
  if ( (*(_DWORD *)(*(_QWORD *)(gptiCurrent + 424LL) + 12LL) & 0x2000) == 0 && !(unsigned int)RegisterDefaultClass(Str1) )
    goto LABEL_3;
  ClassInfo = GetClassInfoEx(a1, Str1, v35, &v31, a5);
  v11 = ClassInfo;
  if ( ClassInfo )
  {
    *(_OWORD *)a3 = v35[0];
    *(_OWORD *)(a3 + 16) = v35[1];
    *(_OWORD *)(a3 + 32) = v35[2];
    *(_OWORD *)(a3 + 48) = v35[3];
    *(_OWORD *)(a3 + 64) = v35[4];
    *v5 = v31;
  }
LABEL_33:
  if ( v29 )
    PopAndFreeAlwaysW32ThreadLock((__int64)v36, v12);
  UserSessionSwitchLeaveCrit(v13, v12, v14, v15);
  return v11;
}
