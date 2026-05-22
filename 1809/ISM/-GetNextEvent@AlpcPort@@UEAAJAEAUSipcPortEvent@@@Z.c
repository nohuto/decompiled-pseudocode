/*
 * XREFs of ?GetNextEvent@AlpcPort@@UEAAJAEAUSipcPortEvent@@@Z @ 0x1800A0E60
 * Callers:
 *     <none>
 * Callees:
 *     ?NtStatusToHr@details@wil@@YAJJ@Z @ 0x18000AC40 (-NtStatusToHr@details@wil@@YAJJ@Z.c)
 *     ?Return_Hr@in1diag0@details@wil@@YAXJ@Z @ 0x18009FD04 (-Return_Hr@in1diag0@details@wil@@YAXJ@Z.c)
 *     ?Return_NtStatus@in1diag0@details@wil@@YAJJ@Z @ 0x18009FD68 (-Return_NtStatus@in1diag0@details@wil@@YAJJ@Z.c)
 *     ?RejectClientConnection@AlpcPort@@UEAAXXZ @ 0x1800A07D0 (-RejectClientConnection@AlpcPort@@UEAAXXZ.c)
 *     memset_0 @ 0x18012BDEE (memset_0.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18012C2B8 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 */

__int64 __fastcall AlpcPort::GetNextEvent(AlpcPort *this, struct SipcPortEvent *a2)
{
  char *v3; // r12
  __int16 *v5; // rbp
  __int64 v6; // rsi
  int v7; // edi
  int v8; // edx
  signed int v9; // eax
  __int64 v10; // rcx
  __int64 v12; // rax
  __int64 v13; // rcx
  __int64 v14; // rax
  __int64 v15; // rcx
  int v16; // eax
  unsigned int v17; // edi
  int v18; // eax
  __int64 v19; // rdx
  __int64 v20; // r8
  __int64 v21; // r9
  char **v22; // rax
  char **v23; // rdi
  char *v24; // rcx
  char **v25; // rax
  int v26; // eax
  char *v27; // rbx
  char **v28; // rax
  __int64 v29; // [rsp+40h] [rbp-38h]
  __int64 v30; // [rsp+80h] [rbp+8h] BYREF
  __int64 v31; // [rsp+90h] [rbp+18h] BYREF
  __int64 v32; // [rsp+98h] [rbp+20h] BYREF

  v3 = (char *)this + 392;
  v5 = (__int16 *)((char *)this + 72);
  v6 = 0LL;
  while ( 1 )
  {
    while ( 1 )
    {
      memset_0(v5, 0, 0x28uLL);
      v31 = 320LL;
      v30 = 0LL;
      *((_QWORD *)v5 + 40) = 0LL;
      v5[1] = 40;
      *((_DWORD *)v5 + 80) = 1610612736;
      v7 = NtAlpcSendWaitReceivePort(*((_QWORD *)this + 1), 0LL, 0LL, 0LL, v5, &v31, v3, &v30, v29);
      if ( v7 )
      {
        *(_DWORD *)a2 = 0;
        if ( v7 == 258 || v7 == -1073741823 )
          return 1LL;
        v17 = v7 | 0x90000000;
        wil::details::in1diag0::Return_Hr((wil::details::in1diag0 *)v17);
        return v17;
      }
      v8 = *((__int16 *)this + 38);
      v9 = v8 & 0xFFFF00FF;
      if ( (v8 & 0xFFFF00FF) != 3 )
        break;
      if ( (*((_DWORD *)this + 99) & 0x40000000) != 0 )
      {
        v15 = *((_QWORD *)this + 1);
        v5[2] &= ~0x2000u;
        v32 = 0LL;
        v16 = NtAlpcSendWaitReceivePort(v15, 0LL, v5, v5 + 160, 0LL, 0LL, 0LL, &v32, v29);
        if ( v16 >= 0 )
          v17 = 0;
        else
          v17 = wil::details::NtStatusToHr((wil::details *)(unsigned int)v16);
        if ( (v17 & 0x80000000) != 0 )
        {
LABEL_28:
          if ( (*((_DWORD *)this + 99) & 0x40000000) != 0 )
          {
            v18 = NtAlpcDeleteSectionView(*((_QWORD *)this + 1), 0LL);
            if ( v18 >= 0 )
              *((_DWORD *)this + 99) &= ~0x40000000u;
            else
              wil::details::in1diag0::Return_NtStatus((wil::details::in1diag0 *)(unsigned int)v18, v19, v20, v21);
          }
          return v17;
        }
        if ( *((_QWORD *)this + 8) )
        {
          v22 = (char **)((char *)this + 48);
          v23 = (char **)*((_QWORD *)this + 6);
          if ( v23[1] != (char *)this + 48 )
            goto LABEL_44;
          v24 = *v23;
          if ( *((char ***)*v23 + 1) != v23 )
            goto LABEL_44;
          *v22 = v24;
          *((_QWORD *)v24 + 1) = v22;
          if ( v23 != v22 )
          {
            --*((_QWORD *)this + 8);
LABEL_41:
            if ( !v23 )
            {
              v17 = -2147024882;
              wil::details::in1diag0::Return_Hr((wil::details::in1diag0 *)0x8007000ELL);
              goto LABEL_28;
            }
            *((_QWORD *)a2 + 1) = *((_QWORD *)this + 52);
            *((_QWORD *)a2 + 2) = *((_QWORD *)this + 53);
            *((_DWORD *)this + 99) &= ~0x40000000u;
            *((_DWORD *)a2 + 6) = *((_DWORD *)this + 20);
            *((_DWORD *)a2 + 7) = *((_DWORD *)this + 22);
            *(_DWORD *)a2 = 4;
            v23[2] = 0LL;
            v23[3] = (char *)*((_QWORD *)a2 + 1);
            v23[4] = (char *)*((_QWORD *)a2 + 2);
            *((_DWORD *)v23 + 10) = *((_DWORD *)this + 20);
            v26 = *((_DWORD *)this + 22);
            v27 = (char *)this + 24;
            *((_DWORD *)v23 + 11) = v26;
            v28 = (char **)*((_QWORD *)v27 + 1);
            if ( *v28 == v27 )
            {
              *v23 = v27;
              v23[1] = (char *)v28;
              *v28 = (char *)v23;
              ++*((_QWORD *)v27 + 2);
              *((_QWORD *)v27 + 1) = v23;
              return 0LL;
            }
LABEL_44:
            __fastfail(3u);
          }
        }
        else
        {
          v25 = (char **)operator new(0x30uLL, (const struct std::nothrow_t *)&std::nothrow);
          v23 = v25;
          if ( v25 )
          {
            memset_0(v25, 0, 0x30uLL);
            goto LABEL_41;
          }
        }
        v23 = 0LL;
        goto LABEL_41;
      }
      if ( (*((_WORD *)this + 38) & 0x2000) != 0 )
      {
        v13 = *((_QWORD *)this + 1);
        *((_WORD *)this + 38) = v8 & 0xDFFF;
        NtAlpcCancelMessage(v13, 0LL, (char *)this + 432);
      }
    }
    if ( v9 <= 3 )
      goto LABEL_8;
    if ( v9 <= 5 )
      break;
    if ( v9 == 10 )
    {
      v12 = *v5;
      if ( (v12 & 0x8000u) != 0LL )
        v12 = 0LL;
      if ( v12 == 152 )
      {
        *((_DWORD *)a2 + 2) = *((_DWORD *)this + 20);
        *((_DWORD *)a2 + 3) = *((_DWORD *)this + 22);
        *(_DWORD *)a2 = 2;
        return 0LL;
      }
      AlpcPort::RejectClientConnection(this);
    }
    else if ( v9 != 12 )
    {
LABEL_8:
      if ( (v8 & 0x2000) != 0 )
      {
        v10 = *((_QWORD *)this + 1);
        *((_WORD *)this + 38) = v8 & 0xDFFF;
        NtAlpcCancelMessage(v10, 0LL, (char *)this + 432);
        LOWORD(v8) = *((_WORD *)this + 38);
      }
      *(_DWORD *)a2 = 1;
      *((_DWORD *)a2 + 2) = (__int16)v8 & 0xFFFF00FF;
      return 2147549183LL;
    }
  }
  if ( (*((_DWORD *)this + 99) & 0x20000000) != 0 )
  {
    v14 = *((_QWORD *)this + 54);
    if ( v14 == *((_QWORD *)this + 1) )
      v14 = 0LL;
    v6 = v14;
  }
  *((_QWORD *)a2 + 1) = v6;
  *(_DWORD *)a2 = 3;
  return 0LL;
}
