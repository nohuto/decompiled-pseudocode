/*
 * XREFs of RtlAcquirePrivilege @ 0x180075F50
 * Callers:
 *     LdrpMinimalMapModule @ 0x18002A0B0 (LdrpMinimalMapModule.c)
 * Callees:
 *     RtlAllocateHeap @ 0x18003AA20 (RtlAllocateHeap.c)
 *     RtlFreeHeap @ 0x180040690 (RtlFreeHeap.c)
 *     RtlpOpenThreadToken @ 0x180076168 (RtlpOpenThreadToken.c)
 *     RtlImpersonateSelfEx @ 0x1800761C0 (RtlImpersonateSelfEx.c)
 *     NtSetInformationThread @ 0x18009D030 (NtSetInformationThread.c)
 *     NtClose @ 0x18009D070 (NtClose.c)
 *     NtOpenProcessTokenEx @ 0x18009D490 (NtOpenProcessTokenEx.c)
 *     NtAdjustPrivilegesToken @ 0x18009D6B0 (NtAdjustPrivilegesToken.c)
 */

__int64 __fastcall RtlAcquirePrivilege(int *a1, unsigned int a2, int a3, _QWORD *a4)
{
  __int64 v4; // rbp
  char v7; // si
  __int64 Heap; // rax
  _QWORD *v9; // rbx
  HANDLE *v10; // r14
  int v11; // edi
  __int64 v12; // r8
  __int64 v13; // rdx
  int v14; // eax
  __int64 v15; // rcx
  __int64 v17; // rax
  __int64 v18; // r8
  __int64 v19; // [rsp+30h] [rbp-38h] BYREF
  unsigned int v20; // [rsp+80h] [rbp+18h] BYREF

  v4 = a2;
  if ( (a3 & 0xFFFFFFFC) != 0 )
    return 3221225485LL;
  v7 = a3 | 1;
  if ( (a3 & 2) == 0 )
    v7 = a3;
  Heap = RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, NtdllBaseTag + 1310720, 12 * (a2 - 1 + 90LL));
  v9 = (_QWORD *)Heap;
  if ( !Heap )
    return 3221225495LL;
  *(_QWORD *)Heap = 0LL;
  v10 = (HANDLE *)(Heap + 8);
  *(_QWORD *)(Heap + 8) = 0LL;
  *(_DWORD *)(Heap + 32) = 0;
  if ( !NtCurrentTeb()->IsImpersonating )
  {
LABEL_6:
    if ( (v7 & 2) != 0 )
    {
      v11 = NtOpenProcessTokenEx(-1LL, 40LL, 512LL, v9);
      if ( v11 >= 0 )
      {
        *((_DWORD *)v9 + 8) |= 2u;
        goto LABEL_9;
      }
LABEL_38:
      if ( (v9[4] & 1) != 0 )
      {
        NtSetInformationThread(-2LL, 5LL, v10);
        if ( *v10 )
          NtClose(*v10);
      }
      goto LABEL_41;
    }
    v11 = RtlImpersonateSelfEx(3LL, 40LL, v9);
    if ( v11 < 0 )
      goto LABEL_38;
    *((_DWORD *)v9 + 8) |= 1u;
LABEL_9:
    v9[3] = v9 + 133;
    v9[2] = (char *)v9 + 36;
    *((_DWORD *)v9 + 266) = v4;
    if ( (_DWORD)v4 )
    {
      HIDWORD(v19) = 0;
      v12 = v4;
      v13 = 0LL;
      do
      {
        v14 = *a1;
        v13 += 12LL;
        v15 = v9[3];
        ++a1;
        LODWORD(v19) = v14;
        *(_QWORD *)(v13 + v15 - 8) = v19;
        *(_DWORD *)(v13 + v9[3]) = 2;
        --v12;
      }
      while ( v12 );
    }
    v20 = 1024;
    v11 = NtAdjustPrivilegesToken(*v9, 0LL, v9[3], 1024LL, v9[2], &v20);
    if ( v11 == -1073741789 )
    {
      while ( 1 )
      {
        v17 = RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, NtdllBaseTag + 1310720, v20);
        v9[2] = v17;
        if ( !v17 )
          break;
        v11 = NtAdjustPrivilegesToken(*v9, 0LL, v9[3], v20, v17, &v20);
        if ( v11 != -1073741789 )
          goto LABEL_13;
        RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v9[2]);
      }
      v11 = -1073741801;
    }
LABEL_13:
    if ( v11 == 262 )
    {
      if ( (_DWORD)v4 == 1 )
      {
        v11 = -1073741727;
LABEL_34:
        v18 = v9[2];
        if ( v18 && (_QWORD *)v18 != (_QWORD *)((char *)v9 + 36) )
          RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v18);
        NtClose((HANDLE)*v9);
        goto LABEL_38;
      }
      v11 = 0;
    }
    if ( v11 >= 0 )
    {
      *a4 = v9;
      return 0LL;
    }
    goto LABEL_34;
  }
  if ( (v7 & 1) != 0 )
  {
    v11 = RtlpOpenThreadToken(4LL, v10);
    if ( v11 >= 0 )
    {
      *((_DWORD *)v9 + 8) |= 1u;
      v19 = 0LL;
      NtSetInformationThread(-2LL, 5LL, &v19);
      goto LABEL_19;
    }
  }
  else
  {
    v11 = RtlpOpenThreadToken(40LL, Heap);
    if ( v11 >= 0 )
    {
LABEL_19:
      if ( *v9 )
        goto LABEL_9;
      goto LABEL_6;
    }
  }
LABEL_41:
  RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, (__int64)v9);
  return (unsigned int)v11;
}
