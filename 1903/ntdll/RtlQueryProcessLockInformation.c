/*
 * XREFs of RtlQueryProcessLockInformation @ 0x1800D7870
 * Callers:
 *     RtlQueryProcessDebugInformation @ 0x180075100 (RtlQueryProcessDebugInformation.c)
 * Callees:
 *     RtlAcquireSRWLockShared @ 0x18001A940 (RtlAcquireSRWLockShared.c)
 *     RtlReleaseSRWLockShared @ 0x18001AAF0 (RtlReleaseSRWLockShared.c)
 *     RtlCommitDebugInfo_0 @ 0x180075708 (RtlCommitDebugInfo_0.c)
 *     memset @ 0x1800A3600 (memset.c)
 *     RtlDeCommitDebugInfo_0 @ 0x1800D7EFC (RtlDeCommitDebugInfo_0.c)
 *     sub_1800F8F3C @ 0x1800F8F3C (sub_1800F8F3C.c)
 */

__int64 __fastcall RtlQueryProcessLockInformation(_QWORD *a1)
{
  char *v2; // rax
  unsigned __int64 v3; // rdx
  unsigned __int64 v4; // r8
  unsigned __int64 v5; // r9
  char *v6; // r14
  _QWORD *v8; // rsi
  _UNKNOWN **v9; // r15
  _UNKNOWN **v10; // r12
  char *v11; // rax
  char *v12; // rdi
  _QWORD *v13; // rcx
  _QWORD *v14; // rcx
  _UNKNOWN **v15; // [rsp+20h] [rbp-78h]
  _QWORD *v16; // [rsp+28h] [rbp-70h]
  bool v17; // [rsp+A8h] [rbp+10h]
  int v18; // [rsp+B0h] [rbp+18h]
  char *v19; // [rsp+B8h] [rbp+20h]

  v18 = 0;
  v2 = RtlCommitDebugInfo_0(a1, 8u);
  v6 = v2;
  if ( !v2 )
    return 3221225495LL;
  *(_DWORD *)v2 = 0;
  v17 = 0;
  RtlAcquireSRWLockShared(&qword_1801662F8, v3, v4, v5);
  v8 = off_18015F570;
  v16 = off_18015F570;
  v9 = (_UNKNOWN **)off_18015F570;
  v15 = (_UNKNOWN **)off_18015F570;
  while ( v9 != &off_18015F570 )
  {
    v10 = v9 - 2;
    v11 = RtlCommitDebugInfo_0(a1, 0x30u);
    v12 = v11;
    v19 = v11;
    if ( !v11 )
    {
      v18 = -1073741801;
      break;
    }
    memset(v11, 0, 0x30uLL);
    *(_QWORD *)v12 = v10[1];
    *((_WORD *)v12 + 4) = *(_WORD *)v10;
    *((_WORD *)v12 + 5) = *((_WORD *)v10 + 1);
    if ( *((_WORD *)v12 + 4) )
    {
      if ( *((_WORD *)v12 + 4) == 1 )
      {
        v14 = v10[1];
        *((_DWORD *)v12 + 7) = *(_DWORD *)(v14[11] + 36LL);
        *((_QWORD *)v12 + 2) = v14[9];
        *((_DWORD *)v19 + 6) = *((_DWORD *)v14 + 17);
        *((_DWORD *)v19 + 10) = *((_DWORD *)v14 + 12);
        *((_DWORD *)v19 + 11) = *((_DWORD *)v14 + 16);
        v9 = v15;
        v8 = v16;
      }
      else if ( (unsigned __int8)sub_1800F8F3C() )
      {
        __debugbreak();
      }
    }
    else
    {
      v13 = v10[1];
      *((_QWORD *)v12 + 2) = v13[2];
      *((_DWORD *)v12 + 6) = *((_DWORD *)v13 + 2);
      *((_DWORD *)v12 + 9) = *((_DWORD *)v13 + 3);
      *((_DWORD *)v12 + 7) = *((_DWORD *)v10 + 9);
      *((_DWORD *)v12 + 8) = *((_DWORD *)v10 + 8);
    }
    ++*(_DWORD *)v6;
    v9 = (_UNKNOWN **)*v9;
    v15 = v9;
    if ( v9 == v8 )
    {
      v18 = -1073741595;
      break;
    }
    if ( v17 )
    {
      v8 = (_QWORD *)*v8;
      v16 = v8;
    }
    v17 = !v17;
  }
  RtlReleaseSRWLockShared(&qword_1801662F8);
  if ( v18 < 0 )
    RtlDeCommitDebugInfo_0(a1, v6, 8LL);
  else
    a1[15] = v6;
  return (unsigned int)v18;
}
