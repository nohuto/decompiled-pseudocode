/*
 * XREFs of NtUserGetClassInfoEx @ 0x1C001E9B0
 * Callers:
 *     <none>
 * Callees:
 *     _GetClassInfoEx @ 0x1C001ECF4 (_GetClassInfoEx.c)
 *     PushW32ThreadLock @ 0x1C001F0A0 (PushW32ThreadLock.c)
 *     UserSetLastError @ 0x1C008B3AC (UserSetLastError.c)
 *     RegisterDefaultClass @ 0x1C0096080 (RegisterDefaultClass.c)
 *     PopAndFreeAlwaysW32ThreadLock @ 0x1C0096A50 (PopAndFreeAlwaysW32ThreadLock.c)
 *     RegisterIconTitleClass @ 0x1C0122218 (RegisterIconTitleClass.c)
 *     memmove @ 0x1C0166500 (memmove.c)
 *     memset @ 0x1C0166840 (memset.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02D4E10 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall NtUserGetClassInfoEx(__int64 a1, ULONG64 a2, ULONG64 a3, _QWORD *a4, int a5)
{
  _QWORD *v5; // r12
  int v8; // edi
  __int64 v9; // rcx
  ULONG64 v10; // rcx
  int v11; // edi
  wchar_t *v12; // r14
  _BYTE **v13; // rax
  unsigned __int64 v14; // r15
  __int64 v15; // rax
  void *v16; // rdi
  __int64 v17; // rax
  _BYTE *v18; // rdx
  _DWORD *v19; // rdx
  unsigned __int16 ClassInfo; // ax
  int v22; // [rsp+30h] [rbp-E8h]
  int v23; // [rsp+34h] [rbp-E4h]
  wchar_t *Str1; // [rsp+50h] [rbp-C8h]
  __int64 v25; // [rsp+58h] [rbp-C0h] BYREF
  __int64 v26; // [rsp+68h] [rbp-B0h]
  _QWORD v27[4]; // [rsp+70h] [rbp-A8h] BYREF
  _OWORD v28[6]; // [rsp+90h] [rbp-88h] BYREF

  v5 = a4;
  v25 = 0LL;
  memset(v28, 0, 0x50uLL);
  memset(v27, 0, 24);
  v22 = 0;
  EnterCrit(0LL, 1LL);
  if ( (*(_DWORD *)(*(_QWORD *)(gptiCurrent + 416LL) + 12LL) & 0x10000000) == 0
    && !(unsigned int)RegisterIconTitleClass() )
  {
LABEL_3:
    v8 = 0;
    UserSetLastError(87LL);
    goto LABEL_33;
  }
  v10 = MmUserProbeAddress;
  if ( a2 >= MmUserProbeAddress )
    a2 = MmUserProbeAddress;
  v11 = *(_DWORD *)a2;
  v23 = *(_DWORD *)a2;
  v12 = *(wchar_t **)(a2 + 8);
  Str1 = v12;
  if ( ((unsigned __int64)v12 & 0xFFFFFFFFFFFF0000uLL) != 0 )
  {
    if ( ((unsigned __int8)v12 & 1) != 0 )
      ExRaiseDatatypeMisalignment();
    v10 = (ULONG64)v12 + (unsigned __int16)v11 + 2;
    v13 = (_BYTE **)MmUserProbeAddress;
    if ( v10 < MmUserProbeAddress && (unsigned __int16)v11 <= HIWORD(v23) )
    {
      if ( (v11 & 1) != 0 )
        goto LABEL_14;
      if ( v10 > (unsigned __int64)v12 )
        goto LABEL_16;
    }
    if ( (v11 & 1) == 0 )
    {
LABEL_15:
      **v13 = 0;
      goto LABEL_16;
    }
LABEL_14:
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v10);
    v13 = (_BYTE **)MmUserProbeAddress;
    goto LABEL_15;
  }
LABEL_16:
  if ( ((unsigned __int64)v12 & 0xFFFFFFFFFFFF0000uLL) != 0 )
  {
    v14 = (unsigned __int16)v11;
    v15 = Win32AllocPoolWithQuota((unsigned __int16)v11 + 2LL, 2020897621LL);
    v16 = (void *)v15;
    Str1 = (wchar_t *)v15;
    if ( !v15 )
      ExRaiseStatus(-1073741801);
    v22 = 1;
    PushW32ThreadLock(v15, v27, Win32FreePool);
    memmove(v16, v12, (unsigned int)v14);
    *((_WORD *)v16 + (v14 >> 1)) = 0;
    v5 = a4;
  }
  if ( PsGetCurrentProcessWow64Process(v10) )
  {
    v26 = 1LL;
    v17 = 0LL;
  }
  else
  {
    v26 = 4LL;
    v17 = 3LL;
  }
  if ( (v17 & a3) != 0 )
    ExRaiseDatatypeMisalignment();
  v18 = (_BYTE *)a3;
  if ( a3 >= MmUserProbeAddress )
    v18 = (_BYTE *)MmUserProbeAddress;
  *v18 = *v18;
  v18[79] = v18[79];
  v19 = v5;
  if ( (unsigned __int64)v5 >= MmUserProbeAddress )
    v19 = (_DWORD *)MmUserProbeAddress;
  *v19 = *v19;
  v28[0] = *(_OWORD *)a3;
  v28[1] = *(_OWORD *)(a3 + 16);
  v28[2] = *(_OWORD *)(a3 + 32);
  v28[3] = *(_OWORD *)(a3 + 48);
  v28[4] = *(_OWORD *)(a3 + 64);
  if ( (*(_DWORD *)(*(_QWORD *)(gptiCurrent + 416LL) + 12LL) & 0x2000) == 0 && !(unsigned int)RegisterDefaultClass(Str1) )
    goto LABEL_3;
  ClassInfo = GetClassInfoEx(a1, Str1, v28, &v25, a5);
  v8 = ClassInfo;
  if ( ClassInfo )
  {
    *(_OWORD *)a3 = v28[0];
    *(_OWORD *)(a3 + 16) = v28[1];
    *(_OWORD *)(a3 + 32) = v28[2];
    *(_OWORD *)(a3 + 48) = v28[3];
    *(_OWORD *)(a3 + 64) = v28[4];
    *v5 = v25;
  }
LABEL_33:
  if ( v22 )
    PopAndFreeAlwaysW32ThreadLock(v27);
  UserSessionSwitchLeaveCrit(v9);
  return v8;
}
