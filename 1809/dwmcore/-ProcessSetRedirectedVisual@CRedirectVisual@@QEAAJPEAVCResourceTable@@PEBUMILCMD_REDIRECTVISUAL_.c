/*
 * XREFs of ?ProcessSetRedirectedVisual@CRedirectVisual@@QEAAJPEAVCResourceTable@@PEBUMILCMD_REDIRECTVISUAL_SETREDIRECTEDVISUAL@@@Z @ 0x1801B2040
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z @ 0x1800D0FD0 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z @ 0x1800D0ED0 (-GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 *     ?Create@CRedirectedVisualContent@@SAJPEAVCVisual@@PEAPEAV1@@Z @ 0x1801D9BA0 (-Create@CRedirectedVisualContent@@SAJPEAVCVisual@@PEAPEAV1@@Z.c)
 */

__int64 __fastcall CRedirectVisual::ProcessSetRedirectedVisual(
        CRedirectVisual *this,
        struct CResourceTable *a2,
        const struct MILCMD_REDIRECTVISUAL_SETREDIRECTEDVISUAL *a3)
{
  struct CResourceTable *v3; // r9
  unsigned int v4; // ebx
  unsigned int v5; // edx
  struct CVisual *Resource; // rax
  __int64 v8; // rcx
  __int64 v9; // rdx
  struct CVisual *v10; // rcx
  struct CRedirectedVisualContent *v11; // rdi
  int v12; // eax
  __int64 v13; // rcx
  struct CRedirectedVisualContent *v15; // [rsp+50h] [rbp+18h] BYREF

  v3 = a2;
  v4 = 0;
  v5 = *((_DWORD *)a3 + 2);
  Resource = 0LL;
  if ( v5 )
  {
    Resource = (struct CVisual *)CResourceTable::GetResource((__int64)v3, v5, 0x9Du);
    if ( !Resource )
    {
      v4 = -2003303421;
      MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, -2003303421, 0x1Cu);
      return v4;
    }
  }
  v9 = *((_QWORD *)this + 32);
  v10 = 0LL;
  if ( v9 )
    v10 = *(struct CVisual **)(v9 + 56);
  if ( Resource != v10 )
  {
    v11 = 0LL;
    v15 = 0LL;
    if ( Resource )
    {
      v12 = CRedirectedVisualContent::Create(Resource, &v15);
      v4 = v12;
      if ( v12 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0, v12, 0x2Du);
        return v4;
      }
      v11 = v15;
    }
    (*(void (__fastcall **)(CRedirectVisual *, struct CRedirectedVisualContent *, const struct MILCMD_REDIRECTVISUAL_SETREDIRECTEDVISUAL *, struct CResourceTable *))(*(_QWORD *)this + 296LL))(
      this,
      v11,
      a3,
      v3);
    if ( v11 )
      (*(void (__fastcall **)(struct CRedirectedVisualContent *))(*(_QWORD *)v11 + 16LL))(v11);
  }
  return v4;
}
