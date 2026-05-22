/*
 * XREFs of ??$?0AEAKPEAUISpatialObjectDevice@Holographic@Internal@Windows@@PEAUISpatialObject@123@@?$_Ref_count_obj@VSpatialInteractionSourceHand@SpatialInteractions@Internal@Windows@@@std@@QEAA@AEAK$$QEAPEAUISpatialObjectDevice@Holographic@Internal@Windows@@$$QEAPEAUISpatialObject@345@@Z @ 0x1800BFF18
 * Callers:
 *     ?OnHandSpatialObjectAdded@SpatialInteractionHandObjectDevice@SpatialInteractions@Internal@Windows@@AEAAJAEBU_GUID@@@Z @ 0x1800BEF5C (-OnHandSpatialObjectAdded@SpatialInteractionHandObjectDevice@SpatialInteractions@Internal@Window.c)
 * Callees:
 *     __security_check_cookie @ 0x18012BF70 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall std::_Ref_count_obj<Windows::Internal::SpatialInteractions::SpatialInteractionSourceHand>::_Ref_count_obj<Windows::Internal::SpatialInteractions::SpatialInteractionSourceHand>(
        __int64 a1,
        int *a2,
        __int64 *a3,
        _QWORD *a4)
{
  __int64 v5; // rsi
  int v6; // ebx
  __int64 v7; // r14
  __int128 v8; // xmm0
  __int64 result; // rax
  _BYTE v10[16]; // [rsp+20h] [rbp-38h] BYREF

  *(_DWORD *)(a1 + 8) = 1;
  *(_DWORD *)(a1 + 12) = 1;
  *(_QWORD *)a1 = &std::_Ref_count_obj<Windows::Internal::SpatialInteractions::SpatialInteractionSourceHand>::`vftable';
  v5 = *a4;
  v6 = *a2;
  v7 = *a3;
  v8 = *(_OWORD *)(*(__int64 (__fastcall **)(_QWORD, _BYTE *))(*(_QWORD *)*a4 + 48LL))(*a4, v10);
  *(_DWORD *)(a1 + 24) = v6;
  *(_QWORD *)(a1 + 16) = &Windows::Internal::SpatialInteractions::SpatialInteractionSourceDevice::`vftable';
  *(_DWORD *)(a1 + 28) = 0;
  *(_OWORD *)(a1 + 36) = v8;
  *(_DWORD *)(a1 + 32) = 512;
  *(_QWORD *)(a1 + 56) = 0LL;
  InitializeSRWLock((PSRWLOCK)(a1 + 64));
  *(_QWORD *)(a1 + 72) = 0LL;
  *(_QWORD *)(a1 + 80) = 0LL;
  *(_DWORD *)(a1 + 88) = 0;
  InitializeSRWLock((PSRWLOCK)(a1 + 96));
  *(_QWORD *)(a1 + 104) = 0LL;
  *(_QWORD *)(a1 + 112) = 0LL;
  *(_DWORD *)(a1 + 120) = 0;
  *(_BYTE *)(a1 + 124) = 0;
  *(_QWORD *)(a1 + 16) = &Windows::Internal::SpatialInteractions::SpatialInteractionSourceObject::`vftable';
  *(_QWORD *)(a1 + 128) = v7;
  if ( v7 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 8LL))(v7);
  *(_QWORD *)(a1 + 136) = v5;
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 8LL))(v5);
  *(_QWORD *)(a1 + 144) = 0LL;
  *(_QWORD *)(a1 + 152) = 0LL;
  *(_QWORD *)(a1 + 16) = &Windows::Internal::SpatialInteractions::SpatialInteractionSourceHand::`vftable';
  result = a1;
  *(_QWORD *)(a1 + 160) = 0LL;
  *(_DWORD *)(a1 + 168) = 0;
  *(_QWORD *)(a1 + 176) = 0LL;
  *(_QWORD *)(a1 + 184) = 0LL;
  *(_QWORD *)(a1 + 192) = 0LL;
  *(_QWORD *)(a1 + 200) = 0LL;
  *(_QWORD *)(a1 + 208) = 0LL;
  *(_QWORD *)(a1 + 216) = 0LL;
  *(_WORD *)(a1 + 224) = 0;
  *(_BYTE *)(a1 + 226) = 0;
  *(_QWORD *)(a1 + 228) = 0LL;
  *(_QWORD *)(a1 + 240) = 0LL;
  *(_QWORD *)(a1 + 248) = 0LL;
  *(_QWORD *)(a1 + 256) = 0LL;
  return result;
}
