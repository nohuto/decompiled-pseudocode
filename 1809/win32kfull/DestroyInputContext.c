/*
 * XREFs of DestroyInputContext @ 0x1C014FDBC
 * Callers:
 *     NtUserDestroyInputContext @ 0x1C014FD40 (NtUserDestroyInputContext.c)
 * Callees:
 *     HMValidateHandleNoSecure @ 0x1C003730C (HMValidateHandleNoSecure.c)
 *     FreeHwndList @ 0x1C0070D10 (FreeHwndList.c)
 *     BuildHwndList @ 0x1C0070DA0 (BuildHwndList.c)
 *     UserSetLastError @ 0x1C0073CC4 (UserSetLastError.c)
 *     AssociateInputContext @ 0x1C011A3E4 (AssociateInputContext.c)
 */

__int64 __fastcall DestroyInputContext(__int64 *a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rbx
  struct tagBWL *v6; // rax
  __int64 v7; // rdx
  struct tagBWL *v8; // rbp
  unsigned __int64 *i; // rsi
  __int64 v10; // rax
  __int64 v12; // rcx

  v5 = a1[2];
  if ( v5 != gptiCurrent )
  {
    v12 = 5LL;
LABEL_16:
    UserSetLastError(v12, a2, a3, a4);
    return 0LL;
  }
  if ( a1 == *(__int64 **)(v5 + 792) )
  {
    v12 = 87LL;
    goto LABEL_16;
  }
  v6 = BuildHwndList(*(struct tagWND **)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v5 + 456) + 8LL) + 24LL) + 88LL), 3, a1[2]);
  v8 = v6;
  if ( v6 )
  {
    for ( i = (unsigned __int64 *)((char *)v6 + 32); *i != 1; ++i )
    {
      LOBYTE(v7) = 1;
      v10 = HMValidateHandleNoSecure(*i, v7);
      if ( v10 )
      {
        v7 = *a1;
        if ( *(_QWORD *)(*(_QWORD *)(v10 + 40) + 208LL) == *a1 )
          AssociateInputContext(v10, *(__int64 **)(v5 + 792));
      }
    }
    FreeHwndList(v8);
  }
  if ( (*(_BYTE *)(gSharedInfo[1] + LODWORD(gSharedInfo[2]) * (unsigned int)(unsigned __int16)*(_DWORD *)a1 + 25LL) & 1) == 0 )
    HMDestroyUnlockedObject();
  return 1LL;
}
