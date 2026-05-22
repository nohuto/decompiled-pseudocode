/*
 * XREFs of ?CreateSection@AlpcPort@@UEAAJ_KAEAPEAXAEA_K@Z @ 0x1800A09A0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag0@details@wil@@YAXJ@Z @ 0x18009FD04 (-Return_Hr@in1diag0@details@wil@@YAXJ@Z.c)
 *     ?Return_NtStatus@in1diag0@details@wil@@YAJJ@Z @ 0x18009FD68 (-Return_NtStatus@in1diag0@details@wil@@YAJJ@Z.c)
 *     memset_0 @ 0x18012BDEE (memset_0.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18012C2B8 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 */

__int64 __fastcall AlpcPort::CreateSection(AlpcPort *this, __int64 a2, char **a3, unsigned __int64 *a4)
{
  AlpcPort *v8; // rax
  AlpcPort *v9; // rbx
  unsigned int v10; // ebx
  AlpcPort **v12; // rcx
  int v13; // eax
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // r9
  unsigned __int64 v17; // rcx
  int SectionView; // ebx
  char **v19; // rax
  char **v20; // rbx
  char *v21; // rcx
  char *v22; // rdi
  char **v23; // rax
  char *v24; // rax
  int v25; // eax
  char v26[8]; // [rsp+30h] [rbp-28h] BYREF
  char *v27; // [rsp+38h] [rbp-20h] BYREF
  char *v28; // [rsp+40h] [rbp-18h]
  unsigned __int64 v29; // [rsp+48h] [rbp-10h] BYREF

  *a3 = 0LL;
  *a4 = 0LL;
  if ( !*((_QWORD *)this + 8) )
  {
    v8 = (AlpcPort *)operator new(0x30uLL, (const struct std::nothrow_t *)&std::nothrow);
    v9 = v8;
    if ( v8 )
      memset_0(v8, 0, 0x30uLL);
    else
      v9 = 0LL;
    if ( !v9 )
    {
      v10 = -2147024882;
LABEL_7:
      wil::details::in1diag0::Return_Hr((wil::details::in1diag0 *)v10);
      return v10;
    }
    v12 = (AlpcPort **)*((_QWORD *)this + 7);
    if ( *v12 != (AlpcPort *)((char *)this + 48) )
      goto LABEL_22;
    *(_QWORD *)v9 = (char *)this + 48;
    *((_QWORD *)v9 + 1) = v12;
    *v12 = v9;
    ++*((_QWORD *)this + 8);
    *((_QWORD *)this + 7) = v9;
  }
  memset_0(v26, 0, 0x20uLL);
  v13 = NtAlpcCreatePortSection(*((_QWORD *)this + 1), 0LL, 0LL, a2, &v27, &v29);
  if ( v13 == -1073740026 )
  {
    v10 = -2147024891;
    goto LABEL_7;
  }
  if ( v13 >= 0 )
  {
    SectionView = NtAlpcCreateSectionView(*((_QWORD *)this + 1), 0LL, v26);
    if ( SectionView < 0 )
    {
      v25 = NtAlpcDeletePortSection(*((_QWORD *)this + 1), 0LL, v27);
      v17 = (unsigned int)v25;
      if ( v25 >= 0 )
        v17 = (unsigned int)SectionView;
      return wil::details::in1diag0::Return_NtStatus((wil::details::in1diag0 *)v17, v14, v15, v16);
    }
    v19 = (char **)((char *)this + 48);
    v20 = (char **)*((_QWORD *)this + 6);
    if ( v20[1] == (char *)this + 48 )
    {
      v21 = *v20;
      if ( *((char ***)*v20 + 1) == v20 )
      {
        *v19 = v21;
        *((_QWORD *)v21 + 1) = v19;
        if ( v20 == v19 )
          v20 = 0LL;
        else
          --*((_QWORD *)this + 8);
        v20[2] = v27;
        v20[3] = v28;
        v20[4] = (char *)v29;
        *((_DWORD *)v20 + 10) = GetCurrentProcessId();
        v22 = (char *)this + 24;
        *((_DWORD *)v20 + 11) = GetCurrentThreadId();
        v23 = (char **)*((_QWORD *)v22 + 1);
        if ( *v23 == v22 )
        {
          v20[1] = (char *)v23;
          *v20 = v22;
          *v23 = (char *)v20;
          ++*((_QWORD *)v22 + 2);
          v24 = v28;
          *((_QWORD *)v22 + 1) = v20;
          *a3 = v24;
          *a4 = v29;
          return 0LL;
        }
      }
    }
LABEL_22:
    __fastfail(3u);
  }
  v17 = (unsigned int)v13;
  return wil::details::in1diag0::Return_NtStatus((wil::details::in1diag0 *)v17, v14, v15, v16);
}
