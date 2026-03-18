/*
 * XREFs of NtGdiCancelDC @ 0x1C0291820
 * Callers:
 *     <none>
 * Callees:
 *     ??1DCOBJA@@QEAA@XZ @ 0x1C0137874 (--1DCOBJA@@QEAA@XZ.c)
 *     ??0DCOBJA@@QEAA@XZ @ 0x1C0161060 (--0DCOBJA@@QEAA@XZ.c)
 */

_BOOL8 __fastcall NtGdiCancelDC(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rdx
  __int64 *v6; // rax
  BOOL v7; // ebx
  __int64 v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 *v12[7]; // [rsp+20h] [rbp-38h] BYREF

  GreAcquireHmgrSemaphore(a1, a2, a3, a4);
  DCOBJA::DCOBJA((DCOBJA *)v12);
  LOBYTE(v5) = 1;
  v6 = (__int64 *)HmgShareLockCheck(a1, v5);
  v12[0] = v6;
  v7 = v6 != 0LL;
  if ( v6 )
  {
    v8 = v6[62];
    if ( v8 )
      *(_DWORD *)(v8 + 112) |= 0x40000000u;
  }
  DCOBJA::~DCOBJA(v12);
  GreReleaseHmgrSemaphore(v10, v9);
  return v7;
}
