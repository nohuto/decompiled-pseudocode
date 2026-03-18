/*
 * XREFs of DestroyCacheDC @ 0x1C0062BA0
 * Callers:
 *     _GetDCEx @ 0x1C0027880 (_GetDCEx.c)
 *     ReleaseCacheDC @ 0x1C002C3A0 (ReleaseCacheDC.c)
 *     DelayedDestroyCacheDC @ 0x1C0033300 (DelayedDestroyCacheDC.c)
 *     xxxUserProcessCallout @ 0x1C00340E0 (xxxUserProcessCallout.c)
 *     DestroyCacheDCEntries @ 0x1C0034AD8 (DestroyCacheDCEntries.c)
 *     DestroyMonitorDCs @ 0x1C005CDA0 (DestroyMonitorDCs.c)
 * Callees:
 *     Win32FreePool @ 0x1C001CC50 (Win32FreePool.c)
 *     GreDeleteObject @ 0x1C001E0C0 (GreDeleteObject.c)
 *     ?vAltUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C00295B4 (-vAltUnlockFast@XDCOBJ@@QEAAXXZ.c)
 *     HmgShareLockEx @ 0x1C002CF00 (HmgShareLockEx.c)
 *     GreSetDCOwnerEx @ 0x1C002E880 (GreSetDCOwnerEx.c)
 *     bDeleteDCInternalEx @ 0x1C0030D10 (bDeleteDCInternalEx.c)
 *     GreLockVisRgn @ 0x1C00333D0 (GreLockVisRgn.c)
 *     GreUnlockVisRgn @ 0x1C0033460 (GreUnlockVisRgn.c)
 *     HmgMarkDeletable @ 0x1C0062D10 (HmgMarkDeletable.c)
 */

__int64 __fastcall DestroyCacheDC(__int64 *a1, __int64 a2, int a3)
{
  unsigned int v3; // ebp
  int v4; // r14d
  __int64 *v6; // rdi
  __int64 v7; // rbx
  unsigned __int64 v8; // rsi
  HBRUSH v9; // rcx
  HBRUSH v10; // rcx
  HDC v11; // rcx
  __int64 v12; // rdx
  int v13; // r8d
  __int64 v15; // rdx
  __int64 *v16; // r8
  __int64 v17; // rcx
  __int64 *v18; // rax
  bool v19; // zf
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // rax
  __int64 v23; // rcx
  __int64 CurrentProcessWin32Process; // rax
  __int64 v25; // [rsp+20h] [rbp-28h] BYREF
  int v26; // [rsp+28h] [rbp-20h]
  int v27; // [rsp+2Ch] [rbp-1Ch]
  unsigned int v28; // [rsp+50h] [rbp+8h] BYREF

  v3 = 0;
  v4 = 0;
  v6 = a1;
  if ( !a1 )
  {
    GreLockVisRgn(*(_QWORD *)(gpDispInfo + 40), a2, a3);
    v4 = 1;
    v17 = gpDispInfo + 24;
    v18 = *(__int64 **)(gpDispInfo + 24);
    if ( !v18 )
      goto LABEL_29;
    while ( 1 )
    {
      v15 = v18[1];
      v6 = v18;
      v16 = (__int64 *)v17;
      v19 = v15 == a2;
      if ( v15 == a2 )
        break;
      v17 = (__int64)v18;
      v18 = (__int64 *)*v18;
      if ( !v18 )
      {
        v19 = v15 == a2;
        break;
      }
    }
    if ( v19 )
      v6 = v16;
    if ( !v18 || !v6 )
    {
LABEL_29:
      GreUnlockVisRgn(*(_QWORD *)(gpDispInfo + 40), v15, (int)v16);
      return 0LL;
    }
  }
  v7 = *v6;
  *(_DWORD *)(v7 + 64) |= 0x400000u;
  if ( (*(_DWORD *)(v7 + 64) & 0x40000) == 0 )
  {
    v8 = *(_QWORD *)(v7 + 40);
    if ( v8 > 2 )
    {
      PsGetCurrentProcessId();
      LOBYTE(v20) = 4;
      HmgMarkDeletable(v8, v20);
      if ( *(_QWORD *)(v7 + 40) > 2uLL )
        GreDeleteObject(*(HBRUSH *)(v7 + 40));
    }
    *(_QWORD *)(v7 + 40) = 0LL;
  }
  v9 = *(HBRUSH *)(v7 + 48);
  if ( v9 )
  {
    GreDeleteObject(v9);
    *(_QWORD *)(v7 + 48) = 0LL;
  }
  v10 = *(HBRUSH *)(v7 + 56);
  if ( v10 )
  {
    GreDeleteObject(v10);
    *(_QWORD *)(v7 + 56) = 0LL;
  }
  if ( !(unsigned int)GreSetDCOwnerEx(*(_QWORD *)(v7 + 8), -2147483646, 1, 1) )
    goto LABEL_33;
  if ( (*(_DWORD *)(v7 + 64) & 0x4000) != 0 )
  {
    if ( (int)IsGreSelectRedirectionBitmapSupported() >= 0 )
      GreSelectRedirectionBitmap(*(_QWORD *)(v7 + 8), 0LL);
    *(_DWORD *)(v7 + 64) &= ~0x4000u;
    *(_QWORD *)(v7 + 32) = 0LL;
  }
  v11 = *(HDC *)(v7 + 8);
  v28 = 0x400000;
  if ( !(unsigned int)bDeleteDCInternalEx(v11, &v28) )
  {
    GreSetDCOwnerEx(*(_QWORD *)(v7 + 8), -2147483630, 1, 1);
LABEL_33:
    v21 = *(_QWORD *)(v7 + 8);
    *(_QWORD *)(v7 + 16) = 0LL;
    *(_QWORD *)(v7 + 24) = 0LL;
    *(_QWORD *)(v7 + 32) = 0LL;
    v26 = 0;
    v27 = 0;
    v22 = HmgShareLockEx(v21, 1, 0);
    v25 = v22;
    if ( v22 )
    {
      *(_DWORD *)(v22 + 36) |= 0x80000u;
      XDCOBJ::vAltUnlockFast((XDCOBJ *)&v25);
    }
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v23);
    *(_DWORD *)(CurrentProcessWin32Process + 12) |= 0x200u;
    goto LABEL_18;
  }
  if ( (*(_DWORD *)(v7 + 64) & 0x1002) == 2 )
    --gnDCECount;
  *v6 = *(_QWORD *)v7;
  Win32FreePool(v7);
  v3 = 1;
LABEL_18:
  if ( v4 )
    GreUnlockVisRgn(*(_QWORD *)(gpDispInfo + 40), v12, v13);
  return v3;
}
