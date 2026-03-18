/*
 * XREFs of xxxCreateDefaultImeWindow @ 0x1C00AD260
 * Callers:
 *     xxxCreateWindowEx @ 0x1C003DE94 (xxxCreateWindowEx.c)
 * Callees:
 *     xxxDestroyWindow @ 0x1C001BB70 (xxxDestroyWindow.c)
 *     ??1?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ @ 0x1C0022768 (--1-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ.c)
 *     PopAndFreeW32ThreadLock @ 0x1C0037100 (PopAndFreeW32ThreadLock.c)
 *     xxxCreateWindowEx @ 0x1C003DE94 (xxxCreateWindowEx.c)
 *     W32GetThreadWin32Thread @ 0x1C0065998 (W32GetThreadWin32Thread.c)
 *     DesktopAlloc @ 0x1C006B5F0 (DesktopAlloc.c)
 *     unsafe_cast_fnid_or_class_to_PIMEWND @ 0x1C00AD7BC (unsafe_cast_fnid_or_class_to_PIMEWND.c)
 *     PushW32ThreadLock @ 0x1C00AF710 (PushW32ThreadLock.c)
 *     RtlInitLargeUnicodeString @ 0x1C00B068C (RtlInitLargeUnicodeString.c)
 *     CreateInputContext @ 0x1C00FFCE0 (CreateInputContext.c)
 *     ??0?$SmartObjStackRef@UtagMENU@@@@QEAA@H@Z @ 0x1C015CB48 (--0-$SmartObjStackRef@UtagMENU@@@@QEAA@H@Z.c)
 */

volatile signed __int32 *__fastcall xxxCreateDefaultImeWindow(struct tagWND *a1, __int64 a2, __int64 a3)
{
  __int16 v4; // bx
  __int64 ThreadWin32Thread; // rax
  _QWORD *v7; // rsi
  int v8; // r15d
  __int64 v9; // rdx
  PVOID *v10; // rbx
  _OWORD *v11; // rax
  void *v12; // r14
  __int64 v13; // rdx
  __int64 v14; // rax
  __int64 v15; // rcx
  __int64 CurrentProcessWin32Process; // rax
  volatile signed __int32 *Window; // r15
  __int64 v18; // rdx
  __int64 v19; // rdx
  ULONG64 v20; // rcx
  ULONG64 *v21; // rax
  ULONG64 v22; // rdx
  __int64 v23; // rdx
  volatile signed __int32 *v25; // [rsp+90h] [rbp-98h]
  int v26[4]; // [rsp+B0h] [rbp-78h] BYREF
  _QWORD v27[3]; // [rsp+C0h] [rbp-68h] BYREF
  __int64 v28[3]; // [rsp+D8h] [rbp-50h] BYREF
  _BYTE v29[32]; // [rsp+F0h] [rbp-38h] BYREF
  ULONG64 v30; // [rsp+148h] [rbp+20h]

  v4 = a2;
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), a2);
  v7 = (_QWORD *)ThreadWin32Thread;
  if ( !*(_QWORD *)(ThreadWin32Thread + 792)
    && PsGetThreadProcessId(*(PETHREAD *)ThreadWin32Thread) == (HANDLE)gpidLogon )
  {
    CreateInputContext(0LL);
  }
  if ( !v7[99] )
    return 0LL;
  if ( v4 == *(_WORD *)(gpsi + 898LL) )
    return 0LL;
  v8 = 1;
  if ( (*(_BYTE *)(*(_QWORD *)(*((_QWORD *)a1 + 14) + 8LL) + 10LL) & 1) != 0 )
    return 0LL;
  v9 = *((_QWORD *)a1 + 5);
  if ( (*(_BYTE *)(v9 + 31) & 0xC0) == 0x40
    && *(_QWORD *)(*(_QWORD *)(*((_QWORD *)a1 + 10) + 16LL) + 424LL) != v7[53]
    && (*(_DWORD *)(v9 + 28) & 0x10000000) == 0 )
  {
    return 0LL;
  }
  v10 = (PVOID *)v7[57];
  if ( !v10[16] )
    return 0LL;
  v11 = DesktopAlloc((__int64)v10, 0x18u);
  v12 = v11;
  if ( !v11 )
    return 0LL;
  *v11 = xmmword_1C02CDEB0;
  *((_QWORD *)v11 + 2) = 0x45004D0049LL;
  RtlInitLargeUnicodeString(v26, v11);
  PushW32ThreadLock(v10, v29, UserDereferenceObject);
  if ( v10 )
    ObfReferenceObject(v10);
  v14 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v13);
  v27[0] = *(_QWORD *)(v14 + 416);
  *(_QWORD *)(v14 + 416) = v27;
  v27[1] = a1;
  _InterlockedAdd((volatile signed __int32 *)a1 + 2, 1u);
  if ( !PsGetCurrentProcessWin32Process(v27)
    || (CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v15),
        !(unsigned int)IsImmersiveAppRestricted(CurrentProcessWin32Process)) )
  {
    v8 = 0;
  }
  SmartObjStackRef<tagMENU>::SmartObjStackRef<tagMENU>(v28, 0LL);
  Window = xxxCreateWindowEx(
             0,
             (wchar_t *)*(unsigned __int16 *)(gpsi + 898LL),
             *(unsigned __int16 *)(gpsi + 898LL),
             (__int64)v26,
             0x88000000,
             0,
             0,
             0,
             0,
             a1,
             (__int64)v28,
             a3,
             0LL,
             0,
             0x400u,
             v8,
             0LL);
  v25 = Window;
  SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v28, v18);
  if ( Window )
  {
    v21 = (ULONG64 *)unsafe_cast_fnid_or_class_to_PIMEWND(Window);
    if ( v21 )
      v22 = *v21;
    else
      v22 = 0LL;
    v30 = v22;
    if ( v22 )
    {
      if ( (v22 & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      v20 = MmUserProbeAddress;
      if ( v22 >= MmUserProbeAddress )
        v22 = MmUserProbeAddress;
      *(_BYTE *)v22 = *(_BYTE *)v22;
      *(_BYTE *)(v22 + 55) = *(_BYTE *)(v22 + 55);
      v19 = *(_DWORD *)(v30 + 44) | 8u;
      *(_DWORD *)(v30 + 44) = v19;
      LOBYTE(v20) = *(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL) & 0xC0;
      if ( (_BYTE)v20 == 64 && *(_QWORD **)(*((_QWORD *)a1 + 10) + 16LL) != v7 )
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
  ThreadUnlock1(v20, v19);
  RtlFreeHeap(v10[16], 0, v12);
  PopAndFreeW32ThreadLock((__int64)v29, v23);
  return v25;
}
