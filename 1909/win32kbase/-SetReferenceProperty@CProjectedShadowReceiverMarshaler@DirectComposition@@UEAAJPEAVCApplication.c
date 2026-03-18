/*
 * XREFs of ?SetReferenceProperty@CProjectedShadowReceiverMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEAVCResourceMarshaler@2@PEA_N@Z @ 0x1C00057C0
 * Callers:
 *     <none>
 * Callees:
 *     ?ReleaseResource@CApplicationChannel@DirectComposition@@QEAAKPEAVCResourceMarshaler@2@@Z @ 0x1C0014F10 (-ReleaseResource@CApplicationChannel@DirectComposition@@QEAAKPEAVCResourceMarshaler@2@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00BF5D0 (_guard_dispatch_icall_nop.c)
 *     ?AddRef@CResourceMarshaler@DirectComposition@@QEAAKXZ @ 0x1C01A3298 (-AddRef@CResourceMarshaler@DirectComposition@@QEAAKXZ.c)
 */

__int64 __fastcall DirectComposition::CProjectedShadowReceiverMarshaler::SetReferenceProperty(
        DirectComposition::CProjectedShadowReceiverMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        int a3,
        struct DirectComposition::CResourceMarshaler *a4,
        bool *a5)
{
  unsigned int v5; // ebx
  __int64 v9; // rdx
  __int64 v10; // rax
  int v11; // ebp
  struct DirectComposition::CResourceMarshaler **v12; // r14

  v5 = 0;
  *a5 = 0;
  if ( a3 )
  {
    if ( a3 != 2 )
      return 3221225485LL;
    v9 = 189LL;
    v10 = 72LL;
    v11 = 512;
  }
  else
  {
    v9 = 14LL;
    v11 = 128;
    v10 = 56LL;
  }
  v12 = (struct DirectComposition::CResourceMarshaler **)((char *)this + v10);
  if ( (DirectComposition::CProjectedShadowReceiverMarshaler *)((char *)this + v10)
    && (!a4
     || (*(unsigned __int8 (__fastcall **)(struct DirectComposition::CResourceMarshaler *, __int64))(*(_QWORD *)a4 + 120LL))(
          a4,
          v9)) )
  {
    if ( *v12 != a4 )
    {
      DirectComposition::CApplicationChannel::ReleaseResource(a2, *v12);
      *v12 = a4;
      if ( a4 )
        DirectComposition::CResourceMarshaler::AddRef(a4);
      *((_DWORD *)this + 4) |= v11;
      *a5 = 1;
    }
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v5;
}
