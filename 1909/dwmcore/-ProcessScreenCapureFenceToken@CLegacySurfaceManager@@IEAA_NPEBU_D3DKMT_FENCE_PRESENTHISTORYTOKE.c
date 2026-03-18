/*
 * XREFs of ?ProcessScreenCapureFenceToken@CLegacySurfaceManager@@IEAA_NPEBU_D3DKMT_FENCE_PRESENTHISTORYTOKEN@@@Z @ 0x1800D83E4
 * Callers:
 *     ?ProcessToken@CLegacySurfaceManager@@IEAAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@PEAIPEA_N@Z @ 0x18006B0BC (-ProcessToken@CLegacySurfaceManager@@IEAAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@PEAIPEA_N@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 */

char __fastcall CLegacySurfaceManager::ProcessScreenCapureFenceToken(
        CLegacySurfaceManager *this,
        const struct _D3DKMT_FENCE_PRESENTHISTORYTOKEN *a2)
{
  char v3; // bl
  _QWORD *v4; // rcx

  v3 = 0;
  v4 = (_QWORD *)*((_QWORD *)this + 26);
  if ( v4 && v4[7] == *(_QWORD *)a2 && *((_BYTE *)this + 220) )
  {
    (*(void (__fastcall **)(_QWORD *))(*v4 + 32LL))(v4);
    *((_BYTE *)this + 220) = 0;
    return 1;
  }
  return v3;
}
