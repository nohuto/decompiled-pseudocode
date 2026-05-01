/*
 * XREFs of CImmersiveApp::CImmersiveWindowCollection::ForEach__lambda_0758695e4094b81417177289bdc77534___ @ 0x18015F6C0
 * Callers:
 *     ?NotifyApplicationWindows@CImmersiveApp@@UEAAJI_K_JW4NOTIFY_IMMERSIVE_APPLICATION_WINDOWS_OPTION@@W4NOTIFY_IMMERSIVE_APPLICATION_WINDOWS_DELIVERY_TYPE@@@Z @ 0x1801662D0 (-NotifyApplicationWindows@CImmersiveApp@@UEAAJI_K_JW4NOTIFY_IMMERSIVE_APPLICATION_WINDOWS_OPTION.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 *     ?NotifyWindow@CApplicationManagerUtility@@YAJPEAUHWND__@@I_K_JW4DELIVERY_METHOD@1@@Z @ 0x180140B88 (-NotifyWindow@CApplicationManagerUtility@@YAJPEAUHWND__@@I_K_JW4DELIVERY_METHOD@1@@Z.c)
 */

__int64 __fastcall CImmersiveApp::CImmersiveWindowCollection::ForEach__lambda_0758695e4094b81417177289bdc77534___(
        __int64 a1,
        __int64 a2)
{
  __int64 result; // rax
  unsigned __int64 v3; // rbp
  unsigned __int64 v4; // rdi
  char v7; // bl
  __int64 v8; // rcx
  int v9; // eax
  HWND v10; // rax
  _UNKNOWN *retaddr; // [rsp+38h] [rbp+0h] BYREF

  result = (__int64)&retaddr;
  v3 = *(_QWORD *)(a1 + 176);
  v4 = 0LL;
  v7 = 1;
  while ( v4 < v3 )
  {
    if ( !v7 )
      break;
    v7 = 1;
    v9 = *(_DWORD *)(a2 + 24);
    if ( v9 != 1 )
    {
      result = (unsigned int)(v9 - 2);
      v7 = 0;
      if ( (unsigned int)result > 1 )
        continue;
    }
    v8 = *(_QWORD *)(*(_QWORD *)(a1 + 168) + 8 * v4);
    v10 = (HWND)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v8 + 32LL))(v8);
    result = CApplicationManagerUtility::NotifyWindow(
               v10,
               *(_DWORD *)a2,
               *(_QWORD *)(a2 + 8),
               *(_QWORD *)(a2 + 16),
               *(_DWORD *)(a2 + 32));
    ++v4;
  }
  return result;
}
