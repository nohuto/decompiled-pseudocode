/*
 * XREFs of ?Create@CHostVisualMarshaler@DirectComposition@@SAJPEBVCSharedSystemResource@2@PEAPEAV12@@Z @ 0x1C008543C
 * Callers:
 *     CreateHostVisualMarshaler @ 0x1C00853F0 (CreateHostVisualMarshaler.c)
 * Callees:
 *     ??0CVisualMarshaler@DirectComposition@@QEAA@XZ @ 0x1C0010C50 (--0CVisualMarshaler@DirectComposition@@QEAA@XZ.c)
 *     Win32AllocPoolWithQuotaZInit @ 0x1C0014C30 (Win32AllocPoolWithQuotaZInit.c)
 *     ?InitializeFromSharedResource@CHostVisualMarshaler@DirectComposition@@QEAAJPEBVCSharedSystemResource@2@@Z @ 0x1C00854D8 (-InitializeFromSharedResource@CHostVisualMarshaler@DirectComposition@@QEAAJPEBVCSharedSystemReso.c)
 *     _guard_dispatch_icall_nop @ 0x1C00BF5D0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00BF640 (memset.c)
 */

__int64 __fastcall DirectComposition::CHostVisualMarshaler::Create(
        const struct DirectComposition::CSharedSystemResource *a1,
        struct DirectComposition::CHostVisualMarshaler **a2)
{
  _DWORD *v4; // rax
  DirectComposition::CVisualMarshaler *v5; // rbx
  int v6; // edi

  v4 = Win32AllocPoolWithQuotaZInit(0x170uLL, 0x76684344u);
  v5 = (DirectComposition::CVisualMarshaler *)v4;
  if ( v4 )
  {
    memset(v4 + 2, 0, 0x168uLL);
    DirectComposition::CVisualMarshaler::CVisualMarshaler(v5);
    *(_QWORD *)v5 = &DirectComposition::CHostVisualMarshaler::`vftable';
  }
  else
  {
    v5 = 0LL;
  }
  if ( v5 )
  {
    v6 = DirectComposition::CHostVisualMarshaler::InitializeFromSharedResource(v5, a1);
    if ( v6 < 0 )
    {
      (*(void (__fastcall **)(DirectComposition::CVisualMarshaler *, __int64))(*(_QWORD *)v5 + 104LL))(v5, 1LL);
      v5 = 0LL;
    }
    else
    {
      *((_DWORD *)v5 + 4) |= 2u;
      *((_DWORD *)v5 + 90) |= 1u;
    }
  }
  else
  {
    v6 = -1073741801;
  }
  *a2 = v5;
  return (unsigned int)v6;
}
