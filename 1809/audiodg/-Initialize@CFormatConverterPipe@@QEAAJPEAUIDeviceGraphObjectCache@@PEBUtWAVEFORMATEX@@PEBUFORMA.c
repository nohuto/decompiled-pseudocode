/*
 * XREFs of ?Initialize@CFormatConverterPipe@@QEAAJPEAUIDeviceGraphObjectCache@@PEBUtWAVEFORMATEX@@PEBUFORMAT_CONVERTER_PIPE_DESCRIPTOR@@@Z @ 0x14004192C
 * Callers:
 *     ?CreateFormatConverterPipe@CSubmixImpl@@IEAAJPEAUtWAVEFORMATEX@@_J@Z @ 0x14004164C (-CreateFormatConverterPipe@CSubmixImpl@@IEAAJPEAUtWAVEFORMATEX@@_J@Z.c)
 * Callees:
 *     ?ConnectAPOs@CPipeInstance@@QEAAJPEAUIAudioGraphCallback@@@Z @ 0x140006814 (-ConnectAPOs@CPipeInstance@@QEAAJPEAUIAudioGraphCallback@@@Z.c)
 *     ?Initialize@CPipeInstance@@QEAAJXZ @ 0x14000B260 (-Initialize@CPipeInstance@@QEAAJXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x14002FDF4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?CloneWaveFormat@@YAJPEBUtWAVEFORMATEX@@PEAPEAU1@@Z @ 0x14003103C (-CloneWaveFormat@@YAJPEBUtWAVEFORMATEX@@PEAPEAU1@@Z.c)
 *     ?Free@?$CAutoPtr@VCPipeInstance@@@ATL@@QEAAXXZ @ 0x140031C94 (-Free@-$CAutoPtr@VCPipeInstance@@@ATL@@QEAAXXZ.c)
 *     ?CreateFormatConverterPipeInstance@CPipeInstance@@SAJPEAUIDeviceGraphObjectCache@@PEBUFORMAT_CONVERTER_PIPE_DESCRIPTOR@@PEAPEAV1@@Z @ 0x14003A344 (-CreateFormatConverterPipeInstance@CPipeInstance@@SAJPEAUIDeviceGraphObjectCache@@PEBUFORMAT_CON.c)
 *     ?Reset@CFormatConverterPipe@@QEAAXXZ @ 0x140041DE0 (-Reset@CFormatConverterPipe@@QEAAXXZ.c)
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
  _QWORD *v12; // r14
  struct tWAVEFORMATEX *v13; // rcx
  struct tWAVEFORMATEX *v14; // r15
  void **v15; // rbx
  LPVOID v16; // rsi
  void *v17; // rcx
  LPVOID pv; // [rsp+20h] [rbp-30h] BYREF
  CPipeInstance *v20[2]; // [rsp+28h] [rbp-28h] BYREF
  LPVOID *p_pv; // [rsp+38h] [rbp-18h]
  struct tWAVEFORMATEX *v22; // [rsp+40h] [rbp-10h] BYREF
  char v23; // [rsp+48h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+18h]

  v20[1] = (CPipeInstance *)-2LL;
  CFormatConverterPipe::Reset(this);
  v20[0] = 0LL;
  FormatConverterPipeInstance = CPipeInstance::CreateFormatConverterPipeInstance(a2, a4, v20);
  v9 = FormatConverterPipeInstance;
  if ( FormatConverterPipeInstance < 0 )
  {
    v10 = 244LL;
LABEL_7:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v10,
      (__int64)"avcore\\audiocore\\server\\audiodg\\exe\\submix.cpp",
      (const char *)(unsigned int)FormatConverterPipeInstance);
    goto LABEL_23;
  }
  v11 = v20[0];
  FormatConverterPipeInstance = CPipeInstance::Initialize(v20[0]);
  v9 = FormatConverterPipeInstance;
  if ( FormatConverterPipeInstance < 0 )
  {
    v10 = 245LL;
    goto LABEL_7;
  }
  FormatConverterPipeInstance = CPipeInstance::ConnectAPOs(v11, 0LL);
  v9 = FormatConverterPipeInstance;
  if ( FormatConverterPipeInstance < 0 )
  {
    v10 = 246LL;
    goto LABEL_7;
  }
  pv = 0LL;
  p_pv = &pv;
  v22 = 0LL;
  v23 = 1;
  v9 = CloneWaveFormat(a3, &v22);
  if ( v23 )
  {
    v12 = p_pv;
    v13 = (struct tWAVEFORMATEX *)*p_pv;
    v14 = v22;
    if ( v22 != *p_pv )
    {
      if ( v13 )
        CoTaskMemFree(v13);
      *v12 = v14;
    }
  }
  if ( v9 >= 0 )
  {
    v20[0] = 0LL;
    *(_QWORD *)this = v11;
    v15 = (void **)((char *)this + 8);
    if ( (LPVOID *)((char *)this + 8) != &pv )
    {
      v16 = pv;
      pv = 0LL;
      v17 = *v15;
      if ( v16 != *v15 )
      {
        if ( v17 )
          CoTaskMemFree(v17);
        *v15 = v16;
      }
    }
    *((_QWORD *)this + 2) = a4[3];
    *((_BYTE *)this + 24) = 0;
    v9 = 0;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xF9,
      (__int64)"avcore\\audiocore\\server\\audiodg\\exe\\submix.cpp",
      (const char *)(unsigned int)v9);
  }
  if ( pv )
    CoTaskMemFree(pv);
LABEL_23:
  ATL::CAutoPtr<CPipeInstance>::Free((LPVOID **)v20);
  return (unsigned int)v9;
}
