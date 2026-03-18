/*
 * XREFs of xxxCreateDefaultImeWindow @ 0x1C005BB1C
 * Callers:
 *     xxxCreateWindowEx @ 0x1C0030FEC (xxxCreateWindowEx.c)
 * Callees:
 *     RtlInitLargeUnicodeString @ 0x1C0022154 (RtlInitLargeUnicodeString.c)
 *     ??1?$SmartObjStackRef@UtagPOPUPMENU@@@@QEAA@XZ @ 0x1C00262E4 (--1-$SmartObjStackRef@UtagPOPUPMENU@@@@QEAA@XZ.c)
 *     W32GetThreadWin32Thread @ 0x1C0026450 (W32GetThreadWin32Thread.c)
 *     xxxCreateWindowEx @ 0x1C0030FEC (xxxCreateWindowEx.c)
 *     PopAndFreeW32ThreadLock @ 0x1C005D3C0 (PopAndFreeW32ThreadLock.c)
 *     PushW32ThreadLock @ 0x1C005D730 (PushW32ThreadLock.c)
 *     DesktopAlloc @ 0x1C005E320 (DesktopAlloc.c)
 *     unsafe_cast_fnid_or_class_to_PIMEWND @ 0x1C0070C0C (unsafe_cast_fnid_or_class_to_PIMEWND.c)
 *     xxxDestroyWindow @ 0x1C00711E0 (xxxDestroyWindow.c)
 *     CreateInputContext @ 0x1C00E91A0 (CreateInputContext.c)
 *     ??0?$SmartObjStackRef@UtagMENU@@@@QEAA@H@Z @ 0x1C0138F04 (--0-$SmartObjStackRef@UtagMENU@@@@QEAA@H@Z.c)
 */

_DWORD *__fastcall xxxCreateDefaultImeWindow(__int64 a1, __int64 a2, __int64 a3)
{
  __int16 v4; // bx
  __int64 ThreadWin32Thread; // rax
  _QWORD *v7; // rsi
  int v8; // r15d
  __int64 v9; // rdx
  PVOID *v10; // rbx
  __int64 v11; // rax
  void *v12; // r14
  __int64 v13; // rdx
  __int64 v14; // rax
  __int64 v15; // rcx
  __int64 CurrentProcessWin32Process; // rax
  _DWORD *Window; // r15
  __int64 v18; // rdx
  __int64 v19; // rdx
  ULONG64 v20; // rcx
  ULONG64 v21; // r8
  ULONG64 *v22; // rax
  ULONG64 v23; // rdx
  _DWORD *v25; // [rsp+90h] [rbp-98h]
  _BYTE v26[16]; // [rsp+B0h] [rbp-78h] BYREF
  _QWORD v27[3]; // [rsp+C0h] [rbp-68h] BYREF
  _QWORD v28[3]; // [rsp+D8h] [rbp-50h] BYREF
  _BYTE v29[32]; // [rsp+F0h] [rbp-38h] BYREF
  ULONG64 v30; // [rsp+148h] [rbp+20h]

  v4 = a2;
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), a2);
  v7 = (_QWORD *)ThreadWin32Thread;
  if ( !*(_QWORD *)(ThreadWin32Thread + 776)
    && PsGetThreadProcessId(*(PETHREAD *)ThreadWin32Thread) == (HANDLE)gpidLogon )
  {
    CreateInputContext(0LL);
  }
  if ( !v7[97] )
    return 0LL;
  if ( v4 == *(_WORD *)(gpsi + 898LL) )
    return 0LL;
  v8 = 1;
  if ( (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(a1 + 112) + 8LL) + 10LL) & 1) != 0 )
    return 0LL;
  v9 = *(_QWORD *)(a1 + 40);
  if ( (*(_BYTE *)(v9 + 31) & 0xC0) == 0x40
    && *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 80) + 16LL) + 416LL) != v7[52]
    && (*(_DWORD *)(v9 + 28) & 0x10000000) == 0 )
  {
    return 0LL;
  }
  v10 = (PVOID *)v7[56];
  if ( !v10[16] )
    return 0LL;
  v11 = DesktopAlloc(v10, 24LL, 9LL);
  v12 = (void *)v11;
  if ( !v11 )
    return 0LL;
  *(_OWORD *)v11 = xmmword_1C02DCE38;
  *(_QWORD *)(v11 + 16) = 0x45004D0049LL;
  RtlInitLargeUnicodeString((__int64)v26, v11);
  PushW32ThreadLock(v10, v29, UserDereferenceObject);
  if ( v10 )
    ObfReferenceObject(v10);
  v14 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v13);
  v27[0] = *(_QWORD *)(v14 + 408);
  *(_QWORD *)(v14 + 408) = v27;
  v27[1] = a1;
  _InterlockedAdd((volatile signed __int32 *)(a1 + 8), 1u);
  if ( !PsGetCurrentProcessWin32Process(v27)
    || (CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v15),
        !(unsigned int)IsImmersiveAppRestricted(CurrentProcessWin32Process)) )
  {
    v8 = 0;
  }
  SmartObjStackRef<tagMENU>::SmartObjStackRef<tagMENU>(v28, 0LL);
  Window = xxxCreateWindowEx(
             0,
             *(unsigned __int16 *)(gpsi + 898LL),
             *(unsigned __int16 *)(gpsi + 898LL),
             (struct _KPROCESS *)v26,
             0x88000000,
             0,
             0,
             0,
             0,
             (struct tagWND *)a1,
             (__int64)v28,
             a3,
             0LL,
             0,
             0x400u,
             v8,
             0LL);
  v25 = Window;
  SmartObjStackRef<tagPOPUPMENU>::~SmartObjStackRef<tagPOPUPMENU>(v28, v18);
  if ( Window )
  {
    v22 = (ULONG64 *)unsafe_cast_fnid_or_class_to_PIMEWND(Window);
    if ( v22 )
      v23 = *v22;
    else
      v23 = 0LL;
    v30 = v23;
    if ( v23 )
    {
      if ( (v23 & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      v20 = MmUserProbeAddress;
      if ( v23 >= MmUserProbeAddress )
        v23 = MmUserProbeAddress;
      *(_BYTE *)v23 = *(_BYTE *)v23;
      *(_BYTE *)(v23 + 55) = *(_BYTE *)(v23 + 55);
      v21 = v30;
      v19 = *(_DWORD *)(v30 + 44) | 8u;
      *(_DWORD *)(v30 + 44) = v19;
      LOBYTE(v20) = *(_BYTE *)(*(_QWORD *)(a1 + 40) + 31LL) & 0xC0;
      if ( (_BYTE)v20 == 64 && *(_QWORD **)(*(_QWORD *)(a1 + 80) + 16LL) != v7 )
      {
        v19 = (unsigned int)v19 | 0x10;
        *(_DWORD *)(v30 + 44) = v19;
      }
    }
    else
    {
      xxxDestroyWindow(Window);
      v25 = 0LL;
    }
  }
  ThreadUnlock1(v20, v19, v21);
  RtlFreeHeap(v10[16], 0, v12);
  PopAndFreeW32ThreadLock(v29);
  return v25;
}
