/*
 * XREFs of ?BoundPoint@CCursorClip@@QEAA_NUtagPOINT@@W4BoundPointOptions@@W4InputTracing_MouseUpdatePositionReason@@PEAU2@@Z @ 0x1C003D420
 * Callers:
 *     <none>
 * Callees:
 *     _TlgKeywordOn @ 0x1C00304B0 (_TlgKeywordOn.c)
 *     ?ReleaseLock@CPushLock@@QEBAXXZ @ 0x1C0034194 (-ReleaseLock@CPushLock@@QEBAXXZ.c)
 *     ?AcquireLockExclusive@CPushLock@@QEAAJXZ @ 0x1C0034DF0 (-AcquireLockExclusive@CPushLock@@QEAAJXZ.c)
 *     _TlgWrite @ 0x1C003A4A8 (_TlgWrite.c)
 *     ?BoundPointToRegions@CCursorClip@@AEAAXUtagPOINT@@_N1PEAU2@@Z @ 0x1C003D56C (-BoundPointToRegions@CCursorClip@@AEAAXUtagPOINT@@_N1PEAU2@@Z.c)
 *     ?ApplyShellClip@CCursorClip@@AEAAXUtagPOINT@@PEAU2@@Z @ 0x1C003D65C (-ApplyShellClip@CCursorClip@@AEAAXUtagPOINT@@PEAU2@@Z.c)
 *     ?ClipPointToRect@CCursorClip@@CAXUtagPOINT@@PEBUtagRECT@@PEAU2@@Z @ 0x1C003D6B4 (-ClipPointToRect@CCursorClip@@CAXUtagPOINT@@PEBUtagRECT@@PEAU2@@Z.c)
 *     __security_check_cookie @ 0x1C00A63D0 (__security_check_cookie.c)
 *     _TlgCreateSz @ 0x1C00EB690 (_TlgCreateSz.c)
 */

char __fastcall CCursorClip::BoundPoint(__int64 a1, struct tagPOINT a2, LONG a3, int a4, struct tagPOINT *a5)
{
  CPushLock *v5; // rdi
  char v9; // r9
  char v10; // si
  char v11; // al
  char v12; // al
  bool v13; // r13
  int v14; // eax
  LONG y; // r14d
  __int64 v17; // r10
  int v18; // r12d
  const CHAR *v19; // rdx
  LONG v20; // r9d
  __int64 v21; // r10
  bool v22; // [rsp+30h] [rbp-B1h]
  LONG x; // [rsp+34h] [rbp-ADh] BYREF
  LONG v24; // [rsp+38h] [rbp-A9h] BYREF
  LONG v25; // [rsp+3Ch] [rbp-A5h] BYREF
  LONG v26; // [rsp+40h] [rbp-A1h] BYREF
  struct tagPOINT v27; // [rsp+48h] [rbp-99h] BYREF
  int v28; // [rsp+50h] [rbp-91h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+60h] [rbp-81h] BYREF
  LONG *p_x; // [rsp+80h] [rbp-61h]
  __int64 v31; // [rsp+88h] [rbp-59h]
  LONG *v32; // [rsp+90h] [rbp-51h]
  __int64 v33; // [rsp+98h] [rbp-49h]
  LONG *v34; // [rsp+A0h] [rbp-41h]
  __int64 v35; // [rsp+A8h] [rbp-39h]
  LONG *v36; // [rsp+B0h] [rbp-31h]
  __int64 v37; // [rsp+B8h] [rbp-29h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+C0h] [rbp-21h] BYREF
  struct tagPOINT *v39; // [rsp+D0h] [rbp-11h]
  __int64 v40; // [rsp+D8h] [rbp-9h]
  int *v41; // [rsp+E0h] [rbp-1h]
  __int64 v42; // [rsp+E8h] [rbp+7h]

  v5 = (CPushLock *)(a1 + 32);
  x = a3;
  v27 = a2;
  CPushLock::AcquireLockExclusive((CPushLock *)(a1 + 32));
  v9 = x;
  v10 = 0;
  v11 = x;
  *a5 = a2;
  v12 = v11 & 1;
  if ( !v12 || (v22 = 1, !*(_BYTE *)(a1 + 92)) )
    v22 = 0;
  if ( !v12 || (v13 = 1, !*(_BYTE *)(a1 + 93)) )
    v13 = 0;
  if ( (v9 & 2) == 0 )
  {
    if ( !*(_DWORD *)(a1 + 72) )
      CCursorClip::ClipPointToRect(a2, (const struct tagRECT *)(a1 + 16), a5);
    CCursorClip::ApplyShellClip((CCursorClip *)a1, *a5, a5);
    CCursorClip::BoundPointToRegions((CCursorClip *)a1, *a5, v22, v13, a5);
  }
  v14 = *(_DWORD *)(a1 + 72);
  y = v27.y;
  v28 = v14;
  if ( dword_1C01C7F10 > 4u && TlgKeywordOn((TraceLoggingHProvider)&dword_1C01C7F10, 0x40uLL) )
  {
    x = a2.x;
    p_x = &x;
    v32 = &v24;
    v25 = a5->x;
    v34 = &v25;
    v26 = a5->y;
    v36 = &v26;
    v31 = v17;
    v24 = v27.y;
    v33 = v17;
    v35 = v17;
    v37 = v17;
    if ( a4 )
    {
      v18 = a4 - 1;
      if ( v18 )
      {
        if ( v18 == 1 )
          v19 = "ActiveCursorTracking";
        else
          v19 = "UNKNOWN";
      }
      else
      {
        v19 = "SetCursorPos";
      }
    }
    else
    {
      v19 = "MouseInput";
    }
    TlgCreateSz(&pDesc, v19);
    v27.x = v20;
    v39 = &v27;
    v41 = &v28;
    v40 = v21;
    v42 = v21;
    TlgWrite((TraceLoggingHProvider)&dword_1C01C7F10, &unk_1C01A0AE3, 0LL, 0LL, 9u, &pData);
  }
  if ( a5->x != a2.x || a5->y != y )
    v10 = 1;
  CPushLock::ReleaseLock(v5);
  return v10;
}
