/*
 * XREFs of ?SendInputInfo@SpatialInteractionSourceHand@SpatialInteractions@Internal@Windows@@UEAAJW4MPCAugmentedInputGestureType@@PEAUISpatialInteractionSourceCollectionCallbacks@234@@Z @ 0x1800F6640
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180010F44 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     memset_0 @ 0x18002C06E (memset_0.c)
 *     __security_check_cookie @ 0x18002C200 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800378B0 (_guard_dispatch_icall_nop.c)
 *     ?GenerateHandLostInputInfo@SpatialInteractionSourceHand@SpatialInteractions@Internal@Windows@@IEAAXPEAUHandInputInfo@1234@@Z @ 0x1800F4888 (-GenerateHandLostInputInfo@SpatialInteractionSourceHand@SpatialInteractions@Internal@Windows@@IE.c)
 */

__int64 __fastcall Windows::Internal::SpatialInteractions::SpatialInteractionSourceHand::SendInputInfo(
        __int64 a1,
        int a2,
        __int64 a3,
        const char *a4)
{
  int v6; // eax
  unsigned int v7; // ebx
  __int64 result; // rax
  __int128 *v9; // rdi
  __int128 *v10; // r14
  int v11; // eax
  unsigned int v12; // esi
  __int128 v13; // [rsp+50h] [rbp-5A8h] BYREF
  __int128 v14; // [rsp+60h] [rbp-598h]
  __int128 v15; // [rsp+70h] [rbp-588h]
  __int128 v16; // [rsp+80h] [rbp-578h]
  __int64 v17; // [rsp+90h] [rbp-568h]
  _OWORD v18[4]; // [rsp+A0h] [rbp-558h] BYREF
  int v19[316]; // [rsp+E0h] [rbp-518h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+5F8h] [rbp+0h]

  v17 = -2LL;
  try
  {
    if ( a2 >= 0 )
    {
      if ( a2 <= 1 )
      {
        v9 = *(__int128 **)(a1 + 352);
        v10 = *(__int128 **)(a1 + 360);
        while ( v9 != v10 )
        {
          v13 = *v9;
          v14 = v9[1];
          v15 = v9[2];
          v16 = v9[3];
          v11 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, _QWORD, __int128 *, __int128 *))(*(_QWORD *)a3 + 16LL))(
                  a3,
                  0LL,
                  *((unsigned int *)v9 + 330),
                  *(unsigned int *)(a1 + 8),
                  v9 + 4,
                  &v13);
          v12 = v11;
          if ( v11 < 0 )
          {
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0x29C,
              (__int64)"onecoreuap\\analog\\input\\spatialinteractionclientlib\\hands\\spatialinteractionsourcehand.cpp",
              (const char *)(unsigned int)v11);
            return v12;
          }
          v9 += 83;
        }
        *(_QWORD *)(a1 + 360) = *(_QWORD *)(a1 + 352);
        return 0LL;
      }
      if ( a2 == 5 )
      {
        if ( *(_BYTE *)(a1 + 264) )
        {
          memset_0(v18, 0, 0x530uLL);
          Windows::Internal::SpatialInteractions::SpatialInteractionSourceHand::GenerateHandLostInputInfo(
            (Windows::Internal::SpatialInteractions::SpatialInteractionSourceHand *)a1,
            (struct Windows::Internal::SpatialInteractions::SpatialInteractionSourceHand::HandInputInfo *)v18);
          v13 = v18[0];
          v14 = v18[1];
          v15 = v18[2];
          v16 = v18[3];
          v6 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, _QWORD, int *, __int128 *))(*(_QWORD *)a3 + 16LL))(
                 a3,
                 0LL,
                 (unsigned int)v19[314],
                 *(unsigned int *)(a1 + 8),
                 v19,
                 &v13);
          v7 = v6;
          if ( v6 < 0 )
          {
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0x28C,
              (__int64)"onecoreuap\\analog\\input\\spatialinteractionclientlib\\hands\\spatialinteractionsourcehand.cpp",
              (const char *)(unsigned int)v6);
            return v7;
          }
        }
        return 0LL;
      }
    }
    result = 2147942487LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x2A5,
                           (__int64)"onecoreuap\\analog\\input\\spatialinteractionclientlib\\hands\\spatialinteractionsourcehand.cpp",
                           a4);
  }
  return result;
}
