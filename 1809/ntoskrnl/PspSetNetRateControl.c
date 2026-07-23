/*
 * XREFs of PspSetNetRateControl @ 0x14088B94C
 * Callers:
 *     NtSetInformationJobObject @ 0x140601B10 (NtSetInformationJobObject.c)
 * Callees:
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     memmove @ 0x1401D1640 (memmove.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     PspUnlockJob @ 0x1405FF0C0 (PspUnlockJob.c)
 *     PspUnlockJobConditionally @ 0x1405FF8B8 (PspUnlockJobConditionally.c)
 *     PspLockJobConditionally @ 0x1406016E4 (PspLockJobConditionally.c)
 *     PspLockRootJobExclusive @ 0x1406AE0D8 (PspLockRootJobExclusive.c)
 *     PspNetRateControlDispatch @ 0x14088B074 (PspNetRateControlDispatch.c)
 *     PspSetJobRateControl @ 0x14088B750 (PspSetJobRateControl.c)
 *     EtwTraceJobSetQuery @ 0x1408B8AB8 (EtwTraceJobSetQuery.c)
 */

__int64 __fastcall PspSetNetRateControl(void *Src, size_t Size, _DWORD *Object)
{
  char v4; // r12
  int v5; // ebx
  int v6; // r15d
  int v7; // r14d
  int v8; // ebx
  int v9; // esi
  struct _KTHREAD *CurrentThread; // r13
  int v11; // edx
  int v12; // r8d
  __int64 v13; // rdx
  int v14; // eax
  __int64 v15; // rcx
  __int64 v17; // [rsp+30h] [rbp-98h] BYREF
  _QWORD v18[5]; // [rsp+38h] [rbp-90h] BYREF
  __int64 v19; // [rsp+60h] [rbp-68h] BYREF
  int v20; // [rsp+68h] [rbp-60h]
  unsigned __int8 v21; // [rsp+6Ch] [rbp-5Ch]
  __int64 v22; // [rsp+70h] [rbp-58h] BYREF
  __int64 v23; // [rsp+78h] [rbp-50h]
  __int64 v24; // [rsp+80h] [rbp-48h]

  v4 = 0;
  memmove(&v19, Src, (unsigned int)Size);
  if ( (v20 & 0xFFFFFFF8) == 0 )
  {
    v6 = v20 & 1;
    if ( (v20 & 1) != 0 )
    {
      v7 = v20 & 4;
      if ( (v20 & 4) != 0 && v21 > 0x40u )
        return (unsigned int)-1073741811;
      v8 = v20 & 4;
      if ( (v20 & 6) == 0 )
        return (unsigned int)-1073741811;
    }
    else
    {
      v7 = v20 & 4;
      v8 = v7;
    }
    memset(v18, 0, sizeof(v18));
    v18[3] = Object + 306;
    LODWORD(v18[1]) = 0;
    v9 = v20 & 2;
    if ( (v20 & 2) != 0 )
    {
      LODWORD(v18[4]) |= 0x10u;
      v18[2] = v19;
    }
    if ( v8 )
    {
      LODWORD(v18[4]) |= 8u;
      BYTE4(v18[4]) = v21;
    }
    CurrentThread = KeGetCurrentThread();
    PspLockRootJobExclusive((__int64)Object, (__int64)CurrentThread, &v17);
    PspLockJobConditionally((__int64)Object, &v17);
    v11 = Object[326];
    v12 = v11 & 0x2000000;
    v13 = v11 & 0x4000000;
    if ( (_DWORD)v13 )
      v18[0] = *(_QWORD *)(*((_QWORD *)Object + 162) + 56LL);
    if ( (_BYTE)v6 )
    {
      if ( v12 )
      {
        if ( (_DWORD)v13 )
          LODWORD(v18[4]) |= 2u;
      }
      else
      {
        LODWORD(v18[4]) |= 1u;
      }
    }
    else if ( (_DWORD)v13 )
    {
      LODWORD(v18[4]) |= 4u;
    }
    if ( (v18[4] & 1) != 0 )
    {
      v5 = PspSetJobRateControl(Object, v13, v20);
      if ( v5 < 0 )
        goto LABEL_39;
      v4 = 1;
      v14 = PspNetRateControlDispatch((__int64)v18);
    }
    else
    {
      if ( (v18[4] & 7) != 0 )
      {
        v5 = PspNetRateControlDispatch((__int64)v18);
        if ( v5 < 0 )
          goto LABEL_39;
      }
      v14 = PspSetJobRateControl(Object, v13, v20);
    }
    v5 = v14;
    if ( v14 < 0 )
      goto LABEL_40;
    if ( v6 )
    {
      if ( v9 )
      {
        *(_DWORD *)(*((_QWORD *)Object + 162) + 48LL) |= 1u;
        *(_QWORD *)(*((_QWORD *)Object + 162) + 40LL) = v18[2];
      }
      if ( v7 )
      {
        *(_DWORD *)(*((_QWORD *)Object + 162) + 48LL) |= 2u;
        *(_BYTE *)(*((_QWORD *)Object + 162) + 64LL) = BYTE4(v18[4]);
      }
      *(_QWORD *)(*((_QWORD *)Object + 162) + 56LL) = v18[0];
      v15 = *((_QWORD *)Object + 162);
      LODWORD(v22) = *(_DWORD *)(v15 + 48);
      v23 = *(_QWORD *)(v15 + 40);
      LOBYTE(v24) = *(_BYTE *)(v15 + 64);
    }
    else
    {
      v22 = 0LL;
      v23 = 0LL;
      v24 = 0LL;
    }
    if ( (PerfGlobalGroupMask[0] & 0x80000) != 0 )
      EtwTraceJobSetQuery((_DWORD)Object, 32, (unsigned int)&v22, 0, v14, 1829);
LABEL_39:
    if ( v5 >= 0 )
    {
LABEL_42:
      PspUnlockJobConditionally((__int64)Object, &v17);
      PspUnlockJob(v17, (__int64)CurrentThread);
      return (unsigned int)v5;
    }
LABEL_40:
    if ( v4 )
      PspSetJobRateControl(Object, v13, 0);
    goto LABEL_42;
  }
  return (unsigned int)-1073741811;
}
