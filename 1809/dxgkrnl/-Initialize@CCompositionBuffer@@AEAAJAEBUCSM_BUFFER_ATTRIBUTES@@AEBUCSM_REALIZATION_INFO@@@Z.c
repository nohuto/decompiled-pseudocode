/*
 * XREFs of ?Initialize@CCompositionBuffer@@AEAAJAEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_INFO@@@Z @ 0x1C0055D48
 * Callers:
 *     ?Create@CCompositionBuffer@@SAJAEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_SINGLE_BUFFER_INFO@@PEAPEAV1@@Z @ 0x1C0055B4C (-Create@CCompositionBuffer@@SAJAEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_SINGLE_BUFFER_INFO@@PEAPEAV1@@.c)
 * Callees:
 *     ?Create@CBufferRealization@@SAJAEBUCSM_REALIZATION_INFO@@_NPEAPEAV1@@Z @ 0x1C000928C (-Create@CBufferRealization@@SAJAEBUCSM_REALIZATION_INFO@@_NPEAPEAV1@@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0011DE0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0022E60 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CCompositionBuffer::Initialize(
        CCompositionBuffer *this,
        const struct CSM_BUFFER_ATTRIBUTES *a2,
        const struct CSM_REALIZATION_INFO *a3)
{
  __int128 v5; // xmm1
  struct DXGGLOBAL *Global; // rax
  int v7; // esi
  __int128 v8; // xmm0
  struct CBufferRealization *v9; // rdi
  _OWORD v11[2]; // [rsp+20h] [rbp-28h] BYREF
  struct CBufferRealization *v12; // [rsp+50h] [rbp+8h] BYREF

  v5 = *((_OWORD *)a3 + 1);
  v11[0] = *(_OWORD *)a3;
  v11[1] = v5;
  Global = DXGGLOBAL::GetGlobal((__int64)this);
  v7 = (*(__int64 (__fastcall **)(char *))(*((_QWORD *)Global + 2541) + 8LL))((char *)this + 248);
  if ( v7 >= 0 )
  {
    v8 = *(_OWORD *)a2;
    DWORD1(v11[0]) = 0;
    *((_OWORD *)this + 3) = v8;
    *((_OWORD *)this + 4) = *((_OWORD *)a2 + 1);
    *((_OWORD *)this + 5) = *((_OWORD *)a2 + 2);
    *((_OWORD *)this + 6) = *((_OWORD *)a2 + 3);
    *((_OWORD *)this + 7) = *((_OWORD *)a2 + 4);
    *((_OWORD *)this + 8) = *((_OWORD *)a2 + 5);
    *((_OWORD *)this + 9) = *((_OWORD *)a2 + 6);
    *((_QWORD *)this + 20) = *((_QWORD *)a2 + 14);
    v7 = CBufferRealization::Create((const struct CSM_REALIZATION_INFO *)v11, 0, &v12);
    if ( v7 >= 0 )
    {
      v9 = v12;
      v7 = (*(__int64 (__fastcall **)(CCompositionBuffer *, struct CBufferRealization *))(*(_QWORD *)this + 200LL))(
             this,
             v12);
      if ( v7 < 0 )
      {
        if ( v9 )
          (**(void (__fastcall ***)(struct CBufferRealization *, __int64))v9)(v9, 1LL);
      }
    }
  }
  return (unsigned int)v7;
}
