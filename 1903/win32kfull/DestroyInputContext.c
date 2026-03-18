/*
 * XREFs of DestroyInputContext @ 0x1C015623C
 * Callers:
 *     NtUserDestroyInputContext @ 0x1C01561C0 (NtUserDestroyInputContext.c)
 * Callees:
 *     UserSetLastError @ 0x1C008B3AC (UserSetLastError.c)
 *     BuildHwndList @ 0x1C00CC820 (BuildHwndList.c)
 *     FreeHwndList @ 0x1C00CC9E0 (FreeHwndList.c)
 *     HMValidateHandleNoSecure @ 0x1C00D0948 (HMValidateHandleNoSecure.c)
 *     AssociateInputContext @ 0x1C011F8B0 (AssociateInputContext.c)
 */

__int64 __fastcall DestroyInputContext(__int64 *a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rdi
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9
  struct tagBWL *v10; // rbp
  unsigned __int64 *i; // rsi
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v15; // rcx

  v5 = a1[2];
  if ( v5 != gptiCurrent )
  {
    v15 = 5LL;
LABEL_16:
    UserSetLastError(v15, a2, a3, a4);
    return 0LL;
  }
  if ( a1 == *(__int64 **)(v5 + 784) )
  {
    v15 = 87LL;
    goto LABEL_16;
  }
  v6 = BuildHwndList(*(struct tagWND **)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v5 + 448) + 8LL) + 24LL) + 112LL));
  v10 = (struct tagBWL *)v6;
  if ( v6 )
  {
    for ( i = (unsigned __int64 *)(v6 + 32); *i != 1; ++i )
    {
      LOBYTE(v7) = 1;
      v12 = HMValidateHandleNoSecure(*i, v7, v8, v9);
      if ( v12 )
      {
        v7 = *a1;
        if ( *(_QWORD *)(*(_QWORD *)(v12 + 40) + 208LL) == *a1 )
          AssociateInputContext(v12, *(__int64 **)(v5 + 784));
      }
    }
    FreeHwndList(v10);
  }
  v13 = _HMPheFromObject(a1);
  if ( (*(_BYTE *)(v13 + 25) & 1) == 0 )
    HMDestroyUnlockedObject(v13);
  return 1LL;
}
