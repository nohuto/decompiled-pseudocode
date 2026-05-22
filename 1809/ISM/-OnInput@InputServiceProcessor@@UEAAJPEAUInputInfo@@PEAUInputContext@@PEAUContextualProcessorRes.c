/*
 * XREFs of ?OnInput@InputServiceProcessor@@UEAAJPEAUInputInfo@@PEAUInputContext@@PEAUContextualProcessorResponse@@@Z @ 0x1800D21D0
 * Callers:
 *     <none>
 * Callees:
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800035E4 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     memset_0 @ 0x18012BDEE (memset_0.c)
 *     _invalid_parameter_noinfo @ 0x18012BEBA (_invalid_parameter_noinfo.c)
 *     __security_check_cookie @ 0x18012BF70 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall InputServiceProcessor::OnInput(
        InputServiceProcessor *this,
        struct InputInfo *a2,
        struct InputContext *a3,
        struct ContextualProcessorResponse *a4)
{
  int v5; // edx
  __int16 v6; // di
  __int16 v7; // r12
  __int16 v8; // r13
  __int16 v9; // cx
  __int16 v10; // ax
  __int16 v11; // r15
  __int64 v12; // rcx
  _OWORD *v13; // rdi
  _OWORD *v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rdx
  __int64 v17; // rcx
  int v18; // eax
  __int64 v19; // rcx
  int v20; // eax
  int v22; // [rsp+20h] [rbp-E0h] BYREF
  __int64 v23; // [rsp+28h] [rbp-D8h] BYREF
  struct InputContext *v24; // [rsp+30h] [rbp-D0h]
  __int64 v25; // [rsp+38h] [rbp-C8h]
  int v26; // [rsp+40h] [rbp-C0h] BYREF
  __int16 v27; // [rsp+44h] [rbp-BCh]
  int v28; // [rsp+48h] [rbp-B8h]
  __int16 v29; // [rsp+4Ch] [rbp-B4h]
  __int16 v30; // [rsp+4Eh] [rbp-B2h]
  __int16 v31; // [rsp+50h] [rbp-B0h]
  __int16 v32; // [rsp+52h] [rbp-AEh]
  __int64 v33; // [rsp+58h] [rbp-A8h]
  int v34; // [rsp+60h] [rbp-A0h]
  _BYTE v35[268]; // [rsp+64h] [rbp-9Ch] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1B8h] [rbp+B8h]

  v25 = -2LL;
  v24 = a3;
  if ( (*(_BYTE *)a2 & 4) != 0 )
  {
    v5 = 0;
    v22 = 0;
    v6 = 0;
    v7 = 0;
    v8 = 0;
    *(_DWORD *)a4 = 3;
    v9 = *((_WORD *)a2 + 35);
    if ( (v9 & 0x10E7) == 0x10E7 )
    {
      v8 = *((_WORD *)a2 + 17);
    }
    else
    {
      v7 = *((_WORD *)a2 + 18);
      v6 = *((_WORD *)a2 + 17) | 0xE000;
      if ( (v9 & 2) == 0 )
        v6 = *((_WORD *)a2 + 17);
      if ( (v9 & 4) != 0 )
        v6 |= 0xE100u;
    }
    v10 = (v9 & 1) != 0 ? 4 : 1;
    if ( *((_WORD *)a2 + 16) == 0xFFFD || *((_WORD *)a2 + 16) == 0xFFFE )
    {
      v10 |= 0x4000u;
      if ( *((_WORD *)a2 + 16) == 0xFFFD )
        v5 = 1;
      v22 = v5;
    }
    v11 = v10 | 8;
    if ( v7 == 7 )
      v11 = v10;
    memset_0(&v26, 0, 0x128uLL);
    v34 = *((_DWORD *)a2 + 2);
    v28 = v22;
    if ( v8 )
    {
      v12 = 2LL;
      v26 = 2;
      v30 = 231;
      v27 = 16389;
      v31 = v8;
    }
    else
    {
      if ( !v7 || v6 )
      {
        v26 = 0;
        v32 = *((_WORD *)a2 + 2);
        v29 = v6;
      }
      else
      {
        v26 = 1;
        v30 = v7;
        v33 = *((_QWORD *)a2 + 42);
      }
      v12 = 2LL;
      v27 = v11;
    }
    v13 = (_OWORD *)((char *)a2 + 72);
    if ( a2 == (struct InputInfo *)-72LL )
    {
      memset_0(v35, 0, 0x100uLL);
      *(_DWORD *)_o__errno(v17, v16) = 22;
      invalid_parameter_noinfo();
    }
    else
    {
      v14 = v35;
      v15 = 128LL;
      do
      {
        *v14 = *v13;
        v14[1] = v13[1];
        v14[2] = v13[2];
        v14[3] = v13[3];
        v14[4] = v13[4];
        v14[5] = v13[5];
        v14[6] = v13[6];
        v14 += 8;
        *(v14 - 1) = v13[7];
        v13 += 8;
        --v12;
      }
      while ( v12 );
    }
    if ( ((1LL << gdwDeviceFamily) & 0x224A) != 0 )
    {
      v22 = 0;
      v23 = 0LL;
      if ( *(_QWORD *)v24 )
      {
        if ( (***(int (__fastcall ****)(_QWORD, GUID *, __int64 *))v24)(
               *(_QWORD *)v24,
               &GUID_a4e70d2d_6b93_4143_b95b_67efd0ccda59,
               &v23) >= 0 )
        {
          v18 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v23 + 40LL))(v23, &v22);
          if ( v18 < 0 )
          {
            wil::details::in1diag3::FailFast_Hr(
              retaddr,
              (void *)0xFA,
              (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\inputservice\\system\\"
                       "lib\\inputserviceprocessor.cpp",
              (const char *)(unsigned int)v18);
            goto LABEL_40;
          }
        }
        if ( v22 )
          MITSetLastInputRecipient();
      }
      v19 = v23;
      if ( v23 )
      {
        v23 = 0LL;
        (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v19 + 16LL))(v19, v15);
      }
    }
    v20 = (*(__int64 (__fastcall **)(struct IInputDeliveryServer *, int *))(*(_QWORD *)NonBamoInputDeliveryServer::s_pNonBamoInputDeliveryServer
                                                                          + 32LL))(
            NonBamoInputDeliveryServer::s_pNonBamoInputDeliveryServer,
            &v26);
    if ( v20 >= 0 )
      return 0LL;
LABEL_40:
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x104,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\inputservice\\system\\lib\\in"
               "putserviceprocessor.cpp",
      (const char *)(unsigned int)v20);
    JUMPOUT(0x1800D24EDLL);
  }
  *(_DWORD *)a4 = 0;
  return 0LL;
}
