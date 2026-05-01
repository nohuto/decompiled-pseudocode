/*
 * XREFs of ?Contains@CImmersiveAppArray@@UEAAJPEAUIImmersiveApplication@@PEAH@Z @ 0x180122F90
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800609CC (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CImmersiveAppArray::Contains(CImmersiveAppArray *this, struct IImmersiveApplication *a2, int *a3)
{
  unsigned int v6; // ebx
  unsigned int v8; // [rsp+60h] [rbp+8h] BYREF
  __int64 v9; // [rsp+70h] [rbp+18h] BYREF

  *a3 = 0;
  if ( (*(int (__fastcall **)(CImmersiveAppArray *, unsigned int *))(*(_QWORD *)this + 24LL))(this, &v8) >= 0 )
  {
    v6 = 0;
    if ( v8 )
    {
      while ( 1 )
      {
        v9 = 0LL;
        if ( (*(int (__fastcall **)(CImmersiveAppArray *, _QWORD, GUID *, __int64 *))(*(_QWORD *)this + 32LL))(
               this,
               v6,
               &GUID_8b14e88b_5663_4caf_b196_c31479262831,
               &v9) >= 0
          && (*(int (__fastcall **)(__int64, struct IImmersiveApplication *, int *))(*(_QWORD *)v9 + 104LL))(v9, a2, a3) >= 0
          && *a3 )
        {
          break;
        }
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v9);
        if ( ++v6 >= v8 )
          return 0LL;
      }
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v9);
    }
  }
  return 0LL;
}
