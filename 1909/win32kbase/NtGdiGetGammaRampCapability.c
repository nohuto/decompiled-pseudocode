/*
 * XREFs of NtGdiGetGammaRampCapability @ 0x1C012CDA0
 * Callers:
 *     <none>
 * Callees:
 *     ?vDestructor@DEVLOCKOBJ@@QEAAXXZ @ 0x1C0017A44 (-vDestructor@DEVLOCKOBJ@@QEAAXXZ.c)
 *     ?vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z @ 0x1C001D060 (-vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z.c)
 *     ??0DEVLOCKOBJ@@QEAA@XZ @ 0x1C002C968 (--0DEVLOCKOBJ@@QEAA@XZ.c)
 *     ?vUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C003FD3C (-vUnlockFast@XDCOBJ@@QEAAXXZ.c)
 *     ?bLddmDriver@PDEVOBJ@@QEBAHXZ @ 0x1C003FE08 (-bLddmDriver@PDEVOBJ@@QEBAHXZ.c)
 *     ?vLockGammaRamp@DEVLOCKOBJ@@QEAAXAEAVXDCOBJ@@@Z @ 0x1C009A2D0 (-vLockGammaRamp@DEVLOCKOBJ@@QEAAXAEAVXDCOBJ@@@Z.c)
 *     ?bGammaRampCapable@PDEVOBJ@@QEAAHXZ @ 0x1C012CA34 (-bGammaRampCapable@PDEVOBJ@@QEAAHXZ.c)
 */

_BOOL8 __fastcall NtGdiGetGammaRampCapability(HDC a1)
{
  BOOL v1; // ebx
  __int64 v2; // rdi
  __int64 v3; // r8
  __int64 v4; // rax
  __int64 v6; // [rsp+20h] [rbp-60h] BYREF
  int v7; // [rsp+28h] [rbp-58h]
  int v8; // [rsp+2Ch] [rbp-54h]
  _BYTE v9[32]; // [rsp+30h] [rbp-50h] BYREF
  __int64 v10; // [rsp+50h] [rbp-30h] BYREF
  char v11; // [rsp+60h] [rbp-20h]
  __int64 v12; // [rsp+98h] [rbp+18h] BYREF

  v1 = 0;
  v7 = 0;
  v8 = 0;
  XDCOBJ::vLock((XDCOBJ *)&v6, a1);
  v2 = v6;
  if ( v6 )
  {
    if ( !*(_DWORD *)(v6 + 32) )
    {
      DEVLOCKOBJ::DEVLOCKOBJ((DEVLOCKOBJ *)v9);
      DEVLOCKOBJ::vLockGammaRamp((DEVLOCKOBJ *)v9, (struct XDCOBJ *)&v6, v3);
      v12 = *(_QWORD *)(v2 + 48);
      if ( (unsigned int)PDEVOBJ::bGammaRampCapable((PDEVOBJ *)&v12) )
        v1 = PDEVOBJ::bLddmDriver((PDEVOBJ *)&v12) != 0;
      DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)v9);
      v4 = v10;
      if ( v10 )
      {
        if ( v11 )
        {
          *(_DWORD *)(v10 + 40) &= ~2u;
          v4 = v10;
          v11 = 0;
        }
        if ( v4 )
          XDCOBJ::vUnlockFast((XDCOBJ *)&v10);
      }
    }
    XDCOBJ::vUnlockFast((XDCOBJ *)&v6);
  }
  return v1;
}
