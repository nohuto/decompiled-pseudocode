/*
 * XREFs of xxxImmActivateThreadsLayout @ 0x1C01AD2F8
 * Callers:
 *     xxxImmActivateThreadsLayout @ 0x1C01AD2F8 (xxxImmActivateThreadsLayout.c)
 *     EditionImmActivateThreadsLayout @ 0x1C01BF3D0 (EditionImmActivateThreadsLayout.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0026450 (W32GetThreadWin32Thread.c)
 *     PopAndFreeW32ThreadLock @ 0x1C005D3C0 (PopAndFreeW32ThreadLock.c)
 *     LockW32Thread @ 0x1C005D428 (LockW32Thread.c)
 *     xxxImmActivateLayout @ 0x1C01131E4 (xxxImmActivateLayout.c)
 *     __security_check_cookie @ 0x1C0139660 (__security_check_cookie.c)
 *     xxxImmActivateThreadsLayout @ 0x1C01AD2F8 (xxxImmActivateThreadsLayout.c)
 */

__int64 __fastcall xxxImmActivateThreadsLayout(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v4; // esi
  __int64 v5; // rdx
  __int128 v6; // rcx
  __int64 result; // rax
  _QWORD *v8; // rbx
  int i; // edi
  __int64 v10; // rcx
  _QWORD *v12; // [rsp+38h] [rbp-310h]
  __int64 v14; // [rsp+40h] [rbp-308h]
  __int128 v15; // [rsp+80h] [rbp-2C8h] BYREF
  _QWORD v16[82]; // [rsp+90h] [rbp-2B8h] BYREF

  *((_QWORD *)&v6 + 1) = a3;
  v4 = 0;
  W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), a2);
  while ( a1 )
  {
    v5 = *(_QWORD *)(a1 + 432);
    if ( v5 != *((_QWORD *)&v6 + 1) && (*(_DWORD *)(a1 + 480) & 1) == 0 )
    {
      if ( *(_QWORD *)(a1 + 768) )
      {
        LockW32Thread(a1, (__int64)&v16[5 * v4 + 2]);
        v16[5 * v4++ + 1] = a1;
        *((_QWORD *)&v6 + 1) = a3;
        if ( v4 == 16 )
          break;
      }
      else
      {
        *(_QWORD *)(a1 + 784) = *(_QWORD *)(v5 + 40);
        *(_QWORD *)&v6 = a1 + 432;
        v15 = v6;
        HMAssignmentLock(&v15);
        if ( *(_QWORD *)(a1 + 776) )
          **(_QWORD **)(a1 + 472) |= 0x40uLL;
        *(_QWORD *)(*(_QWORD *)(a1 + 472) + 144LL) = *(_QWORD *)(*((_QWORD *)&v6 + 1) + 40LL);
        *(_WORD *)(*(_QWORD *)(a1 + 472) + 152LL) = *(_WORD *)(*((_QWORD *)&v6 + 1) + 72LL);
      }
    }
    a1 = *(_QWORD *)(a1 + 656);
  }
  result = a2;
  if ( a2 )
    goto LABEL_14;
  if ( !a1 )
  {
    if ( !v4 )
      return result;
LABEL_14:
    if ( !a1 )
      goto LABEL_17;
  }
  if ( *(_QWORD *)(a1 + 656) )
  {
    v16[0] = a2;
    return xxxImmActivateThreadsLayout(*(_QWORD *)(a1 + 656), v16, *((_QWORD *)&v6 + 1));
  }
LABEL_17:
  v16[0] = a2;
  v8 = v16;
  while ( v8 )
  {
    for ( i = v4 - 1; i >= 0; --i )
    {
      v12 = &v8[5 * i];
      v10 = v12[1];
      v14 = v10;
      if ( (*(_DWORD *)(v10 + 480) & 1) == 0 )
      {
        xxxImmActivateLayout(v10, a3);
        v5 = v14;
        if ( (*(_DWORD *)(v14 + 480) & 1) == 0 )
        {
          *(_QWORD *)(*(_QWORD *)(v14 + 472) + 144LL) = *(_QWORD *)(a3 + 40);
          *(_WORD *)(*(_QWORD *)(v14 + 472) + 152LL) = *(_WORD *)(a3 + 72);
        }
      }
      PopAndFreeW32ThreadLock((__int64)(v12 + 2), v5);
    }
    v8 = (_QWORD *)*v8;
    v4 = 16;
  }
  return 1LL;
}
