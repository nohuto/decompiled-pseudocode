/*
 * XREFs of sub_1800692D0 @ 0x1800692D0
 * Callers:
 *     sub_180069034 @ 0x180069034 (sub_180069034.c)
 * Callees:
 *     sub_180069778 @ 0x180069778 (sub_180069778.c)
 *     sub_180089150 @ 0x180089150 (sub_180089150.c)
 *     ZwTerminateProcess @ 0x18009CC60 (ZwTerminateProcess.c)
 *     memset @ 0x1800A3600 (memset.c)
 *     sub_1800CE318 @ 0x1800CE318 (sub_1800CE318.c)
 */

int sub_1800692D0()
{
  __int64 *v0; // rcx
  __int64 v1; // rbx
  __int64 v2; // rcx
  __int64 v3; // r14
  __int64 v4; // rax
  __int64 *v5; // rsi
  __int64 *v6; // rdi
  __int64 v7; // rax
  __int64 *v8; // rax
  char v9; // al
  int v11; // [rsp+30h] [rbp-99h]
  _QWORD v12[24]; // [rsp+40h] [rbp-89h] BYREF
  char v13; // [rsp+130h] [rbp+67h] BYREF
  NTSTATUS ExitStatus; // [rsp+138h] [rbp+6Fh] BYREF

  memset(v12, 0, sizeof(v12));
  v0 = (__int64 *)qword_1801653D0;
  v12[5] = &ExitStatus;
  LODWORD(v12[4]) = 0x80000;
  while ( v0 != &qword_1801653D0 )
  {
    if ( *(_DWORD *)(v0[19] + 56) == 7 && !v0[22] )
      v0[22] = (__int64)v12;
    v0 = (__int64 *)*v0;
  }
  v1 = qword_1801653D0;
  v2 = 0LL;
  ExitStatus = 0;
  v3 = 0LL;
  while ( 1 )
  {
    if ( (__int64 *)v1 == &qword_1801653D0 )
      goto LABEL_18;
    v3 = v1;
    if ( (*(_DWORD *)(v1 + 104) & 0x100) != 0 )
    {
      v4 = *(_QWORD *)(v1 + 152);
      v5 = *(__int64 **)(v4 + 40);
      if ( v5 )
        break;
    }
LABEL_10:
    v1 = *(_QWORD *)v1;
  }
  v6 = *(__int64 **)(v4 + 40);
  while ( 1 )
  {
    v6 = (__int64 *)*v6;
    if ( (v6[3] & 1) == 0 )
    {
      v7 = v6[1];
      if ( *(_DWORD *)(v7 + 56) == 7 )
      {
        v13 = 0;
        ExitStatus = sub_180069778(v7, &ExitStatus, &v13);
        v2 = (unsigned int)ExitStatus;
        if ( ExitStatus < 0 )
          goto LABEL_18;
        goto LABEL_16;
      }
      if ( *(_DWORD *)(v7 + 56) == -4 )
        break;
    }
LABEL_16:
    if ( v6 == v5 )
      goto LABEL_10;
  }
  v2 = 3221225794LL;
  ExitStatus = -1073741502;
LABEL_18:
  v8 = (__int64 *)qword_1801653D0;
  if ( (__int64 *)qword_1801653D0 != &qword_1801653D0 )
  {
    do
    {
      v3 = (__int64)v8;
      if ( (_QWORD *)v8[22] == v12 )
        v8[22] = 0LL;
      v8 = (__int64 *)*v8;
    }
    while ( v8 != &qword_1801653D0 );
    v2 = (unsigned int)ExitStatus;
  }
  if ( (int)v2 < 0 )
  {
    v9 = dword_18015FAB0;
    if ( (dword_18015FAB0 & 3) != 0 )
    {
      v11 = v2;
      sub_1800CE318(
        (unsigned int)"minkernel\\ntdll\\ldrinit.c",
        2537,
        (unsigned int)"LdrpInitializeShimDllDependencies",
        0,
        (__int64)"Initializing a shim dependency \"%wZ\" failed with status 0x%08lx\n",
        v3 + 72,
        v11);
      v2 = (unsigned int)ExitStatus;
      v9 = dword_18015FAB0;
    }
    if ( (v9 & 0x10) != 0 )
      __debugbreak();
    sub_180089150(v2);
    LODWORD(v8) = ZwTerminateProcess((HANDLE)0xFFFFFFFFFFFFFFFFLL, ExitStatus);
  }
  return (int)v8;
}
