/*
 * XREFs of LdrpFindLoadedDllByName @ 0x18000A7C8
 * Callers:
 *     LdrpFindLoadedDllInternal @ 0x180022ADC (LdrpFindLoadedDllInternal.c)
 *     LdrpLoadDependentModule @ 0x180023AC0 (LdrpLoadDependentModule.c)
 *     LdrpFastpthReloadedDll @ 0x1800269F0 (LdrpFastpthReloadedDll.c)
 *     LdrpFindOrPrepareLoadingModule @ 0x180028D4C (LdrpFindOrPrepareLoadingModule.c)
 *     LdrGetDllHandleByName @ 0x18007B6D0 (LdrGetDllHandleByName.c)
 *     AVrfInitializeVerifier @ 0x1800DACE8 (AVrfInitializeVerifier.c)
 * Callees:
 *     LdrpFindLoadedDllByNameLockHeld @ 0x18000A950 (LdrpFindLoadedDllByNameLockHeld.c)
 *     RtlHashUnicodeString @ 0x18000BF90 (RtlHashUnicodeString.c)
 *     RtlReleaseSRWLockExclusive @ 0x180015B60 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180015FF0 (RtlAcquireSRWLockExclusive.c)
 *     RtlGetCurrentServiceSessionId @ 0x180018440 (RtlGetCurrentServiceSessionId.c)
 *     LdrpLogEtwEvent @ 0x1800D1238 (LdrpLogEtwEvent.c)
 */

__int64 __fastcall LdrpFindLoadedDllByName(
        PUNICODE_STRING String1,
        PUNICODE_STRING a2,
        __int64 a3,
        __int64 a4,
        _DWORD *a5)
{
  _UNICODE_STRING *v7; // rsi
  ULONG v8; // ebx
  int LoadedDllByNameLockHeld; // ebp
  int v10; // ebx
  __int64 v11; // rcx
  __int64 Length; // rdx
  wchar_t *Buffer; // rcx
  wchar_t *i; // rax
  __int64 v16; // rcx
  __int16 v17; // cx
  __int16 v18; // ax
  int v19; // r9d
  char *v20; // rcx
  char *v21; // rcx
  PUNICODE_STRING v22; // [rsp+20h] [rbp-38h]
  _WORD v23[4]; // [rsp+30h] [rbp-28h] BYREF
  wchar_t *v24; // [rsp+38h] [rbp-20h]
  ULONG HashValue; // [rsp+60h] [rbp+8h] BYREF

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
    v24 = i;
    v17 = (_WORD)i - LOWORD(a2->Buffer);
    v7 = (_UNICODE_STRING *)v23;
    v18 = a2->MaximumLength - v17;
    v23[0] = Length - v17;
    v23[1] = v18;
  }
  HashValue = 0;
  RtlHashUnicodeString(v7, 1u, 0, &HashValue);
  v8 = HashValue;
  if ( !HashValue )
    v8 = 0x80000000;
  RtlAcquireSRWLockExclusive(&LdrpModuleDatatableLock);
  LoadedDllByNameLockHeld = LdrpFindLoadedDllByNameLockHeld(v7, a2, v8);
  if ( LoadedDllByNameLockHeld >= 0 && a5 )
    *a5 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)a4 + 152LL) + 56LL);
  RtlReleaseSRWLockExclusive(&LdrpModuleDatatableLock);
  v10 = 0;
  if ( a2 )
  {
    if ( RtlGetCurrentServiceSessionId() )
      v16 = (__int64)NtCurrentPeb()->SharedData + 554;
    else
      v16 = 2147353476LL;
    if ( *(_BYTE *)v16 && (NtCurrentPeb()->TracingFlags & 4) != 0 )
    {
      v20 = RtlGetCurrentServiceSessionId() ? (char *)NtCurrentPeb()->SharedData + 555 : (char *)2147353477;
      if ( (*v20 & 0x20) != 0 )
      {
        LOBYTE(v10) = LoadedDllByNameLockHeld >= 0;
        LOBYTE(v19) = -(v10 != 0);
        v22 = a2;
LABEL_38:
        LOBYTE(v19) = ~(_BYTE)v19 & 3;
        LdrpLogEtwEvent(5280, 0, 0, v19, (__int64)v22, 0LL);
      }
    }
  }
  else
  {
    if ( RtlGetCurrentServiceSessionId() )
      v11 = (__int64)NtCurrentPeb()->SharedData + 554;
    else
      v11 = 2147353476LL;
    if ( *(_BYTE *)v11 && (NtCurrentPeb()->TracingFlags & 4) != 0 )
    {
      v21 = RtlGetCurrentServiceSessionId() ? (char *)NtCurrentPeb()->SharedData + 555 : (char *)2147353477;
      if ( (*v21 & 0x20) != 0 )
      {
        LOBYTE(v10) = LoadedDllByNameLockHeld >= 0;
        LOBYTE(v19) = -(v10 != 0);
        v22 = v7;
        goto LABEL_38;
      }
    }
  }
  return (unsigned int)LoadedDllByNameLockHeld;
}
