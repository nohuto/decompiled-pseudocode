/*
 * XREFs of ?Initialize@CBufferRealization@@IEAAJ_N@Z @ 0x1C0012298
 * Callers:
 *     ?Create@CBufferRealization@@SAJAEBUCSM_REALIZATION_INFO@@_NPEAPEAV1@@Z @ 0x1C00121C0 (-Create@CBufferRealization@@SAJAEBUCSM_REALIZATION_INFO@@_NPEAPEAV1@@Z.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000C320 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0024FA0 (_guard_dispatch_icall_nop.c)
 *     DxgkGetSharedAllocationObjectType @ 0x1C012F190 (DxgkGetSharedAllocationObjectType.c)
 */

__int64 __fastcall CBufferRealization::Initialize(PVOID *this, __int64 a2)
{
  char v2; // si
  struct DXGGLOBAL *Global; // rax
  NTSTATUS v5; // edi
  struct _OBJECT_TYPE *SharedAllocationObjectType; // rax
  PVOID v7; // rax
  PVOID Object; // [rsp+40h] [rbp+8h] BYREF

  v2 = a2;
  Global = DXGGLOBAL::GetGlobal((__int64)this, a2);
  v5 = (*(__int64 (__fastcall **)(char *))(*((_QWORD *)Global + 38000) + 16LL))((char *)this + 64);
  if ( v5 >= 0 )
  {
    if ( (unsigned int)(*((_DWORD *)this + 6) - 2) > 2 )
    {
      return (unsigned int)-1073741811;
    }
    else
    {
      if ( v2 )
      {
        ObfReferenceObject(this[4]);
        v7 = this[4];
      }
      else
      {
        SharedAllocationObjectType = (struct _OBJECT_TYPE *)DxgkGetSharedAllocationObjectType();
        v5 = ObReferenceObjectByHandle(this[4], 0xF0000u, SharedAllocationObjectType, 1, &Object, 0LL);
        v7 = Object;
      }
      this[4] = 0LL;
      this[7] = v7;
    }
  }
  return (unsigned int)v5;
}
