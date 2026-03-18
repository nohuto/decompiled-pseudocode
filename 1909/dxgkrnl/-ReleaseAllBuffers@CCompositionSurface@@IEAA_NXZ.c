/*
 * XREFs of ?ReleaseAllBuffers@CCompositionSurface@@IEAA_NXZ @ 0x1C00137BC
 * Callers:
 *     ?Bind@CCompositionSurface@@QEAAJAEBUCSM_BUFFER_INFO@@_N1PEA_K@Z @ 0x1C0012548 (-Bind@CCompositionSurface@@QEAAJAEBUCSM_BUFFER_INFO@@_N1PEA_K@Z.c)
 *     ?UnBind@CCompositionSurface@@QEAAJ_N@Z @ 0x1C0012FB4 (-UnBind@CCompositionSurface@@QEAAJ_N@Z.c)
 *     ?Delete@CCompositionSurface@@MEAAJPEAX@Z @ 0x1C0013790 (-Delete@CCompositionSurface@@MEAAJPEAX@Z.c)
 * Callees:
 *     ?DisableCascadedSignaling@CFlipExBuffer@@QEAAXXZ @ 0x1C001406C (-DisableCascadedSignaling@CFlipExBuffer@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C00250D0 (_guard_dispatch_icall_nop.c)
 *     ?FromBuffer@CFlipExBuffer@@SAPEAV1@PEAVCCompositionBuffer@@@Z @ 0x1C005C48C (-FromBuffer@CFlipExBuffer@@SAPEAV1@PEAVCCompositionBuffer@@@Z.c)
 */

char __fastcall CCompositionSurface::ReleaseAllBuffers(CCompositionSurface *this)
{
  char v1; // bp
  CCompositionSurface **v3; // rbx
  CCompositionSurface **v4; // rax
  CCompositionSurface *v5; // rcx
  struct CCompositionBuffer *v6; // rsi
  CCompositionSurface *v7; // rcx
  CFlipExBuffer *v9; // rax

  v1 = 0;
  if ( *((_DWORD *)this + 20) )
  {
    v3 = (CCompositionSurface **)((char *)this + 64);
    v4 = (CCompositionSurface **)*((_QWORD *)this + 8);
    if ( v4[1] != (CCompositionSurface *)((char *)this + 64) )
      goto LABEL_14;
    v5 = *v4;
    if ( *((CCompositionSurface ***)*v4 + 1) != v4 )
      goto LABEL_14;
    *v3 = v5;
    *((_QWORD *)v5 + 1) = v3;
    if ( v4 != v3 )
    {
      v1 = 1;
      while ( 1 )
      {
        v6 = (struct CCompositionBuffer *)(v4 - 3);
        if ( *((_QWORD *)this + 12)
          && (*(unsigned int (__fastcall **)(CCompositionSurface **))(*(_QWORD *)v6 + 8LL))(v4 - 3) == 2 )
        {
          v9 = CFlipExBuffer::FromBuffer(v6);
          CFlipExBuffer::DisableCascadedSignaling(v9);
        }
        if ( v6 )
          (**(void (__fastcall ***)(struct CCompositionBuffer *, __int64))v6)(v6, 1LL);
        v4 = (CCompositionSurface **)*v3;
        if ( *((CCompositionSurface ***)*v3 + 1) != v3 )
          break;
        v7 = *v4;
        if ( *((CCompositionSurface ***)*v4 + 1) != v4 )
          break;
        *v3 = v7;
        *((_QWORD *)v7 + 1) = v3;
        if ( v4 == v3 )
          goto LABEL_12;
      }
LABEL_14:
      __fastfail(3u);
    }
LABEL_12:
    *((_DWORD *)this + 20) = 0;
  }
  return v1;
}
