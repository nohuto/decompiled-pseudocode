/*
 * XREFs of _lambda_4bbaa23fff4f7893ed40dfc26589fcad_::operator() @ 0x18001EA14
 * Callers:
 *     Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_4bbaa23fff4f7893ed40dfc26589fcad___::Run @ 0x18001E9F0 (Windows--Internal--ComTaskPool--CResultTaskWrapper__lambda_4bbaa23fff4f7893ed40dfc26589fcad___--.c)
 * Callees:
 *     ?CommitImportanceVector@WindowWrapperBase@@AEAAXXZ @ 0x18001F220 (-CommitImportanceVector@WindowWrapperBase@@AEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall lambda_4bbaa23fff4f7893ed40dfc26589fcad_::operator()(int **a1)
{
  int v2; // ebx
  __int64 v3; // rcx
  __int64 v4; // r8
  __int16 v5; // dx
  int *v6; // r8
  const char *v7; // r9
  __int16 v8; // cx
  __int64 result; // rax
  int v10; // ecx
  char v11; // cl
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  int v13; // [rsp+40h] [rbp+8h]
  RTL_SRWLOCK *SRWLock; // [rsp+50h] [rbp+18h]

  v2 = **a1;
  v3 = *((_QWORD *)a1[1] + 35);
  try
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 184LL))(v3);
    v4 = *a1[2];
    HIWORD(v13) = HIWORD(v2);
    if ( v4 == -1 )
    {
      v5 = v2;
    }
    else
    {
      v10 = a1[1][63];
      if ( (v4 & 1) != 0 )
      {
        v5 = v10 ^ ((unsigned __int8)v2 ^ (unsigned __int8)v10) & 1;
        LOWORD(v10) = v5;
      }
      else
      {
        v5 = v10;
      }
      if ( (v4 & 2) != 0 )
      {
        v5 = v10 ^ ((unsigned __int8)v10 ^ (unsigned __int8)v2) & 0xE;
        LOWORD(v10) = v5;
      }
      if ( (v4 & 4) != 0 )
      {
        v5 = v10 ^ ((unsigned __int8)v10 ^ (unsigned __int8)v2) & 0x30;
        LOWORD(v10) = v5;
      }
      if ( (v4 & 8) != 0 )
      {
        v5 = v10 ^ ((unsigned __int8)v10 ^ (unsigned __int8)v2) & 0x40;
        LOWORD(v10) = v5;
      }
      if ( (v4 & 0x10) != 0 )
      {
        v5 = v10 ^ (v10 ^ v2) & 0x80;
        LOWORD(v10) = v5;
      }
      if ( (v4 & 0x20) != 0 )
      {
        v5 = v10 ^ (v10 ^ v2) & 0x100;
        LOWORD(v10) = v5;
      }
      if ( (v4 & 0x40) != 0 )
      {
        v5 = v10 ^ (v10 ^ v2) & 0x200;
        LOWORD(v10) = v5;
      }
      if ( (v4 & 0x80) != 0 )
      {
        v5 = v10 ^ (v10 ^ v2) & 0x400;
        LOWORD(v10) = v5;
      }
      if ( (v4 & 0x100) != 0 )
        v5 = v10 ^ (v10 ^ v2) & 0x800;
      LOBYTE(v10) = BYTE2(v10);
      if ( (v4 & 0x200) != 0 )
        LOBYTE(v10) = BYTE2(v2);
      BYTE2(v13) = v10;
      v11 = HIBYTE(v10);
      if ( (v4 & 0x400) != 0 )
        v11 = HIBYTE(v2);
      HIBYTE(v13) = v11;
    }
    v6 = a1[1];
    v7 = (const char *)(unsigned int)v6[89];
    if ( ((unsigned __int8)v7 & 4) == 0 )
      v5 ^= ((unsigned __int8)v5 ^ (unsigned __int8)*((_WORD *)v6 + 126)) & 0xF;
    v8 = *((_WORD *)v6 + 126);
    if ( ((unsigned __int8)v7 & 8) == 0 )
      v5 ^= ((unsigned __int8)v5 ^ (unsigned __int8)v8) & 0x31;
    LOWORD(v13) = (v5 ^ v8) & 0xC0 ^ v5;
    if ( v13 != v6[63] )
    {
      v6[63] = v13;
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
                           (void *)0x808,
                           (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapperbase.cpp",
                           v7);
  }
  return result;
}
