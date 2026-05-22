/*
 * XREFs of ?Disconnect@AlpcPort@@UEAAXXZ @ 0x1800A0870
 * Callers:
 *     ??1AlpcPort@@UEAA@XZ @ 0x18009FF0C (--1AlpcPort@@UEAA@XZ.c)
 * Callees:
 *     memset_0 @ 0x18012BDEE (memset_0.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18012C150 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

void __fastcall AlpcPort::Disconnect(AlpcPort *this)
{
  char *v1; // rsi
  DWORD LastError; // ebx
  char *v4; // rsi
  DWORD v5; // ebx
  AlpcPort ***v6; // rbx
  AlpcPort **v7; // rax
  AlpcPort *v8; // rcx
  __int64 **v9; // rbx
  __int64 *v10; // rax
  __int64 v11; // rcx

  v1 = (char *)*((_QWORD *)this + 2);
  if ( (unsigned __int64)(v1 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
  {
    LastError = GetLastError();
    CloseHandle(v1);
    SetLastError(LastError);
  }
  *((_QWORD *)this + 2) = 0LL;
  v4 = (char *)*((_QWORD *)this + 1);
  if ( (unsigned __int64)(v4 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
  {
    v5 = GetLastError();
    CloseHandle(v4);
    SetLastError(v5);
  }
  *((_QWORD *)this + 1) = 0LL;
  v6 = (AlpcPort ***)((char *)this + 24);
  v7 = (AlpcPort **)*((_QWORD *)this + 3);
  v8 = *v7;
  if ( v7[1] != (AlpcPort *)((char *)this + 24) )
LABEL_9:
    __fastfail(3u);
  while ( 1 )
  {
    if ( *((AlpcPort ***)v8 + 1) != v7 )
      goto LABEL_9;
    *v6 = (AlpcPort **)v8;
    *((_QWORD *)v8 + 1) = v6;
    if ( v7 == (AlpcPort **)v6 )
      break;
    operator delete(v7, (const struct std::nothrow_t *)0x30);
    --*((_QWORD *)this + 5);
    v7 = *v6;
    v8 = **v6;
    if ( (*v6)[1] != (AlpcPort *)v6 )
      goto LABEL_9;
  }
  v9 = (__int64 **)((char *)this + 48);
  while ( 1 )
  {
    v10 = *v9;
    v11 = **v9;
    if ( (__int64 **)(*v9)[1] != v9 || *(__int64 **)(v11 + 8) != v10 )
      goto LABEL_9;
    *v9 = (__int64 *)v11;
    *(_QWORD *)(v11 + 8) = v9;
    if ( v10 == (__int64 *)v9 )
      break;
    operator delete(v10, (const struct std::nothrow_t *)0x30);
    --*((_QWORD *)this + 8);
  }
  memset_0((char *)this + 72, 0, 0x28uLL);
  *((_QWORD *)this + 49) = 0LL;
  *((_WORD *)this + 37) = 40;
  *((_DWORD *)this + 98) = 1610612736;
}
