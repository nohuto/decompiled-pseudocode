/*
 * XREFs of sub_18002ECFC @ 0x18002ECFC
 * Callers:
 *     sub_18002ECFC @ 0x18002ECFC (sub_18002ECFC.c)
 *     sub_18002F3D8 @ 0x18002F3D8 (sub_18002F3D8.c)
 * Callees:
 *     RtlEnterCriticalSection @ 0x18001B380 (RtlEnterCriticalSection.c)
 *     sub_18001B678 @ 0x18001B678 (sub_18001B678.c)
 *     sub_18002CAA8 @ 0x18002CAA8 (sub_18002CAA8.c)
 *     sub_18002CB3C @ 0x18002CB3C (sub_18002CB3C.c)
 *     sub_18002ECFC @ 0x18002ECFC (sub_18002ECFC.c)
 *     sub_18002F464 @ 0x18002F464 (sub_18002F464.c)
 *     RtlReleaseSRWLockExclusive @ 0x180035C30 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180039340 (RtlAcquireSRWLockExclusive.c)
 *     RtlRbRemoveNode @ 0x180039FA0 (RtlRbRemoveNode.c)
 *     RtlLeaveCriticalSection @ 0x18003A8A0 (RtlLeaveCriticalSection.c)
 *     RtlFreeHeap @ 0x180040690 (RtlFreeHeap.c)
 *     sub_18006D700 @ 0x18006D700 (sub_18006D700.c)
 *     LdrUnloadAlternateResourceModuleEx @ 0x18006F560 (LdrUnloadAlternateResourceModuleEx.c)
 *     sub_180070218 @ 0x180070218 (sub_180070218.c)
 *     _guard_dispatch_icall_nop @ 0x1800A0100 (_guard_dispatch_icall_nop.c)
 *     sub_1800CE318 @ 0x1800CE318 (sub_1800CE318.c)
 *     sub_1800D8AB4 @ 0x1800D8AB4 (sub_1800D8AB4.c)
 */

void __fastcall sub_18002ECFC(__int64 a1)
{
  struct _PEB *v1; // r14
  void (__fastcall *v2)(_QWORD *); // rbp
  _QWORD *i; // rsi
  _QWORD *v5; // rbx
  _DWORD *v6; // rdx
  _QWORD **v7; // rcx
  _QWORD *v8; // rbx
  __int64 v9; // rsi
  _QWORD *v10; // rdx
  _QWORD **v11; // rcx
  _QWORD *v12; // r8
  _QWORD **v13; // rax
  _QWORD *v14; // rbx
  _QWORD *v15; // rsi
  char *v16; // rbx
  int v17; // eax
  __int64 v18; // rcx
  char **v19; // rdx
  __int64 v20; // rcx
  char **v21; // rax
  __int64 v22; // rdx
  char **v23; // rcx
  int v24; // [rsp+50h] [rbp+8h] BYREF

  v1 = NtCurrentPeb();
  v2 = 0LL;
  if ( *(_DWORD *)(a1 + 56) == -4 )
  {
LABEL_4:
    *(_DWORD *)(a1 + 56) = -1;
    sub_18006D700();
    goto LABEL_5;
  }
  if ( *(_DWORD *)(a1 + 56) != 7 )
  {
    if ( *(_DWORD *)(a1 + 56) != 9 )
      goto LABEL_18;
    goto LABEL_4;
  }
LABEL_5:
  if ( byte_180166014 )
    v2 = (void (__fastcall *)(_QWORD *))(MEMORY[0x7FFE0330] ^ __ROR8__(
                                                                qword_18017A258,
                                                                64 - (MEMORY[0x7FFE0330] & 0x3Fu)));
  RtlEnterCriticalSection(&stru_18015F3F0);
  for ( i = *(_QWORD **)a1; i != (_QWORD *)a1; i = (_QWORD *)*i )
  {
    v5 = i - 20;
    if ( (*(_BYTE *)(i - 7) & 8) != 0 )
    {
      sub_18002CAA8((__int64)(i - 20), 2u);
      if ( v2 )
        v2(i - 20);
      sub_18002CB3C((__int64)(i - 20), v6, 1);
      if ( (v1->NtGlobalFlag & 0x100) != 0 )
        sub_1800D8AB4(i - 20);
    }
    if ( (dword_18015FAB0 & 5) != 0 )
      sub_1800CE318(
        (unsigned int)"minkernel\\ntdll\\ldrsnap.c",
        3284,
        (unsigned int)"LdrpUnloadNode",
        2,
        (__int64)"Unmapping DLL \"%wZ\"\n",
        v5 + 9);
    LdrUnloadAlternateResourceModuleEx((PVOID)v5[6], 0);
  }
  RtlLeaveCriticalSection(&stru_18015F3F0);
LABEL_18:
  while ( 1 )
  {
    v7 = *(_QWORD ***)(a1 + 40);
    if ( !v7 )
      break;
    v8 = *v7;
    if ( *v7 == v7 )
      *(_QWORD *)(a1 + 40) = 0LL;
    else
      *v7 = (_QWORD *)*v8;
    if ( !v8 )
      break;
    RtlAcquireSRWLockExclusive(&stru_1801660B0);
    v9 = v8[1];
    v10 = v8 + 2;
    v11 = *(_QWORD ***)(v9 + 48);
    v12 = *v11;
    if ( *v11 != v8 + 2 )
    {
      do
      {
        v11 = (_QWORD **)v12;
        v12 = (_QWORD *)*v12;
      }
      while ( v12 != v10 );
    }
    *v11 = (_QWORD *)*v10;
    if ( *(_QWORD **)(v9 + 48) == v10 )
    {
      v13 = 0LL;
      if ( v11 != v10 )
        v13 = v11;
      *(_QWORD *)(v9 + 48) = v13;
    }
    sub_18002F464(v9, 0LL, &v24);
    RtlReleaseSRWLockExclusive(&stru_1801660B0);
    if ( v24 )
      sub_18002ECFC(v9);
    RtlFreeHeap(HeapHandle, 0, v8);
  }
  v14 = *(_QWORD **)a1;
  *(_DWORD *)(a1 + 56) = -2;
  if ( v14 != (_QWORD *)a1 )
  {
    do
    {
      v15 = (_QWORD *)*v14;
      *((_DWORD *)v14 - 14) |= 2u;
      v16 = (char *)(v14 - 20);
      RtlAcquireSRWLockExclusive(&stru_1801660B0);
      v17 = *((_DWORD *)v16 + 26);
      if ( (v17 & 0x40) != 0 )
      {
        v18 = *((_QWORD *)v16 + 14);
        if ( *(char **)(v18 + 8) != v16 + 112 )
          goto LABEL_47;
        v19 = (char **)*((_QWORD *)v16 + 15);
        if ( *v19 != v16 + 112 )
          goto LABEL_47;
        *v19 = (char *)v18;
        *(_QWORD *)(v18 + 8) = v19;
        v20 = *(_QWORD *)v16;
        if ( *(char **)(*(_QWORD *)v16 + 8LL) != v16
          || (v21 = (char **)*((_QWORD *)v16 + 1), *v21 != v16)
          || (*v21 = (char *)v20, *(_QWORD *)(v20 + 8) = v21,
                                  v22 = *((_QWORD *)v16 + 2),
                                  *(char **)(v22 + 8) != v16 + 16)
          || (v23 = (char **)*((_QWORD *)v16 + 3), *v23 != v16 + 16) )
        {
LABEL_47:
          __fastfail(3u);
        }
        *v23 = (char *)v22;
        *(_QWORD *)(v22 + 8) = v23;
        *((_DWORD *)v16 + 26) &= ~0x40u;
        v17 = *((_DWORD *)v16 + 26);
      }
      if ( (v17 & 0x80u) != 0 )
      {
        RtlRbRemoveNode(&stru_1801662D8, (PRTL_BALANCED_NODE)(v16 + 224));
        RtlRbRemoveNode(&stru_1801662C8, (PRTL_BALANCED_NODE)(v16 + 200));
        *((_DWORD *)v16 + 16) = 0;
      }
      RtlReleaseSRWLockExclusive(&stru_1801660B0);
      if ( byte_180165430 )
        sub_180070218(v16);
      sub_18001B678(v16);
      v14 = v15;
    }
    while ( v15 != (_QWORD *)a1 );
  }
}
