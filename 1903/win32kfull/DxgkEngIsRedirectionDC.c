/*
 * XREFs of DxgkEngIsRedirectionDC @ 0x1C0274ED0
 * Callers:
 *     <none>
 * Callees:
 *     ?vAltUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C00EE3F4 (-vAltUnlockFast@XDCOBJ@@QEAAXXZ.c)
 *     ??0MDCOBJA@@QEAA@PEAUHDC__@@H@Z @ 0x1C00EE53C (--0MDCOBJA@@QEAA@PEAUHDC__@@H@Z.c)
 */

__int64 __fastcall DxgkEngIsRedirectionDC(HDC a1)
{
  unsigned int v1; // ebx
  __int64 *v3[3]; // [rsp+20h] [rbp-18h] BYREF

  MDCOBJA::MDCOBJA((MDCOBJA *)v3, a1);
  if ( v3[0] )
    v1 = *((_DWORD *)v3[0] + 9) & 0x4000;
  else
    v1 = 1;
  if ( v3[0] )
    XDCOBJ::vAltUnlockFast(v3);
  return v1;
}
