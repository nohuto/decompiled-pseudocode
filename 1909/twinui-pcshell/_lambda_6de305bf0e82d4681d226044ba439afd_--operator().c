/*
 * XREFs of _lambda_6de305bf0e82d4681d226044ba439afd_::operator() @ 0x18001B4A4
 * Callers:
 *     Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_6de305bf0e82d4681d226044ba439afd___::Run @ 0x18001B480 (Windows--Internal--ComTaskPool--CResultTaskWrapper__lambda_6de305bf0e82d4681d226044ba439afd___--.c)
 * Callees:
 *     ?CommitImportanceVector@WindowWrapperBase@@AEAAXXZ @ 0x18001BEB8 (-CommitImportanceVector@WindowWrapperBase@@AEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall lambda_6de305bf0e82d4681d226044ba439afd_::operator()(int **a1)
{
  int v2; // ebx
  __int64 v3; // rcx
  __int64 v4; // r9
  __int64 v5; // r8
  __int16 v6; // dx
  int *v7; // r8
  int v8; // ecx
  bool v9; // zf
  __int16 v10; // cx
  __int64 result; // rax
  int v12; // ecx
  char v13; // cl
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  int v15; // [rsp+40h] [rbp+8h]
  RTL_SRWLOCK *SRWLock; // [rsp+50h] [rbp+18h]

  v2 = **a1;
  v3 = *((_QWORD *)a1[1] + 36);
  try
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 192LL))(v3);
    v5 = *a1[2];
    HIWORD(v15) = HIWORD(v2);
    if ( v5 == -1 )
    {
      v6 = v2;
    }
    else
    {
      v12 = a1[1][65];
      v6 = v12;
      if ( (v5 & 1) != 0 )
        v6 = ((unsigned __int8)v2 ^ (unsigned __int8)v12) & 1 ^ v12;
      if ( (v5 & 2) != 0 )
        v6 ^= ((unsigned __int8)v2 ^ (unsigned __int8)v6) & 0xE;
      if ( (v5 & 4) != 0 )
        v6 ^= ((unsigned __int8)v2 ^ (unsigned __int8)v6) & 0x30;
      if ( (v5 & 8) != 0 )
        v6 ^= ((unsigned __int8)v2 ^ (unsigned __int8)v6) & 0x40;
      if ( (v5 & 0x10) != 0 )
        v6 ^= (v2 ^ v6) & 0x80;
      if ( (v5 & 0x20) != 0 )
        v6 ^= (v2 ^ v6) & 0x100;
      if ( (v5 & 0x40) != 0 )
        v6 ^= (v2 ^ v6) & 0x200;
      v4 = 1024LL;
      if ( (v5 & 0x80) != 0 )
        v6 ^= (v2 ^ v6) & 0x400;
      if ( (v5 & 0x100) != 0 )
        v6 ^= (v2 ^ v6) & 0x800;
      LOBYTE(v12) = BYTE2(v12);
      if ( (v5 & 0x200) != 0 )
        LOBYTE(v12) = BYTE2(v2);
      BYTE2(v15) = v12;
      v13 = HIBYTE(v12);
      if ( (v5 & 0x400) != 0 )
        v13 = HIBYTE(v2);
      HIBYTE(v15) = v13;
    }
    v7 = a1[1];
    v8 = v7[91];
    if ( (v8 & 4) == 0 )
      v6 ^= ((unsigned __int8)v6 ^ (unsigned __int8)*((_WORD *)v7 + 130)) & 0xF;
    v9 = (v8 & 8) == 0;
    v10 = *((_WORD *)v7 + 130);
    if ( v9 )
      v6 ^= ((unsigned __int8)v6 ^ (unsigned __int8)v10) & 0x31;
    LOWORD(v15) = (v6 ^ v10) & 0xC0 ^ v6;
    if ( v15 != v7[65] )
    {
      v7[65] = v15;
      WindowWrapperBase::CommitImportanceVector((WindowWrapperBase *)a1[1]);
    }
    if ( SRWLock )
      ReleaseSRWLockExclusive(SRWLock);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x8BF,
                           (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapperbase.cpp",
                           (const char *)v4);
  }
  return result;
}
