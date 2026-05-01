/*
 * XREFs of ?_GetVisibleApp@CFallbackWindow@@AEAAJPEAPEAUIImmersiveApplication@@@Z @ 0x180143A34
 * Callers:
 *     ?GetPropertyValue@CFallbackWindow@@UEAAJHPEAUtagVARIANT@@@Z @ 0x1801431A0 (-GetPropertyValue@CFallbackWindow@@UEAAJHPEAUtagVARIANT@@@Z.c)
 *     ?Invoke@CFallbackWindow@@UEAAJXZ @ 0x180143470 (-Invoke@CFallbackWindow@@UEAAJXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006145C (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CFallbackWindow::_GetVisibleApp(CFallbackWindow *this, struct IImmersiveApplication **a2)
{
  __int64 (__fastcall ***v3)(_QWORD, GUID *, __int64 *); // rdi
  __int64 (__fastcall *v4)(_QWORD, GUID *, __int64 *); // rbx
  int v5; // esi
  __int64 v6; // rbx
  __int64 (__fastcall *v7)(__int64, __int64 *); // rdi
  unsigned int v8; // r14d
  __int64 v9; // rbx
  int (__fastcall *v10)(__int64, _QWORD, GUID *, __int64 *); // rdi
  __int64 v12[3]; // [rsp+30h] [rbp-18h] BYREF
  unsigned int v13; // [rsp+80h] [rbp+38h] BYREF
  int v14; // [rsp+88h] [rbp+40h] BYREF
  __int64 v15; // [rsp+90h] [rbp+48h] BYREF
  __int64 v16; // [rsp+98h] [rbp+50h] BYREF

  v12[1] = -2LL;
  *a2 = 0LL;
  v12[0] = 0LL;
  v3 = (__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *))*((_QWORD *)this + 2);
  v4 = **v3;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v12);
  v5 = v4(v3, &GUID_a3c23ab7_6be2_4778_8eb0_1adb7977f76a, v12);
  if ( v5 >= 0 )
  {
    v16 = 0LL;
    v6 = v12[0];
    v7 = *(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v12[0] + 24LL);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v16);
    v5 = v7(v6, &v16);
    if ( v5 >= 0 )
    {
      v5 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v16 + 24LL))(v16, &v13);
      if ( v5 >= 0 )
      {
        v5 = -2147023728;
        v8 = 0;
        if ( v13 )
        {
          while ( 1 )
          {
            v15 = 0LL;
            v9 = v16;
            v10 = *(int (__fastcall **)(__int64, _QWORD, GUID *, __int64 *))(*(_QWORD *)v16 + 32LL);
            Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v15);
            if ( v10(v9, v8, &GUID_8b14e88b_5663_4caf_b196_c31479262831, &v15) >= 0
              && (*(int (__fastcall **)(__int64, int *))(*(_QWORD *)v15 + 64LL))(v15, &v14) >= 0
              && v14 )
            {
              break;
            }
            Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v15);
            if ( ++v8 >= v13 )
              goto LABEL_11;
          }
          v5 = (**(__int64 (__fastcall ***)(__int64, GUID *, struct IImmersiveApplication **))v15)(
                 v15,
                 &GUID_8b14e88b_5663_4caf_b196_c31479262831,
                 a2);
          Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v15);
        }
      }
    }
LABEL_11:
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v16);
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v12);
  return (unsigned int)v5;
}
