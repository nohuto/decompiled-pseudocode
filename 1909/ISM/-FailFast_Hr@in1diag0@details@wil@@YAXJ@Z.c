/*
 * XREFs of ?FailFast_Hr@in1diag0@details@wil@@YAXJ@Z @ 0x1800D3D8C
 * Callers:
 *     ??1AlpcSectionListEntry@AlpcPort@@UEAA@XZ @ 0x1800D4098 (--1AlpcSectionListEntry@AlpcPort@@UEAA@XZ.c)
 *     ?CreateSection@AlpcPort@@UEAAJ_K0PEBXAEAPEAX@Z @ 0x1800D4DB0 (-CreateSection@AlpcPort@@UEAAJ_K0PEBXAEAPEAX@Z.c)
 *     ?DispatchNextCallback@SipcEndpoint@@QEAAJPEAX@Z @ 0x1800D53F8 (-DispatchNextCallback@SipcEndpoint@@QEAAJPEAX@Z.c)
 * Callees:
 *     ?ReportFailure_Hr@details@wil@@YAXPEAXIPEBD110W4FailureType@2@J@Z @ 0x180010F78 (-ReportFailure_Hr@details@wil@@YAXPEAXIPEBD110W4FailureType@2@J@Z.c)
 */

void __fastcall wil::details::in1diag0::FailFast_Hr(wil::details::in1diag0 *this)
{
  __int64 retaddr; // [rsp+48h] [rbp+0h]

  wil::details::ReportFailure_Hr(0LL, 0LL, 0LL, 0LL, 0LL, retaddr);
}
