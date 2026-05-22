/*
 * XREFs of ?GetIsCoreWindow@LegacyInputSinkData@@QEBA_NXZ @ 0x180066DCC
 * Callers:
 *     ?AddDwmInputRoutingData@DWMInputTarget@@AEAAJPEAUInputInfo@@@Z @ 0x1800C68CC (-AddDwmInputRoutingData@DWMInputTarget@@AEAAJPEAUInputInfo@@@Z.c)
 * Callees:
 *     _CxxThrowException_0 @ 0x18002C71A (_CxxThrowException_0.c)
 */

bool __fastcall LegacyInputSinkData::GetIsCoreWindow(LegacyInputSinkData *this)
{
  __int64 v2; // rcx
  bool v3; // zf
  void **pExceptionObject; // [rsp+20h] [rbp-28h] BYREF
  __int128 v6; // [rsp+28h] [rbp-20h]
  int v7; // [rsp+50h] [rbp+8h] BYREF

  if ( !*((_BYTE *)this + 17) )
  {
    v2 = *(_QWORD *)this;
    v7 = 0;
    NtQueryCompositionInputIsImplicit(v2, &v7);
    v3 = v7 == 0;
    BYTE1(v7) = 1;
    LOBYTE(v7) = !v3;
    *((_WORD *)this + 8) = v7;
  }
  if ( !*((_BYTE *)this + 17) )
  {
    v6 = 0uLL;
    pExceptionObject = &std::bad_optional_access::`vftable';
    throw (std::bad_optional_access *)&pExceptionObject;
  }
  return *((_BYTE *)this + 16);
}
