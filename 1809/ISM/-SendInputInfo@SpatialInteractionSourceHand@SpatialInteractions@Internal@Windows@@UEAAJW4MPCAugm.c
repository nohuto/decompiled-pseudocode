/*
 * XREFs of ?SendInputInfo@SpatialInteractionSourceHand@SpatialInteractions@Internal@Windows@@UEAAJW4MPCAugmentedInputGestureType@@PEAUISpatialInteractionSourceCollectionCallbacks@234@@Z @ 0x1800BE740
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003590 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GenerateHandLostInputInfo@SpatialInteractionSourceHand@SpatialInteractions@Internal@Windows@@IEAAXPEAUHandInputInfo@1234@@Z @ 0x1800BEBB8 (-GenerateHandLostInputInfo@SpatialInteractionSourceHand@SpatialInteractions@Internal@Windows@@IE.c)
 *     memset_0 @ 0x18012BDEE (memset_0.c)
 *     __security_check_cookie @ 0x18012BF70 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
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
  __int128 v13; // [rsp+50h] [rbp-188h] BYREF
  __int128 v14; // [rsp+60h] [rbp-178h]
  __int128 v15; // [rsp+70h] [rbp-168h]
  __int128 v16; // [rsp+80h] [rbp-158h]
  __int64 v17; // [rsp+90h] [rbp-148h]
  _OWORD v18[4]; // [rsp+A0h] [rbp-138h] BYREF
  int v19[52]; // [rsp+E0h] [rbp-F8h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1D8h] [rbp+0h]

  v17 = -2LL;
  try
  {
    if ( a2 >= 0 )
    {
      if ( a2 <= 1 )
      {
        v9 = *(__int128 **)(a1 + 224);
        v10 = *(__int128 **)(a1 + 232);
        while ( v9 != v10 )
        {
          v13 = *v9;
          v14 = v9[1];
          v15 = v9[2];
          v16 = v9[3];
          v11 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, _QWORD, __int128 *, __int128 *))(*(_QWORD *)a3 + 16LL))(
                  a3,
                  0LL,
                  *((unsigned int *)v9 + 66),
                  *(unsigned int *)(a1 + 8),
                  v9 + 4,
                  &v13);
          v12 = v11;
          if ( v11 < 0 )
          {
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0x17A,
              (__int64)"onecoreuap\\analog\\input\\spatialinteractionclientlib\\hands\\spatialinteractionsourcehand.cpp",
              (const char *)(unsigned int)v11);
            return v12;
          }
          v9 += 17;
        }
        *(_QWORD *)(a1 + 232) = *(_QWORD *)(a1 + 224);
        return 0LL;
      }
      if ( a2 == 5 )
      {
        if ( *(_DWORD *)(a1 + 212) )
        {
          memset_0(v18, 0, 0x110uLL);
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
                 (unsigned int)v19[50],
                 *(unsigned int *)(a1 + 8),
                 v19,
                 &v13);
          v7 = v6;
          if ( v6 < 0 )
          {
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0x16A,
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
                           (void *)0x183,
                           (__int64)"onecoreuap\\analog\\input\\spatialinteractionclientlib\\hands\\spatialinteractionsourcehand.cpp",
                           a4);
  }
  return result;
}
