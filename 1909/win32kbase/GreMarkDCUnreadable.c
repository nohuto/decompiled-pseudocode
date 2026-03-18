/*
 * XREFs of GreMarkDCUnreadable @ 0x1C0062AF8
 * Callers:
 *     InitUserScreen @ 0x1C00625FC (InitUserScreen.c)
 * Callees:
 *     ?vAltUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C0017C6C (-vAltUnlockFast@XDCOBJ@@QEAAXXZ.c)
 *     HmgShareLockEx @ 0x1C001CDA0 (HmgShareLockEx.c)
 *     GreReleaseHmgrSemaphore @ 0x1C002A070 (GreReleaseHmgrSemaphore.c)
 *     GreAcquireHmgrSemaphore @ 0x1C002BAC0 (GreAcquireHmgrSemaphore.c)
 */

__int64 __fastcall GreMarkDCUnreadable(unsigned int a1)
{
  __int64 *v1; // rbx
  int v2; // edx
  int v3; // ecx
  int v4; // r8d
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // rax
  __int64 *v10; // [rsp+20h] [rbp-18h] BYREF
  int v11; // [rsp+28h] [rbp-10h]
  int v12; // [rsp+2Ch] [rbp-Ch]

  v11 = 0;
  v12 = 0;
  v1 = (__int64 *)HmgShareLockEx(a1, 1, 0);
  v10 = v1;
  GreAcquireHmgrSemaphore(v3, v2, v4);
  if ( v1 )
  {
    *(_DWORD *)(v1[62] + 112) |= 0x10000000u;
    v8 = v1[6];
    *(_DWORD *)(v8 + 180) |= 0x10000000u;
    *(_DWORD *)(v8 + 188) |= 0x10000000u;
    XDCOBJ::vAltUnlockFast(&v10);
  }
  return GreReleaseHmgrSemaphore(v6, v5, v7);
}
