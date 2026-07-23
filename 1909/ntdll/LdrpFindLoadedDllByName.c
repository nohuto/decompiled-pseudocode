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

__int64 __fastcall LdrpFindLoadedDllByName(
        PUNICODE_STRING String1,
        PUNICODE_STRING a2,
        __int64 a3,
        __int64 a4,
        _DWORD *a5)
{
  PUNICODE_STRING v7; // rdi
  int v8; // ebx
  int v9; // r9d
  wchar_t *j; // r10
  wchar_t v11; // r8
  int LoadedDllByNameLockHeld; // ebx
  __int64 v13; // rcx
  __int64 v15; // rcx
  __int64 Length; // rdx
  wchar_t *Buffer; // rcx
  wchar_t *i; // rax
  __int16 v19; // cx
  __int16 v20; // ax
  int v21; // r9d
  char *v22; // rcx
  char *v23; // rcx
  PUNICODE_STRING v24; // [rsp+20h] [rbp-28h]
  _WORD v25[4]; // [rsp+30h] [rbp-18h] BYREF
  wchar_t *v26; // [rsp+38h] [rbp-10h]

  v7 = String1;
  if ( !String1 )
  {
    Length = a2->Length;
    Buffer = a2->Buffer;
    for ( i = (wchar_t *)((char *)Buffer + Length - 2); i > Buffer; --i )
    {
      if ( *i == 92 || *i == 47 )
      {
        ++i;
        break;
      }
    }
    v26 = i;
    v19 = (_WORD)i - LOWORD(a2->Buffer);
    v7 = (PUNICODE_STRING)v25;
    v20 = a2->MaximumLength - v19;
    v25[0] = Length - v19;
    v25[1] = v20;
  }
  v8 = 0;
  if ( !v7 )
    goto LABEL_32;
  v9 = v7->Length >> 1;
  for ( j = v7->Buffer; v9; v8 = v11 + 65599 * v8 )
  {
    v11 = *j;
    --v9;
    ++j;
    if ( v11 >= 0x61u )
    {
      if ( v11 > 0x7Au )
      {
        if ( Nls844UnicodeUpcaseTable && v11 >= 0xC0u )
          v11 += *(_WORD *)(Nls844UnicodeUpcaseTable
                          + 2LL
                          * ((v11 & 0xF)
                           + (unsigned int)*(unsigned __int16 *)(Nls844UnicodeUpcaseTable
                                                               + 2LL
                                                               * (((v11 >> 4) & 0xF)
                                                                + (unsigned int)*(unsigned __int16 *)(Nls844UnicodeUpcaseTable + 2 * ((unsigned __int64)v11 >> 8))))));
      }
      else
      {
        v11 -= 32;
      }
    }
  }
  if ( !v8 )
LABEL_32:
    v8 = 0x80000000;
  RtlAcquireSRWLockExclusive(&LdrpModuleDatatableLock);
  LoadedDllByNameLockHeld = LdrpFindLoadedDllByNameLockHeld(v7, a2, v8);
  if ( LoadedDllByNameLockHeld >= 0 && a5 )
    *a5 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)a4 + 152LL) + 56LL);
  RtlReleaseSRWLockExclusive(&LdrpModuleDatatableLock);
  if ( a2 )
  {
    if ( RtlGetCurrentServiceSessionId() )
      v15 = (__int64)NtCurrentPeb()->SharedData + 554;
    else
      v15 = 2147353476LL;
    if ( *(_BYTE *)v15 && (NtCurrentPeb()->TracingFlags & 4) != 0 )
    {
      v22 = RtlGetCurrentServiceSessionId() ? (char *)NtCurrentPeb()->SharedData + 555 : (char *)2147353477;
      if ( (*v22 & 0x20) != 0 )
      {
        LOBYTE(v21) = -(LoadedDllByNameLockHeld >= 0);
        v24 = a2;
LABEL_47:
        LOBYTE(v21) = ~(_BYTE)v21 & 3;
        LdrpLogEtwEvent(5280, 0, 0, v21, (__int64)v24, 0LL);
      }
    }
  }
  else
  {
    if ( RtlGetCurrentServiceSessionId() )
      v13 = (__int64)NtCurrentPeb()->SharedData + 554;
    else
      v13 = 2147353476LL;
    if ( *(_BYTE *)v13 && (NtCurrentPeb()->TracingFlags & 4) != 0 )
    {
      v23 = RtlGetCurrentServiceSessionId() ? (char *)NtCurrentPeb()->SharedData + 555 : (char *)2147353477;
      if ( (*v23 & 0x20) != 0 )
      {
        LOBYTE(v21) = -(LoadedDllByNameLockHeld >= 0);
        v24 = v7;
        goto LABEL_47;
      }
    }
  }
  return (unsigned int)LoadedDllByNameLockHeld;
}
