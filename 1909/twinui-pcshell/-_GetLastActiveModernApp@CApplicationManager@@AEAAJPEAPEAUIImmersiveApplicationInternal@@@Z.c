/*
 * XREFs of ?_GetLastActiveModernApp@CApplicationManager@@AEAAJPEAPEAUIImmersiveApplicationInternal@@@Z @ 0x180079F1C
 * Callers:
 *     ?_GetLastActiveModernTimestamp@CApplicationManager@@AEAAJPEAU_FILETIME@@@Z @ 0x180079EB0 (-_GetLastActiveModernTimestamp@CApplicationManager@@AEAAJPEAU_FILETIME@@@Z.c)
 *     ?_GetLastActiveModernWindowForActivation@CApplicationManager@@AEAAJPEAPEAUHWND__@@@Z @ 0x18013BD74 (-_GetLastActiveModernWindowForActivation@CApplicationManager@@AEAAJPEAPEAUHWND__@@@Z.c)
 * Callees:
 *     ??4?$ComPtr@UIImmersiveMonitorManager@@@WRL@Microsoft@@QEAAAEAV012@PEAUIImmersiveMonitorManager@@@Z @ 0x180015428 (--4-$ComPtr@UIImmersiveMonitorManager@@@WRL@Microsoft@@QEAAAEAV012@PEAUIImmersiveMonitorManager@.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006145C (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180065FF0 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CApplicationManager::_GetLastActiveModernApp(
        CApplicationManager *this,
        struct IImmersiveApplicationInternal **a2)
{
  __int64 v4; // rdi
  unsigned __int64 v5; // r12
  unsigned __int64 i; // rsi
  __int64 v7; // r15
  struct IImmersiveApplicationInternal *v8; // rax
  unsigned int v9; // ebx
  int (__fastcall *v11)(__int64, __int64, _QWORD, int *); // rbx
  __int64 v12; // rax
  __int64 v13; // [rsp+40h] [rbp-10h] BYREF
  int v14; // [rsp+90h] [rbp+40h] BYREF
  struct IImmersiveApplicationInternal *v15; // [rsp+98h] [rbp+48h] BYREF

  v15 = 0LL;
  v4 = *((_QWORD *)this + 97);
  v13 = v4;
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 8LL))(v4);
  v5 = *((_QWORD *)this + 80);
  for ( i = 0LL; i < v5; ++i )
  {
    v7 = *(_QWORD *)(*((_QWORD *)this + 79) + 8 * i);
    if ( ((*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v7 + 280LL))(v7) & 4) != 0 )
    {
      if ( !v4
        || (v11 = *(int (__fastcall **)(__int64, __int64, _QWORD, int *))(*(_QWORD *)v4 + 48LL),
            v12 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v7 + 384LL))(v7),
            v11(v4, v12, 0LL, &v14) < 0)
        || v14 != 1 )
      {
        Microsoft::WRL::ComPtr<IImmersiveMonitorManager>::operator=((__int64 *)&v15, v7);
      }
    }
    if ( v15 )
      break;
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v13);
  v8 = v15;
  v15 = 0LL;
  *a2 = v8;
  v9 = v8 == 0LL ? 0x80070490 : 0;
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v15);
  return v9;
}
