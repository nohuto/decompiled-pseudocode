/*
 * XREFs of SendGestureMessage @ 0x1C01FCBE4
 * Callers:
 *     NtUserfnGESTURE @ 0x1C021F4E0 (NtUserfnGESTURE.c)
 * Callees:
 *     UserSetLastError @ 0x1C0073CC4 (UserSetLastError.c)
 *     _guard_dispatch_icall_nop @ 0x1C01632C0 (_guard_dispatch_icall_nop.c)
 *     AllocGestureInfo @ 0x1C01FC808 (AllocGestureInfo.c)
 *     ValidateGestureInfo @ 0x1C01FCEF8 (ValidateGestureInfo.c)
 *     _FreeGestureInfo @ 0x1C01FCF30 (_FreeGestureInfo.c)
 */

__int64 __fastcall SendGestureMessage(
        __int64 a1,
        __int64 a2,
        unsigned __int64 a3,
        ULONG64 a4,
        __int64 a5,
        unsigned int a6,
        _QWORD *a7)
{
  unsigned int v7; // r15d
  const void *v9; // rdi
  __int64 v10; // rcx
  volatile void *v11; // rbx
  __int128 v12; // xmm2
  __int128 v13; // xmm3
  __int64 CurrentProcessWow64Process; // rax
  __int64 v16; // rdi
  _OWORD v17[3]; // [rsp+50h] [rbp-78h] BYREF
  SIZE_T v18; // [rsp+80h] [rbp-48h]
  __int128 v19; // [rsp+88h] [rbp-40h]
  SIZE_T Length; // [rsp+B8h] [rbp-10h]

  v7 = a2;
  v9 = 0LL;
  if ( (unsigned __int64)(a1 - 1) > 0xFFFFFFFFFFFFFFFDuLL || !a4 || !a3 || a3 > 0xFFFFFFFF || (unsigned int)a3 < 0x38 )
  {
    UserSetLastError(87LL, a2, a3, a4);
    return 0LL;
  }
  v10 = (unsigned int)(a3 - 56);
  v11 = (volatile void *)(a4 + 56);
  if ( a4 + 56 < a4 || (unsigned __int64)v11 > MmUserProbeAddress )
    a4 = MmUserProbeAddress;
  v19 = *(_OWORD *)a4;
  v12 = *(_OWORD *)(a4 + 16);
  v13 = *(_OWORD *)(a4 + 32);
  Length = *(_QWORD *)(a4 + 48);
  v17[0] = v19;
  v17[1] = v12;
  v17[2] = v13;
  v18 = Length;
  if ( (_DWORD)Length != (_DWORD)v10 )
  {
    UserSetLastError(87LL, a2, a3, a4);
    return 0LL;
  }
  if ( (_DWORD)Length )
  {
    CurrentProcessWow64Process = PsGetCurrentProcessWow64Process(v10);
    ProbeForRead(v11, (unsigned int)Length, CurrentProcessWow64Process != 0 ? 1 : 4);
    v9 = (const void *)v11;
  }
  if ( !(unsigned int)ValidateGestureInfo(v17) )
    return 0LL;
  v16 = AllocGestureInfo(a1, 0LL, (__int64)v17, v9);
  if ( !v16 )
    return 0LL;
  *a7 = ((__int64 (__fastcall *)(__int64, _QWORD, _QWORD, __int64, __int64))mpFnidPfn[((_BYTE)a6 + 6) & 0x1F])(
          a1,
          v7,
          DWORD2(v19),
          v16,
          a5);
  if ( a6 >= 0x2AB && (a6 <= 0x2AC || a6 == 692) )
    FreeGestureInfo(v16, 1LL);
  return 1LL;
}
