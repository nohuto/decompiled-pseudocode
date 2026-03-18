/*
 * XREFs of DxgkCheckDisplayState @ 0x1C0296AB0
 * Callers:
 *     <none>
 * Callees:
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C000C364 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ??0DISPLAYSTATECHECKER@@QEAA@XZ @ 0x1C0049934 (--0DISPLAYSTATECHECKER@@QEAA@XZ.c)
 *     ??_GDISPLAYSTATECHECKER@@QEAAPEAXI@Z @ 0x1C0049A3C (--_GDISPLAYSTATECHECKER@@QEAAPEAXI@Z.c)
 *     ?CheckPrimaryContentState@DISPLAYSTATECHECKER@@QEAAJXZ @ 0x1C0294FC8 (-CheckPrimaryContentState@DISPLAYSTATECHECKER@@QEAAJXZ.c)
 *     ?Initialize@DISPLAYSTATECHECKER@@QEAAJW4_D3DKMT_BLACK_SCREEN_DETECTION_TRIGGER@@HPEBDU_GUID@@@Z @ 0x1C0295F24 (-Initialize@DISPLAYSTATECHECKER@@QEAAJW4_D3DKMT_BLACK_SCREEN_DETECTION_TRIGGER@@HPEBDU_GUID@@@Z.c)
 *     ?LogAllDisplayDiagInfo@DISPLAYSTATECHECKER@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C02962FC (-LogAllDisplayDiagInfo@DISPLAYSTATECHECKER@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 */

__int64 __fastcall DxgkCheckDisplayState(unsigned int *a1)
{
  DISPLAYSTATECHECKER *v2; // rax
  DISPLAYSTATECHECKER **v3; // rbx
  const char *v4; // r9
  unsigned int v5; // r8d
  __int64 v6; // rdx
  __int64 v7; // rdx
  int v8; // esi
  __int128 v10; // [rsp+30h] [rbp-18h] BYREF

  v2 = (DISPLAYSTATECHECKER *)operator new[](0x1700uLL, 0x4B677844u, PagedPool);
  if ( v2 )
    v3 = (DISPLAYSTATECHECKER **)DISPLAYSTATECHECKER::DISPLAYSTATECHECKER(v2);
  else
    v3 = 0LL;
  v4 = (const char *)*((_QWORD *)a1 + 1);
  v5 = a1[1];
  v6 = *a1;
  v10 = *(_OWORD *)(a1 + 6);
  v8 = DISPLAYSTATECHECKER::Initialize((__int64)v3, v6, v5, v4, &v10);
  if ( v8 >= 0 )
  {
    DISPLAYSTATECHECKER::CheckPrimaryContentState(v3, v7);
    DISPLAYSTATECHECKER::LogAllDisplayDiagInfo(
      (DISPLAYSTATECHECKER *)v3,
      *((struct _DXGK_DISPLAY_SCENARIO_CONTEXT **)a1 + 2));
  }
  if ( v3 )
    DISPLAYSTATECHECKER::`scalar deleting destructor'((DISPLAYSTATECHECKER *)v3);
  return (unsigned int)v8;
}
