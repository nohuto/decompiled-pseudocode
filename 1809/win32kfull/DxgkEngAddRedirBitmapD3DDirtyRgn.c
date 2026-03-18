/*
 * XREFs of DxgkEngAddRedirBitmapD3DDirtyRgn @ 0x1C025A8B0
 * Callers:
 *     <none>
 * Callees:
 *     ??0DCOBJA@@QEAA@PEAUHDC__@@@Z @ 0x1C0010EB8 (--0DCOBJA@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDWMSPRITEREF@@@@QEAA@XZ @ 0x1C015E8E8 (--1-$UnexpectedThreadTerminationHandler@VDWMSPRITEREF@@@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C01632C0 (_guard_dispatch_icall_nop.c)
 *     GreAddBitmapD3DDirtyRgn @ 0x1C0253244 (GreAddBitmapD3DDirtyRgn.c)
 */

__int64 __fastcall DxgkEngAddRedirBitmapD3DDirtyRgn(HDC a1, __int64 a2)
{
  __int64 *v3; // rcx
  __int64 v4; // r8
  __int64 v5; // rdx
  void (__fastcall *v6)(__int64, __int64); // rax
  __int64 v7; // rbx
  __int64 *v9; // [rsp+20h] [rbp-38h] BYREF
  _BYTE v10[40]; // [rsp+30h] [rbp-28h] BYREF
  int v11; // [rsp+70h] [rbp+18h] BYREF

  DCOBJA::DCOBJA((DCOBJA *)&v9, a1);
  v3 = v9;
  if ( v9 )
  {
    v4 = v9[6];
    if ( v4 )
    {
      v5 = v9[62];
      if ( (*(_DWORD *)(v5 + 116) & 1) != 0 )
      {
        ++*(_DWORD *)(v5 + 92);
        v6 = *(void (__fastcall **)(__int64, __int64))(v4 + 3472);
        v3 = v9;
        if ( v6 )
        {
          v6((v9[62] + 24) & -(__int64)(v9[62] != 0), a2);
          v3 = v9;
        }
      }
    }
    if ( a2 )
    {
      GreAddBitmapD3DDirtyRgn((HWND)v3[59], *(_DWORD *)a2, *(struct _RECTL **)(a2 + 8));
      v3 = v9;
    }
    if ( v3 )
    {
      v11 = 0;
      v7 = *v3;
      HmgDecrementShareReferenceCountEx(v3, &v11);
      if ( v11 )
        bDeleteDCInternalEx(v7, 0LL);
    }
  }
  return UnexpectedThreadTerminationHandler<DWMSPRITEREF>::~UnexpectedThreadTerminationHandler<DWMSPRITEREF>((__int64)v10);
}
