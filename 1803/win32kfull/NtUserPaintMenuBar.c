/*
 * XREFs of NtUserPaintMenuBar @ 0x1C000CBF0
 * Callers:
 *     <none>
 * Callees:
 *     xxxPaintMenuBar @ 0x1C000CCE4 (xxxPaintMenuBar.c)
 *     UserSetLastError @ 0x1C003A8EC (UserSetLastError.c)
 */

__int64 __fastcall NtUserPaintMenuBar(__int64 a1, __int64 a2, int a3, int a4, int a5, int a6)
{
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  unsigned int v15; // ebx
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v20; // rcx
  _QWORD v21[5]; // [rsp+30h] [rbp-28h] BYREF

  EnterCrit(0LL, 1LL);
  v10 = ValidateHwnd(a1);
  v15 = 0;
  if ( v10 )
  {
    v21[0] = *(_QWORD *)(gptiCurrent + 408LL);
    *(_QWORD *)(gptiCurrent + 408LL) = v21;
    v21[1] = v10;
    _InterlockedIncrement((volatile signed __int32 *)(v10 + 8));
    if ( (*(_BYTE *)(*(_QWORD *)(v10 + 40) + 31LL) & 0xC0) != 0x40 )
    {
      if ( (a6 & 0xFFFFFFFE) != 0 )
      {
        v20 = 1004LL;
        goto LABEL_12;
      }
      if ( a3 >= 0 && a4 >= 0 && a5 >= 0 )
      {
        v15 = xxxPaintMenuBar(v10, a2, (unsigned int)a3, (unsigned int)a4, a5, a6);
LABEL_8:
        ThreadUnlock1(v17, v16, v18);
        goto LABEL_9;
      }
    }
    v20 = 87LL;
LABEL_12:
    UserSetLastError(v20);
    goto LABEL_8;
  }
LABEL_9:
  UserSessionSwitchLeaveCrit(v12, v11, v13, v14);
  return v15;
}
