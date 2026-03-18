/*
 * XREFs of DxgkEngGetRedirBitmapSharedHandle @ 0x1C0274DD0
 * Callers:
 *     <none>
 * Callees:
 *     ?vAltUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C00EE3F4 (-vAltUnlockFast@XDCOBJ@@QEAAXXZ.c)
 *     ??0MDCOBJA@@QEAA@PEAUHDC__@@H@Z @ 0x1C00EE53C (--0MDCOBJA@@QEAA@PEAUHDC__@@H@Z.c)
 *     GreGetDxSharedSurface @ 0x1C012258C (GreGetDxSharedSurface.c)
 */

void __fastcall DxgkEngGetRedirBitmapSharedHandle(HDC a1, _QWORD *a2)
{
  __int64 *v3; // rcx
  HWND v4; // rcx
  __int64 v5; // [rsp+30h] [rbp-28h] BYREF
  __int64 *v6[4]; // [rsp+38h] [rbp-20h] BYREF
  __int64 v7; // [rsp+68h] [rbp+10h] BYREF
  int v8; // [rsp+70h] [rbp+18h] BYREF
  __int64 v9; // [rsp+78h] [rbp+20h] BYREF

  MDCOBJA::MDCOBJA((MDCOBJA *)v6, a1);
  v3 = v6[0];
  *a2 = 0LL;
  if ( v3 )
  {
    v4 = (HWND)v3[59];
    LODWORD(v7) = 0;
    v9 = 0LL;
    GreGetDxSharedSurface(v4, a2, &v9, &v8, &v7, &v5);
    XDCOBJ::vAltUnlockFast(v6);
  }
}
