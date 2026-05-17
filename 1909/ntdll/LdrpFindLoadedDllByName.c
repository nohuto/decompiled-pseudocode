/*
 * XREFs of LdrpFindLoadedDllByName @ 0x180022698
 * Callers:
 *     LdrpFindLoadedDllInternal @ 0x1800219E8 (LdrpFindLoadedDllInternal.c)
 *     LdrpFastpthReloadedDll @ 0x1800225E4 (LdrpFastpthReloadedDll.c)
 *     LdrpLoadDependentModule @ 0x180023170 (LdrpLoadDependentModule.c)
 *     LdrpFindOrPrepareLoadingModule @ 0x18002AA74 (LdrpFindOrPrepareLoadingModule.c)
 *     LdrGetDllHandleByName @ 0x1800776C0 (LdrGetDllHandleByName.c)
 *     AVrfInitializeVerifier @ 0x1800D8C38 (AVrfInitializeVerifier.c)
 * Callees:
 *     LdrpFindLoadedDllByNameLockHeld @ 0x18002284C (LdrpFindLoadedDllByNameLockHeld.c)
 *     RtlReleaseSRWLockExclusive @ 0x180035C30 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180039340 (RtlAcquireSRWLockExclusive.c)
 *     RtlGetCurrentServiceSessionId @ 0x180040780 (RtlGetCurrentServiceSessionId.c)
 *     LdrpLogEtwEvent @ 0x1800CFB08 (LdrpLogEtwEvent.c)
 */

__int64 __fastcall LdrpFindLoadedDllByName(unsigned __int16 *a1, unsigned __int16 *a2, int a3, __int64 a4, _DWORD *a5)
{
  unsigned __int16 *v8; // rdi
  int v9; // ebx
  int v10; // r9d
  unsigned __int16 *j; // r10
  unsigned __int16 v12; // r8
  int LoadedDllByNameLockHeld; // ebx
  __int64 v14; // rcx
  __int64 v16; // rcx
  __int64 v17; // rdx
  unsigned __int64 v18; // rcx
  _WORD *i; // rax
  __int16 v20; // cx
  __int16 v21; // ax
  int v22; // r9d
  char *v23; // rcx
  char *v24; // rcx
  __int64 v25; // [rsp+20h] [rbp-28h]
  _WORD v26[4]; // [rsp+30h] [rbp-18h] BYREF
  _WORD *v27; // [rsp+38h] [rbp-10h]

  v8 = a1;
  if ( !a1 )
  {
    v17 = *a2;
    v18 = *((_QWORD *)a2 + 1);
    for ( i = (_WORD *)(v18 + v17 - 2); (unsigned __int64)i > v18; --i )
    {
      if ( *i == 92 || *i == 47 )
      {
        ++i;
        break;
      }
    }
    v27 = i;
    v20 = (_WORD)i - a2[4];
    v8 = v26;
    v21 = a2[1] - v20;
    v26[0] = v17 - v20;
    v26[1] = v21;
  }
  v9 = 0;
  if ( !v8 )
    goto LABEL_32;
  v10 = *v8 >> 1;
  for ( j = (unsigned __int16 *)*((_QWORD *)v8 + 1); v10; v9 = v12 + 65599 * v9 )
  {
    v12 = *j;
    --v10;
    ++j;
    if ( v12 >= 0x61u )
    {
      if ( v12 > 0x7Au )
      {
        if ( Nls844UnicodeUpcaseTable && v12 >= 0xC0u )
          v12 += *(_WORD *)(Nls844UnicodeUpcaseTable
                          + 2LL
                          * ((v12 & 0xF)
                           + (unsigned int)*(unsigned __int16 *)(Nls844UnicodeUpcaseTable
                                                               + 2LL
                                                               * (((v12 >> 4) & 0xF)
                                                                + (unsigned int)*(unsigned __int16 *)(Nls844UnicodeUpcaseTable + 2 * ((unsigned __int64)v12 >> 8))))));
      }
      else
      {
        v12 -= 32;
      }
    }
  }
  if ( !v9 )
LABEL_32:
    v9 = 0x80000000;
  RtlAcquireSRWLockExclusive(&LdrpModuleDatatableLock);
  LoadedDllByNameLockHeld = LdrpFindLoadedDllByNameLockHeld((_DWORD)v8, (_DWORD)a2, a3, a4, v9);
  if ( LoadedDllByNameLockHeld >= 0 && a5 )
    *a5 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)a4 + 152LL) + 56LL);
  RtlReleaseSRWLockExclusive(&LdrpModuleDatatableLock);
  if ( a2 )
  {
    if ( (unsigned int)RtlGetCurrentServiceSessionId() )
      v16 = (__int64)NtCurrentPeb()->SharedData + 554;
    else
      v16 = 2147353476LL;
    if ( *(_BYTE *)v16 && (NtCurrentPeb()->TracingFlags & 4) != 0 )
    {
      v23 = (unsigned int)RtlGetCurrentServiceSessionId()
          ? (char *)NtCurrentPeb()->SharedData + 555
          : (char *)2147353477;
      if ( (*v23 & 0x20) != 0 )
      {
        LOBYTE(v22) = -(LoadedDllByNameLockHeld >= 0);
        v25 = (__int64)a2;
LABEL_47:
        LOBYTE(v22) = ~(_BYTE)v22 & 3;
        LdrpLogEtwEvent(5280, 0, 0, v22, v25, 0LL);
      }
    }
  }
  else
  {
    if ( (unsigned int)RtlGetCurrentServiceSessionId() )
      v14 = (__int64)NtCurrentPeb()->SharedData + 554;
    else
      v14 = 2147353476LL;
    if ( *(_BYTE *)v14 && (NtCurrentPeb()->TracingFlags & 4) != 0 )
    {
      v24 = (unsigned int)RtlGetCurrentServiceSessionId()
          ? (char *)NtCurrentPeb()->SharedData + 555
          : (char *)2147353477;
      if ( (*v24 & 0x20) != 0 )
      {
        LOBYTE(v22) = -(LoadedDllByNameLockHeld >= 0);
        v25 = (__int64)v8;
        goto LABEL_47;
      }
    }
  }
  return (unsigned int)LoadedDllByNameLockHeld;
}
