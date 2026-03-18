/*
 * XREFs of DestroyCacheDC @ 0x1C0045330
 * Callers:
 *     _GetDCEx @ 0x1C0026700 (_GetDCEx.c)
 *     ReleaseCacheDC @ 0x1C0027A50 (ReleaseCacheDC.c)
 *     xxxUserProcessCallout @ 0x1C002AEF0 (xxxUserProcessCallout.c)
 *     DestroyCacheDCEntries @ 0x1C002D480 (DestroyCacheDCEntries.c)
 *     DestroyMonitorDCs @ 0x1C00489F0 (DestroyMonitorDCs.c)
 *     DelayedDestroyCacheDC @ 0x1C008CA40 (DelayedDestroyCacheDC.c)
 * Callees:
 *     GreDeleteObject @ 0x1C001CBF0 (GreDeleteObject.c)
 *     Win32FreePool @ 0x1C001D8F0 (Win32FreePool.c)
 *     bDeleteDCInternalEx @ 0x1C001DC90 (bDeleteDCInternalEx.c)
 *     ?vAltUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C0021C14 (-vAltUnlockFast@XDCOBJ@@QEAAXXZ.c)
 *     HmgShareLockEx @ 0x1C0021C50 (HmgShareLockEx.c)
 *     GreSetDCOwnerEx @ 0x1C0027700 (GreSetDCOwnerEx.c)
 *     GreUnlockVisRgn @ 0x1C0029B20 (GreUnlockVisRgn.c)
 *     GreLockVisRgn @ 0x1C0029D60 (GreLockVisRgn.c)
 *     HmgMarkDeletable @ 0x1C0072540 (HmgMarkDeletable.c)
 */

__int64 __fastcall DestroyCacheDC(__int64 *a1, __int64 a2, __int64 a3)
{
  unsigned int v3; // ebp
  int v4; // r14d
  __int64 *v6; // rdi
  __int64 v7; // rbx
  unsigned __int64 v8; // rsi
  HRGN v9; // rcx
  HRGN v10; // rcx
  HDC v11; // rcx
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v15; // rdx
  __int64 v16; // r8
  __int64 *v17; // rax
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // rax
  __int64 v21; // rcx
  __int64 CurrentProcessWin32Process; // rax
  struct OBJECT *v23; // [rsp+20h] [rbp-28h] BYREF
  int v24; // [rsp+28h] [rbp-20h]
  int v25; // [rsp+2Ch] [rbp-1Ch]
  unsigned int v26; // [rsp+50h] [rbp+8h] BYREF

  v3 = 0;
  v4 = 0;
  v6 = a1;
  if ( !a1 )
  {
    GreLockVisRgn(*(_QWORD *)(gpDispInfo + 40), a2, a3);
    v4 = 1;
    v6 = (__int64 *)(gpDispInfo + 24);
    v17 = *(__int64 **)(gpDispInfo + 24);
    if ( !v17 )
      goto LABEL_26;
    do
    {
      if ( v17[1] == a2 )
        break;
      v6 = v17;
      v17 = (__int64 *)*v17;
    }
    while ( v17 );
    if ( !v17 || !v6 )
    {
LABEL_26:
      GreUnlockVisRgn(*(_QWORD *)(gpDispInfo + 40), v15, v16);
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
      LOBYTE(v18) = 4;
      HmgMarkDeletable(v8, v18);
      if ( *(_QWORD *)(v7 + 40) > 2uLL )
        GreDeleteObject(*(HRGN *)(v7 + 40));
    }
    *(_QWORD *)(v7 + 40) = 0LL;
  }
  v9 = *(HRGN *)(v7 + 48);
  if ( v9 )
  {
    GreDeleteObject(v9);
    *(_QWORD *)(v7 + 48) = 0LL;
  }
  v10 = *(HRGN *)(v7 + 56);
  if ( v10 )
  {
    GreDeleteObject(v10);
    *(_QWORD *)(v7 + 56) = 0LL;
  }
  if ( !(unsigned int)GreSetDCOwnerEx(*(_QWORD *)(v7 + 8), 0x80000002, 1, 1) )
    goto LABEL_30;
  if ( (*(_DWORD *)(v7 + 64) & 0x4000) != 0 )
  {
    if ( (int)IsGreSelectRedirectionBitmapSupported() >= 0 )
      GreSelectRedirectionBitmap(*(_QWORD *)(v7 + 8), 0LL);
    *(_DWORD *)(v7 + 64) &= ~0x4000u;
    *(_QWORD *)(v7 + 32) = 0LL;
  }
  v11 = *(HDC *)(v7 + 8);
  v26 = 0x400000;
  if ( !(unsigned int)bDeleteDCInternalEx(v11, &v26) )
  {
    GreSetDCOwnerEx(*(_QWORD *)(v7 + 8), 0x80000012, 1, 1);
LABEL_30:
    v19 = *(_QWORD *)(v7 + 8);
    *(_QWORD *)(v7 + 16) = 0LL;
    *(_QWORD *)(v7 + 24) = 0LL;
    *(_QWORD *)(v7 + 32) = 0LL;
    v24 = 0;
    v25 = 0;
    v20 = HmgShareLockEx(v19, 1, 0);
    v23 = (struct OBJECT *)v20;
    if ( v20 )
    {
      *(_DWORD *)(v20 + 36) |= 0x80000u;
      XDCOBJ::vAltUnlockFast(&v23);
    }
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v21);
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
