/*
 * XREFs of ?GetLastActiveApplication@CImmersiveWindowManager@@UEBAJPEAPEAUIImmersiveApplicationInternal@@@Z @ 0x1800FF600
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180060730 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CImmersiveWindowManager::GetLastActiveApplication(
        CImmersiveWindowManager *this,
        struct IImmersiveApplicationInternal **a2)
{
  unsigned int v4; // ebx
  __int64 v5; // r8
  int v6; // eax
  unsigned int v7; // eax
  struct IImmersiveApplicationInternal *v8; // rcx
  struct IImmersiveApplicationInternal *v10; // [rsp+30h] [rbp+8h] BYREF

  *a2 = 0LL;
  v10 = 0LL;
  v4 = -2147319765;
  if ( *((_BYTE *)this + 89) )
  {
    v5 = *((_QWORD *)this + 8);
    v6 = 0;
    if ( !v5 )
      v6 = -2147319765;
    v4 = v6;
    if ( v5 )
    {
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v10);
      v7 = (****((__int64 (__fastcall *****)(_QWORD, GUID *, __int64 *))this + 7))(
             **((_QWORD **)this + 7),
             &GUID_c9301630_27da_428e_a432_0a5e49c0ffee,
             (__int64 *)&v10);
      v8 = v10;
      v4 = v7;
      v10 = 0LL;
      *a2 = v8;
    }
  }
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v10);
  return v4;
}
