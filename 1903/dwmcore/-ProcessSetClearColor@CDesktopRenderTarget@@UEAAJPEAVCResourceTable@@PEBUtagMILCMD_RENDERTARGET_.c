/*
 * XREFs of ?ProcessSetClearColor@CDesktopRenderTarget@@UEAAJPEAVCResourceTable@@PEBUtagMILCMD_RENDERTARGET_SETCLEARCOLOR@@@Z @ 0x1801A8970
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CDesktopRenderTarget::ProcessSetClearColor(
        CDesktopRenderTarget *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_RENDERTARGET_SETCLEARCOLOR *a3)
{
  unsigned int v3; // esi
  __int64 v4; // rdi
  __int64 v8; // rcx
  signed int v9; // eax
  __int64 v10; // rcx

  v3 = 0;
  v4 = 0LL;
  *(_OWORD *)((char *)this + 344) = *(_OWORD *)((char *)a3 + 8);
  *((_DWORD *)this + 89) = 1065353216;
  if ( *((_DWORD *)this + 50) )
  {
    while ( 1 )
    {
      v8 = *(_QWORD *)(*((_QWORD *)this + 22) + 8 * v4);
      v9 = (*(__int64 (__fastcall **)(__int64, struct CResourceTable *, const struct tagMILCMD_RENDERTARGET_SETCLEARCOLOR *))(*(_QWORD *)v8 + 208LL))(
             v8,
             a2,
             a3);
      v3 = v9;
      if ( v9 < 0 )
        break;
      v4 = (unsigned int)(v4 + 1);
      if ( (unsigned int)v4 >= *((_DWORD *)this + 50) )
        return v3;
    }
    MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, v9, 0x513u, 0LL);
  }
  return v3;
}
