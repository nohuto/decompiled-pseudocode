/*
 * XREFs of NtUserGetControlColor @ 0x1C01EDFA0
 * Callers:
 *     <none>
 * Callees:
 *     xxxGetControlColor @ 0x1C01293EC (xxxGetControlColor.c)
 */

__int64 __fastcall NtUserGetControlColor(__int64 a1, __int64 a2, __int64 a3, unsigned int a4)
{
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 ControlColor; // rbx
  struct tagWND *v14; // rdi
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  _QWORD v22[3]; // [rsp+20h] [rbp-48h] BYREF
  _QWORD v23[3]; // [rsp+38h] [rbp-30h] BYREF

  EnterCrit(0LL, 1LL);
  v8 = ValidateHwnd(a1);
  ControlColor = 0LL;
  v14 = (struct tagWND *)v8;
  if ( v8 )
  {
    v22[0] = *(_QWORD *)(gptiCurrent + 408LL);
    *(_QWORD *)(gptiCurrent + 408LL) = v22;
    v22[1] = v8;
    _InterlockedIncrement((volatile signed __int32 *)(v8 + 8));
    v15 = ValidateHwnd(a2);
    if ( v15 && a3 && a4 - 306 <= 6 )
    {
      v23[0] = *(_QWORD *)(gptiCurrent + 408LL);
      *(_QWORD *)(gptiCurrent + 408LL) = v23;
      v23[1] = v15;
      _InterlockedIncrement((volatile signed __int32 *)(v15 + 8));
      ControlColor = xxxGetControlColor(v14, (unsigned __int64 *)v15, a3, a4);
      ThreadUnlock1(v19, v18, v20);
    }
    ThreadUnlock1(v16, v15, v17);
  }
  UserSessionSwitchLeaveCrit(v10, v9, v11, v12);
  return ControlColor;
}
