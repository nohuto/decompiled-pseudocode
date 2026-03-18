/*
 * XREFs of ?InitForGdiBlt@CDWMOffScreenSwapChain@@QEAAJAEBUDXGI_SWAP_CHAIN_DESC@@PEBVCDisplay@@@Z @ 0x1800DC9E4
 * Callers:
 *     ?Create@CDWMOffScreenSwapChain@@SAJPEAVCD3DResourceManager@@AEBUDXGI_SWAP_CHAIN_DESC@@W4DXGI_COLOR_SPACE_TYPE@@PEBVCDisplay@@PEAPEAV1@@Z @ 0x1800DC7D0 (-Create@CDWMOffScreenSwapChain@@SAJPEAVCD3DResourceManager@@AEBUDXGI_SWAP_CHAIN_DESC@@W4DXGI_COL.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     memset_0 @ 0x1800E7E5E (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CDWMOffScreenSwapChain::InitForGdiBlt(
        CDWMOffScreenSwapChain *this,
        const struct DXGI_SWAP_CHAIN_DESC *a2,
        const struct CDisplay *a3)
{
  UINT Width; // r14d
  UINT Height; // ebx
  HMODULE LibraryW; // rax
  __int64 v8; // rcx
  FARPROC ProcAddress; // rax
  HMODULE v10; // rcx
  NTSTATUS v11; // edi
  HANDLE CurrentProcess; // rax
  NTSTATUS v13; // edi
  HANDLE v14; // rbx
  HANDLE v15; // rax
  __int64 (__fastcall *v16)(_OWORD *, char *); // rax
  int v17; // eax
  int v18; // edi
  __int64 v19; // rbx
  unsigned int v21; // r9d
  signed int LastError; // eax
  unsigned int SectionPageProtection; // [rsp+20h] [rbp-69h]
  ULONG_PTR ViewSize; // [rsp+50h] [rbp-39h] BYREF
  union _LARGE_INTEGER SectionOffset; // [rsp+58h] [rbp-31h] BYREF
  __int128 v26; // [rsp+60h] [rbp-29h]
  __int128 v27; // [rsp+70h] [rbp-19h]
  _OWORD v28[6]; // [rsp+80h] [rbp-9h] BYREF
  void *SectionHandle; // [rsp+F0h] [rbp+67h] BYREF
  HANDLE TargetHandle; // [rsp+F8h] [rbp+6Fh] BYREF
  union _LARGE_INTEGER MaximumSize; // [rsp+108h] [rbp+7Fh] BYREF

  Width = a2->BufferDesc.Width;
  Height = a2->BufferDesc.Height;
  SectionHandle = 0LL;
  TargetHandle = 0LL;
  LibraryW = LoadLibraryW(L"rdsdwmdr.dll");
  *((_QWORD *)this + 64) = LibraryW;
  if ( LibraryW )
  {
    ProcAddress = GetProcAddress(LibraryW, "DwmIndirectCreate");
    v10 = (HMODULE)*((_QWORD *)this + 64);
    *((_QWORD *)this + 65) = ProcAddress;
    *((_QWORD *)this + 66) = GetProcAddress(v10, "DwmIndirectSetDebugFlag");
  }
  if ( !*((_QWORD *)this + 65) )
  {
    v18 = -2147024809;
    SectionPageProtection = 235;
    goto LABEL_16;
  }
  if ( !*((_QWORD *)this + 55) )
  {
    HIDWORD(v27) = Height;
    MaximumSize.QuadPart = 4 * Width * Height;
    v11 = NtCreateSection(&SectionHandle, 6u, 0LL, &MaximumSize, 4u, 0x8000000u, 0LL);
    if ( v11 < 0 )
    {
      v18 = v11 | 0x10000000;
      SectionPageProtection = 260;
    }
    else
    {
      *((_QWORD *)this + 55) = SectionHandle;
      ViewSize = 0LL;
      SectionOffset.QuadPart = 0LL;
      CurrentProcess = GetCurrentProcess();
      v13 = NtMapViewOfSection(
              *((HANDLE *)this + 55),
              CurrentProcess,
              (PVOID *)this + 56,
              0LL,
              0LL,
              &SectionOffset,
              &ViewSize,
              ViewUnmap,
              0,
              4u);
      if ( v13 >= 0 )
        goto LABEL_7;
      v18 = v13 | 0x10000000;
      SectionPageProtection = 278;
    }
LABEL_16:
    v21 = v18;
LABEL_23:
    MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, v21, SectionPageProtection, 0LL);
    return (unsigned int)v18;
  }
  HIDWORD(v27) = -Height;
LABEL_7:
  SetLastError(0);
  v14 = GetCurrentProcess();
  v15 = GetCurrentProcess();
  if ( !DuplicateHandle(v15, *((HANDLE *)this + 55), v14, &TargetHandle, 0, 0, 2u) )
  {
    LastError = GetLastError();
    v18 = LastError;
    if ( LastError > 0 )
      v18 = (unsigned __int16)LastError | 0x80070000;
    SectionPageProtection = 293;
    if ( v18 >= 0 )
      v18 = -2003304445;
    goto LABEL_16;
  }
  *(_QWORD *)&v26 = TargetHandle;
  DWORD2(v27) = Width;
  *(_QWORD *)&v27 = (char *)a3 + 160;
  v16 = (__int64 (__fastcall *)(_OWORD *, char *))*((_QWORD *)this + 65);
  v28[0] = v26;
  v28[1] = v27;
  v17 = v16(v28, (char *)this + 536);
  v18 = v17;
  if ( v17 < 0 )
  {
    v21 = v17;
    SectionPageProtection = 302;
    goto LABEL_23;
  }
  (***((void (__fastcall ****)(_QWORD, GUID *, char *))this + 67))(
    *((_QWORD *)this + 67),
    &IID_IDWMRemotingIndirectEx,
    (char *)this + 544);
  v19 = *((_QWORD *)this + 68);
  if ( v19 && *((_DWORD *)g_pComposition + 274) == 6 )
  {
    memset_0(v28, 0, 0x30uLL);
    LODWORD(v28[0]) = 7;
    (*(void (__fastcall **)(__int64, _OWORD *, __int64))(*(_QWORD *)v19 + 56LL))(v19, v28, 1LL);
  }
  return (unsigned int)v18;
}
