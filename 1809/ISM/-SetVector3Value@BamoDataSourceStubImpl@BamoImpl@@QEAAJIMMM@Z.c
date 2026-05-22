/*
 * XREFs of ?SetVector3Value@BamoDataSourceStubImpl@BamoImpl@@QEAAJIMMM@Z @ 0x18009AF0C
 * Callers:
 *     ?BroadcastSetVector3Value@BamoDataSourcePrincipal@@UEAAJIMMM@Z @ 0x1800992C0 (-BroadcastSetVector3Value@BamoDataSourcePrincipal@@UEAAJIMMM@Z.c)
 *     ?SetVector3Value@BamoDataSourceStub@@UEAAJIMMM@Z @ 0x180099B80 (-SetVector3Value@BamoDataSourceStub@@UEAAJIMMM@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003590 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall BamoImpl::BamoDataSourceStubImpl::SetVector3Value(
        BamoImpl::BamoDataSourceStubImpl *this,
        int a2,
        float a3,
        float a4)
{
  __int64 v4; // r8
  __int64 v5; // r10
  __int64 v7; // rax
  _QWORD v8[3]; // [rsp+50h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]

  v4 = *((_QWORD *)this + 5);
  v5 = *(_QWORD *)(*(_QWORD *)(v4 + 24) + 24LL);
  if ( *(_QWORD *)(v5 + 40) )
  {
    if ( *((_BYTE *)this + 32) )
    {
      v7 = *(unsigned int *)(v4 + 36);
      v8[1] = *(unsigned int *)(*((_QWORD *)this + 3) + 24LL);
      v8[0] = v7;
      return CoreUICallSend(*(_QWORD *)(v5 + 48), v8, 2LL, 5LL, 3, &unk_18014BF32, a2);
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x122,
        (__int64)"internal\\mincore\\priv_sdk\\inc\\bamostub.inl",
        (const char *)0x87B20805LL);
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x24A9,
        (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\dataprovider\\objfre\\amd64\\dataprovider.bamo.h",
        (const char *)0x87B20805LL);
      return 2276591621LL;
    }
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x24A2,
      (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\dataprovider\\objfre\\amd64\\dataprovider.bamo.h",
      (const char *)0x87B20814LL);
    return 2276591636LL;
  }
}
