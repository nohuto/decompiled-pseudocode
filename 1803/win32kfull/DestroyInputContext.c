/*
 * XREFs of DestroyInputContext @ 0x1C0130450
 * Callers:
 *     NtUserDestroyInputContext @ 0x1C01303E0 (NtUserDestroyInputContext.c)
 * Callees:
 *     HMValidateHandleNoSecure @ 0x1C00270B8 (HMValidateHandleNoSecure.c)
 *     FreeHwndList @ 0x1C002A0E0 (FreeHwndList.c)
 *     BuildHwndList @ 0x1C002A170 (BuildHwndList.c)
 *     UserSetLastError @ 0x1C003A8EC (UserSetLastError.c)
 *     AssociateInputContext @ 0x1C00FD87C (AssociateInputContext.c)
 */

__int64 __fastcall DestroyInputContext(__int64 *a1, __int64 a2)
{
  __int64 v3; // rbx
  struct tagBWL *v4; // rax
  __int64 v5; // rdx
  struct tagBWL *v6; // rbp
  unsigned __int64 *i; // rsi
  __int64 v8; // rax
  __int64 v10; // rcx

  v3 = a1[2];
  if ( v3 != gptiCurrent )
  {
    v10 = 5LL;
LABEL_16:
    UserSetLastError(v10, a2);
    return 0LL;
  }
  if ( a1 == *(__int64 **)(v3 + 776) )
  {
    v10 = 87LL;
    goto LABEL_16;
  }
  v4 = BuildHwndList(*(_QWORD **)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v3 + 448) + 8LL) + 24LL) + 88LL), 3, a1[2]);
  v6 = v4;
  if ( v4 )
  {
    for ( i = (unsigned __int64 *)((char *)v4 + 32); *i != 1; ++i )
    {
      LOBYTE(v5) = 1;
      v8 = HMValidateHandleNoSecure(*i, v5);
      if ( v8 )
      {
        v5 = *a1;
        if ( *(_QWORD *)(*(_QWORD *)(v8 + 40) + 208LL) == *a1 )
          AssociateInputContext(v8, *(__int64 **)(v3 + 776));
      }
    }
    FreeHwndList(v6);
  }
  if ( (*(_BYTE *)(gSharedInfo[1] + LODWORD(gSharedInfo[2]) * (unsigned int)(unsigned __int16)*(_DWORD *)a1 + 25LL) & 1) == 0 )
    HMDestroyUnlockedObject();
  return 1LL;
}
