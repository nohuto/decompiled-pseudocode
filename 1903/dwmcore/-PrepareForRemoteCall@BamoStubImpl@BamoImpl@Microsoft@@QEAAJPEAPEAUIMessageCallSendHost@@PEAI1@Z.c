/*
 * XREFs of ?PrepareForRemoteCall@BamoStubImpl@BamoImpl@Microsoft@@QEAAJPEAPEAUIMessageCallSendHost@@PEAI1@Z @ 0x180196AB8
 * Callers:
 *     ?OnRegisterError@BamoDataProviderRegistrarStubImpl@BamoImpl@@QEAAJI@Z @ 0x18019673C (-OnRegisterError@BamoDataProviderRegistrarStubImpl@BamoImpl@@QEAAJI@Z.c)
 *     ?OnUnregisterError@BamoDataProviderRegistrarStubImpl@BamoImpl@@QEAAJI@Z @ 0x18019684C (-OnUnregisterError@BamoDataProviderRegistrarStubImpl@BamoImpl@@QEAAJI@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18015645C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall Microsoft::BamoImpl::BamoStubImpl::PrepareForRemoteCall(
        Microsoft::BamoImpl::BamoStubImpl *this,
        struct IMessageCallSendHost **a2,
        unsigned int *a3,
        unsigned int *a4)
{
  __int64 v4; // r10
  __int64 v5; // rax
  __int64 result; // rax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v4 = *((_QWORD *)this + 5);
  v5 = *(_QWORD *)(*(_QWORD *)(v4 + 24) + 24LL);
  if ( *((_BYTE *)this + 32) && *(_QWORD *)(v5 + 40) )
  {
    *a2 = *(struct IMessageCallSendHost **)(v5 + 48);
    *a3 = *(_DWORD *)(v4 + 36);
    result = 0LL;
    *a4 = *(_DWORD *)(*((_QWORD *)this + 3) + 24LL);
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x122,
      (__int64)"internal\\mincore\\priv_sdk\\inc\\BamoStub.inl",
      (const char *)0x87B20805LL);
    return 2276591621LL;
  }
  return result;
}
