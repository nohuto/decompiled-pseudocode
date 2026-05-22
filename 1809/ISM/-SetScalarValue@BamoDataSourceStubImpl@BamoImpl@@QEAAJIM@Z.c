/*
 * XREFs of ?SetScalarValue@BamoDataSourceStubImpl@BamoImpl@@QEAAJIM@Z @ 0x18009AD34
 * Callers:
 *     ?BroadcastSetScalarValue@BamoDataSourcePrincipal@@UEAAJIM@Z @ 0x1800990E0 (-BroadcastSetScalarValue@BamoDataSourcePrincipal@@UEAAJIM@Z.c)
 *     ?SetScalarValue@BamoDataSourceStub@@UEAAJIM@Z @ 0x180099AB0 (-SetScalarValue@BamoDataSourceStub@@UEAAJIM@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003590 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall BamoImpl::BamoDataSourceStubImpl::SetScalarValue(
        BamoImpl::BamoDataSourceStubImpl *this,
        int a2,
        float a3)
{
  __int64 v3; // r8
  __int64 v4; // r10
  __int64 v6; // rax
  _QWORD v7[3]; // [rsp+40h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  v3 = *((_QWORD *)this + 5);
  v4 = *(_QWORD *)(*(_QWORD *)(v3 + 24) + 24LL);
  if ( *(_QWORD *)(v4 + 40) )
  {
    if ( *((_BYTE *)this + 32) )
    {
      v6 = *(unsigned int *)(v3 + 36);
      v7[1] = *(unsigned int *)(*((_QWORD *)this + 3) + 24LL);
      v7[0] = v6;
      return CoreUICallSend(*(_QWORD *)(v4 + 48), v7, 2LL, 5LL, 1, &unk_18014BF29, a2);
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
        (void *)0x247A,
        (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\dataprovider\\objfre\\amd64\\dataprovider.bamo.h",
        (const char *)0x87B20805LL);
      return 2276591621LL;
    }
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x2473,
      (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\dataprovider\\objfre\\amd64\\dataprovider.bamo.h",
      (const char *)0x87B20814LL);
    return 2276591636LL;
  }
}
