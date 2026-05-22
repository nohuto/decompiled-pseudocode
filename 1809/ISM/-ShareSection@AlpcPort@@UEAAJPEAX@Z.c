/*
 * XREFs of ?ShareSection@AlpcPort@@UEAAJPEAX@Z @ 0x1800A0CF0
 * Callers:
 *     <none>
 * Callees:
 *     ?NtStatusToHr@details@wil@@YAJJ@Z @ 0x18000AC40 (-NtStatusToHr@details@wil@@YAJJ@Z.c)
 *     ?Return_Hr@in1diag0@details@wil@@YAXJ@Z @ 0x18009FD04 (-Return_Hr@in1diag0@details@wil@@YAXJ@Z.c)
 *     ?Return_NtStatus@in1diag0@details@wil@@YAJJ@Z @ 0x18009FD68 (-Return_NtStatus@in1diag0@details@wil@@YAJJ@Z.c)
 *     memset_0 @ 0x18012BDEE (memset_0.c)
 *     __security_check_cookie @ 0x18012BF70 (__security_check_cookie.c)
 */

__int64 __fastcall AlpcPort::ShareSection(AlpcPort *this, __int64 *a2)
{
  __int64 **i; // rbx
  unsigned int v4; // ebx
  __int64 *v6; // rax
  __int64 *v7; // rdx
  __int64 *v8; // rcx
  __int64 v9; // rcx
  int v10; // eax
  int v11; // eax
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // [rsp+48h] [rbp-C0h] BYREF
  _BYTE v16[2]; // [rsp+58h] [rbp-B0h] BYREF
  __int16 v17; // [rsp+5Ah] [rbp-AEh]
  __int64 v18; // [rsp+198h] [rbp+90h] BYREF
  int v19; // [rsp+1A0h] [rbp+98h]
  __int64 *v20; // [rsp+1A8h] [rbp+A0h]
  __int64 *v21; // [rsp+1B0h] [rbp+A8h]
  __int64 *v22; // [rsp+1B8h] [rbp+B0h]

  for ( i = (__int64 **)*((_QWORD *)this + 3); i != (__int64 **)((char *)this + 24); i = (__int64 **)*i )
  {
    if ( i[3] == a2 )
      goto LABEL_6;
  }
  i = 0LL;
LABEL_6:
  if ( !i )
  {
    v4 = -2147024809;
LABEL_8:
    wil::details::in1diag0::Return_Hr((wil::details::in1diag0 *)v4);
    return v4;
  }
  if ( !i[2] )
  {
    v4 = -2147467259;
    goto LABEL_8;
  }
  memset_0(v16, 0, 0x28uLL);
  v17 = 40;
  v18 = 1610612736LL;
  v6 = i[2];
  v7 = i[4];
  v8 = i[3];
  v19 = 0;
  HIDWORD(v18) = 0x40000000;
  v20 = v6;
  v15 = 0LL;
  v21 = v8;
  v9 = *((_QWORD *)this + 1);
  v22 = v7;
  v10 = ((__int64 (__fastcall *)(__int64, __int64, _BYTE *, __int64 *, _QWORD, _QWORD, _QWORD, __int64 *))NtAlpcSendWaitReceivePort)(
          v9,
          0x10000LL,
          v16,
          &v18,
          0LL,
          0LL,
          0LL,
          &v15);
  if ( v10 < 0 )
    return wil::details::NtStatusToHr((wil::details *)(unsigned int)v10);
  v11 = NtAlpcDeletePortSection(*((_QWORD *)this + 1), 0LL, i[2]);
  if ( v11 < 0 )
    return wil::details::in1diag0::Return_NtStatus((wil::details::in1diag0 *)(unsigned int)v11, v12, v13, v14);
  i[2] = 0LL;
  return 0LL;
}
