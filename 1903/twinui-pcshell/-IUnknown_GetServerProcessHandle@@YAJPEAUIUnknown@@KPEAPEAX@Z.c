/*
 * XREFs of ?IUnknown_GetServerProcessHandle@@YAJPEAUIUnknown@@KPEAPEAX@Z @ 0x180076548
 * Callers:
 *     ?GetSiHostProcessHandle@@YAJKPEAPEAX@Z @ 0x1800764B0 (-GetSiHostProcessHandle@@YAJKPEAPEAX@Z.c)
 *     ?_CreateFrameManager@CApplicationFrameService@@AEAAJW4CallContext@1@@Z @ 0x18013E808 (-_CreateFrameManager@CApplicationFrameService@@AEAAJW4CallContext@1@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800609CC (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 *     ?ResultFromKnownLastError@@YAJXZ @ 0x180116D70 (-ResultFromKnownLastError@@YAJXZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall IUnknown_GetServerProcessHandle(struct IUnknown *a1, DWORD a2, void **a3)
{
  HRESULT (__stdcall *QueryInterface)(IUnknown *, const IID *const, void **); // rbx
  int v7; // ebx
  HANDLE v8; // rax
  DWORD dwProcessId; // [rsp+50h] [rbp+8h] BYREF
  __int64 v11; // [rsp+60h] [rbp+18h] BYREF

  *a3 = 0LL;
  dwProcessId = 0;
  v11 = 0LL;
  QueryInterface = a1->lpVtbl->QueryInterface;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v11);
  v7 = ((__int64 (__fastcall *)(struct IUnknown *, GUID *, __int64 *))QueryInterface)(
         a1,
         &GUID_5524fe34_8da7_40a8_8165_e8b37a8b4a4b,
         &v11);
  if ( v7 >= 0 )
    v7 = (*(__int64 (__fastcall **)(__int64, DWORD *))(*(_QWORD *)v11 + 24LL))(v11, &dwProcessId);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v11);
  if ( v7 >= 0 )
  {
    v8 = OpenProcess(a2, 0, dwProcessId);
    *a3 = v8;
    if ( v8 )
      return 0;
    else
      return (unsigned int)ResultFromKnownLastError();
  }
  return (unsigned int)v7;
}
