/*
 * XREFs of ?Create@EdgyProcessorTarget@@SAJPEAVEdgyProcessor@@AEBUEdgyPointerInfo@@UtagMsgRoutingInfo@@PEAXPEAPEAV1@@Z @ 0x18010323C
 * Callers:
 *     ?OnHitTest@EdgyProcessor@@UEAAJPEAUInputInfo@@PEAUInputContext@@PEAUContextualProcessorInitialState@@@Z @ 0x180100C90 (-OnHitTest@EdgyProcessor@@UEAAJPEAUInputInfo@@PEAUInputContext@@PEAUContextualProcessorInitialSt.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIGipGameControllerProviderPrivate@Internal@Input@Gaming@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180002678 (-InternalRelease@-$ComPtr@UIGipGameControllerProviderPrivate@Internal@Input@Gaming@Windows@@@WRL.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180010FD4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??2RefCountedObject@@SAPEAX_K@Z @ 0x180014F60 (--2RefCountedObject@@SAPEAX_K@Z.c)
 *     ??0EdgyProcessorTarget@@IEAA@PEAVEdgyProcessor@@@Z @ 0x180102D60 (--0EdgyProcessorTarget@@IEAA@PEAVEdgyProcessor@@@Z.c)
 *     ?Initialize@EdgyProcessorTarget@@IEAAJAEBUEdgyPointerInfo@@UtagMsgRoutingInfo@@PEAX@Z @ 0x18010337C (-Initialize@EdgyProcessorTarget@@IEAAJAEBUEdgyPointerInfo@@UtagMsgRoutingInfo@@PEAX@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall EdgyProcessorTarget::Create(
        struct EdgyProcessor *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        EdgyProcessorTarget **a5)
{
  unsigned int v9; // ebx
  __int64 v10; // r9
  __int64 v11; // rdx
  EdgyProcessorTarget **v12; // rsi
  EdgyProcessorTarget *v13; // rax
  EdgyProcessorTarget *v14; // rdi
  int v15; // eax
  _OWORD v17[2]; // [rsp+30h] [rbp-48h] BYREF
  __int64 v18; // [rsp+50h] [rbp-28h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]
  EdgyProcessorTarget *v20; // [rsp+80h] [rbp+8h] BYREF

  v20 = 0LL;
  if ( a1 )
  {
    v12 = a5;
    if ( a5 )
    {
      v13 = (EdgyProcessorTarget *)RefCountedObject::operator new(0xB8uLL);
      v20 = v13;
      if ( v13 )
        v14 = EdgyProcessorTarget::EdgyProcessorTarget(v13, a1);
      else
        v14 = 0LL;
      v20 = v14;
      if ( v14 )
      {
        v17[0] = *(_OWORD *)a3;
        v17[1] = *(_OWORD *)(a3 + 16);
        v18 = *(_QWORD *)(a3 + 32);
        v15 = EdgyProcessorTarget::Initialize(v14, a2, v17, a4, -2LL);
        v9 = v15;
        if ( v15 >= 0 )
        {
          v20 = 0LL;
          *v12 = v14;
          v9 = 0;
          goto LABEL_14;
        }
        v10 = (unsigned int)v15;
        v11 = 67LL;
      }
      else
      {
        v9 = -2147024882;
        v10 = 2147942414LL;
        v11 = 65LL;
      }
    }
    else
    {
      v9 = -2147024809;
      v10 = 2147942487LL;
      v11 = 62LL;
    }
  }
  else
  {
    v9 = -2147024809;
    v10 = 2147942487LL;
    v11 = 61LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v11,
    (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\edgy\\processor\\edgytarget.cpp",
    (const char *)v10);
LABEL_14:
  Microsoft::WRL::ComPtr<Windows::Gaming::Input::Internal::IGipGameControllerProviderPrivate>::InternalRelease((__int64 *)&v20);
  return v9;
}
