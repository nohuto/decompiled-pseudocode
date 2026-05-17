/*
 * XREFs of LdrpFindLoadedDllByName @ 0x18000A7C8
 * Callers:
 *     LdrpFindLoadedDllInternal @ 0x180022ADC (LdrpFindLoadedDllInternal.c)
 *     LdrpLoadDependentModule @ 0x180023AC0 (LdrpLoadDependentModule.c)
 *     LdrpFastpthReloadedDll @ 0x1800269F0 (LdrpFastpthReloadedDll.c)
 *     LdrpFindOrPrepareLoadingModule @ 0x180028D4C (LdrpFindOrPrepareLoadingModule.c)
 *     LdrGetDllHandleByName @ 0x18007B6C0 (LdrGetDllHandleByName.c)
 *     AVrfInitializeVerifier @ 0x1800DACE8 (AVrfInitializeVerifier.c)
 * Callees:
 *     LdrpFindLoadedDllByNameLockHeld @ 0x18000A950 (LdrpFindLoadedDllByNameLockHeld.c)
 *     RtlHashUnicodeString @ 0x18000BF90 (RtlHashUnicodeString.c)
 *     RtlReleaseSRWLockExclusive @ 0x180015B60 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180015FF0 (RtlAcquireSRWLockExclusive.c)
 *     RtlGetCurrentServiceSessionId @ 0x180018440 (RtlGetCurrentServiceSessionId.c)
 *     LdrpLogEtwEvent @ 0x1800D1238 (LdrpLogEtwEvent.c)
 */

__int64 __fastcall LdrpFindLoadedDllByName(_WORD *a1, unsigned __int16 *a2, int a3, __int64 a4, _DWORD *a5)
{
  unsigned __int16 *v7; // rdi
  _WORD *v8; // rsi
  unsigned int v9; // ebx
  int LoadedDllByNameLockHeld; // ebp
  int v11; // ebx
  __int64 v12; // rcx
  unsigned __int64 v14; // rcx
  _WORD *i; // rax
  __int64 v16; // rcx
  __int16 v17; // cx
  __int16 v18; // ax
  int v19; // r9d
  char *v20; // rcx
  char *v21; // rcx
  __int64 v22; // [rsp+20h] [rbp-38h]
  _WORD v23[4]; // [rsp+30h] [rbp-28h] BYREF
  _WORD *v24; // [rsp+38h] [rbp-20h]
  unsigned int v25; // [rsp+60h] [rbp+8h] BYREF

  v7 = a2;
  v8 = a1;
  if ( !a1 )
  {
    a2 = (unsigned __int16 *)*a2;
    v14 = *((_QWORD *)v7 + 1);
    for ( i = (unsigned __int16 *)((char *)a2 + v14 - 2); (unsigned __int64)i > v14; --i )
    {
      if ( *i == 92 || *i == 47 )
      {
        ++i;
        break;
      }
    }
    v24 = i;
    v17 = (_WORD)i - v7[4];
    v8 = v23;
    LOWORD(a2) = (_WORD)a2 - v17;
    v18 = v7[1] - v17;
    v23[0] = (_WORD)a2;
    v23[1] = v18;
  }
  v25 = 0;
  LOBYTE(a2) = 1;
  RtlHashUnicodeString(v8, a2, 0LL, &v25);
  v9 = v25;
  if ( !v25 )
    v9 = 0x80000000;
  RtlAcquireSRWLockExclusive(&LdrpModuleDatatableLock);
  LoadedDllByNameLockHeld = LdrpFindLoadedDllByNameLockHeld((_DWORD)v8, (_DWORD)v7, a3, a4, v9);
  if ( LoadedDllByNameLockHeld >= 0 && a5 )
    *a5 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)a4 + 152LL) + 56LL);
  RtlReleaseSRWLockExclusive(&LdrpModuleDatatableLock);
  v11 = 0;
  if ( v7 )
  {
    if ( (unsigned int)RtlGetCurrentServiceSessionId() )
      v16 = (__int64)NtCurrentPeb()->SharedData + 554;
    else
      v16 = 2147353476LL;
    if ( *(_BYTE *)v16 && (NtCurrentPeb()->TracingFlags & 4) != 0 )
    {
      v20 = (unsigned int)RtlGetCurrentServiceSessionId()
          ? (char *)NtCurrentPeb()->SharedData + 555
          : (char *)2147353477;
      if ( (*v20 & 0x20) != 0 )
      {
        LOBYTE(v11) = LoadedDllByNameLockHeld >= 0;
        LOBYTE(v19) = -(v11 != 0);
        v22 = (__int64)v7;
LABEL_38:
        LOBYTE(v19) = ~(_BYTE)v19 & 3;
        LdrpLogEtwEvent(5280, 0, 0, v19, v22, 0LL);
      }
    }
  }
  else
  {
    if ( (unsigned int)RtlGetCurrentServiceSessionId() )
      v12 = (__int64)NtCurrentPeb()->SharedData + 554;
    else
      v12 = 2147353476LL;
    if ( *(_BYTE *)v12 && (NtCurrentPeb()->TracingFlags & 4) != 0 )
    {
      v21 = (unsigned int)RtlGetCurrentServiceSessionId()
          ? (char *)NtCurrentPeb()->SharedData + 555
          : (char *)2147353477;
      if ( (*v21 & 0x20) != 0 )
      {
        LOBYTE(v11) = LoadedDllByNameLockHeld >= 0;
        LOBYTE(v19) = -(v11 != 0);
        v22 = (__int64)v8;
        goto LABEL_38;
      }
    }
  }
  return (unsigned int)LoadedDllByNameLockHeld;
}
