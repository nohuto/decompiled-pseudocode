/*
 * XREFs of ?DestroySection@AlpcSectionListEntry@AlpcPort@@UEAAJXZ @ 0x1800D52C0
 * Callers:
 *     ??1AlpcSectionListEntry@AlpcPort@@UEAA@XZ @ 0x1800D42D8 (--1AlpcSectionListEntry@AlpcPort@@UEAA@XZ.c)
 *     ?GetNextPortEvent@AlpcPort@@UEAAJAEAUSipcPortEvent@@@Z @ 0x1800D5C20 (-GetNextPortEvent@AlpcPort@@UEAAJAEAUSipcPortEvent@@@Z.c)
 * Callees:
 *     memset_0 @ 0x18002C3EE (memset_0.c)
 *     __security_check_cookie @ 0x18002C580 (__security_check_cookie.c)
 *     ?Return_NtStatus@in1diag0@details@wil@@YAJJ@Z @ 0x1800D6CAC (-Return_NtStatus@in1diag0@details@wil@@YAJJ@Z.c)
 */

__int64 __fastcall AlpcPort::AlpcSectionListEntry::DestroySection(AlpcPort::AlpcSectionListEntry *this)
{
  __int64 v2; // rax
  unsigned __int64 v3; // rdx
  __int128 v4; // xmm0
  __int64 v5; // rcx
  __int64 v6; // r8
  int v7; // eax
  int v8; // edx
  __int128 v10; // [rsp+40h] [rbp-1C8h] BYREF
  __int128 v11; // [rsp+50h] [rbp-1B8h]
  _DWORD v12[10]; // [rsp+60h] [rbp-1A8h] BYREF
  __int128 v13; // [rsp+88h] [rbp-180h]
  __int128 v14; // [rsp+98h] [rbp-170h]
  __int64 v15[9]; // [rsp+1B0h] [rbp-58h] BYREF

  if ( *((_QWORD *)this + 8) )
  {
    if ( *((_BYTE *)this + 58) )
    {
      v2 = *((_QWORD *)this + 3);
      v3 = (*((_QWORD *)this + 4) - 40LL) & 0xFFFFFFFFFFFFFFF8uLL;
      v10 = *(_OWORD *)(v3 + v2 + 8);
      v11 = *(_OWORD *)(v3 + v2 + 24);
      memset_0(v12, 0, sizeof(v12));
      v4 = v10;
      v5 = *((_QWORD *)this + 8);
      *(_QWORD *)&v10 = 0LL;
      v15[0] = 1610612736LL;
      v13 = v4;
      v12[0] = 4718624;
      v14 = v11;
      if ( (int)((__int64 (__fastcall *)(__int64, __int64, _DWORD *, __int64 *, _QWORD, _QWORD, _QWORD, __int128 *))NtAlpcSendWaitReceivePort)(
                  v5,
                  0x10000LL,
                  v12,
                  v15,
                  0LL,
                  0LL,
                  0LL,
                  &v10) >= 0 )
        *((_BYTE *)this + 58) = 0;
    }
    v6 = *((_QWORD *)this + 9);
    if ( v6 )
    {
      v7 = NtAlpcDeletePortSection(*((_QWORD *)this + 8), 0LL, v6);
      if ( v7 < 0 )
        return wil::details::in1diag0::Return_NtStatus((wil::details::in1diag0 *)(unsigned int)v7, v8);
      *((_QWORD *)this + 9) = 0LL;
    }
    if ( *((_QWORD *)this + 3) )
    {
      v7 = NtAlpcDeleteSectionView(*((_QWORD *)this + 8), 0LL);
      if ( v7 < 0 )
        return wil::details::in1diag0::Return_NtStatus((wil::details::in1diag0 *)(unsigned int)v7, v8);
      *((_QWORD *)this + 3) = 0LL;
    }
    CloseHandle(*((HANDLE *)this + 8));
    *((_QWORD *)this + 8) = 0LL;
  }
  return 0LL;
}
