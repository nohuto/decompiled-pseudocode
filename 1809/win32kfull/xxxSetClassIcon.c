/*
 * XREFs of xxxSetClassIcon @ 0x1C02226E4
 * Callers:
 *     ?xxxSetClassCursor@@YA_KPEAUtagWND@@PEAUtagCLS@@K_K@Z @ 0x1C01D4CB8 (-xxxSetClassCursor@@YA_KPEAUtagWND@@PEAUtagCLS@@K_K@Z.c)
 * Callees:
 *     ?LockPointer@@YA?AU_LOCKASSIGNPAIR@@PEAV?$SharedUserObjPoolPointerFieldspicnSm@UtagCURSOR@@@tagCLS@@PEAX@Z @ 0x1C00234C8 (-LockPointer@@YA-AU_LOCKASSIGNPAIR@@PEAV-$SharedUserObjPoolPointerFieldspicnSm@UtagCURSOR@@@tagC.c)
 *     W32GetThreadWin32Thread @ 0x1C0065998 (W32GetThreadWin32Thread.c)
 *     HMValidateHandleNoRip @ 0x1C00B6440 (HMValidateHandleNoRip.c)
 *     xxxCreateClassSmIcon @ 0x1C00B6560 (xxxCreateClassSmIcon.c)
 *     DestroyClassSmIcon @ 0x1C011587C (DestroyClassSmIcon.c)
 *     xxxInternalEnumWindow @ 0x1C01C1F34 (xxxInternalEnumWindow.c)
 *     ?xxxSetClassIconEnum@@YAHPEAUtagWND@@_J@Z @ 0x1C0222680 (-xxxSetClassIconEnum@@YAHPEAUtagWND@@_J@Z.c)
 */

__int64 *__fastcall xxxSetClassIcon(struct tagWND *a1, __int64 **a2, __int64 *a3, int a4)
{
  __int64 *v7; // rax
  __int64 *result; // rax
  BOOL v9; // esi
  __int64 v10; // rdi
  __int64 *v11; // rax
  __int128 *v12; // rcx
  _QWORD *v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rsi
  __int64 ThreadWin32Thread; // rax
  __int64 v17; // rdx
  __int64 v18; // rcx
  _QWORD v19[2]; // [rsp+20h] [rbp-68h] BYREF
  __int128 v20; // [rsp+30h] [rbp-58h] BYREF
  __int64 v21; // [rsp+40h] [rbp-48h] BYREF
  _QWORD v22[4]; // [rsp+50h] [rbp-38h] BYREF

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
      v11 = *a2;
      v19[1] = a3;
      v19[0] = *v11 + 80;
      v12 = (__int128 *)v19;
    }
    else
    {
      if ( (unsigned int)DestroyClassSmIcon(a2) )
        v10 = 0LL;
      v13 = LockPointer(&v21, **a2 + 112, a3);
      v12 = &v20;
      v20 = *(_OWORD *)v13;
    }
    HMAssignmentLock(v12);
    if ( *(_QWORD *)(**a2 + 80) && !*(_QWORD *)(**a2 + 112) )
      xxxCreateClassSmIcon((__int64 *)a2);
    if ( v9 )
    {
      if ( *(int *)(**a2 + 72) <= 1 )
      {
        xxxSetClassIconEnum(a1, **a2);
      }
      else
      {
        v15 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(gptiCurrent + 456LL) + 8LL) + 24LL) + 88LL);
        ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v14);
        v22[0] = *(_QWORD *)(ThreadWin32Thread + 416);
        *(_QWORD *)(ThreadWin32Thread + 416) = v22;
        v22[1] = v15;
        if ( v15 )
          _InterlockedIncrement((volatile signed __int32 *)(v15 + 8));
        xxxInternalEnumWindow(
          *(struct tagWND **)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(gptiCurrent + 456LL) + 8LL) + 24LL) + 88LL),
          (__int64 (__fastcall *)(__int64, __int64))xxxSetClassIconEnum,
          **a2,
          2);
        ThreadUnlock1(v18, v17);
      }
    }
    if ( v10 )
    {
      LOBYTE(v14) = 3;
      return (__int64 *)HMValidateHandleNoRip(v10, v14);
    }
    else
    {
      return 0LL;
    }
  }
  return result;
}
