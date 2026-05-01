/*
 * XREFs of ?GetImmersiveApplicationArray@CApplicationManager@@UEAAJPEAPEAUIImmersiveApplicationArray@@@Z @ 0x1800633D0
 * Callers:
 *     <none>
 * Callees:
 *     ?s_CreateInstance@CImmersiveAppArray@@SAJAEBU_GUID@@PEAPEAX@Z @ 0x18001B3DC (-s_CreateInstance@CImmersiveAppArray@@SAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800609CC (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CApplicationManager::GetImmersiveApplicationArray(
        CApplicationManager *this,
        struct IImmersiveApplicationArray **a2)
{
  RTL_SRWLOCK *v4; // rdi
  const struct _GUID *v5; // rcx
  int v6; // ebx
  void *v7; // rbx
  unsigned __int64 v8; // r14
  unsigned __int64 i; // rsi
  void *v11; // [rsp+30h] [rbp-10h] BYREF
  int v12; // [rsp+80h] [rbp+40h]
  void *v13; // [rsp+88h] [rbp+48h] BYREF
  PSRWLOCK v14; // [rsp+90h] [rbp+50h]

  v4 = CApplicationManagerUtility::g_pIAMGlobals;
  v14 = CApplicationManagerUtility::g_pIAMGlobals;
  AcquireSRWLockShared(CApplicationManagerUtility::g_pIAMGlobals);
  *a2 = 0LL;
  v13 = 0LL;
  v6 = CImmersiveAppArray::s_CreateInstance(v5, &v13);
  v12 = v6;
  if ( v6 >= 0 )
  {
    v7 = v13;
    v11 = v13;
    if ( v13 )
      (*(void (__fastcall **)(void *))(*(_QWORD *)v13 + 8LL))(v13);
    v8 = *((_QWORD *)this + 59);
    for ( i = 0LL; i < v8; ++i )
    {
      v12 = (*(__int64 (__fastcall **)(void *, _QWORD))(*(_QWORD *)v7 + 64LL))(
              v7,
              *(_QWORD *)(*((_QWORD *)this + 58) + 8 * i));
      if ( v12 < 0 )
        break;
    }
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v11);
    v6 = v12;
    if ( v12 >= 0 )
      v6 = (**(__int64 (__fastcall ***)(void *, GUID *, struct IImmersiveApplicationArray **))v13)(
             v13,
             &GUID_c6ed6dac_8fac_4598_a74c_69020137149c,
             a2);
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v13);
  if ( v4 )
    ReleaseSRWLockShared(v4);
  return (unsigned int)v6;
}
