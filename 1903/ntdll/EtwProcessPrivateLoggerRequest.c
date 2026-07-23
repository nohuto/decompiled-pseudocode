/*
 * XREFs of EtwProcessPrivateLoggerRequest @ 0x180004440
 * Callers:
 *     sub_180008510 @ 0x180008510 (sub_180008510.c)
 * Callees:
 *     sub_1800059B8 @ 0x1800059B8 (sub_1800059B8.c)
 *     RtlReleaseSRWLockExclusive @ 0x180035C30 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180039340 (RtlAcquireSRWLockExclusive.c)
 *     sub_180086C60 @ 0x180086C60 (sub_180086C60.c)
 *     memset @ 0x1800A3600 (memset.c)
 *     sub_18010D380 @ 0x18010D380 (sub_18010D380.c)
 *     sub_18010D60C @ 0x18010D60C (sub_18010D60C.c)
 *     sub_18010D6E0 @ 0x18010D6E0 (sub_18010D6E0.c)
 *     sub_18010D898 @ 0x18010D898 (sub_18010D898.c)
 */

__int64 __fastcall EtwProcessPrivateLoggerRequest(char *a1)
{
  __int128 v2; // xmm6
  int *v3; // rdi
  unsigned int v4; // r14d
  __int64 v5; // rax
  int v6; // ebx
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  int v10; // ebx
  int v11; // eax
  int v12; // ebx
  int v13; // r14d
  int v15; // ebx
  int v16; // ebx
  int v17; // ebx
  int v18; // ebx
  int v19; // [rsp+50h] [rbp+20h] BYREF
  int v20; // [rsp+58h] [rbp+28h] BYREF

  if ( *((_DWORD *)a1 + 1) < 0xF8u )
    return 4209LL;
  v2 = *(_OWORD *)(a1 + 56);
  v3 = (int *)(a1 + 72);
  v4 = *((_DWORD *)a1 + 18);
  *((_DWORD *)a1 + 42) = *((_DWORD *)a1 + 5);
  if ( v4 < 0xB0 || (*((_DWORD *)a1 + 29) & 0x20000) == 0 )
    goto LABEL_19;
  v5 = *((_QWORD *)a1 + 12) - 0x11D232049E814AADLL;
  if ( *((_QWORD *)a1 + 12) == 0x11D232049E814AADLL )
    v5 = *((_QWORD *)a1 + 13) - 0x3969A8086000829ALL;
  if ( !v5 )
  {
LABEL_19:
    v12 = 13;
    goto LABEL_17;
  }
  v6 = *((_DWORD *)a1 + 19);
  v20 = 0;
  v19 = 0;
  RtlAcquireSRWLockExclusive(&SRWLock);
  v10 = v6 - 1;
  if ( !v10 )
  {
    v11 = sub_1800059B8(v8, &v20, &v19, v3);
LABEL_9:
    v12 = v11;
    goto LABEL_10;
  }
  v15 = v10 - 1;
  if ( !v15 )
  {
    v11 = sub_180086C60(v8, v7, v9, v3);
    goto LABEL_9;
  }
  v16 = v15 - 1;
  if ( !v16 )
  {
    v11 = sub_18010D6E0(v4, &v20, &v19, v3);
    goto LABEL_9;
  }
  v17 = v16 - 1;
  if ( !v17 )
  {
    v11 = sub_18010D898(v4, &v20, &v19, v3);
    goto LABEL_9;
  }
  v18 = v17 - 1;
  if ( !v18 )
  {
    v11 = sub_18010D380(v4, &v20, &v19, v3);
    goto LABEL_9;
  }
  if ( v18 == 1 )
  {
    v11 = sub_18010D60C(v4, &v20, &v19, v3);
    goto LABEL_9;
  }
  v12 = 87;
LABEL_10:
  RtlReleaseSRWLockExclusive(&SRWLock);
  if ( v12 )
  {
LABEL_17:
    v13 = 76;
    goto LABEL_12;
  }
  v13 = *v3 + 72;
LABEL_12:
  memset(a1, 0, 0x48uLL);
  *((_DWORD *)a1 + 1) = v13;
  *(_DWORD *)a1 = 4;
  *(_OWORD *)(a1 + 40) = v2;
  *((_DWORD *)a1 + 8) = NtCurrentTeb()->ClientId.UniqueProcess;
  if ( v12 )
    *v3 = v12;
  return 0LL;
}
