/*
 * XREFs of xxxCreateDefaultImeWindow @ 0x1C001C00C
 * Callers:
 *     xxxCreateWindowEx @ 0x1C0061510 (xxxCreateWindowEx.c)
 * Callees:
 *     RtlInitLargeUnicodeString @ 0x1C001BF88 (RtlInitLargeUnicodeString.c)
 *     unsafe_cast_fnid_or_class_to_PIMEWND @ 0x1C001C564 (unsafe_cast_fnid_or_class_to_PIMEWND.c)
 *     PushW32ThreadLock @ 0x1C001EF30 (PushW32ThreadLock.c)
 *     DesktopAlloc @ 0x1C0029280 (DesktopAlloc.c)
 *     xxxDestroyWindow @ 0x1C0035BC0 (xxxDestroyWindow.c)
 *     ??1?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ @ 0x1C0038E70 (--1-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ.c)
 *     xxxCreateWindowEx @ 0x1C0061510 (xxxCreateWindowEx.c)
 *     PopAndFreeW32ThreadLock @ 0x1C00724C0 (PopAndFreeW32ThreadLock.c)
 *     W32GetThreadWin32Thread @ 0x1C00AC2AC (W32GetThreadWin32Thread.c)
 *     CreateInputContext @ 0x1C00E3D10 (CreateInputContext.c)
 *     ??0?$SmartObjStackRef@UtagMENU@@@@QEAA@H@Z @ 0x1C01651E4 (--0-$SmartObjStackRef@UtagMENU@@@@QEAA@H@Z.c)
 */

__int64 __fastcall xxxCreateDefaultImeWindow(struct tagWND *a1, __int16 a2, __int64 a3)
{
  __int64 ThreadWin32Thread; // rax
  _QWORD *v7; // rdi
  int v8; // r15d
  __int64 v9; // rdx
  PVOID *v10; // rbx
  __int64 v11; // rax
  void *v12; // r14
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 CurrentProcessWin32Process; // rax
  __int64 Window; // r15
  __int64 v20; // rdx
  ULONG64 v21; // rcx
  ULONG64 v22; // r8
  ULONG64 *v23; // rax
  ULONG64 v24; // rdx
  __int64 v26; // [rsp+90h] [rbp-98h]
  _QWORD v27[2]; // [rsp+A8h] [rbp-80h] BYREF
  __int64 v28; // [rsp+B8h] [rbp-70h] BYREF
  struct tagWND *v29; // [rsp+C0h] [rbp-68h]
  __int64 v30; // [rsp+C8h] [rbp-60h]
  _BYTE v31[32]; // [rsp+D0h] [rbp-58h] BYREF
  __int64 v32[4]; // [rsp+F0h] [rbp-38h] BYREF
  ULONG64 v33; // [rsp+148h] [rbp+20h]

  v27[0] = 0LL;
  v27[1] = 0LL;
  memset(v31, 0, 24);
  v28 = 0LL;
  v29 = 0LL;
  v30 = 0LL;
  ThreadWin32Thread = W32GetThreadWin32Thread(KeGetCurrentThread());
  v7 = (_QWORD *)ThreadWin32Thread;
  if ( !*(_QWORD *)(ThreadWin32Thread + 784)
    && PsGetThreadProcessId(*(PETHREAD *)ThreadWin32Thread) == (HANDLE)gpidLogon )
  {
    CreateInputContext(0LL);
  }
  if ( !v7[98] )
    return 0LL;
  if ( a2 == *(_WORD *)(gpsi + 898LL) )
    return 0LL;
  v8 = 1;
  if ( (*(_BYTE *)(*(_QWORD *)(*((_QWORD *)a1 + 17) + 8LL) + 10LL) & 1) != 0 )
    return 0LL;
  v9 = *((_QWORD *)a1 + 5);
  if ( (*(_BYTE *)(v9 + 31) & 0xC0) == 0x40
    && *(_QWORD *)(*(_QWORD *)(*((_QWORD *)a1 + 13) + 16LL) + 416LL) != v7[52]
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
  *(_OWORD *)v11 = xmmword_1C02DF7A0;
  *(_QWORD *)(v11 + 16) = 0x45004D0049LL;
  RtlInitLargeUnicodeString((__int64)v27, v11);
  PushW32ThreadLock(v10, v31, UserDereferenceObject);
  if ( v10 )
    ObfReferenceObject(v10);
  v13 = W32GetThreadWin32Thread(KeGetCurrentThread());
  v28 = *(_QWORD *)(v13 + 408);
  *(_QWORD *)(v13 + 408) = &v28;
  v29 = a1;
  HMLockObject(a1);
  if ( !PsGetCurrentProcessWin32Process(v15, v14)
    || (CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v17, v16),
        !(unsigned int)IsImmersiveAppRestricted(CurrentProcessWin32Process)) )
  {
    v8 = 0;
  }
  SmartObjStackRef<tagMENU>::SmartObjStackRef<tagMENU>(v32, 0LL);
  Window = xxxCreateWindowEx(
             0,
             *(unsigned __int16 *)(gpsi + 898LL),
             *(unsigned __int16 *)(gpsi + 898LL),
             (int)v27,
             -2013265920,
             0,
             0,
             0,
             0,
             a1,
             (__int64)v32,
             a3,
             0LL,
             0,
             1024,
             v8,
             0LL);
  v26 = Window;
  SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v32);
  if ( Window )
  {
    v23 = (ULONG64 *)unsafe_cast_fnid_or_class_to_PIMEWND(Window);
    if ( v23 )
      v24 = *v23;
    else
      v24 = 0LL;
    v33 = v24;
    if ( v24 )
    {
      if ( (v24 & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      v21 = MmUserProbeAddress;
      if ( v24 >= MmUserProbeAddress )
        v24 = MmUserProbeAddress;
      *(_BYTE *)v24 = *(_BYTE *)v24;
      *(_BYTE *)(v24 + 55) = *(_BYTE *)(v24 + 55);
      v22 = v33;
      v20 = *(_DWORD *)(v33 + 44) | 8u;
      *(_DWORD *)(v33 + 44) = v20;
      LOBYTE(v21) = *(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL) & 0xC0;
      if ( (_BYTE)v21 == 64 && *(_QWORD **)(*((_QWORD *)a1 + 13) + 16LL) != v7 )
      {
        v20 = (unsigned int)v20 | 0x10;
        *(_DWORD *)(v33 + 44) = v20;
      }
    }
    else
    {
      xxxDestroyWindow(Window);
      v26 = 0LL;
    }
  }
  ThreadUnlock1(v21, v20, v22);
  RtlFreeHeap(v10[16], 0, v12);
  PopAndFreeW32ThreadLock(v31);
  return v26;
}
