/*
 * XREFs of ?Initialize@CFormatConverterPipe@@QEAAJPEAUIDeviceGraphObjectCache@@PEBUtWAVEFORMATEX@@PEBUFORMAT_CONVERTER_PIPE_DESCRIPTOR@@@Z @ 0x14003E61C
 * Callers:
 *     ?CreateFormatConverterPipe@CSubmixImpl@@IEAAJPEAUtWAVEFORMATEX@@_J@Z @ 0x14003DEBC (-CreateFormatConverterPipe@CSubmixImpl@@IEAAJPEAUtWAVEFORMATEX@@_J@Z.c)
 * Callees:
 *     ?Initialize@CPipeInstance@@QEAAJXZ @ 0x140003DC4 (-Initialize@CPipeInstance@@QEAAJXZ.c)
 *     ?CloneWaveFormat@@YAJPEBUtWAVEFORMATEX@@PEAPEAU1@@Z @ 0x140003FBC (-CloneWaveFormat@@YAJPEBUtWAVEFORMATEX@@PEAPEAU1@@Z.c)
 *     ?ConnectAPOs@CPipeInstance@@QEAAJPEAUIAudioGraphCallback@@@Z @ 0x140009ECC (-ConnectAPOs@CPipeInstance@@QEAAJPEAUIAudioGraphCallback@@@Z.c)
 *     ?Reset@CFormatConverterPipe@@QEAAXXZ @ 0x14000DE10 (-Reset@CFormatConverterPipe@@QEAAXXZ.c)
 *     ?Free@?$CAutoPtr@VCPipeInstance@@@ATL@@QEAAXXZ @ 0x14000DE44 (-Free@-$CAutoPtr@VCPipeInstance@@@ATL@@QEAAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x140028234 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?CreateFormatConverterPipeInstance@CPipeInstance@@SAJPEAUIDeviceGraphObjectCache@@PEBUFORMAT_CONVERTER_PIPE_DESCRIPTOR@@PEAPEAV1@@Z @ 0x140034F84 (-CreateFormatConverterPipeInstance@CPipeInstance@@SAJPEAUIDeviceGraphObjectCache@@PEBUFORMAT_CON.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CFormatConverterPipe::Initialize(
        CFormatConverterPipe *this,
        struct IUnknown *a2,
        const struct tWAVEFORMATEX *a3,
        const struct tWAVEFORMATEX **a4)
{
  int FormatConverterPipeInstance; // eax
  int v9; // ebx
  __int64 v10; // rdx
  CPipeInstance *v11; // rsi
  unsigned int v12; // edx
  void *v13; // rcx
  LPVOID v14; // rax
  void *v15; // rcx
  void *v16; // rcx
  LPVOID pv; // [rsp+20h] [rbp-30h] BYREF
  CPipeInstance *v19[2]; // [rsp+28h] [rbp-28h] BYREF
  LPVOID *p_pv; // [rsp+38h] [rbp-18h]
  struct tWAVEFORMATEX *v21; // [rsp+40h] [rbp-10h] BYREF
  char v22; // [rsp+48h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+18h]

  v19[1] = (CPipeInstance *)-2LL;
  CFormatConverterPipe::Reset(this);
  v19[0] = 0LL;
  FormatConverterPipeInstance = CPipeInstance::CreateFormatConverterPipeInstance(a2, a4, v19);
  v9 = FormatConverterPipeInstance;
  if ( FormatConverterPipeInstance < 0 )
  {
    v10 = 249LL;
LABEL_7:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v10,
      (__int64)"avcore\\audiocore\\server\\audiodg\\exe\\submix.cpp",
      (const char *)(unsigned int)FormatConverterPipeInstance);
    goto LABEL_18;
  }
  v11 = v19[0];
  FormatConverterPipeInstance = CPipeInstance::Initialize(v19[0]);
  v9 = FormatConverterPipeInstance;
  if ( FormatConverterPipeInstance < 0 )
  {
    v10 = 250LL;
    goto LABEL_7;
  }
  FormatConverterPipeInstance = CPipeInstance::ConnectAPOs(v11, 0LL);
  v9 = FormatConverterPipeInstance;
  if ( FormatConverterPipeInstance < 0 )
  {
    v10 = 251LL;
    goto LABEL_7;
  }
  pv = 0LL;
  p_pv = &pv;
  v21 = 0LL;
  v22 = 1;
  v9 = CloneWaveFormat(a3, &v21);
  if ( v22 )
  {
    v12 = (unsigned int)p_pv;
    v13 = *p_pv;
    *p_pv = v21;
    if ( v13 )
      CoTaskMemFree(v13);
  }
  if ( v9 >= 0 )
  {
    v19[0] = 0LL;
    *(_QWORD *)this = v11;
    v14 = pv;
    pv = 0LL;
    v15 = (void *)*((_QWORD *)this + 1);
    *((_QWORD *)this + 1) = v14;
    if ( v15 )
      CoTaskMemFree(v15);
    *((_QWORD *)this + 2) = a4[3];
    *((_BYTE *)this + 24) = 0;
    v9 = 0;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xFE,
      (__int64)"avcore\\audiocore\\server\\audiodg\\exe\\submix.cpp",
      (const char *)(unsigned int)v9);
  }
  v16 = pv;
  pv = 0LL;
  if ( v16 )
    CoTaskMemFree(v16);
LABEL_18:
  ATL::CAutoPtr<CPipeInstance>::Free(v19, v12);
  return (unsigned int)v9;
}
