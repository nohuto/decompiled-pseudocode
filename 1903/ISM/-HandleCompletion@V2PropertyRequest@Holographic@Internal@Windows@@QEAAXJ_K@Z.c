/*
 * XREFs of ?HandleCompletion@V2PropertyRequest@Holographic@Internal@Windows@@QEAAXJ_K@Z @ 0x1801589AC
 * Callers:
 *     ?HandlePropertyRequestCompletion@Holographic@Internal@Windows@@YAXAEAV?$map@PEAVV2PropertyRequest@Holographic@Internal@Windows@@V?$unique_ptr@VV2PropertyRequest@Holographic@Internal@Windows@@U?$default_delete@VV2PropertyRequest@Holographic@Internal@Windows@@@std@@@std@@U?$less@PEAVV2PropertyRequest@Holographic@Internal@Windows@@@6@V?$allocator@U?$pair@QEAVV2PropertyRequest@Holographic@Internal@Windows@@V?$unique_ptr@VV2PropertyRequest@Holographic@Internal@Windows@@U?$default_delete@VV2PropertyRequest@Holographic@Internal@Windows@@@std@@@std@@@std@@@6@@std@@PEAX@Z @ 0x180158CF4 (-HandlePropertyRequestCompletion@Holographic@Internal@Windows@@YAXAEAV-$map@PEAVV2PropertyReques.c)
 *     ?StartIo@V2PropertyRequest@Holographic@Internal@Windows@@QEAAXXZ @ 0x18015E0E0 (-StartIo@V2PropertyRequest@Holographic@Internal@Windows@@QEAAXXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180037DA0 (_guard_dispatch_icall_nop.c)
 *     std::vector_unsigned_char_std::allocator_unsigned_char___::_Resize__lambda_2b51424039c320f102fd798e073c89b2___ @ 0x180150100 (std--vector_unsigned_char_std--allocator_unsigned_char___--_Resize__lambda_2b51424039c320f102fd7.c)
 *     ?GetHeaderRef@V2PropertyRequest@Holographic@Internal@Windows@@IEBAAEBUHOLOGRAPHIC_DEVICE_PROPERTY_HEADER_V2@@XZ @ 0x1801567D0 (-GetHeaderRef@V2PropertyRequest@Holographic@Internal@Windows@@IEBAAEBUHOLOGRAPHIC_DEVICE_PROPERT.c)
 *     ?Log_HrMsg@in1diag3@details@wil@@YAJPEAXIPEBDJ1ZZ @ 0x180159A84 (-Log_HrMsg@in1diag3@details@wil@@YAJPEAXIPEBDJ1ZZ.c)
 *     ?StartIo@V2PropertyRequest@Holographic@Internal@Windows@@QEAAXXZ @ 0x18015E0E0 (-StartIo@V2PropertyRequest@Holographic@Internal@Windows@@QEAAXXZ.c)
 */

void __fastcall Windows::Internal::Holographic::V2PropertyRequest::HandleCompletion(
        Windows::Internal::Holographic::V2PropertyRequest *this,
        __int64 a2,
        unsigned __int64 a3,
        const char *a4)
{
  int v5; // edi
  const struct HOLOGRAPHIC_DEVICE_PROPERTY_HEADER_V2 *HeaderRef; // rbp
  unsigned __int64 v8; // rdx
  const char *v9; // rax
  __int64 v10; // r9
  __int64 v11; // rdx
  int v12; // eax
  __int64 (__fastcall *v13)(__int64, _QWORD); // rax
  void (__fastcall **v14)(Windows::Internal::Holographic::V2PropertyRequest *, _QWORD); // rax
  char *v15; // [rsp+28h] [rbp-20h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  v5 = a2;
  if ( (int)a2 < 0 )
    goto LABEL_28;
  if ( a3 < 0xC )
    v5 = wil::details::in1diag3::Log_HrMsg(
           retaddr,
           (void *)0x90,
           (unsigned int)"onecoreuap\\analog\\input\\holographicdriverclientlib\\lib\\propertyrequests.h",
           (const char *)0x8007000DLL,
           (int)"driver did not supply enough data for a complete header",
           v15);
  if ( v5 < 0 )
    goto LABEL_28;
  if ( a3 > *((_QWORD *)this + 11) - *((_QWORD *)this + 10) )
    v5 = wil::details::in1diag3::Log_HrMsg(
           retaddr,
           (void *)0x97,
           (unsigned int)"onecoreuap\\analog\\input\\holographicdriverclientlib\\lib\\propertyrequests.h",
           (const char *)0x8000FFFFLL,
           (int)"driver said it returned more data than the size of the output buffer",
           v15);
  if ( v5 < 0 )
    goto LABEL_28;
  HeaderRef = Windows::Internal::Holographic::V2PropertyRequest::GetHeaderRef(this, a2, a3, a4);
  v8 = *(unsigned int *)HeaderRef + 12LL;
  if ( a3 > v8 )
  {
    v9 = "driver returned more data than expected for header + value";
    v10 = 2147942413LL;
    v11 = 164LL;
LABEL_21:
    v12 = wil::details::in1diag3::Log_HrMsg(
            retaddr,
            (void *)v11,
            (unsigned int)"onecoreuap\\analog\\input\\holographicdriverclientlib\\lib\\propertyrequests.h",
            (const char *)v10,
            (int)v9,
            v15);
    goto LABEL_22;
  }
  if ( a3 >= v8 )
  {
    if ( *(_QWORD *)((char *)HeaderRef + 4) != **((_QWORD **)this + 9) )
      goto LABEL_23;
    v9 = "driver returned same ChangeId as input";
    v11 = 206LL;
    goto LABEL_20;
  }
  if ( a3 != 12 )
  {
    v9 = "driver returned more than header, but less than header + value";
    v10 = 2147942413LL;
    v11 = 173LL;
    goto LABEL_21;
  }
  if ( *((_DWORD *)this + 30) < 0xAu )
  {
    if ( v8 != *((_QWORD *)this + 11) - *((_QWORD *)this + 10) )
    {
      std::vector_unsigned_char_std::allocator_unsigned_char___::_Resize__lambda_2b51424039c320f102fd798e073c89b2___(
        (void **)this + 10,
        v8);
      *((_DWORD *)this + 26) = 0;
      ++*((_DWORD *)this + 30);
      Windows::Internal::Holographic::V2PropertyRequest::StartIo(this);
      return;
    }
    v9 = "driver returned only property header, even though output buffer was big enough for full value";
    v11 = 186LL;
LABEL_20:
    v10 = 2147549183LL;
    goto LABEL_21;
  }
  LODWORD(v15) = 10;
  v12 = wil::details::in1diag3::Log_HrMsg(
          retaddr,
          (void *)0xB3,
          (unsigned int)"onecoreuap\\analog\\input\\holographicdriverclientlib\\lib\\propertyrequests.h",
          (const char *)0x8000FFFFLL,
          (int)"driver returned increasing value size >= %u times in a row",
          v15);
LABEL_22:
  v5 = v12;
LABEL_23:
  if ( v5 >= 0 )
  {
    v13 = (__int64 (__fastcall *)(__int64, _QWORD))*((_QWORD *)this + 14);
    if ( v13 )
      v5 = v13(*((_QWORD *)this + 10) + 12LL, *(unsigned int *)HeaderRef);
    if ( v5 >= 0 )
    {
      std::vector_unsigned_char_std::allocator_unsigned_char___::_Resize__lambda_2b51424039c320f102fd798e073c89b2___(
        (void **)this + 10,
        a3);
      **((_QWORD **)this + 9) = *(_QWORD *)((char *)HeaderRef + 4);
    }
  }
LABEL_28:
  v14 = *(void (__fastcall ***)(Windows::Internal::Holographic::V2PropertyRequest *, _QWORD))this;
  *((_DWORD *)this + 30) = 0;
  *((_DWORD *)this + 26) = v5;
  (*v14)(this, (unsigned int)v5);
}
