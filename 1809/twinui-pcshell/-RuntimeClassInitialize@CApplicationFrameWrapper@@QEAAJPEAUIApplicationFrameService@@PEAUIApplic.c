/*
 * XREFs of ?RuntimeClassInitialize@CApplicationFrameWrapper@@QEAAJPEAUIApplicationFrameService@@PEAUIApplicationFrameManager@@PEAUIApplicationFrame@@@Z @ 0x180049408
 * Callers:
 *     ??$MakeAndInitialize@VCApplicationFrameWrapper@@V1@PEAVCApplicationFrameService@@PEAUIApplicationFrameManager@@PEAUIApplicationFrame@@@Details@WRL@Microsoft@@YAJPEAPEAVCApplicationFrameWrapper@@$$QEAPEAVCApplicationFrameService@@$$QEAPEAUIApplicationFrameManager@@$$QEAPEAUIApplicationFrame@@@Z @ 0x180049284 (--$MakeAndInitialize@VCApplicationFrameWrapper@@V1@PEAVCApplicationFrameService@@PEAUIApplicatio.c)
 *     ??$MakeAndInitialize@VCApplicationFrameWrapper@@V1@PEAVCApplicationFrameService@@PEAUIApplicationFrameManager@@PEAUIApplicationFrame@@AEAV?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEBK@Details@WRL@Microsoft@@YAJPEAPEAVCApplicationFrameWrapper@@$$QEAPEAVCApplicationFrameService@@$$QEAPEAUIApplicationFrameManager@@$$QEAPEAUIApplicationFrame@@AEAV?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEBK@Z @ 0x180113798 (--$MakeAndInitialize@VCApplicationFrameWrapper@@V1@PEAVCApplicationFrameService@@PE_ea_180113798.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180060730 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CApplicationFrameWrapper::RuntimeClassInitialize(
        CApplicationFrameWrapper *this,
        struct IApplicationFrameService *a2,
        struct IApplicationFrameManager *a3,
        struct IApplicationFrame *a4)
{
  int v8; // ebp
  __int64 v9; // rcx
  struct IApplicationFrameManager *v10; // rax
  struct IApplicationFrameService *v11; // rax
  struct IApplicationFrameManager *v13; // [rsp+40h] [rbp+8h] BYREF

  v8 = (*(__int64 (__fastcall **)(struct IApplicationFrame *, char *))(*(_QWORD *)a4 + 24LL))(a4, (char *)this + 88);
  if ( v8 >= 0 )
  {
    v8 = (*(__int64 (__fastcall **)(struct IApplicationFrame *, char *))(*(_QWORD *)a4 + 120LL))(a4, (char *)this + 96);
    if ( v8 >= 0 )
    {
      v9 = *((_QWORD *)this + 17);
      if ( v9 )
      {
        *((_QWORD *)this + 17) = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
      }
      v8 = (*(__int64 (__fastcall **)(struct IApplicationFrame *, char *))(*(_QWORD *)a4 + 144LL))(
             a4,
             (char *)this + 136);
      if ( v8 >= 0 )
      {
        if ( *((struct IApplicationFrame **)this + 15) != a4 )
        {
          (*(void (__fastcall **)(struct IApplicationFrame *))(*(_QWORD *)a4 + 8LL))(a4);
          v13 = (struct IApplicationFrameManager *)*((_QWORD *)this + 15);
          *((_QWORD *)this + 15) = a4;
          Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v13);
        }
        v10 = (struct IApplicationFrameManager *)*((_QWORD *)this + 16);
        if ( v10 != a3 )
        {
          if ( a3 )
          {
            (*(void (__fastcall **)(struct IApplicationFrameManager *))(*(_QWORD *)a3 + 8LL))(a3);
            v10 = (struct IApplicationFrameManager *)*((_QWORD *)this + 16);
          }
          v13 = v10;
          *((_QWORD *)this + 16) = a3;
          Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v13);
        }
        v11 = (struct IApplicationFrameService *)*((_QWORD *)this + 18);
        if ( v11 != a2 )
        {
          if ( a2 )
          {
            (*(void (__fastcall **)(struct IApplicationFrameService *))(*(_QWORD *)a2 + 8LL))(a2);
            v11 = (struct IApplicationFrameService *)*((_QWORD *)this + 18);
          }
          v13 = v11;
          *((_QWORD *)this + 18) = a2;
          Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v13);
        }
      }
    }
  }
  return (unsigned int)v8;
}
