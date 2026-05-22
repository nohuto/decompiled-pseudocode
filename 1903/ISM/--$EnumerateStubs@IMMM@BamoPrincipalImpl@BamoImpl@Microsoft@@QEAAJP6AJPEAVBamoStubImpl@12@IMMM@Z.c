/*
 * XREFs of ??$EnumerateStubs@IMMM@BamoPrincipalImpl@BamoImpl@Microsoft@@QEAAJP6AJPEAVBamoStubImpl@12@IMMM@Z_NIMMM@Z @ 0x1800CE43C
 * Callers:
 *     ?BroadcastSetVector3Value@BamoDataSourcePrincipalImpl@BamoImpl@@QEAAJIMMM@Z @ 0x1800CF7CC (-BroadcastSetVector3Value@BamoDataSourcePrincipalImpl@BamoImpl@@QEAAJIMMM@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180010FD4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?CallSetVector3ValueOnStub@BamoDataSourcePrincipalImpl@BamoImpl@@CAJPEAVBamoStubImpl@2Microsoft@@IMMM@Z @ 0x1800CFBE4 (-CallSetVector3ValueOnStub@BamoDataSourcePrincipalImpl@BamoImpl@@CAJPEAVBamoStubImpl@2Microsoft@.c)
 */

__int64 __fastcall Microsoft::BamoImpl::BamoPrincipalImpl::EnumerateStubs<unsigned int,float,float,float>(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned int a4,
        float a5,
        float a6,
        int a7)
{
  __int64 v7; // rbx
  int v9; // eax
  unsigned int v10; // edi
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  v7 = *(_QWORD *)(a1 + 32);
  if ( !v7 )
    return 0LL;
  while ( 1 )
  {
    if ( *(_BYTE *)(v7 + 32) )
    {
      v9 = BamoImpl::BamoDataSourcePrincipalImpl::CallSetVector3ValueOnStub(
             (struct Microsoft::BamoImpl::BamoStubImpl *)v7,
             a4,
             a5,
             a6,
             *(float *)&a7);
      v10 = v9;
      if ( v9 < 0 )
        break;
    }
    v7 = *(_QWORD *)(v7 + 48);
    if ( !v7 )
      return 0LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x1D7,
    (__int64)"internal\\mincore\\priv_sdk\\inc\\bamoprincipal.inl",
    (const char *)(unsigned int)v9);
  return v10;
}
