/*
 * XREFs of ?GetSwapChainTransformForDirtyRects@CVisual@@KA_NPEAVISwapChainContent@@PEAVCMILMatrix@@@Z @ 0x180017CA8
 * Callers:
 *     ?OnChanged@CVisual@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1800671F0 (-OnChanged@CVisual@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?OnChanged@CWindowNode@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1800D3FD0 (-OnChanged@CWindowNode@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1800E7E60 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 */

char __fastcall CVisual::GetSwapChainTransformForDirtyRects(struct ISwapChainContent *a1, struct CMILMatrix *a2)
{
  char v4; // bl
  char v5; // al
  __int64 v6; // r9
  __int64 v8; // rax
  __int64 v9; // rax
  int (__fastcall ***v10)(_QWORD, GUID *, __int64 *); // rcx
  int (__fastcall **v11)(_QWORD, GUID *, __int64 *); // rax
  _BYTE *v12; // rdx
  __int64 v13; // [rsp+40h] [rbp-48h] BYREF
  _BYTE v14[16]; // [rsp+48h] [rbp-40h] BYREF
  _BYTE v15[16]; // [rsp+58h] [rbp-30h] BYREF
  _BYTE v16[16]; // [rsp+68h] [rbp-20h] BYREF

  v4 = 0;
  v5 = (*(__int64 (__fastcall **)(struct ISwapChainContent *))(*(_QWORD *)a1 + 152LL))(a1);
  v6 = *(_QWORD *)a1;
  if ( !v5 )
    return (*(__int64 (__fastcall **)(struct ISwapChainContent *, struct CMILMatrix *, _QWORD))(v6 + 64))(a1, a2, 0LL);
  v8 = (*(__int64 (__fastcall **)(struct ISwapChainContent *))(v6 + 208))(a1);
  if ( v8 )
  {
    v9 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v8 + 40LL))(v8);
    v10 = (int (__fastcall ***)(_QWORD, GUID *, __int64 *))(v9 + 144);
    if ( !v9 )
      v10 = 0LL;
    if ( v10 )
    {
      v11 = *v10;
      v13 = 0LL;
      if ( (*v11)(v10, &GUID_51e2a1f0_4a0d_4788_800f_3cee7a2512a6, &v13) >= 0 )
      {
        v12 = v15;
        LOBYTE(v12) = 1;
        v4 = (*(__int64 (__fastcall **)(__int64, _BYTE *, struct CMILMatrix *, _BYTE *, _BYTE *, _BYTE *))(*(_QWORD *)v13 + 24LL))(
               v13,
               v12,
               a2,
               v16,
               v15,
               v14);
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
      }
    }
  }
  return v4;
}
