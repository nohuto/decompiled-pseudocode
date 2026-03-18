/*
 * XREFs of _RegisterClassEx @ 0x1C00377E8
 * Callers:
 *     NtUserRegisterClassExWOW @ 0x1C0036FD0 (NtUserRegisterClassExWOW.c)
 * Callees:
 *     InternalRegisterClassEx @ 0x1C0038490 (InternalRegisterClassEx.c)
 *     ??1?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ @ 0x1C0038E70 (--1-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ.c)
 *     HMValidateHandleNoRip @ 0x1C00559FC (HMValidateHandleNoRip.c)
 *     ?DecrementCountAndTryFree@?$SmartObjStackRefBase@UtagCLS@@@@IEAAXXZ @ 0x1C0060168 (-DecrementCountAndTryFree@-$SmartObjStackRefBase@UtagCLS@@@@IEAAXXZ.c)
 *     IsThreadCrossSessionAttached @ 0x1C0164774 (IsThreadCrossSessionAttached.c)
 */

__int64 __fastcall RegisterClassEx(__int64 a1, _QWORD *a2, __int64 a3, unsigned int a4)
{
  struct _KTHREAD *CurrentThread; // r14
  unsigned __int16 v5; // bx
  __int64 v6; // rsi
  unsigned __int16 v8; // r12
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 *ThreadWin32Thread; // rax
  __int64 v14; // rax
  __int64 v15; // rdi
  _DWORD *v17; // [rsp+20h] [rbp-10h] BYREF
  __int64 v18; // [rsp+28h] [rbp-8h] BYREF
  int v19; // [rsp+78h] [rbp+48h] BYREF

  CurrentThread = KeGetCurrentThread();
  v5 = 0;
  v6 = 0LL;
  v8 = a3;
  if ( !(unsigned int)IsThreadCrossSessionAttached(a1, a2, a3) )
  {
    ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
    if ( ThreadWin32Thread )
      v6 = *ThreadWin32Thread;
  }
  v18 = 0LL;
  v17 = (_DWORD *)gSmartObjNullRef;
  v18 = *(_QWORD *)(v6 + 1472);
  *(_QWORD *)(v6 + 1472) = &v18;
  if ( (*(_DWORD *)(a1 + 8) & 0xFFFF0000) == 0xFFFF0000 )
  {
    LOBYTE(v11) = 7;
    v14 = HMValidateHandleNoRip(*(_QWORD *)(a1 + 8), v11, v12);
    if ( v14 )
      *(_QWORD *)(a1 + 8) = *(_QWORD *)(*(_QWORD *)(v14 + 40) + 16LL);
  }
  v19 = 0;
  v15 = InternalRegisterClassEx(a1, v8, a4, &v19);
  if ( v15 != *(_QWORD *)v17 )
  {
    SmartObjStackRefBase<tagCLS>::DecrementCountAndTryFree(&v17);
    if ( v15 )
    {
      v17 = *(_DWORD **)(v15 + 128);
      ++v17[2];
    }
    else
    {
      v17 = (_DWORD *)gSmartObjNullRef;
    }
  }
  if ( *(_QWORD *)v17 )
  {
    if ( !v19 )
    {
      *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v17 + 8LL) + 24LL) = a2[1];
      *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v17 + 8LL) + 16LL) = *a2;
      *(_WORD *)(*(_QWORD *)v17 + 30LL) = 0;
    }
    v5 = *(_WORD *)(*(_QWORD *)(*(_QWORD *)v17 + 8LL) + 2LL);
  }
  SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(&v17);
  return v5;
}
