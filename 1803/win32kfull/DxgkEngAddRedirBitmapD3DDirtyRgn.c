/*
 * XREFs of DxgkEngAddRedirBitmapD3DDirtyRgn @ 0x1C0242B00
 * Callers:
 *     <none>
 * Callees:
 *     ??0MDCOBJA@@QEAA@PEAUHDC__@@H@Z @ 0x1C0009328 (--0MDCOBJA@@QEAA@PEAUHDC__@@H@Z.c)
 *     ?vAltUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C008FD94 (-vAltUnlockFast@XDCOBJ@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C013D370 (_guard_dispatch_icall_nop.c)
 *     GreAddBitmapD3DDirtyRgn @ 0x1C023C0C4 (GreAddBitmapD3DDirtyRgn.c)
 */

void __fastcall DxgkEngAddRedirBitmapD3DDirtyRgn(HDC a1, __int64 a2)
{
  __int64 v3; // rbx
  __int64 v4; // rdx
  __int64 v5; // rcx
  void (__fastcall *v6)(__int64, __int64); // rax
  _QWORD v7[3]; // [rsp+20h] [rbp-18h] BYREF

  MDCOBJA::MDCOBJA((MDCOBJA *)v7, a1);
  v3 = v7[0];
  if ( v7[0] )
  {
    v4 = *(_QWORD *)(v7[0] + 48LL);
    if ( v4 )
    {
      v5 = *(_QWORD *)(v7[0] + 504LL);
      if ( (*(_DWORD *)(v5 + 116) & 1) != 0 )
      {
        ++*(_DWORD *)(v5 + 92);
        v6 = *(void (__fastcall **)(__int64, __int64))(v4 + 3464);
        if ( v6 )
          v6((*(_QWORD *)(v3 + 504) + 24LL) & -(__int64)(*(_QWORD *)(v3 + 504) != 0LL), a2);
      }
    }
    if ( a2 )
      GreAddBitmapD3DDirtyRgn(*(HWND *)(v3 + 480), *(_DWORD *)a2, *(struct _RECTL **)(a2 + 8));
    XDCOBJ::vAltUnlockFast((XDCOBJ *)v7);
  }
}
