/*
 * XREFs of AssociateInputContextEx @ 0x1C00FD77C
 * Callers:
 *     NtUserAssociateInputContext @ 0x1C00FD6D0 (NtUserAssociateInputContext.c)
 * Callees:
 *     HMValidateHandleNoSecure @ 0x1C00270B8 (HMValidateHandleNoSecure.c)
 *     FreeHwndList @ 0x1C002A0E0 (FreeHwndList.c)
 *     BuildHwndList @ 0x1C002A170 (BuildHwndList.c)
 *     UserSetLastError @ 0x1C003A8EC (UserSetLastError.c)
 *     AssociateInputContext @ 0x1C00FD87C (AssociateInputContext.c)
 */

__int64 __fastcall AssociateInputContextEx(_QWORD *a1, __int64 a2, char a3)
{
  __int64 v4; // rbx
  _QWORD *v5; // r8
  int v6; // r12d
  __int64 *v7; // rdi
  _QWORD *v8; // rbp
  unsigned int v9; // esi
  _QWORD *v10; // r13
  __int64 v11; // rcx
  unsigned int v12; // r10d
  _QWORD *v14; // rcx
  struct tagBWL *v15; // rax
  __int64 v16; // rdx
  struct tagBWL *v17; // r15
  unsigned __int64 *v18; // r14
  unsigned __int64 v19; // rcx
  __int64 v20; // rax
  __int64 v21; // rcx
  _QWORD *v22; // r9

  v4 = 0LL;
  v5 = (_QWORD *)a1[2];
  v6 = a3 & 0x20;
  v7 = (__int64 *)a2;
  v8 = a1;
  v9 = 0;
  v10 = *(_QWORD **)(v5[53] + 112LL);
  if ( (a3 & 0x10) != 0 )
  {
    v7 = (__int64 *)v5[97];
  }
  else if ( a2 && *(_QWORD **)(a2 + 16) != v5 )
  {
    goto LABEL_20;
  }
  if ( v5[52] != *(_QWORD *)(gptiCurrent + 416LL) || v7 && v7[3] != a1[3] )
  {
LABEL_20:
    UserSetLastError(5LL, a2);
    return 2LL;
  }
  if ( (a3 & 1) != 0 )
  {
    v14 = (_QWORD *)a1[11];
    if ( v14 )
    {
      v15 = BuildHwndList(v14, 3, (__int64)v5);
      v17 = v15;
      if ( v15 )
      {
        v18 = (unsigned __int64 *)((char *)v15 + 32);
        v19 = *((_QWORD *)v15 + 4);
        if ( v19 != 1 )
        {
          do
          {
            LOBYTE(v16) = 1;
            v20 = HMValidateHandleNoSecure(v19, v16);
            if ( v20 )
            {
              v21 = 0LL;
              if ( v7 )
                v21 = *v7;
              v16 = *(_QWORD *)(*(_QWORD *)(v20 + 40) + 208LL);
              if ( v16 != v21 && (v16 || !v6) )
              {
                AssociateInputContext(v20, v7);
                if ( v22 == v10 )
                  v9 = 1;
              }
            }
            v19 = *++v18;
          }
          while ( *v18 != 1 );
          v8 = a1;
        }
        FreeHwndList(v17);
      }
    }
  }
  v11 = *(_QWORD *)(v8[5] + 208LL);
  if ( v11 || !v6 )
  {
    if ( v7 )
      v4 = *v7;
    if ( v11 != v4 )
    {
      AssociateInputContext(v8, v7);
      if ( v8 == v10 )
        return v12;
    }
  }
  return v9;
}
