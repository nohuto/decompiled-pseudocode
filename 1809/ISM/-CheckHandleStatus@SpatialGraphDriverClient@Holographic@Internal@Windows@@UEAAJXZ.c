/*
 * XREFs of ?CheckHandleStatus@SpatialGraphDriverClient@Holographic@Internal@Windows@@UEAAJXZ @ 0x180113FF0
 * Callers:
 *     ?CheckHandleStatus@SpatialGraphDriverClient@Holographic@Internal@Windows@@WBA@EAAJXZ @ 0x180121CE0 (-CheckHandleStatus@SpatialGraphDriverClient@Holographic@Internal@Windows@@WBA@EAAJXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003590 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall Windows::Internal::Holographic::SpatialGraphDriverClient::CheckHandleStatus(
        Windows::Internal::Holographic::SpatialGraphDriverClient *this)
{
  __int64 v1; // rdi
  unsigned int v2; // ebx
  RTL_SRWLOCK *v3; // rsi
  int v4; // edi
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v1 = *((_QWORD *)this + 12);
  v2 = 0;
  if ( v1 )
  {
    v3 = (RTL_SRWLOCK *)(v1 + 120);
    AcquireSRWLockShared((PSRWLOCK)(v1 + 120));
    v4 = *(_DWORD *)(v1 + 128);
    if ( v3 )
      ReleaseSRWLockShared(v3);
    if ( v4 < 0 )
      return (unsigned int)v4;
  }
  else
  {
    v2 = -2147024890;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x3AD,
      (__int64)"onecoreuap\\analog\\input\\holographicdriverclientlib\\lib\\spatialgraphdriverclient.cpp",
      (const char *)0x80070006LL);
  }
  return v2;
}
