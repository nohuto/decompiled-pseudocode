/*
 * XREFs of ?SetPosition@CMultitaskingViewElementBase@@UEAAXAEBUCRect@Geometry@@W4DCompThumbnailAnimation@@PEAUIUIAnimationStoryboardEventHandler2@@@Z @ 0x180365B60
 * Callers:
 *     ?SetPosition@CSwitchItemGrid@@UEAAXAEBUCRect@Geometry@@W4DCompThumbnailAnimation@@PEAUIUIAnimationStoryboardEventHandler2@@@Z @ 0x180369FB0 (-SetPosition@CSwitchItemGrid@@UEAAXAEBUCRect@Geometry@@W4DCompThumbnailAnimation@@PEAUIUIAnimati.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800609CC (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072ADC (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180086B80 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 *     ?Equals@Guid@Platform@@QEAA_NAEBU_GUID@@@Z @ 0x180159C40 (-Equals@Guid@Platform@@QEAA_NAEBU_GUID@@@Z.c)
 *     ?_LayoutChildren@CMultitaskingViewElementBase@@IEAAXW4DCompThumbnailAnimation@@PEAUIUIAnimationStoryboardEventHandler2@@@Z @ 0x180366160 (-_LayoutChildren@CMultitaskingViewElementBase@@IEAAXW4DCompThumbnailAnimation@@PEAUIUIAnimationS.c)
 */

void __fastcall CMultitaskingViewElementBase::SetPosition(__int64 a1, __int64 a2, unsigned int a3, __int64 a4)
{
  struct _GUID *v4; // r15
  char v9; // r8
  _QWORD *v10; // rax
  _QWORD *v11; // rdi
  __int64 (__fastcall **v12)(_QWORD *, _QWORD, __int64, __int64, int *); // rbx
  unsigned int v13; // eax
  int v14; // eax
  char v15; // bl
  struct _GUID v16; // xmm1
  int v17; // eax
  double v18; // xmm0_8
  __m128i v19; // xmm1
  unsigned int v20; // eax
  double v21; // xmm0_8
  __m128i v22; // xmm0
  int v23; // eax
  HRESULT inited; // eax
  __int64 v25; // rdx
  int v26; // [rsp+30h] [rbp-D0h] BYREF
  IRawElementProviderSimple *pProvider; // [rsp+38h] [rbp-C8h] BYREF
  VARIANT pvarg; // [rsp+40h] [rbp-C0h] BYREF
  VARIANT pvar; // [rsp+58h] [rbp-A8h] BYREF
  VARIANT newValue; // [rsp+70h] [rbp-90h] BYREF
  VARIANT oldValue; // [rsp+90h] [rbp-70h] BYREF
  DOUBLE prgn[4]; // [rsp+B0h] [rbp-50h] BYREF
  DOUBLE v33[4]; // [rsp+D0h] [rbp-30h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+148h] [rbp+48h]

  v4 = (struct _GUID *)(a1 + 56);
  LODWORD(pProvider) = 0;
  LOBYTE(v26) = 1;
  if ( !Platform::Guid::Equals((Platform::Guid *)(a1 + 56), (const struct _GUID *)a2) )
  {
    v10 = (_QWORD *)(*(__int64 (__fastcall **)(__int64, IRawElementProviderSimple **))(*(_QWORD *)a1 + 384LL))(
                      a1,
                      &pProvider);
    v11 = (_QWORD *)*v10;
    v12 = (__int64 (__fastcall **)(_QWORD *, _QWORD, __int64, __int64, int *))(*(_QWORD *)*v10 + 56LL);
    v13 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 400LL))(a1);
    v14 = (*v12)(v11, v13, a1, a2, &v26);
    if ( v14 < 0 )
    {
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0xAF,
        (__int64)"pcshell\\twinui\\multitaskingview\\lib\\baseelement.cpp",
        (const char *)(unsigned int)v14);
LABEL_5:
      v15 = 1;
      v9 = 1;
      goto LABEL_7;
    }
    v9 = 1;
    if ( (_BYTE)v26 )
      goto LABEL_5;
  }
  v15 = 0;
LABEL_7:
  if ( (v9 & 1) != 0 )
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&pProvider);
  if ( v15 )
  {
    v16 = *(struct _GUID *)a2;
    *(struct _GUID *)&pvarg.vt = *v4;
    *v4 = v16;
    if ( *(_DWORD *)a2 >= *(_DWORD *)(a2 + 8)
      || *(_DWORD *)(a2 + 4) >= *(_DWORD *)(a2 + 12)
      || !UiaClientsAreListening()
      || !(*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)a1 + 168LL))(a1)
      || !(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 328LL))(a1) )
    {
      goto LABEL_25;
    }
    pProvider = 0LL;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&pProvider);
    if ( (*(int (__fastcall **)(__int64, GUID *, IRawElementProviderSimple **))(*(_QWORD *)a1 + 376LL))(
           a1,
           &GUID_d6dd68d1_86fd_4332_8666_9abedea2d24c,
           &pProvider) < 0 )
    {
LABEL_24:
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&pProvider);
LABEL_25:
      CMultitaskingViewElementBase::_LayoutChildren(a1, a3, a4);
      return;
    }
    v17 = pvarg.lVal - *(_DWORD *)&pvarg.vt;
    v18 = (double)*(int *)&pvarg.vt;
    pvar.vt = 0;
    pvarg.vt = 0;
    prgn[0] = v18;
    prgn[1] = (double)(int)pvarg.decVal.Hi32;
    v19 = _mm_cvtsi32_si128(*(_DWORD *)(a2 + 4));
    prgn[2] = (double)v17;
    v20 = *(_DWORD *)(a2 + 8) - *(_DWORD *)a2;
    prgn[3] = (double)(pvarg.cyVal.Hi - pvarg.decVal.Hi32);
    v21 = (double)*(int *)a2;
    *(_QWORD *)&v33[1] = *(_OWORD *)&_mm_cvtepi32_pd(v19);
    v33[0] = v21;
    v22 = _mm_cvtsi32_si128(v20);
    v23 = *(_DWORD *)(a2 + 12) - *(_DWORD *)(a2 + 4);
    *(_QWORD *)&v33[2] = *(_OWORD *)&_mm_cvtepi32_pd(v22);
    v33[3] = (double)v23;
    inited = InitVariantFromDoubleArray(prgn, 4u, &pvar);
    if ( inited >= 0 )
    {
      inited = InitVariantFromDoubleArray(v33, 4u, &pvarg);
      if ( inited >= 0 )
      {
        newValue = pvarg;
        oldValue = pvar;
        inited = UiaRaiseAutomationPropertyChangedEvent(pProvider, 30001, &oldValue, &newValue);
        if ( inited >= 0 )
        {
LABEL_23:
          VariantClear(&pvarg);
          VariantClear(&pvar);
          goto LABEL_24;
        }
        v25 = 194LL;
      }
      else
      {
        v25 = 192LL;
      }
    }
    else
    {
      v25 = 191LL;
    }
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)v25,
      (__int64)"pcshell\\twinui\\multitaskingview\\lib\\baseelement.cpp",
      (const char *)(unsigned int)inited);
    goto LABEL_23;
  }
}
