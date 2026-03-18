/*
 * XREFs of xxxCreateDefaultImeWindow @ 0x1C009020C
 * Callers:
 *     xxxCreateWindowEx @ 0x1C00BFE30 (xxxCreateWindowEx.c)
 * Callees:
 *     PushW32ThreadLock @ 0x1C001F0A0 (PushW32ThreadLock.c)
 *     ??1?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ @ 0x1C0021844 (--1-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ.c)
 *     DesktopAlloc @ 0x1C0022E10 (DesktopAlloc.c)
 *     W32GetThreadWin32Thread @ 0x1C0062084 (W32GetThreadWin32Thread.c)
 *     RtlInitLargeUnicodeString @ 0x1C0090188 (RtlInitLargeUnicodeString.c)
 *     unsafe_cast_fnid_or_class_to_PIMEWND @ 0x1C0091408 (unsafe_cast_fnid_or_class_to_PIMEWND.c)
 *     xxxDestroyWindow @ 0x1C0094E90 (xxxDestroyWindow.c)
 *     xxxCreateWindowEx @ 0x1C00BFE30 (xxxCreateWindowEx.c)
 *     PopAndFreeW32ThreadLock @ 0x1C00D0DF0 (PopAndFreeW32ThreadLock.c)
 *     CreateInputContext @ 0x1C0109770 (CreateInputContext.c)
 *     ??0?$SmartObjStackRef@UtagMENU@@@@QEAA@H@Z @ 0x1C0164214 (--0-$SmartObjStackRef@UtagMENU@@@@QEAA@H@Z.c)
 */

__int64 __fastcall xxxCreateDefaultImeWindow(struct tagWND *a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int16 v5; // bx
  __int64 ThreadWin32Thread; // rax
  _QWORD *v8; // rdi
  int v9; // r15d
  __int64 v10; // rdx
  PVOID *v11; // rbx
  _OWORD *v12; // rax
  void *v13; // r14
  __int64 v14; // r9
  __int64 v15; // rdx
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // rax
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 CurrentProcessWin32Process; // rax
  __int64 Window; // r15
  __int64 v25; // rdx
  __int64 v26; // r8
  __int64 v27; // r9
  __int64 v28; // rdx
  ULONG64 v29; // rcx
  ULONG64 v30; // r8
  ULONG64 *v31; // rax
  ULONG64 v32; // rdx
  __int64 v34; // [rsp+90h] [rbp-98h]
  _QWORD v35[2]; // [rsp+A8h] [rbp-80h] BYREF
  __int64 v36; // [rsp+B8h] [rbp-70h] BYREF
  struct tagWND *v37; // [rsp+C0h] [rbp-68h]
  __int64 v38; // [rsp+C8h] [rbp-60h]
  _QWORD v39[4]; // [rsp+D0h] [rbp-58h] BYREF
  __int64 v40[4]; // [rsp+F0h] [rbp-38h] BYREF
  ULONG64 v41; // [rsp+148h] [rbp+20h]

  v5 = a2;
  v35[0] = 0LL;
  v35[1] = 0LL;
  memset(v39, 0, 24);
  v36 = 0LL;
  v37 = 0LL;
  v38 = 0LL;
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), a2, a3, a4);
  v8 = (_QWORD *)ThreadWin32Thread;
  if ( !*(_QWORD *)(ThreadWin32Thread + 784)
    && PsGetThreadProcessId(*(PETHREAD *)ThreadWin32Thread) == (HANDLE)gpidLogon )
  {
    CreateInputContext(0LL);
  }
  if ( !v8[98] )
    return 0LL;
  if ( v5 == *(_WORD *)(gpsi + 898LL) )
    return 0LL;
  v9 = 1;
  if ( (*(_BYTE *)(*(_QWORD *)(*((_QWORD *)a1 + 17) + 8LL) + 10LL) & 1) != 0 )
    return 0LL;
  v10 = *((_QWORD *)a1 + 5);
  if ( (*(_BYTE *)(v10 + 31) & 0xC0) == 0x40
    && *(_QWORD *)(*(_QWORD *)(*((_QWORD *)a1 + 13) + 16LL) + 416LL) != v8[52]
    && (*(_DWORD *)(v10 + 28) & 0x10000000) == 0 )
  {
    return 0LL;
  }
  v11 = (PVOID *)v8[56];
  if ( !v11[16] )
    return 0LL;
  v12 = DesktopAlloc((__int64)v11, 0x18u);
  v13 = v12;
  if ( !v12 )
    return 0LL;
  *v12 = xmmword_1C02E05E0;
  *((_QWORD *)v12 + 2) = 0x45004D0049LL;
  RtlInitLargeUnicodeString((__int64)v35, (__int64)v12);
  PushW32ThreadLock((__int64)v11, v39, UserDereferenceObject, v14);
  if ( v11 )
    ObfReferenceObject(v11);
  v18 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v15, v16, v17);
  v36 = *(_QWORD *)(v18 + 408);
  *(_QWORD *)(v18 + 408) = &v36;
  v37 = a1;
  HMLockObject(a1);
  if ( !PsGetCurrentProcessWin32Process(v20, v19)
    || (CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v22, v21),
        !(unsigned int)IsImmersiveAppRestricted(CurrentProcessWin32Process)) )
  {
    v9 = 0;
  }
  SmartObjStackRef<tagMENU>::SmartObjStackRef<tagMENU>(v40, 0LL);
  Window = xxxCreateWindowEx(
             0,
             *(unsigned __int16 *)(gpsi + 898LL),
             *(unsigned __int16 *)(gpsi + 898LL),
             (int)v35,
             -2013265920,
             0,
             0,
             0,
             0,
             a1,
             (__int64)v40,
             a3,
             0LL,
             0,
             1024,
             v9,
             0LL);
  v34 = Window;
  SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v40, v25, v26, v27);
  if ( Window )
  {
    v31 = (ULONG64 *)unsafe_cast_fnid_or_class_to_PIMEWND(Window);
    if ( v31 )
      v32 = *v31;
    else
      v32 = 0LL;
    v41 = v32;
    if ( v32 )
    {
      if ( (v32 & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      v29 = MmUserProbeAddress;
      if ( v32 >= MmUserProbeAddress )
        v32 = MmUserProbeAddress;
      *(_BYTE *)v32 = *(_BYTE *)v32;
      *(_BYTE *)(v32 + 55) = *(_BYTE *)(v32 + 55);
      v30 = v41;
      v28 = *(_DWORD *)(v41 + 44) | 8u;
      *(_DWORD *)(v41 + 44) = v28;
      LOBYTE(v29) = *(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL) & 0xC0;
      if ( (_BYTE)v29 == 64 && *(_QWORD **)(*((_QWORD *)a1 + 13) + 16LL) != v8 )
      {
        v28 = (unsigned int)v28 | 0x10;
        *(_DWORD *)(v41 + 44) = v28;
      }
    }
    else
    {
      xxxDestroyWindow(Window);
      v34 = 0LL;
    }
  }
  ThreadUnlock1(v29, v28, v30);
  RtlFreeHeap(v11[16], 0, v13);
  PopAndFreeW32ThreadLock(v39);
  return v34;
}
