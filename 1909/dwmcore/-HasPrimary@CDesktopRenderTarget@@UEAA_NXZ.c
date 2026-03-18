/*
 * XREFs of ?HasPrimary@CDesktopRenderTarget@@UEAA_NXZ @ 0x1800BDDC0
 * Callers:
 *     <none>
 * Callees:
 *     ?InsertAt@?$DynArray@PEAVCHwndRenderTarget@@$0A@@@QEAAJAEBQEAVCHwndRenderTarget@@I@Z @ 0x1800284F8 (-InsertAt@-$DynArray@PEAVCHwndRenderTarget@@$0A@@@QEAAJAEBQEAVCHwndRenderTarget@@I@Z.c)
 *     ?Remove@?$DynArray@PEAVCHwndRenderTarget@@$0A@@@QEAAHAEBQEAVCHwndRenderTarget@@@Z @ 0x180028570 (-Remove@-$DynArray@PEAVCHwndRenderTarget@@$0A@@@QEAAHAEBQEAVCHwndRenderTarget@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 */

bool __fastcall CDesktopRenderTarget::HasPrimary(CDesktopRenderTarget *this)
{
  __int64 v1; // rsi
  __int64 v2; // rbx
  __int64 *v4; // r14
  __int64 v6; // [rsp+30h] [rbp+8h] BYREF

  v1 = 0LL;
  v2 = 0LL;
  if ( *((_DWORD *)this + 8) )
  {
    v4 = (__int64 *)((char *)this + 8);
    while ( 1 )
    {
      v6 = *(_QWORD *)(*v4 + 8 * v2);
      if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v6 + 256LL))(v6) )
        break;
      v2 = (unsigned int)(v2 + 1);
      if ( (unsigned int)v2 >= *((_DWORD *)this + 8) )
        return v1 != 0;
    }
    if ( (_DWORD)v2 )
    {
      DynArray<CHwndRenderTarget *,0>::Remove(v4, &v6);
      DynArray<CHwndRenderTarget *,0>::InsertAt((__int64)v4, &v6);
    }
    v1 = v6;
  }
  return v1 != 0;
}
