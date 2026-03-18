/*
 * XREFs of SendGestureMessage @ 0x1C021412C
 * Callers:
 *     NtUserfnGESTURE @ 0x1C0237870 (NtUserfnGESTURE.c)
 * Callees:
 *     UserSetLastError @ 0x1C008B3AC (UserSetLastError.c)
 *     _guard_dispatch_icall_nop @ 0x1C01664D0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0166840 (memset.c)
 *     AllocGestureInfo @ 0x1C0213D54 (AllocGestureInfo.c)
 *     ValidateGestureInfo @ 0x1C0214438 (ValidateGestureInfo.c)
 *     _FreeGestureInfo @ 0x1C0214470 (_FreeGestureInfo.c)
 */

__int64 __fastcall SendGestureMessage(
        __int64 a1,
        unsigned int a2,
        unsigned __int64 a3,
        ULONG64 a4,
        __int64 a5,
        unsigned int a6,
        _QWORD *a7)
{
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  const void *v15; // r14
  int v16; // ebx
  volatile void *v17; // rsi
  SIZE_T v18; // rdi
  __int64 CurrentProcessWow64Process; // rax
  __int64 v21; // rdi
  _BYTE v22[56]; // [rsp+50h] [rbp-88h] BYREF
  __int128 v23; // [rsp+88h] [rbp-50h]
  __int128 v24; // [rsp+98h] [rbp-40h]
  __int128 v25; // [rsp+A8h] [rbp-30h]
  SIZE_T Length; // [rsp+B8h] [rbp-20h]

  memset(v22, 0, sizeof(v22));
  v15 = 0LL;
  if ( (unsigned __int64)(a1 - 1) > 0xFFFFFFFFFFFFFFFDuLL || !a4 || !a3 || a3 > 0xFFFFFFFF || (unsigned int)a3 < 0x38 )
  {
    UserSetLastError(87LL, v11, v13, v14);
    return 0LL;
  }
  v16 = a3 - 56;
  v17 = (volatile void *)(a4 + 56);
  if ( a4 + 56 < a4 || (unsigned __int64)v17 > MmUserProbeAddress )
    a4 = MmUserProbeAddress;
  v23 = *(_OWORD *)a4;
  v24 = *(_OWORD *)(a4 + 16);
  v25 = *(_OWORD *)(a4 + 32);
  Length = *(_QWORD *)(a4 + 48);
  *(_OWORD *)v22 = v23;
  *(_OWORD *)&v22[16] = v24;
  *(_OWORD *)&v22[32] = v25;
  *(_QWORD *)&v22[48] = Length;
  v18 = (unsigned int)Length;
  if ( (_DWORD)Length != v16 )
  {
    UserSetLastError(87LL, v11, v13, v14);
    return 0LL;
  }
  if ( (_DWORD)Length )
  {
    CurrentProcessWow64Process = PsGetCurrentProcessWow64Process(v12);
    ProbeForRead(v17, v18, CurrentProcessWow64Process != 0 ? 1 : 4);
    v15 = (const void *)v17;
  }
  if ( !(unsigned int)ValidateGestureInfo(v22) )
    return 0LL;
  v21 = AllocGestureInfo(a1, 0LL, (__int64)v22, v15);
  if ( !v21 )
    return 0LL;
  *a7 = ((__int64 (__fastcall *)(__int64, _QWORD, _QWORD, __int64, __int64))mpFnidPfn[((_BYTE)a6 + 6) & 0x1F])(
          a1,
          a2,
          DWORD2(v23),
          v21,
          a5);
  if ( a6 >= 0x2AB && (a6 <= 0x2AC || a6 == 692) )
    FreeGestureInfo(v21, 1LL);
  return 1LL;
}
