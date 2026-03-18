/*
 * XREFs of DestroyCacheDC @ 0x1C000FFD0
 * Callers:
 *     _GetDCEx @ 0x1C001BDF0 (_GetDCEx.c)
 *     ReleaseCacheDC @ 0x1C00200C0 (ReleaseCacheDC.c)
 *     DelayedDestroyCacheDC @ 0x1C002B920 (DelayedDestroyCacheDC.c)
 *     xxxUserProcessCallout @ 0x1C002CAF0 (xxxUserProcessCallout.c)
 *     DestroyMonitorDCs @ 0x1C0063360 (DestroyMonitorDCs.c)
 *     DestroyCacheDCEntries @ 0x1C007E6B4 (DestroyCacheDCEntries.c)
 * Callees:
 *     bDeleteDCInternal @ 0x1C0010100 (bDeleteDCInternal.c)
 *     Win32FreePool @ 0x1C0012E40 (Win32FreePool.c)
 *     ?vAltUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C0017C6C (-vAltUnlockFast@XDCOBJ@@QEAAXXZ.c)
 *     GreDeleteObject @ 0x1C0018180 (GreDeleteObject.c)
 *     GreSetDCOwnerEx @ 0x1C001AF00 (GreSetDCOwnerEx.c)
 *     HmgShareLockEx @ 0x1C001CDA0 (HmgShareLockEx.c)
 *     GreUnlockVisRgn @ 0x1C002A8A0 (GreUnlockVisRgn.c)
 *     GreLockVisRgn @ 0x1C002BA20 (GreLockVisRgn.c)
 *     HmgMarkDeletable @ 0x1C007FC00 (HmgMarkDeletable.c)
 */

__int64 __fastcall DestroyCacheDC(__int64 *a1, __int64 a2)
{
  unsigned int v2; // ebp
  int v3; // r14d
  __int64 *v5; // rdi
  __int64 v6; // rbx
  unsigned __int64 v7; // rsi
  HBRUSH v8; // rcx
  HBRUSH v9; // rcx
  __int64 v10; // rdx
  __int64 *v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rax
  __int64 v16; // rcx
  __int64 CurrentProcessWin32Process; // rax
  __int64 v18; // [rsp+20h] [rbp-28h] BYREF
  int v19; // [rsp+28h] [rbp-20h]
  int v20; // [rsp+2Ch] [rbp-1Ch]

  v2 = 0;
  v3 = 0;
  v5 = a1;
  if ( !a1 )
  {
    GreLockVisRgn(*(_QWORD *)(gpDispInfo + 40));
    v3 = 1;
    v5 = (__int64 *)(gpDispInfo + 24);
    v12 = *(__int64 **)(gpDispInfo + 24);
    if ( !v12 )
      goto LABEL_26;
    do
    {
      if ( v12[1] == a2 )
        break;
      v5 = v12;
      v12 = (__int64 *)*v12;
    }
    while ( v12 );
    if ( !v12 || !v5 )
    {
LABEL_26:
      GreUnlockVisRgn(*(_QWORD *)(gpDispInfo + 40));
      return 0LL;
    }
  }
  v6 = *v5;
  *(_DWORD *)(v6 + 64) |= 0x400000u;
  if ( (*(_DWORD *)(v6 + 64) & 0x40000) == 0 )
  {
    v7 = *(_QWORD *)(v6 + 40);
    if ( v7 > 2 )
    {
      PsGetCurrentProcessId();
      LOBYTE(v13) = 4;
      HmgMarkDeletable(v7, v13);
      if ( *(_QWORD *)(v6 + 40) > 2uLL )
        GreDeleteObject(*(HBRUSH *)(v6 + 40));
    }
    *(_QWORD *)(v6 + 40) = 0LL;
  }
  v8 = *(HBRUSH *)(v6 + 48);
  if ( v8 )
  {
    GreDeleteObject(v8);
    *(_QWORD *)(v6 + 48) = 0LL;
  }
  v9 = *(HBRUSH *)(v6 + 56);
  if ( v9 )
  {
    GreDeleteObject(v9);
    *(_QWORD *)(v6 + 56) = 0LL;
  }
  if ( !(unsigned int)GreSetDCOwnerEx(*(_QWORD *)(v6 + 8), 2147483650LL, 1LL, 0LL) )
    goto LABEL_30;
  if ( (*(_DWORD *)(v6 + 64) & 0x4000) != 0 )
  {
    if ( (int)IsGreSelectRedirectionBitmapSupported() >= 0 )
      GreSelectRedirectionBitmap(*(_QWORD *)(v6 + 8), 0LL);
    *(_DWORD *)(v6 + 64) &= ~0x4000u;
    *(_QWORD *)(v6 + 32) = 0LL;
  }
  if ( !(unsigned int)bDeleteDCInternal(*(_QWORD *)(v6 + 8), 1LL, 0LL, 0LL) )
  {
    GreSetDCOwnerEx(*(_QWORD *)(v6 + 8), 2147483666LL, 1LL, 0LL);
LABEL_30:
    v14 = *(_QWORD *)(v6 + 8);
    *(_QWORD *)(v6 + 16) = 0LL;
    LOBYTE(v10) = 1;
    *(_QWORD *)(v6 + 24) = 0LL;
    *(_QWORD *)(v6 + 32) = 0LL;
    v19 = 0;
    v20 = 0;
    v15 = HmgShareLockEx(v14, v10, 0LL);
    v18 = v15;
    if ( v15 )
    {
      *(_DWORD *)(v15 + 36) |= 0x80000u;
      XDCOBJ::vAltUnlockFast((XDCOBJ *)&v18);
    }
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v16);
    *(_DWORD *)(CurrentProcessWin32Process + 12) |= 0x200u;
    goto LABEL_18;
  }
  if ( (*(_DWORD *)(v6 + 64) & 0x1002) == 2 )
    --gnDCECount;
  *v5 = *(_QWORD *)v6;
  Win32FreePool(v6);
  v2 = 1;
LABEL_18:
  if ( v3 )
    GreUnlockVisRgn(*(_QWORD *)(gpDispInfo + 40));
  return v2;
}
