/*
 * XREFs of ?OpenOnDevice@CHolographicViewer@@UEAAJPEAUIDXGIDevice@@@Z @ 0x18020EE20
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@VID2DBitmap@@@WRL@Microsoft@@IEAAKXZ @ 0x18001D4F8 (-InternalRelease@-$ComPtr@VID2DBitmap@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1801448EC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall CHolographicViewer::OpenOnDevice(CHolographicViewer *this, struct IDXGIDevice *a2)
{
  char v4; // r14
  HRESULT v5; // eax
  unsigned int v6; // edi
  __int64 v7; // rdx
  __int64 v8; // r9
  void *v9; // rsi
  int v10; // eax
  HANDLE *v12; // [rsp+40h] [rbp-28h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]
  void *ppFactory; // [rsp+70h] [rbp+8h] BYREF

  ppFactory = 0LL;
  v12 = (HANDLE *)((char *)this - 64);
  v4 = 1;
  Microsoft::WRL::ComPtr<ID2DBitmap>::InternalRelease((__int64 *)&ppFactory);
  v5 = CreateDXGIFactory2(0, &GUID_b14887d9_f537_4af5_b379_7d33031be773, &ppFactory);
  v6 = v5;
  if ( v5 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x8A,
      (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\holographic\\holographicviewer.cpp",
      (const char *)(unsigned int)v5);
    goto LABEL_11;
  }
  AcquireSRWLockExclusive((PSRWLOCK)this + 13);
  if ( *((_DWORD *)this + 24) == 3 )
  {
    v6 = -2005270490;
    v7 = 146LL;
    v8 = 2289696806LL;
LABEL_9:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v7,
      (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\holographic\\holographicviewer.cpp",
      (const char *)v8);
    ReleaseSRWLockExclusive((PSRWLOCK)this + 13);
    goto LABEL_11;
  }
  if ( *((_DWORD *)this + 24) != 1 )
  {
    v6 = -2147483635;
    v7 = 149LL;
    v8 = 2147483661LL;
    goto LABEL_9;
  }
  v9 = ppFactory;
  Microsoft::WRL::ComPtr<ID2DBitmap>::InternalRelease((__int64 *)this + 9);
  v10 = (*(__int64 (__fastcall **)(void *, struct IDXGIDevice *, _QWORD, _QWORD, int, int, char *))(*(_QWORD *)v9 + 32LL))(
          v9,
          a2,
          *((_QWORD *)this + 8),
          0LL,
          5,
          0x10000000,
          (char *)this + 72);
  v6 = v10;
  if ( v10 < 0 )
  {
    v8 = (unsigned int)v10;
    v7 = 157LL;
    goto LABEL_9;
  }
  *((_QWORD *)this + 8) = 0LL;
  _InterlockedExchange((volatile __int32 *)this + 24, 2);
  v4 = 0;
  ReleaseSRWLockExclusive((PSRWLOCK)this + 13);
  v6 = 0;
LABEL_11:
  Microsoft::WRL::ComPtr<ID2DBitmap>::InternalRelease((__int64 *)&ppFactory);
  if ( v4 )
  {
    CloseHandle(v12[16]);
    v12[16] = 0LL;
  }
  return v6;
}
