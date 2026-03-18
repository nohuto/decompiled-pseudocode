/*
 * XREFs of xxxImmActivateThreadsLayout @ 0x1C01E5064
 * Callers:
 *     xxxImmActivateThreadsLayout @ 0x1C01E5064 (xxxImmActivateThreadsLayout.c)
 *     EditionImmActivateThreadsLayout @ 0x1C01F7FE0 (EditionImmActivateThreadsLayout.c)
 * Callees:
 *     PopAndFreeW32ThreadLock @ 0x1C00724C0 (PopAndFreeW32ThreadLock.c)
 *     LockW32Thread @ 0x1C0072530 (LockW32Thread.c)
 *     W32GetThreadWin32Thread @ 0x1C00AC2AC (W32GetThreadWin32Thread.c)
 *     xxxImmActivateLayout @ 0x1C011B814 (xxxImmActivateLayout.c)
 *     __security_check_cookie @ 0x1C0163A80 (__security_check_cookie.c)
 *     memset @ 0x1C0168440 (memset.c)
 *     xxxImmActivateThreadsLayout @ 0x1C01E5064 (xxxImmActivateThreadsLayout.c)
 */

__int64 __fastcall xxxImmActivateThreadsLayout(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v6; // esi
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // rdx
  __int64 v10; // r8
  _QWORD *v12; // rbx
  int i; // esi
  _QWORD *v14; // r15
  __int64 v15; // rdi
  __int128 v16; // [rsp+40h] [rbp-308h]
  __int128 v17; // [rsp+70h] [rbp-2D8h] BYREF
  _QWORD v18[82]; // [rsp+80h] [rbp-2C8h] BYREF

  memset(v18, 0, 0x288uLL);
  v6 = 0;
  W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v7, v8);
  while ( a1 )
  {
    v9 = *(_QWORD *)(a1 + 432);
    if ( v9 != a3 && (*(_DWORD *)(a1 + 480) & 1) == 0 )
    {
      if ( *(_QWORD *)(a1 + 776) )
      {
        LockW32Thread(a1, &v18[5 * v6 + 2], v10);
        v18[5 * v6++ + 1] = a1;
        if ( v6 == 16 )
          break;
      }
      else
      {
        *(_QWORD *)(a1 + 792) = *(_QWORD *)(v9 + 40);
        *(_QWORD *)&v16 = a1 + 432;
        *((_QWORD *)&v16 + 1) = a3;
        v17 = v16;
        HMAssignmentLock(&v17);
        if ( *(_QWORD *)(a1 + 784) )
          **(_QWORD **)(a1 + 472) |= 0x40uLL;
        *(_QWORD *)(*(_QWORD *)(a1 + 472) + 144LL) = *(_QWORD *)(a3 + 40);
        *(_WORD *)(*(_QWORD *)(a1 + 472) + 152LL) = *(_WORD *)(a3 + 72);
      }
    }
    a1 = *(_QWORD *)(a1 + 656);
  }
  if ( a2 )
    goto LABEL_15;
  if ( !a1 )
  {
    if ( !v6 )
      return 0LL;
LABEL_15:
    if ( !a1 )
      goto LABEL_18;
  }
  if ( *(_QWORD *)(a1 + 656) )
  {
    v18[0] = a2;
    return xxxImmActivateThreadsLayout(*(_QWORD *)(a1 + 656), v18, a3);
  }
LABEL_18:
  v18[0] = a2;
  v12 = v18;
  while ( v12 )
  {
    for ( i = v6 - 1; i >= 0; --i )
    {
      v14 = &v12[5 * i];
      v15 = v14[1];
      if ( (*(_DWORD *)(v15 + 480) & 1) == 0 )
      {
        xxxImmActivateLayout(v14[1], a3, v10);
        if ( (*(_DWORD *)(v15 + 480) & 1) == 0 )
        {
          *(_QWORD *)(*(_QWORD *)(v15 + 472) + 144LL) = *(_QWORD *)(a3 + 40);
          *(_WORD *)(*(_QWORD *)(v15 + 472) + 152LL) = *(_WORD *)(a3 + 72);
        }
      }
      PopAndFreeW32ThreadLock((__int64)(v14 + 2), v9, v10);
    }
    v12 = (_QWORD *)*v12;
    v6 = 16;
  }
  return 1LL;
}
