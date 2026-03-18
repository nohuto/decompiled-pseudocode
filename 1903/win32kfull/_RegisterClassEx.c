/*
 * XREFs of _RegisterClassEx @ 0x1C0096AB8
 * Callers:
 *     NtUserRegisterClassExWOW @ 0x1C00962A0 (NtUserRegisterClassExWOW.c)
 * Callees:
 *     ??1?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ @ 0x1C0021844 (--1-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ.c)
 *     InternalRegisterClassEx @ 0x1C0097760 (InternalRegisterClassEx.c)
 *     HMValidateHandleNoRip @ 0x1C00B4C50 (HMValidateHandleNoRip.c)
 *     ?DecrementCountAndTryFree@?$SmartObjStackRefBase@UtagCLS@@@@IEAAXXZ @ 0x1C00BEA88 (-DecrementCountAndTryFree@-$SmartObjStackRefBase@UtagCLS@@@@IEAAXXZ.c)
 *     IsThreadCrossSessionAttached @ 0x1C01637A4 (IsThreadCrossSessionAttached.c)
 */

__int64 __fastcall RegisterClassEx(__int64 a1, _QWORD *a2, __int64 a3, __int64 a4)
{
  struct _KTHREAD *CurrentThread; // r14
  unsigned __int16 v5; // bx
  __int64 v6; // rsi
  unsigned int v7; // r15d
  unsigned __int16 v8; // r12
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 *ThreadWin32Thread; // rax
  __int64 v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rdi
  __int64 v17; // r8
  __int64 v18; // r9
  _DWORD *v20; // [rsp+20h] [rbp-10h] BYREF
  __int64 v21; // [rsp+28h] [rbp-8h] BYREF
  int v22; // [rsp+78h] [rbp+48h] BYREF

  CurrentThread = KeGetCurrentThread();
  v5 = 0;
  v6 = 0LL;
  v7 = a4;
  v8 = a3;
  if ( !(unsigned int)IsThreadCrossSessionAttached(a1, a2, a3, a4) )
  {
    ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
    if ( ThreadWin32Thread )
      v6 = *ThreadWin32Thread;
  }
  v21 = 0LL;
  v20 = (_DWORD *)gSmartObjNullRef;
  v21 = *(_QWORD *)(v6 + 1472);
  *(_QWORD *)(v6 + 1472) = &v21;
  if ( (*(_DWORD *)(a1 + 8) & 0xFFFF0000) == 0xFFFF0000 )
  {
    LOBYTE(v11) = 7;
    v14 = HMValidateHandleNoRip(*(_QWORD *)(a1 + 8), v11, v12);
    if ( v14 )
      *(_QWORD *)(a1 + 8) = *(_QWORD *)(*(_QWORD *)(v14 + 40) + 16LL);
  }
  v22 = 0;
  v16 = InternalRegisterClassEx(a1, v8, v7, &v22);
  if ( v16 != *(_QWORD *)v20 )
  {
    SmartObjStackRefBase<tagCLS>::DecrementCountAndTryFree(&v20);
    if ( v16 )
    {
      v20 = *(_DWORD **)(v16 + 128);
      ++v20[2];
    }
    else
    {
      v20 = (_DWORD *)gSmartObjNullRef;
    }
  }
  if ( *(_QWORD *)v20 )
  {
    if ( !v22 )
    {
      *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v20 + 8LL) + 24LL) = a2[1];
      v15 = *(_QWORD *)(*(_QWORD *)v20 + 8LL);
      *(_QWORD *)(v15 + 16) = *a2;
      *(_WORD *)(*(_QWORD *)v20 + 30LL) = 0;
    }
    v5 = *(_WORD *)(*(_QWORD *)(*(_QWORD *)v20 + 8LL) + 2LL);
  }
  SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(&v20, v15, v17, v18);
  return v5;
}
