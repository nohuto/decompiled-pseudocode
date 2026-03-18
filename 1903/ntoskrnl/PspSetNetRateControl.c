/*
 * XREFs of PspSetNetRateControl @ 0x1408C864C
 * Callers:
 *     NtSetInformationJobObject @ 0x140613A70 (NtSetInformationJobObject.c)
 * Callees:
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     memmove @ 0x1401D6880 (memmove.c)
 *     PspUnlockJob @ 0x140611910 (PspUnlockJob.c)
 *     PspUnlockJobConditionally @ 0x140612104 (PspUnlockJobConditionally.c)
 *     PspLockJobConditionally @ 0x140613668 (PspLockJobConditionally.c)
 *     PspLockRootJobExclusive @ 0x140615C20 (PspLockRootJobExclusive.c)
 *     PspNetRateControlDispatch @ 0x1408C7D44 (PspNetRateControlDispatch.c)
 *     PspSetJobRateControl @ 0x1408C8440 (PspSetJobRateControl.c)
 *     EtwTraceJobSetQuery @ 0x1408F41CC (EtwTraceJobSetQuery.c)
 */

__int64 __fastcall PspSetNetRateControl(void *Src, size_t Size, _DWORD *Object)
{
  char v4; // r12
  int v5; // ebx
  int v6; // r15d
  int v7; // r14d
  int v8; // ecx
  int v9; // esi
  struct _KTHREAD *CurrentThread; // r13
  int v11; // edx
  int v12; // r8d
  __int64 v13; // rdx
  int v14; // eax
  __int64 v15; // rcx
  __int64 v17; // [rsp+30h] [rbp-98h] BYREF
  __int64 v18; // [rsp+38h] [rbp-90h] BYREF
  int v19; // [rsp+40h] [rbp-88h]
  _DWORD v20[5]; // [rsp+44h] [rbp-84h] BYREF
  __int64 v21; // [rsp+58h] [rbp-70h]
  __int64 v22; // [rsp+60h] [rbp-68h] BYREF
  __int64 v23; // [rsp+68h] [rbp-60h]
  __int64 v24; // [rsp+70h] [rbp-58h] BYREF
  __int64 v25; // [rsp+78h] [rbp-50h]
  __int64 v26; // [rsp+80h] [rbp-48h]

  v24 = 0LL;
  v25 = 0LL;
  v26 = 0LL;
  v22 = 0LL;
  v23 = 0LL;
  v4 = 0;
  memmove(&v22, Src, (unsigned int)Size);
  if ( (v23 & 0xFFFFFFF8) == 0 )
  {
    v6 = v23 & 1;
    if ( (v23 & 1) != 0 )
    {
      v7 = v23 & 4;
      if ( (v23 & 4) != 0 && BYTE4(v23) > 0x40u )
        return (unsigned int)-1073741811;
      v8 = v23 & 4;
      if ( (v23 & 6) == 0 )
        return (unsigned int)-1073741811;
    }
    else
    {
      v7 = v23 & 4;
      v8 = v7;
    }
    v18 = 0LL;
    memset(v20, 0, 12);
    v21 = 0LL;
    *(_QWORD *)&v20[3] = Object + 306;
    v19 = 0;
    v9 = v23 & 2;
    if ( (v23 & 2) != 0 )
    {
      LODWORD(v21) = v21 | 0x10;
      *(_QWORD *)&v20[1] = v22;
    }
    if ( v8 )
    {
      LODWORD(v21) = v21 | 8;
      BYTE4(v21) = BYTE4(v23);
    }
    CurrentThread = KeGetCurrentThread();
    PspLockRootJobExclusive((__int64)Object, (__int64)CurrentThread, &v17);
    PspLockJobConditionally((__int64)Object, &v17);
    v11 = Object[326];
    v12 = v11 & 0x2000000;
    v13 = v11 & 0x4000000;
    if ( (_DWORD)v13 )
      v18 = *(_QWORD *)(*((_QWORD *)Object + 162) + 56LL);
    if ( (_BYTE)v6 )
    {
      if ( v12 )
      {
        if ( (_DWORD)v13 )
          LODWORD(v21) = v21 | 2;
      }
      else
      {
        LODWORD(v21) = v21 | 1;
      }
    }
    else if ( (_DWORD)v13 )
    {
      LODWORD(v21) = v21 | 4;
    }
    if ( (v21 & 1) != 0 )
    {
      v5 = PspSetJobRateControl(Object, v13, v23);
      if ( v5 < 0 )
        goto LABEL_38;
      v4 = 1;
      v14 = PspNetRateControlDispatch((__int64)&v18);
    }
    else
    {
      if ( (v21 & 7) != 0 )
      {
        v5 = PspNetRateControlDispatch((__int64)&v18);
        if ( v5 < 0 )
          goto LABEL_38;
      }
      v14 = PspSetJobRateControl(Object, v13, v23);
    }
    v5 = v14;
    if ( v14 < 0 )
      goto LABEL_39;
    if ( v6 )
    {
      if ( v9 )
      {
        *(_DWORD *)(*((_QWORD *)Object + 162) + 48LL) |= 1u;
        *(_QWORD *)(*((_QWORD *)Object + 162) + 40LL) = *(_QWORD *)&v20[1];
      }
      if ( v7 )
      {
        *(_DWORD *)(*((_QWORD *)Object + 162) + 48LL) |= 2u;
        *(_BYTE *)(*((_QWORD *)Object + 162) + 64LL) = BYTE4(v21);
      }
      *(_QWORD *)(*((_QWORD *)Object + 162) + 56LL) = v18;
      v15 = *((_QWORD *)Object + 162);
      LODWORD(v24) = *(_DWORD *)(v15 + 48);
      v25 = *(_QWORD *)(v15 + 40);
      LOBYTE(v26) = *(_BYTE *)(v15 + 64);
    }
    if ( (PerfGlobalGroupMask[0] & 0x80000) != 0 )
      EtwTraceJobSetQuery((_DWORD)Object, 32, (unsigned int)&v24, 0, v14, 1829);
LABEL_38:
    if ( v5 >= 0 )
    {
LABEL_41:
      PspUnlockJobConditionally((__int64)Object, &v17);
      PspUnlockJob(v17, (__int64)CurrentThread);
      return (unsigned int)v5;
    }
LABEL_39:
    if ( v4 )
      PspSetJobRateControl(Object, v13, 0);
    goto LABEL_41;
  }
  return (unsigned int)-1073741811;
}
