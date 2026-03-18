/*
 * XREFs of xxxSetClassIcon @ 0x1C023ADB4
 * Callers:
 *     ?xxxSetClassCursor@@YA_KPEAUtagWND@@PEAUtagCLS@@K_K@Z @ 0x1C01EA49C (-xxxSetClassCursor@@YA_KPEAUtagWND@@PEAUtagCLS@@K_K@Z.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0062084 (W32GetThreadWin32Thread.c)
 *     DestroyClassSmIcon @ 0x1C0094408 (DestroyClassSmIcon.c)
 *     ?LockPointer@@YA?AU_LOCKASSIGNPAIR@@PEAV?$SharedUserObjPoolPointerFieldspicnSm@UtagCURSOR@@@tagCLS@@PEAX@Z @ 0x1C0096014 (-LockPointer@@YA-AU_LOCKASSIGNPAIR@@PEAV-$SharedUserObjPoolPointerFieldspicnSm@UtagCURSOR@@@tagC.c)
 *     HMValidateHandleNoRip @ 0x1C00B4C50 (HMValidateHandleNoRip.c)
 *     xxxCreateClassSmIcon @ 0x1C00B6100 (xxxCreateClassSmIcon.c)
 *     xxxInternalEnumWindow @ 0x1C01D5FEC (xxxInternalEnumWindow.c)
 *     ?xxxSetClassIconEnum@@YAHPEAUtagWND@@_J@Z @ 0x1C023AD50 (-xxxSetClassIconEnum@@YAHPEAUtagWND@@_J@Z.c)
 */

__int64 *__fastcall xxxSetClassIcon(struct tagWND *a1, __int64 **a2, __int64 *a3, int a4)
{
  __int64 *v7; // rax
  __int64 *result; // rax
  BOOL v9; // esi
  __int64 v10; // rdi
  __int128 *v11; // rcx
  _QWORD *v12; // rax
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // rsi
  __int64 ThreadWin32Thread; // rax
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int128 v21; // [rsp+20h] [rbp-60h]
  __int128 v22; // [rsp+30h] [rbp-50h] BYREF
  __int128 v23; // [rsp+40h] [rbp-40h] BYREF
  __int64 v24; // [rsp+50h] [rbp-30h] BYREF
  __int64 v25; // [rsp+60h] [rbp-20h] BYREF
  __int64 v26; // [rsp+68h] [rbp-18h]
  __int64 v27; // [rsp+70h] [rbp-10h]

  v25 = 0LL;
  v26 = 0LL;
  v27 = 0LL;
  v7 = *a2;
  if ( a4 == -14 )
    result = *(__int64 **)(*v7 + 80);
  else
    result = *(__int64 **)(*v7 + 112);
  if ( result != a3 )
  {
    v9 = 1;
    v10 = 0LL;
    if ( result )
      v10 = *result;
    if ( a4 == -14 )
    {
      if ( *(_QWORD *)(**a2 + 112) )
        v9 = DestroyClassSmIcon(a2) != 0;
      *((_QWORD *)&v21 + 1) = a3;
      *(_QWORD *)&v21 = **a2 + 80;
      v11 = &v22;
      v22 = v21;
    }
    else
    {
      if ( (unsigned int)DestroyClassSmIcon(a2) )
        v10 = 0LL;
      v12 = LockPointer(&v24, **a2 + 112, a3);
      v11 = &v23;
      v23 = *(_OWORD *)v12;
    }
    HMAssignmentLock(v11);
    if ( *(_QWORD *)(**a2 + 80) && !*(_QWORD *)(**a2 + 112) )
      xxxCreateClassSmIcon(a2, v13, v14, v15);
    if ( v9 )
    {
      if ( *(int *)(**a2 + 72) <= 1 )
      {
        xxxSetClassIconEnum(a1, **a2, v14);
      }
      else
      {
        v16 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(gptiCurrent + 448LL) + 8LL) + 24LL) + 112LL);
        ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v13, v14, v15);
        v25 = *(_QWORD *)(ThreadWin32Thread + 408);
        *(_QWORD *)(ThreadWin32Thread + 408) = &v25;
        v26 = v16;
        if ( v16 )
          HMLockObject(v16);
        xxxInternalEnumWindow(
          *(struct tagWND **)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(gptiCurrent + 448LL) + 8LL) + 24LL) + 112LL),
          (__int64 (__fastcall *)(__int64, __int64))xxxSetClassIconEnum,
          **a2);
        ThreadUnlock1(v19, v18, v20);
      }
    }
    if ( v10 )
    {
      LOBYTE(v13) = 3;
      return (__int64 *)HMValidateHandleNoRip(v10, v13, v14, v15);
    }
    else
    {
      return 0LL;
    }
  }
  return result;
}
