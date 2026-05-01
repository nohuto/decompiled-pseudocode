/*
 * XREFs of ?GetApplication@CImmersiveAppArray@@UEAAJPEBGPEAPEAUIImmersiveApplication@@@Z @ 0x1801231D0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800609CC (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CImmersiveAppArray::GetApplication(
        CImmersiveAppArray *this,
        const unsigned __int16 *a2,
        struct IImmersiveApplication **a3)
{
  unsigned int v6; // ebx
  struct IImmersiveApplication *v7; // rax
  unsigned int v9; // [rsp+70h] [rbp+30h] BYREF
  int v10; // [rsp+80h] [rbp+40h] BYREF
  struct IImmersiveApplication *v11; // [rsp+88h] [rbp+48h] BYREF

  *a3 = 0LL;
  if ( (*(int (__fastcall **)(CImmersiveAppArray *, unsigned int *))(*(_QWORD *)this + 24LL))(this, &v9) >= 0 )
  {
    v6 = 0;
    if ( v9 )
    {
      while ( 1 )
      {
        v11 = 0LL;
        if ( (*(int (__fastcall **)(CImmersiveAppArray *, _QWORD, GUID *, struct IImmersiveApplication **))(*(_QWORD *)this + 32LL))(
               this,
               v6,
               &GUID_8b14e88b_5663_4caf_b196_c31479262831,
               &v11) >= 0
          && (*(int (__fastcall **)(struct IImmersiveApplication *, const unsigned __int16 *, int *))(*(_QWORD *)v11 + 88LL))(
               v11,
               a2,
               &v10) >= 0
          && v10 )
        {
          break;
        }
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v11);
        if ( ++v6 >= v9 )
          return *a3 == 0LL ? 0x8002802B : 0;
      }
      v7 = v11;
      v11 = 0LL;
      *a3 = v7;
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v11);
    }
  }
  return *a3 == 0LL ? 0x8002802B : 0;
}
