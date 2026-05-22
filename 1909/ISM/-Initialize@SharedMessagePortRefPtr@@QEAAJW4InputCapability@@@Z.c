/*
 * XREFs of ?Initialize@SharedMessagePortRefPtr@@QEAAJW4InputCapability@@@Z @ 0x180147AEC
 * Callers:
 *     ?RuntimeClassInitialize@HotKeyProcessor@@QEAAJPEAUIHotkeyProcessorOwner@@@Z @ 0x180146EE4 (-RuntimeClassInitialize@HotKeyProcessor@@QEAAJPEAUIHotkeyProcessorOwner@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800378B0 (_guard_dispatch_icall_nop.c)
 *     McTemplateU0sqq @ 0x18005A424 (McTemplateU0sqq.c)
 *     ?Assign@SharedMessagePortRefPtr@@IEAAPEAUIMessagePortStore@@PEAU2@@Z @ 0x180147A98 (-Assign@SharedMessagePortRefPtr@@IEAAPEAUIMessagePortStore@@PEAU2@@Z.c)
 *     ?SecurityShim_SharedMessagePortSecurity@@YAJPEAPEAX@Z @ 0x180169B9C (-SecurityShim_SharedMessagePortSecurity@@YAJPEAPEAX@Z.c)
 */

__int64 __fastcall SharedMessagePortRefPtr::Initialize(SharedMessagePortRefPtr *a1)
{
  int v2; // eax
  __int64 v3; // rdx
  __int64 v4; // rcx
  unsigned int v5; // ebx
  __int64 v6; // r9
  int v7; // eax
  __int64 v8; // rdx
  __int64 v9; // rcx
  const wchar_t *v10; // rax
  const wchar_t *v11; // rdx
  int v12; // ecx
  HLOCAL hMem; // [rsp+30h] [rbp-20h] BYREF
  unsigned int v15; // [rsp+38h] [rbp-18h] BYREF
  const wchar_t *v16; // [rsp+40h] [rbp-10h]
  struct IMessagePortStore *v17; // [rsp+80h] [rbp+30h] BYREF
  __int64 v18; // [rsp+88h] [rbp+38h] BYREF

  v18 = 0LL;
  v17 = 0LL;
  hMem = 0LL;
  v2 = CoreUIClientCreate(&v18);
  v5 = v2;
  if ( v2 < 0 )
  {
    if ( (Microsoft_WindowsPhone_InputEnableBits & 1) == 0 )
      goto LABEL_22;
    v6 = 112LL;
LABEL_4:
    McTemplateU0sqq(v4, v3, "SharedMessagePortRefPtr::Initialize", v6, v2);
    goto LABEL_22;
  }
  v2 = (*(__int64 (__fastcall **)(__int64, struct IMessagePortStore **))(*(_QWORD *)v18 + 56LL))(v18, &v17);
  v5 = v2;
  if ( v2 < 0 )
  {
    if ( (Microsoft_WindowsPhone_InputEnableBits & 1) == 0 )
      goto LABEL_22;
    v6 = 115LL;
    goto LABEL_4;
  }
  v7 = SecurityShim_SharedMessagePortSecurity(&hMem);
  v5 = v7 | 0x10000000;
  if ( v7 >= 0 )
  {
    v10 = L"Input\\Core.AlpcPort\\Server";
    if ( L"Input\\Core.AlpcPort\\Server" )
    {
      v11 = L"Input\\Core.AlpcPort\\Server";
      v16 = L"Input\\Core.AlpcPort\\Server";
      v12 = 0;
      while ( *v10 )
      {
        ++v10;
        ++v12;
      }
      v15 = v12 | 0x80000000;
    }
    else
    {
      v11 = 0LL;
      v16 = 0LL;
    }
    v2 = (*(__int64 (__fastcall **)(struct IMessagePortStore *, unsigned __int64, HLOCAL, __int64))(*(_QWORD *)v17 + 24LL))(
           v17,
           (unsigned __int64)&v15 & -(__int64)(v11 != 0LL),
           hMem,
           (__int64)a1 + 8);
    v5 = v2;
    if ( v2 >= 0 )
    {
      SharedMessagePortRefPtr::Assign(a1, v17);
      goto LABEL_22;
    }
    if ( (Microsoft_WindowsPhone_InputEnableBits & 1) == 0 )
      goto LABEL_22;
    v6 = 123LL;
    goto LABEL_4;
  }
  if ( (Microsoft_WindowsPhone_InputEnableBits & 1) != 0 )
    McTemplateU0sqq(v9, v8, "SharedMessagePortRefPtr::Initialize", 118LL, v7);
LABEL_22:
  if ( v18 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 16LL))(v18);
    v18 = 0LL;
  }
  if ( v17 )
  {
    (*(void (__fastcall **)(struct IMessagePortStore *))(*(_QWORD *)v17 + 16LL))(v17);
    v17 = 0LL;
  }
  LocalFree(hMem);
  return v5;
}
