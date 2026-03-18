/*
 * XREFs of xxxImmActivateThreadsLayout @ 0x1C01E51E4
 * Callers:
 *     xxxImmActivateThreadsLayout @ 0x1C01E51E4 (xxxImmActivateThreadsLayout.c)
 *     EditionImmActivateThreadsLayout @ 0x1C01F8290 (EditionImmActivateThreadsLayout.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0062084 (W32GetThreadWin32Thread.c)
 *     PopAndFreeW32ThreadLock @ 0x1C00D0DF0 (PopAndFreeW32ThreadLock.c)
 *     LockW32Thread @ 0x1C00D0E60 (LockW32Thread.c)
 *     xxxImmActivateLayout @ 0x1C0141034 (xxxImmActivateLayout.c)
 *     __security_check_cookie @ 0x1C0162AB0 (__security_check_cookie.c)
 *     memset @ 0x1C0166840 (memset.c)
 *     xxxImmActivateThreadsLayout @ 0x1C01E51E4 (xxxImmActivateThreadsLayout.c)
 */

__int64 __fastcall xxxImmActivateThreadsLayout(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v6; // esi
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9
  _QWORD *v14; // rbx
  int i; // esi
  _QWORD *v16; // r15
  __int64 v17; // rdi
  __int128 v18; // [rsp+40h] [rbp-308h]
  __int128 v19; // [rsp+70h] [rbp-2D8h] BYREF
  _QWORD v20[82]; // [rsp+80h] [rbp-2C8h] BYREF

  memset(v20, 0, 0x288uLL);
  v6 = 0;
  W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v7, v8, v9);
  while ( a1 )
  {
    v10 = *(_QWORD *)(a1 + 432);
    if ( v10 != a3 && (*(_DWORD *)(a1 + 480) & 1) == 0 )
    {
      if ( *(_QWORD *)(a1 + 776) )
      {
        LockW32Thread(a1, &v20[5 * v6 + 2], v11, v12);
        v20[5 * v6++ + 1] = a1;
        if ( v6 == 16 )
          break;
      }
      else
      {
        *(_QWORD *)(a1 + 792) = *(_QWORD *)(v10 + 40);
        *(_QWORD *)&v18 = a1 + 432;
        *((_QWORD *)&v18 + 1) = a3;
        v19 = v18;
        HMAssignmentLock(&v19);
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
    v20[0] = a2;
    return xxxImmActivateThreadsLayout(*(_QWORD *)(a1 + 656), v20, a3);
  }
LABEL_18:
  v20[0] = a2;
  v14 = v20;
  while ( v14 )
  {
    for ( i = v6 - 1; i >= 0; --i )
    {
      v16 = &v14[5 * i];
      v17 = v16[1];
      if ( (*(_DWORD *)(v17 + 480) & 1) == 0 )
      {
        xxxImmActivateLayout(v16[1], a3, v11, v12);
        if ( (*(_DWORD *)(v17 + 480) & 1) == 0 )
        {
          *(_QWORD *)(*(_QWORD *)(v17 + 472) + 144LL) = *(_QWORD *)(a3 + 40);
          *(_WORD *)(*(_QWORD *)(v17 + 472) + 152LL) = *(_WORD *)(a3 + 72);
        }
      }
      PopAndFreeW32ThreadLock((__int64)(v16 + 2), v10, v11, v12);
    }
    v14 = (_QWORD *)*v14;
    v6 = 16;
  }
  return 1LL;
}
