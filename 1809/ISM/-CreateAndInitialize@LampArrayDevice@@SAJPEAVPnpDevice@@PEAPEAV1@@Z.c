/*
 * XREFs of ?CreateAndInitialize@LampArrayDevice@@SAJPEAVPnpDevice@@PEAPEAV1@@Z @ 0x180073F24
 * Callers:
 *     ?OnLampArrayAdded@LampArrayRawInputProvider@@QEAAJPEAVPnpDevice@@@Z @ 0x180070764 (-OnLampArrayAdded@LampArrayRawInputProvider@@QEAAJPEAVPnpDevice@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003590 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Initialize@LampArrayDevice@@AEAAJPEAVPnpDevice@@@Z @ 0x1800740AC (-Initialize@LampArrayDevice@@AEAAJPEAVPnpDevice@@@Z.c)
 *     memset_0 @ 0x18012BDEE (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall LampArrayDevice::CreateAndInitialize(struct PnpDevice *a1, struct LampArrayDevice **a2)
{
  char *v4; // rax
  char *v5; // rbx
  int v7; // eax
  unsigned int v8; // edi
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v4 = (char *)malloc(0xD0uLL);
  v5 = v4;
  if ( v4 )
  {
    memset_0(v4, 0, 0xD0uLL);
    *(_QWORD *)v5 = &RefCountedObject::`vftable';
    *((_DWORD *)v5 + 2) = 1;
    *(_QWORD *)v5 = &LampArrayDevice::`vftable';
    *((_QWORD *)v5 + 2) = 0LL;
    *((_QWORD *)v5 + 3) = 0LL;
    *((_QWORD *)v5 + 6) = 0LL;
    *((_QWORD *)v5 + 5) = v5 + 32;
    *((_QWORD *)v5 + 4) = v5 + 32;
    InitializeCriticalSectionEx((LPCRITICAL_SECTION)(v5 + 56), 0, 0);
    *((_QWORD *)v5 + 12) = 0LL;
    InitializeCriticalSectionEx((LPCRITICAL_SECTION)(v5 + 104), 0, 0);
    v5[144] = 0;
    *((_QWORD *)v5 + 19) = 0x3FF0000000000000LL;
    *((_QWORD *)v5 + 20) = 0LL;
    *((_QWORD *)v5 + 21) = 0LL;
    *((_QWORD *)v5 + 22) = 0LL;
  }
  else
  {
    v5 = 0LL;
  }
  if ( v5 )
  {
    v7 = LampArrayDevice::Initialize((LampArrayDevice *)v5, a1);
    v8 = v7;
    if ( v7 >= 0 )
    {
      *a2 = (struct LampArrayDevice *)v5;
      return 0LL;
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x24,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\lamparraydevice.cpp",
        (const char *)(unsigned int)v7);
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)v5 + 2, 0xFFFFFFFF) == 1 )
      {
        *((_DWORD *)v5 + 2) = 1;
        (*(void (__fastcall **)(char *))(*(_QWORD *)v5 + 32LL))(v5);
        *((_DWORD *)v5 + 2) = 0;
        (*(void (__fastcall **)(char *, __int64))(*(_QWORD *)v5 + 24LL))(v5, 1LL);
      }
      return v8;
    }
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x22,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\lamparraydevice.cpp",
      (const char *)0x8007000ELL);
    return 2147942414LL;
  }
}
