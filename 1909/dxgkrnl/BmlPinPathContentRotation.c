/*
 * XREFs of BmlPinPathContentRotation @ 0x1C0127924
 * Callers:
 *     BmlPinNextBestTargetMode @ 0x1C0127628 (BmlPinNextBestTargetMode.c)
 *     _BmlGetPathModeListForPathTargetModes @ 0x1C02C2838 (_BmlGetPathModeListForPathTargetModes.c)
 * Callees:
 *     ?FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z @ 0x1C0005814 (-FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00250D0 (_guard_dispatch_icall_nop.c)
 *     ?BmlIsSupportedPathRotation@@YA_NW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@U_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION_SUPPORT@@@Z @ 0x1C0127AE0 (-BmlIsSupportedPathRotation@@YA_NW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@U_D3DKMDT_VIDPN_PRESENT.c)
 */

__int64 __fastcall BmlPinPathContentRotation(__int64 a1, __int64 a2, unsigned __int16 a3)
{
  __int64 v4; // rdi
  struct DMMVIDPNPRESENTPATH *Path; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 result; // rax
  __int64 v11; // rax
  char v12; // [rsp+20h] [rbp-18h]

  v4 = 104LL * a3;
  Path = DMMVIDPNTOPOLOGY::FindPath(
           (DMMVIDPNTOPOLOGY *)(a2 + 96),
           *(_DWORD *)(*(_QWORD *)(v4 + a1 + 16) + 24LL),
           *(_DWORD *)(*(_QWORD *)(v4 + a1 + 16) + 28LL));
  if ( BmlIsSupportedPathRotation(
         *(enum _D3DKMDT_VIDPN_PRESENT_PATH_ROTATION *)(v4 + a1 + 28),
         *(struct _D3DKMDT_VIDPN_PRESENT_PATH_ROTATION_SUPPORT *)((char *)Path + 124)) )
  {
    v12 = 1;
    result = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, _QWORD, char))(*(_QWORD *)(*(_QWORD *)(a2 + 48) + 432LL)
                                                                              + 80LL))(
               (a2 + 96) & -(__int64)(a2 != -289),
               *(unsigned int *)(*(_QWORD *)(v4 + a1 + 16) + 24LL),
               *(unsigned int *)(*(_QWORD *)(v4 + a1 + 16) + 28LL),
               *(unsigned int *)(v4 + a1 + 28),
               v12);
    if ( (int)result < 0 )
    {
      ++*(_DWORD *)(v4 + a1 + 84);
      *(_DWORD *)(v4 + a1 + 88) = result;
    }
    if ( (_DWORD)result == -1071774907 )
      return 3223192326LL;
  }
  else
  {
    v11 = WdLogNewEntry5_WdWarning(v8, v7, v9);
    *(_QWORD *)(v11 + 24) = *(int *)(v4 + a1 + 28);
    WdLogEvent5_WdWarning(v11);
    return 3223192326LL;
  }
  return result;
}
