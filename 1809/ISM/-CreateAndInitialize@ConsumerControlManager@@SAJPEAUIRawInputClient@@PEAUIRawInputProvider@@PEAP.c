/*
 * XREFs of ?CreateAndInitialize@ConsumerControlManager@@SAJPEAUIRawInputClient@@PEAUIRawInputProvider@@PEAPEAV1@@Z @ 0x180072680
 * Callers:
 *     ?Create@LampArrayRawInputProvider@@SAJPEAUIRawInputClient@@KPEAPEAUIRawInputProvider@@@Z @ 0x180070530 (-Create@LampArrayRawInputProvider@@SAJPEAUIRawInputClient@@KPEAPEAUIRawInputProvider@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003590 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1800035C4 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     ?Release@ConsumerControlManager@@UEAAKXZ @ 0x180072920 (-Release@ConsumerControlManager@@UEAAKXZ.c)
 *     memset_0 @ 0x18012BDEE (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall ConsumerControlManager::CreateAndInitialize(
        struct IRawInputClient *a1,
        struct IRawInputProvider *a2,
        ULONG_PTR *a3)
{
  void *v6; // rax
  ULONG_PTR v7; // rbx
  struct IRawInputClient *v9; // rcx
  struct IRawInputProvider *v10; // rcx
  __int64 v11; // rcx
  int v12; // eax
  int v13; // edi
  HMODULE *v14; // rsi
  const char *v15; // r9
  signed int LastError; // eax
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  v6 = malloc(0x88uLL);
  v7 = (ULONG_PTR)v6;
  if ( v6 )
  {
    memset_0(v6, 0, 0x88uLL);
    *(_QWORD *)v7 = &RefCountedObject::`vftable';
    *(_DWORD *)(v7 + 8) = 1;
    *(_QWORD *)v7 = &ConsumerControlManager::`vftable';
    *(_QWORD *)(v7 + 32) = 0LL;
    *(_QWORD *)(v7 + 24) = v7 + 16;
    *(_QWORD *)(v7 + 16) = v7 + 16;
    *(_QWORD *)(v7 + 56) = 0LL;
    *(_QWORD *)(v7 + 48) = v7 + 40;
    *(_QWORD *)(v7 + 40) = v7 + 40;
    *(_QWORD *)(v7 + 80) = 0LL;
    *(_QWORD *)(v7 + 72) = v7 + 64;
    *(_QWORD *)(v7 + 64) = v7 + 64;
    *(_QWORD *)(v7 + 88) = 0LL;
    *(_QWORD *)(v7 + 96) = 0LL;
    *(_BYTE *)(v7 + 104) = 0;
    *(_QWORD *)(v7 + 112) = 0LL;
    *(_QWORD *)(v7 + 120) = 0LL;
    *(_QWORD *)(v7 + 128) = 0LL;
  }
  else
  {
    v7 = 0LL;
  }
  if ( v7 )
  {
    v9 = *(struct IRawInputClient **)(v7 + 112);
    if ( v9 != a1 )
    {
      if ( a1 )
      {
        (*(void (__fastcall **)(struct IRawInputClient *))(*(_QWORD *)a1 + 8LL))(a1);
        v9 = *(struct IRawInputClient **)(v7 + 112);
      }
      *(_QWORD *)(v7 + 112) = a1;
      if ( v9 )
        (*(void (__fastcall **)(struct IRawInputClient *))(*(_QWORD *)v9 + 16LL))(v9);
    }
    v10 = *(struct IRawInputProvider **)(v7 + 128);
    if ( v10 != a2 )
    {
      if ( a2 )
      {
        (*(void (__fastcall **)(struct IRawInputProvider *))(*(_QWORD *)a2 + 8LL))(a2);
        v10 = *(struct IRawInputProvider **)(v7 + 128);
      }
      *(_QWORD *)(v7 + 128) = a2;
      if ( v10 )
        (*(void (__fastcall **)(struct IRawInputProvider *))(*(_QWORD *)v10 + 16LL))(v10);
    }
    v11 = *(_QWORD *)(v7 + 120);
    if ( v11 )
    {
      *(_QWORD *)(v7 + 120) = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
    }
    v12 = CoreUICreate(v7 + 120);
    v13 = v12;
    if ( v12 >= 0 )
    {
      v14 = (HMODULE *)(v7 + 88);
      if ( GetModuleHandleExW(4u, (LPCWSTR)ConsumerControlManager::WorkerThreadProcThunk, (HMODULE *)(v7 + 88)) )
      {
        _InterlockedIncrement((volatile signed __int32 *)(v7 + 8));
        _InterlockedExchange64(
          (volatile __int64 *)(v7 + 96),
          (__int64)CreateThread(0LL, 0LL, ConsumerControlManager::WorkerThreadProcThunk, (LPVOID)v7, 0, 0LL));
        if ( *(_QWORD *)(v7 + 96) )
        {
          v13 = 0;
        }
        else
        {
          LastError = GetLastError();
          v13 = (unsigned __int16)LastError | 0x80070000;
          if ( LastError <= 0 )
            v13 = LastError;
          FreeLibrary(*v14);
          *v14 = 0LL;
          ConsumerControlManager::Release(v7);
        }
      }
      else
      {
        v13 = wil::details::in1diag3::Return_GetLastError(
                retaddr,
                (void *)0x33,
                (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\consumercontrolmanager.cpp",
                v15);
      }
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x2B,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\consumercontrolmanager.cpp",
        (const char *)(unsigned int)v12);
    }
    if ( v13 >= 0 )
    {
      *a3 = v7;
      return 0LL;
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x21,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\consumercontrolmanager.cpp",
        (const char *)(unsigned int)v13);
      ConsumerControlManager::Release(v7);
      return (unsigned int)v13;
    }
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1C,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\consumercontrolmanager.cpp",
      (const char *)0x8007000ELL);
    return 2147942414LL;
  }
}
