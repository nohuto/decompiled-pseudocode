/*
 * XREFs of ?BoundPoint@CCursorClip@@QEAA_NUtagPOINT@@W4BoundPointOptions@@W4InputTracing_MouseUpdatePositionReason@@PEAU2@@Z @ 0x1C0067330
 * Callers:
 *     <none>
 * Callees:
 *     _TlgKeywordOn @ 0x1C0032BB0 (_TlgKeywordOn.c)
 *     ?ReleaseLock@CPushLock@@QEBAXXZ @ 0x1C0037C84 (-ReleaseLock@CPushLock@@QEBAXXZ.c)
 *     ?BoundPointToRegions@CCursorClip@@AEAAXUtagPOINT@@_N1PEAU2@@Z @ 0x1C0067464 (-BoundPointToRegions@CCursorClip@@AEAAXUtagPOINT@@_N1PEAU2@@Z.c)
 *     ?ApplyShellClip@CCursorClip@@AEAAXUtagPOINT@@PEAU2@@Z @ 0x1C006756C (-ApplyShellClip@CCursorClip@@AEAAXUtagPOINT@@PEAU2@@Z.c)
 *     ?ClipPointToRect@CCursorClip@@CAXUtagPOINT@@PEBUtagRECT@@PEAU2@@Z @ 0x1C00675C0 (-ClipPointToRect@CCursorClip@@CAXUtagPOINT@@PEBUtagRECT@@PEAU2@@Z.c)
 *     ?AcquireLockExclusive@CPushLock@@QEAAJXZ @ 0x1C007DFD0 (-AcquireLockExclusive@CPushLock@@QEAAJXZ.c)
 *     _TlgWrite @ 0x1C0088074 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1C00BAF90 (__security_check_cookie.c)
 *     _TlgCreateSz @ 0x1C0112260 (_TlgCreateSz.c)
 */

char __fastcall CCursorClip::BoundPoint(__int64 a1, struct tagPOINT a2, LONG a3, int a4, struct tagPOINT *a5)
{
  CPushLock *v5; // rdi
  char v9; // r9
  char v10; // si
  bool v11; // r13
  int v12; // eax
  LONG y; // r14d
  __int64 v15; // r10
  int v16; // r12d
  const CHAR *v17; // rdx
  LONG v18; // r9d
  __int64 v19; // r10
  bool v20; // [rsp+30h] [rbp-B1h]
  LONG x; // [rsp+34h] [rbp-ADh] BYREF
  LONG v22; // [rsp+38h] [rbp-A9h] BYREF
  LONG v23; // [rsp+3Ch] [rbp-A5h] BYREF
  LONG v24; // [rsp+40h] [rbp-A1h] BYREF
  struct tagPOINT v25; // [rsp+48h] [rbp-99h] BYREF
  int v26; // [rsp+50h] [rbp-91h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+60h] [rbp-81h] BYREF
  LONG *p_x; // [rsp+80h] [rbp-61h]
  __int64 v29; // [rsp+88h] [rbp-59h]
  LONG *v30; // [rsp+90h] [rbp-51h]
  __int64 v31; // [rsp+98h] [rbp-49h]
  LONG *v32; // [rsp+A0h] [rbp-41h]
  __int64 v33; // [rsp+A8h] [rbp-39h]
  LONG *v34; // [rsp+B0h] [rbp-31h]
  __int64 v35; // [rsp+B8h] [rbp-29h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+C0h] [rbp-21h] BYREF
  struct tagPOINT *v37; // [rsp+D0h] [rbp-11h]
  __int64 v38; // [rsp+D8h] [rbp-9h]
  int *v39; // [rsp+E0h] [rbp-1h]
  __int64 v40; // [rsp+E8h] [rbp+7h]

  v5 = (CPushLock *)(a1 + 32);
  x = a3;
  v25 = a2;
  CPushLock::AcquireLockExclusive((CPushLock *)(a1 + 32));
  v9 = x;
  v10 = 0;
  *a5 = a2;
  if ( (v9 & 1) == 0 )
  {
    v11 = 0;
LABEL_3:
    v20 = 0;
    goto LABEL_4;
  }
  v20 = 1;
  v11 = *(_BYTE *)(a1 + 92) != 0;
  if ( !*(_BYTE *)(a1 + 93) )
    goto LABEL_3;
LABEL_4:
  if ( (v9 & 2) == 0 )
  {
    if ( !*(_DWORD *)(a1 + 72) )
      CCursorClip::ClipPointToRect(a2, (const struct tagRECT *)(a1 + 16), a5);
    CCursorClip::ApplyShellClip((CCursorClip *)a1, *a5, a5);
    CCursorClip::BoundPointToRegions((CCursorClip *)a1, *a5, v11, v20, a5);
  }
  v12 = *(_DWORD *)(a1 + 72);
  y = v25.y;
  v26 = v12;
  if ( dword_1C020FB50 > 4u && TlgKeywordOn((TraceLoggingHProvider)&dword_1C020FB50, 0x40uLL) )
  {
    x = a2.x;
    p_x = &x;
    v30 = &v22;
    v23 = a5->x;
    v32 = &v23;
    v24 = a5->y;
    v34 = &v24;
    v29 = v15;
    v22 = v25.y;
    v31 = v15;
    v33 = v15;
    v35 = v15;
    if ( a4 )
    {
      v16 = a4 - 1;
      if ( v16 )
      {
        if ( v16 == 1 )
          v17 = "ActiveCursorTracking";
        else
          v17 = "UNKNOWN";
      }
      else
      {
        v17 = "SetCursorPos";
      }
    }
    else
    {
      v17 = "MouseInput";
    }
    TlgCreateSz(&pDesc, v17);
    v25.x = v18;
    v37 = &v25;
    v39 = &v26;
    v38 = v19;
    v40 = v19;
    TlgWrite((TraceLoggingHProvider)&dword_1C020FB50, &unk_1C01E6F98, 0LL, 0LL, 9u, &pData);
  }
  if ( a5->x != a2.x || a5->y != y )
    v10 = 1;
  CPushLock::ReleaseLock(v5);
  return v10;
}
