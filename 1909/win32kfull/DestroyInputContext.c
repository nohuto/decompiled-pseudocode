/*
 * XREFs of DestroyInputContext @ 0x1C0156FFC
 * Callers:
 *     NtUserDestroyInputContext @ 0x1C0156F80 (NtUserDestroyInputContext.c)
 * Callees:
 *     UserSetLastError @ 0x1C002862C (UserSetLastError.c)
 *     BuildHwndList @ 0x1C006DEF0 (BuildHwndList.c)
 *     FreeHwndList @ 0x1C006E0B0 (FreeHwndList.c)
 *     HMValidateHandleNoSecure @ 0x1C0072018 (HMValidateHandleNoSecure.c)
 *     AssociateInputContext @ 0x1C00FA4E0 (AssociateInputContext.c)
 */

__int64 __fastcall DestroyInputContext(__int64 *a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rdi
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // r8
  struct tagBWL *v9; // rbp
  unsigned __int64 *i; // rsi
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v14; // rcx

  v5 = a1[2];
  if ( v5 != gptiCurrent )
  {
    v14 = 5LL;
LABEL_16:
    UserSetLastError(v14, a2, a3, a4);
    return 0LL;
  }
  if ( a1 == *(__int64 **)(v5 + 784) )
  {
    v14 = 87LL;
    goto LABEL_16;
  }
  v6 = BuildHwndList(*(struct tagWND **)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v5 + 448) + 8LL) + 24LL) + 112LL));
  v9 = (struct tagBWL *)v6;
  if ( v6 )
  {
    for ( i = (unsigned __int64 *)(v6 + 32); *i != 1; ++i )
    {
      LOBYTE(v7) = 1;
      v11 = HMValidateHandleNoSecure(*i, v7, v8);
      if ( v11 )
      {
        v7 = *a1;
        if ( *(_QWORD *)(*(_QWORD *)(v11 + 40) + 208LL) == *a1 )
          AssociateInputContext(v11, *(__int64 **)(v5 + 784));
      }
    }
    FreeHwndList(v9);
  }
  v12 = _HMPheFromObject(a1);
  if ( (*(_BYTE *)(v12 + 25) & 1) == 0 )
    HMDestroyUnlockedObject(v12);
  return 1LL;
}
