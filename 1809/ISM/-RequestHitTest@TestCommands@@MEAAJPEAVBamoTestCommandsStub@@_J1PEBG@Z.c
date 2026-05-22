/*
 * XREFs of ?RequestHitTest@TestCommands@@MEAAJPEAVBamoTestCommandsStub@@_J1PEBG@Z @ 0x1800C1870
 * Callers:
 *     <none>
 * Callees:
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800035E4 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$vector@V?$ComPtr@UIMessageProxy@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIMessageProxy@@@WRL@Microsoft@@@std@@@std@@QEAA@XZ @ 0x18000EB8C (--1-$vector@V-$ComPtr@UIMessageProxy@@@WRL@Microsoft@@V-$allocator@V-$ComPtr@UIMessageProxy@@@WR.c)
 *     ??$_Emplace_reallocate@AEBV?$ComPtr@UIAttachableInputObjectSampleProxy@@@WRL@Microsoft@@@?$vector@V?$ComPtr@UIAttachableInputObjectSampleProxy@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIAttachableInputObjectSampleProxy@@@WRL@Microsoft@@@std@@@std@@QEAAPEAV?$ComPtr@UIAttachableInputObjectSampleProxy@@@WRL@Microsoft@@QEAV234@AEBV234@@Z @ 0x18000F418 (--$_Emplace_reallocate@AEBV-$ComPtr@UIAttachableInputObjectSampleProxy@@@WRL@Microsoft@@@-$vecto.c)
 *     ?_Tidy@?$vector@V?$ComPtr@VInputSite@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VInputSite@@@WRL@Microsoft@@@std@@@std@@AEAAXXZ @ 0x18001E104 (-_Tidy@-$vector@V-$ComPtr@VInputSite@@@WRL@Microsoft@@V-$allocator@V-$ComPtr@VInputSite@@@WRL@Mi.c)
 *     __security_check_cookie @ 0x18012BF70 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall TestCommands::RequestHitTest(
        TestCommands *this,
        struct BamoTestCommandsStub *a2,
        __int64 a3,
        __int64 a4,
        const unsigned __int16 *a5)
{
  unsigned int v5; // edi
  unsigned int v6; // ebx
  unsigned int v7; // r14d
  int v8; // eax
  _QWORD *v9; // rdi
  _QWORD *v10; // r12
  __int64 v11; // rax
  __int64 v12; // r15
  int v13; // r14d
  __int128 v14; // rcx
  __int64 v15; // r13
  __int64 i; // rsi
  _QWORD *v17; // rsi
  __int64 v18; // r12
  __int64 v19; // rdi
  const unsigned __int16 *v20; // r14
  __int64 v21; // rcx
  unsigned __int64 v23; // [rsp+38h] [rbp-D0h] BYREF
  __int64 v24; // [rsp+40h] [rbp-C8h] BYREF
  int v25; // [rsp+48h] [rbp-C0h]
  int v26; // [rsp+4Ch] [rbp-BCh]
  __int128 v27; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v28; // [rsp+60h] [rbp-A8h]
  _QWORD *v29; // [rsp+68h] [rbp-A0h]
  __int64 v30; // [rsp+70h] [rbp-98h]
  __int64 v31; // [rsp+78h] [rbp-90h]
  const unsigned __int16 *v32; // [rsp+80h] [rbp-88h]
  _QWORD *v33; // [rsp+88h] [rbp-80h]
  __int64 v34; // [rsp+90h] [rbp-78h]
  char v35[8]; // [rsp+98h] [rbp-70h] BYREF
  _QWORD *v36; // [rsp+A0h] [rbp-68h] BYREF
  _QWORD *v37; // [rsp+A8h] [rbp-60h]
  __int64 v38; // [rsp+B8h] [rbp-50h]
  wil::details::in1diag3 *retaddr; // [rsp+150h] [rbp+48h]

  v34 = -2LL;
  v5 = a4;
  v31 = a4;
  v6 = a3;
  v30 = a3;
  v32 = a5;
  v7 = 0;
  v25 = 0;
  v24 = 0LL;
  v8 = (***((__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))this + 7))(
         *((_QWORD *)this + 7),
         &GUID_b694737b_3300_4bb1_8b67_44715c8db610,
         &v24);
  if ( v8 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x19,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\bamos\\server\\testcommands.cpp",
      (const char *)(unsigned int)v8);
    JUMPOUT(0x1800C1B07LL);
  }
  v23 = __PAIR64__(v5, v6);
  (*(void (__fastcall **)(__int64, char *, unsigned __int64, _QWORD))(*(_QWORD *)v24 + 24LL))(
    v24,
    v35,
    __PAIR64__(v5, v6),
    0LL);
  if ( v35[0] )
  {
    v9 = v36;
    v10 = v37;
    v33 = v37;
    while ( 1 )
    {
      v29 = v9;
      if ( v9 == v10 )
        break;
      v11 = *v9;
      v27 = 0LL;
      v12 = 0LL;
      v28 = 0LL;
      v13 = v7 | 1;
      v26 = v13;
      v25 = v13;
      v14 = 0LL;
      v23 = 0LL;
      v15 = *(_QWORD *)(v11 + 400);
      for ( i = *(_QWORD *)(v11 + 392); i != v15; i += 16LL )
      {
        if ( (_QWORD)v14 )
        {
          v23 = 0LL;
          (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v14 + 16LL))(v14);
        }
        if ( (***(int (__fastcall ****)(_QWORD, GUID *, unsigned __int64 *))(i + 8))(
               *(_QWORD *)(i + 8),
               &GUID_0d0ff390_1722_d77a_3592_c63ca2dc2e3a,
               &v23) < 0 )
          goto LABEL_14;
        if ( v12 == *((_QWORD *)&v14 + 1) )
        {
          std::vector<Microsoft::WRL::ComPtr<IAttachableInputObjectSampleProxy>>::_Emplace_reallocate<Microsoft::WRL::ComPtr<IAttachableInputObjectSampleProxy> const &>(
            (char **)&v27,
            *((char **)&v14 + 1),
            (__int64 *)&v23);
          v12 = v28;
          *((_QWORD *)&v14 + 1) = *((_QWORD *)&v27 + 1);
LABEL_14:
          *(_QWORD *)&v14 = v23;
          continue;
        }
        **((_QWORD **)&v14 + 1) = v23;
        *(_QWORD *)&v14 = v23;
        if ( v23 )
        {
          (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)v23 + 8LL))(v23);
          *(_QWORD *)&v14 = v23;
        }
        *((_QWORD *)&v14 + 1) += 8LL;
        *((_QWORD *)&v27 + 1) = *((_QWORD *)&v14 + 1);
      }
      if ( (_QWORD)v14 )
      {
        v23 = 0LL;
        (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v14 + 16LL))(v14);
      }
      v17 = (_QWORD *)v27;
      if ( (_QWORD)v27 != *((_QWORD *)&v14 + 1) )
      {
        v18 = v30;
        v19 = v31;
        v20 = v32;
        do
        {
          (*(void (__fastcall **)(_QWORD, __int64, __int64, const unsigned __int16 *))(*(_QWORD *)*v17 + 24LL))(
            *v17,
            v18,
            v19,
            v20);
          ++v17;
        }
        while ( v17 != *((_QWORD **)&v14 + 1) );
        v9 = v29;
        v13 = v26;
        v10 = v33;
      }
      v7 = v13 & 0xFFFFFFFE;
      std::vector<Microsoft::WRL::ComPtr<IMessageProxy>>::~vector<Microsoft::WRL::ComPtr<IMessageProxy>>((__int64)&v27);
      ++v9;
    }
  }
  if ( (unsigned __int64)(v38 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
    NtCloseCompositionInputSink(v38);
  std::vector<Microsoft::WRL::ComPtr<InputSite>>::_Tidy((__int64)&v36);
  v21 = v24;
  if ( v24 )
  {
    v24 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 16LL))(v21);
  }
  return 0LL;
}
