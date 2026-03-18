/*
 * XREFs of AssociateInputContextEx @ 0x1C00FA3E0
 * Callers:
 *     NtUserAssociateInputContext @ 0x1C00FA320 (NtUserAssociateInputContext.c)
 * Callees:
 *     UserSetLastError @ 0x1C002862C (UserSetLastError.c)
 *     BuildHwndList @ 0x1C006DEF0 (BuildHwndList.c)
 *     FreeHwndList @ 0x1C006E0B0 (FreeHwndList.c)
 *     HMValidateHandleNoSecure @ 0x1C0072018 (HMValidateHandleNoSecure.c)
 *     AssociateInputContext @ 0x1C00FA4E0 (AssociateInputContext.c)
 */

__int64 __fastcall AssociateInputContextEx(_QWORD *a1, __int64 a2, unsigned int a3)
{
  __int64 v3; // r9
  __int64 v4; // rbx
  _QWORD *v5; // r8
  int v6; // r12d
  __int64 *v7; // rdi
  _QWORD *v8; // rbp
  unsigned int v9; // esi
  _QWORD *v10; // r13
  __int64 v11; // rcx
  unsigned int v12; // r10d
  struct tagWND *v14; // rcx
  __int64 v15; // rax
  __int64 v16; // rdx
  __int64 v17; // r8
  struct tagBWL *v18; // r15
  unsigned __int64 *v19; // r14
  unsigned __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // rcx
  _QWORD *v23; // r9

  v3 = a3;
  v4 = 0LL;
  v5 = (_QWORD *)a1[2];
  v6 = v3 & 0x20;
  v7 = (__int64 *)a2;
  v8 = a1;
  v9 = 0;
  v10 = *(_QWORD **)(v5[53] + 120LL);
  if ( (v3 & 0x10) != 0 )
  {
    v7 = (__int64 *)v5[98];
  }
  else if ( a2 && *(_QWORD **)(a2 + 16) != v5 )
  {
    goto LABEL_35;
  }
  if ( v5[52] != *(_QWORD *)(gptiCurrent + 416LL) || v7 && v7[3] != a1[3] )
  {
LABEL_35:
    UserSetLastError(5LL, a2, (__int64)v5, v3);
    return 2LL;
  }
  if ( (v3 & 1) != 0 )
  {
    v14 = (struct tagWND *)a1[14];
    if ( v14 )
    {
      v15 = BuildHwndList(v14);
      v18 = (struct tagBWL *)v15;
      if ( v15 )
      {
        v19 = (unsigned __int64 *)(v15 + 32);
        v20 = *(_QWORD *)(v15 + 32);
        if ( v20 != 1 )
        {
          do
          {
            LOBYTE(v16) = 1;
            v21 = HMValidateHandleNoSecure(v20, v16, v17);
            if ( v21 )
            {
              v22 = 0LL;
              if ( v7 )
                v22 = *v7;
              v16 = *(_QWORD *)(*(_QWORD *)(v21 + 40) + 208LL);
              if ( v16 != v22 && (v16 || !v6) )
              {
                AssociateInputContext(v21, v7);
                if ( v23 == v10 )
                  v9 = 1;
              }
            }
            v20 = *++v19;
          }
          while ( *v19 != 1 );
          v8 = a1;
        }
        FreeHwndList(v18);
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
