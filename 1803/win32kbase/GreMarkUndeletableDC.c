/*
 * XREFs of GreMarkUndeletableDC @ 0x1C00630F0
 * Callers:
 *     CreateCacheDC @ 0x1C0062F20 (CreateCacheDC.c)
 * Callees:
 *     ?vAltUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C00295B4 (-vAltUnlockFast@XDCOBJ@@QEAAXXZ.c)
 *     HmgShareLockEx @ 0x1C002CF00 (HmgShareLockEx.c)
 */

void __fastcall GreMarkUndeletableDC(unsigned int a1)
{
  __int64 v1; // rax
  __int64 v2; // [rsp+20h] [rbp-18h] BYREF
  int v3; // [rsp+28h] [rbp-10h]
  int v4; // [rsp+2Ch] [rbp-Ch]

  v3 = 0;
  v4 = 0;
  v1 = HmgShareLockEx(a1, 1, 0);
  v2 = v1;
  if ( v1 )
  {
    *(_DWORD *)(v1 + 36) |= 8u;
    XDCOBJ::vAltUnlockFast((XDCOBJ *)&v2);
  }
}
