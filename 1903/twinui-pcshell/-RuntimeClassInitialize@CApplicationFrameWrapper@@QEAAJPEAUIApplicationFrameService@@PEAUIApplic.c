/*
 * XREFs of ?RuntimeClassInitialize@CApplicationFrameWrapper@@QEAAJPEAUIApplicationFrameService@@PEAUIApplicationFrameManager@@PEAUIApplicationFrame@@@Z @ 0x180013948
 * Callers:
 *     ??$MakeAndInitialize@VCApplicationFrameWrapper@@V1@PEAVCApplicationFrameService@@PEAUIApplicationFrameManager@@PEAUIApplicationFrame@@@Details@WRL@Microsoft@@YAJPEAPEAVCApplicationFrameWrapper@@$$QEAPEAVCApplicationFrameService@@$$QEAPEAUIApplicationFrameManager@@$$QEAPEAUIApplicationFrame@@@Z @ 0x18001382C (--$MakeAndInitialize@VCApplicationFrameWrapper@@V1@PEAVCApplicationFrameService@@PEAUIApplicatio.c)
 *     ??$MakeAndInitialize@VCApplicationFrameWrapper@@V1@PEAVCApplicationFrameService@@PEAUIApplicationFrameManager@@PEAUIApplicationFrame@@AEAV?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEBK@Details@WRL@Microsoft@@YAJPEAPEAVCApplicationFrameWrapper@@$$QEAPEAVCApplicationFrameService@@$$QEAPEAUIApplicationFrameManager@@$$QEAPEAUIApplicationFrame@@AEAV?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEBK@Z @ 0x18013AE3C (--$MakeAndInitialize@VCApplicationFrameWrapper@@V1@PEAVCApplicationFrameService@@PE_ea_18013AE3C.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800609CC (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180063E40 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CApplicationFrameWrapper::RuntimeClassInitialize(
        CApplicationFrameWrapper *this,
        struct IApplicationFrameService *a2,
        struct IApplicationFrameManager *a3,
        struct IApplicationFrame *a4)
{
  int v8; // ebp
  __int64 v9; // rcx
  __int64 (__fastcall *v10)(struct IApplicationFrame *, char *); // rbp
  struct IApplicationFrameManager *v11; // rax
  struct IApplicationFrameService *v12; // rax
  struct IApplicationFrameManager *v14; // [rsp+40h] [rbp+8h] BYREF

  v8 = (*(__int64 (__fastcall **)(struct IApplicationFrame *, char *))(*(_QWORD *)a4 + 24LL))(a4, (char *)this + 88);
  if ( v8 >= 0 )
  {
    v8 = (*(__int64 (__fastcall **)(struct IApplicationFrame *, char *))(*(_QWORD *)a4 + 120LL))(a4, (char *)this + 96);
    if ( v8 >= 0 )
    {
      v9 = *((_QWORD *)this + 17);
      v10 = *(__int64 (__fastcall **)(struct IApplicationFrame *, char *))(*(_QWORD *)a4 + 144LL);
      if ( v9 )
      {
        *((_QWORD *)this + 17) = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
      }
      v8 = v10(a4, (char *)this + 136);
      if ( v8 >= 0 )
      {
        if ( *((struct IApplicationFrame **)this + 15) != a4 )
        {
          (*(void (__fastcall **)(struct IApplicationFrame *))(*(_QWORD *)a4 + 8LL))(a4);
          v14 = (struct IApplicationFrameManager *)*((_QWORD *)this + 15);
          *((_QWORD *)this + 15) = a4;
          Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v14);
        }
        v11 = (struct IApplicationFrameManager *)*((_QWORD *)this + 16);
        if ( v11 != a3 )
        {
          if ( a3 )
          {
            (*(void (__fastcall **)(struct IApplicationFrameManager *))(*(_QWORD *)a3 + 8LL))(a3);
            v11 = (struct IApplicationFrameManager *)*((_QWORD *)this + 16);
          }
          v14 = v11;
          *((_QWORD *)this + 16) = a3;
          Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v14);
        }
        v12 = (struct IApplicationFrameService *)*((_QWORD *)this + 18);
        if ( v12 != a2 )
        {
          if ( a2 )
          {
            (*(void (__fastcall **)(struct IApplicationFrameService *))(*(_QWORD *)a2 + 8LL))(a2);
            v12 = (struct IApplicationFrameService *)*((_QWORD *)this + 18);
          }
          v14 = v12;
          *((_QWORD *)this + 18) = a2;
          Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v14);
        }
      }
    }
  }
  return (unsigned int)v8;
}
