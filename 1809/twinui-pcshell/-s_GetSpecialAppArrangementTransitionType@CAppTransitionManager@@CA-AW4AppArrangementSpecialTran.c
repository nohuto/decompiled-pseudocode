/*
 * XREFs of ?s_GetSpecialAppArrangementTransitionType@CAppTransitionManager@@CA?AW4AppArrangementSpecialTransitionType@@PEAUIAppLayoutOperation@@@Z @ 0x1803288AC
 * Callers:
 *     ?_InitAnimationPassState@CAppTransitionManager@@AEAAXPEAUIAppLayoutOperation@@PEAUIImmersiveApplicationManagerSafeForSyncCallouts@@@Z @ 0x180327614 (-_InitAnimationPassState@CAppTransitionManager@@AEAAXPEAUIAppLayoutOperation@@PEAUIImmersiveAppl.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CAppTransitionManager::s_GetSpecialAppArrangementTransitionType(__int64 a1)
{
  unsigned int v2; // eax
  int v3; // ecx
  int v4; // esi
  unsigned int v5; // ebx
  unsigned int v6; // edi
  int v7; // esi
  unsigned int v9; // [rsp+50h] [rbp+8h] BYREF
  __int64 v10; // [rsp+58h] [rbp+10h] BYREF

  v2 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 80LL))(a1);
  v3 = (v2 >> 17) & 2 | 4;
  if ( (v2 & 0x800000) == 0 )
    v3 = (v2 >> 17) & 2;
  v4 = v3 | 0x20;
  if ( (v2 & 0x80000) == 0 )
    v4 = v3;
  v5 = v4;
  if ( !v4 && (*(int (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)a1 + 24LL))(a1, &v9) >= 0 )
  {
    v6 = 0;
    if ( v9 )
    {
      v7 = v4 + 1;
      do
      {
        if ( v5 )
          break;
        v10 = 0LL;
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v10);
        if ( (*(int (__fastcall **)(__int64, _QWORD, GUID *, __int64 *))(*(_QWORD *)a1 + 32LL))(
               a1,
               v6,
               &GUID_f1e97d9c_cb12_4e92_88d4_cfbda2f4f34e,
               &v10) >= 0
          && (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v10 + 96LL))(v10) == 6 )
        {
          v5 = v7;
        }
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v10);
        v6 += v7;
      }
      while ( v6 < v9 );
    }
  }
  return v5;
}
