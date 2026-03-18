/*
 * XREFs of NtUserPaintMenuBar @ 0x1C00FBA90
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C002862C (UserSetLastError.c)
 *     xxxPaintMenuBar @ 0x1C00FBBBC (xxxPaintMenuBar.c)
 */

__int64 __fastcall NtUserPaintMenuBar(__int64 a1, __int64 a2, int a3, int a4, int a5, int a6)
{
  __int64 v10; // rax
  __int64 v11; // rcx
  unsigned int v12; // ebx
  __int64 v13; // rdi
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v21; // rcx
  __int64 v22; // [rsp+30h] [rbp-28h] BYREF
  __int64 v23; // [rsp+38h] [rbp-20h]
  __int64 v24; // [rsp+40h] [rbp-18h]

  v22 = 0LL;
  v23 = 0LL;
  v24 = 0LL;
  EnterCrit(0LL, 1LL);
  v10 = ValidateHwnd(a1);
  v12 = 0;
  v13 = v10;
  if ( v10 )
  {
    v22 = *(_QWORD *)(gptiCurrent + 408LL);
    *(_QWORD *)(gptiCurrent + 408LL) = &v22;
    v23 = v10;
    HMLockObject(v10);
    if ( (*(_BYTE *)(*(_QWORD *)(v13 + 40) + 31LL) & 0xC0) != 0x40 )
    {
      if ( (a6 & 0xFFFFFFFE) != 0 )
      {
        v21 = 1004LL;
        goto LABEL_12;
      }
      if ( a3 >= 0 && a4 >= 0 && a5 >= 0 )
      {
        v12 = xxxPaintMenuBar(v13, a2, (unsigned int)a3, (unsigned int)a4, a5, a6);
LABEL_8:
        ThreadUnlock1(v18, v17, v19);
        goto LABEL_9;
      }
    }
    v21 = 87LL;
LABEL_12:
    UserSetLastError(v21, v14, v15, v16);
    goto LABEL_8;
  }
LABEL_9:
  UserSessionSwitchLeaveCrit(v11);
  return v12;
}
