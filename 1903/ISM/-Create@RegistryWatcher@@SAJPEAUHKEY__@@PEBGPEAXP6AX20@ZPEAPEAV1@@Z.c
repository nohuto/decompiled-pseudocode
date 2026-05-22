/*
 * XREFs of ?Create@RegistryWatcher@@SAJPEAUHKEY__@@PEBGPEAXP6AX20@ZPEAPEAV1@@Z @ 0x18001616C
 * Callers:
 *     ?Initialize@InputStateManager@@IEAAJXZ @ 0x1800104BC (-Initialize@InputStateManager@@IEAAJXZ.c)
 *     ?Initialize@GameInputConfig@@SAXXZ @ 0x180029B44 (-Initialize@GameInputConfig@@SAXXZ.c)
 *     ?Initialize@MouseProcessor@@IEAAJXZ @ 0x180029E90 (-Initialize@MouseProcessor@@IEAAJXZ.c)
 *     ?Initialize@ControllerProcessor@@IEAAJXZ @ 0x18007615C (-Initialize@ControllerProcessor@@IEAAJXZ.c)
 *     ?Initialize@EdgeGestureMetrics@@SAXXZ @ 0x180102CA4 (-Initialize@EdgeGestureMetrics@@SAXXZ.c)
 *     ?Initialize@ButtonProcessor@@IEAAJXZ @ 0x180124E78 (-Initialize@ButtonProcessor@@IEAAJXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180010FD4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Initialize@RegistryWatcher@@IEAAJPEAUHKEY__@@PEBG@Z @ 0x1800123E8 (-Initialize@RegistryWatcher@@IEAAJPEAUHKEY__@@PEBG@Z.c)
 *     ?InternalRelease@?$ComPtr@VInputRedirectionProcessor@@@WRL@Microsoft@@IEAAKXZ @ 0x180027E34 (-InternalRelease@-$ComPtr@VInputRedirectionProcessor@@@WRL@Microsoft@@IEAAKXZ.c)
 *     memset_0 @ 0x18002C3EE (memset_0.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall RegistryWatcher::Create(
        HKEY a1,
        const unsigned __int16 *a2,
        void *a3,
        void (*a4)(void *, HKEY),
        struct RegistryWatcher **a5)
{
  struct RegistryWatcher **v8; // rsi
  _DWORD *v9; // rax
  HKEY v10; // rdx
  _DWORD *v11; // rbx
  int v12; // eax
  unsigned int v13; // edi
  __int64 v14; // r9
  __int64 v15; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  _DWORD *v18; // [rsp+50h] [rbp+8h] BYREF

  v18 = 0LL;
  v8 = a5;
  if ( a5 )
  {
    v9 = malloc(0x38uLL);
    v11 = v9;
    if ( v9 )
      memset_0(v9, 0, 0x38uLL);
    if ( v11 )
    {
      *(_QWORD *)v11 = &RefCountedObject::`vftable';
      v11[2] = 1;
      *(_QWORD *)v11 = &RegistryWatcher::`vftable';
      *((_QWORD *)v11 + 2) = 0LL;
      *((_QWORD *)v11 + 5) = a3;
      *((_QWORD *)v11 + 6) = a4;
    }
    v18 = v11;
    if ( v11 )
    {
      v12 = RegistryWatcher::Initialize((HKEY *)v11, v10, a2);
      v13 = v12;
      if ( v12 >= 0 )
      {
        v18 = 0LL;
        *v8 = (struct RegistryWatcher *)v11;
        v13 = 0;
        goto LABEL_10;
      }
      v14 = (unsigned int)v12;
      v15 = 111LL;
    }
    else
    {
      v13 = -2147024882;
      v14 = 2147942414LL;
      v15 = 108LL;
    }
  }
  else
  {
    v13 = -2147024809;
    v14 = 2147942487LL;
    v15 = 101LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v15,
    (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\utilities\\registrywatcher\\lib\\registrywatcher.cpp",
    (const char *)v14);
LABEL_10:
  Microsoft::WRL::ComPtr<InputRedirectionProcessor>::InternalRelease(&v18);
  return v13;
}
