/*
 * XREFs of IopStoreArcInformation @ 0x1409DD2D4
 * Callers:
 *     IoInitSystemPreDrivers @ 0x1409B2F54 (IoInitSystemPreDrivers.c)
 * Callees:
 *     RtlStringCbCopyA @ 0x140011EF8 (RtlStringCbCopyA.c)
 *     IopVerifierExAllocatePool_0 @ 0x1400DD8DC (IopVerifierExAllocatePool_0.c)
 *     _strnicmp @ 0x1401955D0 (_strnicmp.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 */

__int64 __fastcall IopStoreArcInformation(__int64 a1)
{
  __int64 **v1; // r15
  int v2; // r12d
  unsigned int v3; // ebx
  __int64 *i; // r14
  PVOID *Pool_0; // rdi
  __int64 v6; // rsi
  SIZE_T v7; // rsi
  char *v8; // rbp
  PVOID *v9; // rcx
  PVOID **v10; // rax
  PVOID *j; // rax
  PVOID *m; // rcx
  PVOID *v14; // rbx
  __int64 v15; // rax
  int v16; // edx
  PVOID *k; // rcx

  v1 = *(__int64 ***)(a1 + 232);
  v2 = dword_14040ADF0;
  v3 = 0;
  qword_14096F728 = (__int64)&IoArcTableListHead;
  IoArcTableListHead = &IoArcTableListHead;
  for ( i = *v1; ; i = (__int64 *)*i )
  {
    if ( i == (__int64 *)v1 )
    {
      for ( j = (PVOID *)IoArcTableListHead; j != &IoArcTableListHead; j = (PVOID *)*j )
      {
        if ( !*((_BYTE *)j + 36) && !*((_BYTE *)j + 72) )
        {
          v16 = *((_DWORD *)j + 8);
          for ( k = (PVOID *)*j; k != &IoArcTableListHead; k = (PVOID *)*k )
          {
            if ( !*((_BYTE *)k + 36) && !*((_BYTE *)k + 72) && v16 == *((_DWORD *)k + 8) )
            {
              *((_BYTE *)j + 72) = 1;
              *((_BYTE *)k + 72) = 1;
            }
          }
        }
      }
      if ( v2 == 1 )
      {
        for ( m = (PVOID *)IoArcTableListHead; m != &IoArcTableListHead; m = (PVOID *)*m )
        {
          if ( *((_BYTE *)m + 76) && *((_BYTE *)m + 72) )
            IopAmbiguousSystemDisk = 1;
        }
      }
      return v3;
    }
    Pool_0 = (PVOID *)IopVerifierExAllocatePool_0(NonPagedPoolNx, 0x50uLL);
    if ( !Pool_0 )
      goto LABEL_27;
    v6 = -1LL;
    do
      ++v6;
    while ( *(_BYTE *)(i[3] + v6) );
    v7 = v6 + 1;
    v8 = (char *)IopVerifierExAllocatePool_0(NonPagedPoolNx, v7);
    v9 = Pool_0;
    if ( !v8 )
      break;
    memset(Pool_0, 0, 0x50uLL);
    *(_OWORD *)Pool_0 = *(_OWORD *)i;
    *((_OWORD *)Pool_0 + 1) = *((_OWORD *)i + 1);
    *((_OWORD *)Pool_0 + 2) = *((_OWORD *)i + 2);
    *((_OWORD *)Pool_0 + 3) = *((_OWORD *)i + 3);
    RtlStringCbCopyA(v8, v7, (NTSTRSAFE_PCSTR)i[3]);
    Pool_0[3] = v8;
    if ( v2 == 1 && v7 >= 9 && !strnicmp(&v8[v7 - 9], "rdisk(0)", 8uLL) )
      *((_BYTE *)Pool_0 + 76) = 1;
    v10 = (PVOID **)qword_14096F728;
    if ( *(PVOID **)qword_14096F728 != &IoArcTableListHead )
LABEL_30:
      __fastfail(3u);
    *Pool_0 = &IoArcTableListHead;
    Pool_0[1] = v10;
    *v10 = Pool_0;
    qword_14096F728 = (__int64)Pool_0;
  }
  while ( 1 )
  {
    ExFreePoolWithTag(v9, 0);
LABEL_27:
    v14 = (PVOID *)IoArcTableListHead;
    if ( IoArcTableListHead == &IoArcTableListHead )
      return (unsigned int)-1073741670;
    if ( *((PVOID **)IoArcTableListHead + 1) != &IoArcTableListHead )
      goto LABEL_30;
    v15 = *(_QWORD *)IoArcTableListHead;
    if ( *(PVOID *)(*(_QWORD *)IoArcTableListHead + 8LL) != IoArcTableListHead )
      goto LABEL_30;
    IoArcTableListHead = *(PVOID *)IoArcTableListHead;
    *(_QWORD *)(v15 + 8) = &IoArcTableListHead;
    ExFreePoolWithTag(v14[3], 0);
    v9 = v14;
  }
}
