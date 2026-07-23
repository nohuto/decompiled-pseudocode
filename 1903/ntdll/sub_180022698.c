/*
 * XREFs of sub_180022698 @ 0x180022698
 * Callers:
 *     sub_1800219E8 @ 0x1800219E8 (sub_1800219E8.c)
 *     sub_1800225E4 @ 0x1800225E4 (sub_1800225E4.c)
 *     sub_180023170 @ 0x180023170 (sub_180023170.c)
 *     sub_18002AA74 @ 0x18002AA74 (sub_18002AA74.c)
 *     LdrGetDllHandleByName @ 0x180077240 (LdrGetDllHandleByName.c)
 *     sub_1800D8B78 @ 0x1800D8B78 (sub_1800D8B78.c)
 * Callees:
 *     sub_18002284C @ 0x18002284C (sub_18002284C.c)
 *     RtlReleaseSRWLockExclusive @ 0x180035C30 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180039340 (RtlAcquireSRWLockExclusive.c)
 *     RtlGetCurrentServiceSessionId @ 0x180040780 (RtlGetCurrentServiceSessionId.c)
 *     sub_1800CFA48 @ 0x1800CFA48 (sub_1800CFA48.c)
 */

__int64 __fastcall sub_180022698(PUNICODE_STRING String1, PUNICODE_STRING a2, __int64 a3, __int64 a4, _DWORD *a5)
{
  PUNICODE_STRING v7; // rdi
  int v8; // ebx
  int v9; // r9d
  PWCH j; // r10
  WCHAR v11; // r8
  int v12; // ebx
  __int64 v13; // rcx
  __int64 v15; // rcx
  __int64 Length; // rdx
  PWCH Buffer; // rcx
  PWCH i; // rax
  __int16 v19; // cx
  __int16 v20; // ax
  int v21; // r9d
  USHORT *v22; // rcx
  USHORT *v23; // rcx
  PUNICODE_STRING v24; // [rsp+20h] [rbp-28h]
  _WORD v25[4]; // [rsp+30h] [rbp-18h] BYREF
  PWCH v26; // [rsp+38h] [rbp-10h]

  v7 = String1;
  if ( !String1 )
  {
    Length = a2->Length;
    Buffer = a2->Buffer;
    for ( i = (PWCH)((char *)Buffer + Length - 2); i > Buffer; --i )
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
        if ( qword_180166510 && v11 >= 0xC0u )
          v11 += *(_WORD *)(qword_180166510
                          + 2LL
                          * ((v11 & 0xF)
                           + (unsigned int)*(unsigned __int16 *)(qword_180166510
                                                               + 2LL
                                                               * (((v11 >> 4) & 0xF)
                                                                + (unsigned int)*(unsigned __int16 *)(qword_180166510 + 2 * ((unsigned __int64)v11 >> 8))))));
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
  RtlAcquireSRWLockExclusive(&stru_1801660B0);
  v12 = sub_18002284C(v7, a2, v8);
  if ( v12 >= 0 && a5 )
    *a5 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)a4 + 152LL) + 56LL);
  RtlReleaseSRWLockExclusive(&stru_1801660B0);
  if ( a2 )
  {
    if ( RtlGetCurrentServiceSessionId() )
      v15 = (__int64)&NtCurrentPeb()->SharedData->UserModeGlobalLogger[2];
    else
      v15 = 2147353476LL;
    if ( *(_BYTE *)v15 && (NtCurrentPeb()->TracingFlags & 4) != 0 )
    {
      v22 = RtlGetCurrentServiceSessionId()
          ? (USHORT *)((char *)&NtCurrentPeb()->SharedData->UserModeGlobalLogger[2] + 1)
          : (USHORT *)2147353477;
      if ( (*(_BYTE *)v22 & 0x20) != 0 )
      {
        LOBYTE(v21) = -(v12 >= 0);
        v24 = a2;
LABEL_47:
        LOBYTE(v21) = ~(_BYTE)v21 & 3;
        sub_1800CFA48(5280, 0, 0, v21, (__int64)v24, 0LL);
      }
    }
  }
  else
  {
    if ( RtlGetCurrentServiceSessionId() )
      v13 = (__int64)&NtCurrentPeb()->SharedData->UserModeGlobalLogger[2];
    else
      v13 = 2147353476LL;
    if ( *(_BYTE *)v13 && (NtCurrentPeb()->TracingFlags & 4) != 0 )
    {
      v23 = RtlGetCurrentServiceSessionId()
          ? (USHORT *)((char *)&NtCurrentPeb()->SharedData->UserModeGlobalLogger[2] + 1)
          : (USHORT *)2147353477;
      if ( (*(_BYTE *)v23 & 0x20) != 0 )
      {
        LOBYTE(v21) = -(v12 >= 0);
        v24 = v7;
        goto LABEL_47;
      }
    }
  }
  return (unsigned int)v12;
}
