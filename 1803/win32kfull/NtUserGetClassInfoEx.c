/*
 * XREFs of NtUserGetClassInfoEx @ 0x1C0018010
 * Callers:
 *     <none>
 * Callees:
 *     _GetClassInfoEx @ 0x1C0018304 (_GetClassInfoEx.c)
 *     RegisterDefaultClass @ 0x1C001A8C0 (RegisterDefaultClass.c)
 *     PopAndFreeAlwaysW32ThreadLock @ 0x1C001B160 (PopAndFreeAlwaysW32ThreadLock.c)
 *     UserSetLastError @ 0x1C003A8EC (UserSetLastError.c)
 *     PushW32ThreadLock @ 0x1C005D730 (PushW32ThreadLock.c)
 *     RegisterIconTitleClass @ 0x1C00FBFF0 (RegisterIconTitleClass.c)
 *     memmove @ 0x1C013D380 (memmove.c)
 *     memset @ 0x1C013D6C0 (memset.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02AFC0C (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall NtUserGetClassInfoEx(__int64 a1, ULONG64 a2, ULONG64 a3, _QWORD *a4, int a5)
{
  _QWORD *v5; // r12
  int v8; // edi
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  int v13; // edi
  wchar_t *v14; // r14
  ULONG64 v15; // rcx
  _BYTE **v16; // rax
  unsigned __int64 v17; // r15
  __int16 v18; // r12
  wchar_t *v19; // rax
  wchar_t *v20; // rdi
  __int64 v21; // rax
  _BYTE *v22; // rdx
  _DWORD *v23; // rdx
  unsigned __int16 ClassInfo; // ax
  int v26; // [rsp+30h] [rbp-E8h]
  int v27; // [rsp+34h] [rbp-E4h]
  __int64 v28; // [rsp+48h] [rbp-D0h] BYREF
  int v29; // [rsp+50h] [rbp-C8h]
  wchar_t *Str1; // [rsp+58h] [rbp-C0h]
  __int64 v31; // [rsp+68h] [rbp-B0h]
  _OWORD v32[6]; // [rsp+70h] [rbp-A8h] BYREF
  _BYTE v33[32]; // [rsp+D0h] [rbp-48h] BYREF

  v5 = a4;
  v28 = 0LL;
  memset(v32, 0, 0x50uLL);
  v26 = 0;
  EnterCrit(0LL, 1LL);
  if ( (*(_DWORD *)(*(_QWORD *)(gptiCurrent + 416LL) + 12LL) & 0x10000000) == 0
    && !(unsigned int)RegisterIconTitleClass() )
  {
LABEL_3:
    v8 = 0;
    UserSetLastError(87LL);
    goto LABEL_33;
  }
  if ( a2 >= MmUserProbeAddress )
    a2 = MmUserProbeAddress;
  v13 = *(_DWORD *)a2;
  v27 = *(_DWORD *)a2;
  v29 = *(_DWORD *)a2;
  v14 = *(wchar_t **)(a2 + 8);
  Str1 = v14;
  if ( ((unsigned __int64)v14 & 0xFFFFFFFFFFFF0000uLL) != 0 )
  {
    if ( ((unsigned __int8)v14 & 1) != 0 )
      ExRaiseDatatypeMisalignment();
    v15 = (ULONG64)v14 + (unsigned __int16)v13 + 2;
    v16 = (_BYTE **)MmUserProbeAddress;
    if ( v15 < MmUserProbeAddress && (unsigned __int16)v13 <= HIWORD(v27) )
    {
      if ( (v13 & 1) != 0 )
        goto LABEL_14;
      if ( v15 > (unsigned __int64)v14 )
        goto LABEL_16;
    }
    if ( (v13 & 1) == 0 )
    {
LABEL_15:
      **v16 = 0;
      goto LABEL_16;
    }
LABEL_14:
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v15);
    v16 = (_BYTE **)MmUserProbeAddress;
    goto LABEL_15;
  }
LABEL_16:
  if ( ((unsigned __int64)v14 & 0xFFFFFFFFFFFF0000uLL) != 0 )
  {
    v17 = (unsigned __int16)v13;
    v18 = v13 + 2;
    v19 = (wchar_t *)Win32AllocPoolWithQuota((unsigned __int16)v13 + 2LL, 2020897621LL);
    v20 = v19;
    Str1 = v19;
    if ( !v19 )
      ExRaiseStatus(-1073741801);
    v26 = 1;
    PushW32ThreadLock(v19, v33, Win32FreePool);
    memmove(v20, v14, (unsigned int)v17);
    v20[v17 >> 1] = 0;
    HIWORD(v29) = v18;
    v5 = a4;
  }
  if ( PsGetCurrentProcessWow64Process() )
  {
    v31 = 1LL;
    v21 = 0LL;
  }
  else
  {
    v31 = 4LL;
    v21 = 3LL;
  }
  if ( (v21 & a3) != 0 )
    ExRaiseDatatypeMisalignment();
  v22 = (_BYTE *)a3;
  if ( a3 >= MmUserProbeAddress )
    v22 = (_BYTE *)MmUserProbeAddress;
  *v22 = *v22;
  v22[79] = v22[79];
  v23 = v5;
  if ( (unsigned __int64)v5 >= MmUserProbeAddress )
    v23 = (_DWORD *)MmUserProbeAddress;
  *v23 = *v23;
  v32[0] = *(_OWORD *)a3;
  v32[1] = *(_OWORD *)(a3 + 16);
  v32[2] = *(_OWORD *)(a3 + 32);
  v32[3] = *(_OWORD *)(a3 + 48);
  v32[4] = *(_OWORD *)(a3 + 64);
  if ( (*(_DWORD *)(*(_QWORD *)(gptiCurrent + 416LL) + 12LL) & 0x2000) == 0 && !(unsigned int)RegisterDefaultClass(Str1) )
    goto LABEL_3;
  ClassInfo = GetClassInfoEx(a1, Str1, v32, &v28, a5);
  v8 = ClassInfo;
  if ( ClassInfo )
  {
    *(_OWORD *)a3 = v32[0];
    *(_OWORD *)(a3 + 16) = v32[1];
    *(_OWORD *)(a3 + 32) = v32[2];
    *(_OWORD *)(a3 + 48) = v32[3];
    *(_OWORD *)(a3 + 64) = v32[4];
    *v5 = v28;
  }
LABEL_33:
  if ( v26 )
    PopAndFreeAlwaysW32ThreadLock(v33);
  UserSessionSwitchLeaveCrit(v10, v9, v11, v12);
  return v8;
}
