/*
 * XREFs of DestroyCacheDC @ 0x1C0064E90
 * Callers:
 *     DelayedDestroyCacheDC @ 0x1C001788C (DelayedDestroyCacheDC.c)
 *     _GetDCEx @ 0x1C001AAA0 (_GetDCEx.c)
 *     ReleaseCacheDC @ 0x1C001ED70 (ReleaseCacheDC.c)
 *     xxxUserProcessCallout @ 0x1C002DC40 (xxxUserProcessCallout.c)
 *     DestroyMonitorDCs @ 0x1C0063900 (DestroyMonitorDCs.c)
 *     DestroyCacheDCEntries @ 0x1C0064DA8 (DestroyCacheDCEntries.c)
 * Callees:
 *     ?vAltUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C001631C (-vAltUnlockFast@XDCOBJ@@QEAAXXZ.c)
 *     Win32FreePool @ 0x1C0016AB0 (Win32FreePool.c)
 *     GreDeleteObject @ 0x1C0016C60 (GreDeleteObject.c)
 *     GreUnlockVisRgn @ 0x1C0017990 (GreUnlockVisRgn.c)
 *     GreLockVisRgn @ 0x1C0017A40 (GreLockVisRgn.c)
 *     GreSetDCOwnerEx @ 0x1C0019340 (GreSetDCOwnerEx.c)
 *     HmgShareLockEx @ 0x1C001BA50 (HmgShareLockEx.c)
 *     bDeleteDCInternal @ 0x1C0064FC0 (bDeleteDCInternal.c)
 *     HmgMarkDeletable @ 0x1C0083A30 (HmgMarkDeletable.c)
 */

__int64 __fastcall DestroyCacheDC(__int64 *a1, __int64 a2, __int64 a3)
{
  unsigned int v3; // ebp
  int v4; // r14d
  __int64 *v6; // rdi
  __int64 v7; // rbx
  unsigned __int64 v8; // rsi
  HPALETTE v9; // rcx
  HPALETTE v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 *v16; // rax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // rax
  __int64 v20; // rcx
  __int64 CurrentProcessWin32Process; // rax
  __int64 *v22; // [rsp+20h] [rbp-28h] BYREF
  int v23; // [rsp+28h] [rbp-20h]
  int v24; // [rsp+2Ch] [rbp-1Ch]

  v3 = 0;
  v4 = 0;
  v6 = a1;
  if ( !a1 )
  {
    GreLockVisRgn(*(_QWORD *)(gpDispInfo + 40), a2, a3);
    v4 = 1;
    v6 = (__int64 *)(gpDispInfo + 24);
    v16 = *(__int64 **)(gpDispInfo + 24);
    if ( !v16 )
      goto LABEL_26;
    do
    {
      if ( v16[1] == a2 )
        break;
      v6 = v16;
      v16 = (__int64 *)*v16;
    }
    while ( v16 );
    if ( !v16 || !v6 )
    {
LABEL_26:
      GreUnlockVisRgn(*(_QWORD *)(gpDispInfo + 40), v14, v15);
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
      LOBYTE(v17) = 4;
      HmgMarkDeletable(v8, v17);
      if ( *(_QWORD *)(v7 + 40) > 2uLL )
        GreDeleteObject(*(HPALETTE *)(v7 + 40));
    }
    *(_QWORD *)(v7 + 40) = 0LL;
  }
  v9 = *(HPALETTE *)(v7 + 48);
  if ( v9 )
  {
    GreDeleteObject(v9);
    *(_QWORD *)(v7 + 48) = 0LL;
  }
  v10 = *(HPALETTE *)(v7 + 56);
  if ( v10 )
  {
    GreDeleteObject(v10);
    *(_QWORD *)(v7 + 56) = 0LL;
  }
  if ( !(unsigned int)GreSetDCOwnerEx(*(_QWORD *)(v7 + 8), 0x80000002, 1, 0) )
    goto LABEL_30;
  if ( (*(_DWORD *)(v7 + 64) & 0x4000) != 0 )
  {
    if ( (int)IsGreSelectRedirectionBitmapSupported() >= 0 )
      GreSelectRedirectionBitmap(*(_QWORD *)(v7 + 8), 0LL);
    *(_DWORD *)(v7 + 64) &= ~0x4000u;
    *(_QWORD *)(v7 + 32) = 0LL;
  }
  if ( !(unsigned int)bDeleteDCInternal(*(_QWORD *)(v7 + 8), 1LL, 0LL, 0LL) )
  {
    GreSetDCOwnerEx(*(_QWORD *)(v7 + 8), 0x80000012, 1, 0);
LABEL_30:
    v18 = *(_QWORD *)(v7 + 8);
    *(_QWORD *)(v7 + 16) = 0LL;
    *(_QWORD *)(v7 + 24) = 0LL;
    *(_QWORD *)(v7 + 32) = 0LL;
    v23 = 0;
    v24 = 0;
    v19 = HmgShareLockEx(v18, 1, 0);
    v22 = (__int64 *)v19;
    if ( v19 )
    {
      *(_DWORD *)(v19 + 36) |= 0x80000u;
      XDCOBJ::vAltUnlockFast(&v22);
    }
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v20);
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
    GreUnlockVisRgn(*(_QWORD *)(gpDispInfo + 40), v11, v12);
  return v3;
}
