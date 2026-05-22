/*
 * XREFs of ?HandleCompletion@V2PropertyRequest@Holographic@Internal@Windows@@QEAAXJ_K@Z @ 0x180110FF8
 * Callers:
 *     ?StartIo@V2PropertyRequest@Holographic@Internal@Windows@@QEAAXXZ @ 0x180110DE8 (-StartIo@V2PropertyRequest@Holographic@Internal@Windows@@QEAAXXZ.c)
 *     ?HandlePropertyRequestCompletion@Holographic@Internal@Windows@@YAXAEAV?$map@PEAVV2PropertyRequest@Holographic@Internal@Windows@@V?$unique_ptr@VV2PropertyRequest@Holographic@Internal@Windows@@U?$default_delete@VV2PropertyRequest@Holographic@Internal@Windows@@@std@@@std@@U?$less@PEAVV2PropertyRequest@Holographic@Internal@Windows@@@6@V?$allocator@U?$pair@QEAVV2PropertyRequest@Holographic@Internal@Windows@@V?$unique_ptr@VV2PropertyRequest@Holographic@Internal@Windows@@U?$default_delete@VV2PropertyRequest@Holographic@Internal@Windows@@@std@@@std@@@std@@@6@@std@@PEAX@Z @ 0x18011124C (-HandlePropertyRequestCompletion@Holographic@Internal@Windows@@YAXAEAV-$map@PEAVV2PropertyReques.c)
 * Callees:
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180003640 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?Log_HrMsg@in1diag3@details@wil@@YAJPEAXIPEBDJ1ZZ @ 0x180108B10 (-Log_HrMsg@in1diag3@details@wil@@YAJPEAXIPEBDJ1ZZ.c)
 *     ?StartIo@V2PropertyRequest@Holographic@Internal@Windows@@QEAAXXZ @ 0x180110DE8 (-StartIo@V2PropertyRequest@Holographic@Internal@Windows@@QEAAXXZ.c)
 *     std::vector_unsigned_char_std::allocator_unsigned_char___::_Resize__lambda_2b51424039c320f102fd798e073c89b2___ @ 0x18011C228 (std--vector_unsigned_char_std--allocator_unsigned_char___--_Resize__lambda_2b51424039c320f102fd7.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

void __fastcall Windows::Internal::Holographic::V2PropertyRequest::HandleCompletion(
        Windows::Internal::Holographic::V2PropertyRequest *this,
        int a2,
        unsigned __int64 a3,
        const char *a4)
{
  int v5; // ebx
  unsigned int **v7; // r14
  unsigned int *v8; // rbp
  unsigned __int64 v9; // rax
  unsigned __int64 v10; // rdx
  char *v11; // rax
  __int64 v12; // r9
  __int64 v13; // rdx
  int v14; // eax
  __int64 v15; // rdx
  __int64 v16; // r8
  const char *v17; // r9
  __int64 (__fastcall *v18)(unsigned int *, _QWORD); // rax
  void (__fastcall **v19)(Windows::Internal::Holographic::V2PropertyRequest *, _QWORD); // rax
  char *v20; // [rsp+28h] [rbp-20h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  v5 = a2;
  if ( a2 < 0 )
    goto LABEL_29;
  if ( a3 < 0xC )
    v5 = wil::details::in1diag3::Log_HrMsg(
           retaddr,
           (void *)0x90,
           (__int64)"onecoreuap\\analog\\input\\holographicdriverclientlib\\lib\\propertyrequests.h",
           (const char *)0x8007000DLL,
           (unsigned __int16 *)"driver did not supply enough data for a complete header",
           v20);
  if ( v5 < 0 )
    goto LABEL_29;
  v7 = (unsigned int **)((char *)this + 80);
  if ( a3 > *((_QWORD *)this + 11) - *((_QWORD *)this + 10) )
    v5 = wil::details::in1diag3::Log_HrMsg(
           retaddr,
           (void *)0x97,
           (__int64)"onecoreuap\\analog\\input\\holographicdriverclientlib\\lib\\propertyrequests.h",
           (const char *)0x8000FFFFLL,
           (unsigned __int16 *)"driver said it returned more data than the size of the output buffer",
           v20);
  if ( v5 < 0 )
    goto LABEL_29;
  v8 = *v7;
  v9 = *((_QWORD *)this + 11) - *((_QWORD *)this + 10);
  if ( v9 < 0xC )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x37,
      (__int64)"onecoreuap\\analog\\input\\holographicdriverclientlib\\lib\\propertyrequests.h",
      a4);
    JUMPOUT(0x180111204LL);
  }
  v10 = *v8 + 12LL;
  if ( a3 > v10 )
  {
    v11 = "driver returned more data than expected for header + value";
    v12 = 2147942413LL;
    v13 = 164LL;
LABEL_22:
    v14 = wil::details::in1diag3::Log_HrMsg(
            retaddr,
            (void *)v13,
            (__int64)"onecoreuap\\analog\\input\\holographicdriverclientlib\\lib\\propertyrequests.h",
            (const char *)v12,
            (unsigned __int16 *)v11,
            v20);
    goto LABEL_23;
  }
  if ( a3 >= v10 )
  {
    if ( *(_QWORD *)(v8 + 1) != **((_QWORD **)this + 9) )
      goto LABEL_24;
    v11 = "driver returned same ChangeId as input";
    v13 = 206LL;
    goto LABEL_21;
  }
  if ( a3 != 12 )
  {
    v11 = "driver returned more than header, but less than header + value";
    v12 = 2147942413LL;
    v13 = 173LL;
    goto LABEL_22;
  }
  if ( *((_DWORD *)this + 30) < 0xAu )
  {
    if ( v10 != v9 )
    {
      std::vector_unsigned_char_std::allocator_unsigned_char___::_Resize__lambda_2b51424039c320f102fd798e073c89b2___((char *)this + 80);
      *((_DWORD *)this + 26) = 0;
      ++*((_DWORD *)this + 30);
      Windows::Internal::Holographic::V2PropertyRequest::StartIo(this, v15, v16, v17);
      return;
    }
    v11 = "driver returned only property header, even though output buffer was big enough for full value";
    v13 = 186LL;
LABEL_21:
    v12 = 2147549183LL;
    goto LABEL_22;
  }
  LODWORD(v20) = 10;
  v14 = wil::details::in1diag3::Log_HrMsg(
          retaddr,
          (void *)0xB3,
          (__int64)"onecoreuap\\analog\\input\\holographicdriverclientlib\\lib\\propertyrequests.h",
          (const char *)0x8000FFFFLL,
          (unsigned __int16 *)"driver returned increasing value size >= %u times in a row",
          v20);
LABEL_23:
  v5 = v14;
LABEL_24:
  if ( v5 >= 0 )
  {
    v18 = (__int64 (__fastcall *)(unsigned int *, _QWORD))*((_QWORD *)this + 14);
    if ( v18 )
      v5 = v18(*v7 + 3, *v8);
    if ( v5 >= 0 )
    {
      std::vector_unsigned_char_std::allocator_unsigned_char___::_Resize__lambda_2b51424039c320f102fd798e073c89b2___((char *)this + 80);
      **((_QWORD **)this + 9) = *(_QWORD *)(v8 + 1);
    }
  }
LABEL_29:
  v19 = *(void (__fastcall ***)(Windows::Internal::Holographic::V2PropertyRequest *, _QWORD))this;
  *((_DWORD *)this + 30) = 0;
  *((_DWORD *)this + 26) = v5;
  (*v19)(this, (unsigned int)v5);
}
