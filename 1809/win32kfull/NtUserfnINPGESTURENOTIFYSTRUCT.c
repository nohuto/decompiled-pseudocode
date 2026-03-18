/*
 * XREFs of NtUserfnINPGESTURENOTIFYSTRUCT @ 0x1C0220A00
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0073CC4 (UserSetLastError.c)
 *     _guard_dispatch_icall_nop @ 0x1C01632C0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall NtUserfnINPGESTURENOTIFYSTRUCT(__int64 *a1, __int64 a2, __int64 a3, ULONG64 a4, __int64 a5, int a6)
{
  __int64 v6; // rbx
  __int64 v7; // rcx
  __int64 v8; // rax
  __int64 v10; // [rsp+48h] [rbp-30h]
  __int128 v11; // [rsp+50h] [rbp-28h] BYREF
  __int64 v12; // [rsp+60h] [rbp-18h]

  if ( (_DWORD)a2 == 284 && a6 != 670 )
  {
    v6 = 0LL;
LABEL_4:
    v7 = 5LL;
    goto LABEL_5;
  }
  if ( a4 + 24 < a4 || a4 + 24 > MmUserProbeAddress )
    a4 = MmUserProbeAddress;
  v10 = *(_QWORD *)(a4 + 16);
  v11 = *(_OWORD *)a4;
  v12 = v10;
  v6 = 0LL;
  if ( (_DWORD)v11 != 24 || !HIDWORD(v10) )
  {
    v7 = 87LL;
    goto LABEL_5;
  }
  if ( (_DWORD)a2 == 284 )
  {
    v8 = 0LL;
    if ( a1 )
      v8 = *a1;
    if ( *((_QWORD *)&v11 + 1) != v8 )
      goto LABEL_4;
  }
  if ( !DWORD1(v11) )
    return ((__int64 (__fastcall *)(__int64 *, __int64, __int64, __int128 *, __int64))mpFnidPfn[((_BYTE)a6 + 6) & 0x1F])(
             a1,
             a2,
             a3,
             &v11,
             a5);
  v7 = 1004LL;
LABEL_5:
  UserSetLastError(v7, a2, a3, a4);
  return v6;
}
