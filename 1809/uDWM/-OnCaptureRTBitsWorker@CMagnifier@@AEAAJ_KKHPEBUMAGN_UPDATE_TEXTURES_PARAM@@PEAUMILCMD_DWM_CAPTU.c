/*
 * XREFs of ?OnCaptureRTBitsWorker@CMagnifier@@AEAAJ_KKHPEBUMAGN_UPDATE_TEXTURES_PARAM@@PEAUMILCMD_DWM_CAPTURE_METARENDERTARGET_BITSREPLY@@@Z @ 0x18007D9FC
 * Callers:
 *     ?OnMagnifierSyncApiMessage@CMagnifierControl@@QEAAJW4DWMCMD@@PEAX_NKPEBU_REMOTE_PORT_VIEW@@PEAJPEAI@Z @ 0x18007EC5C (-OnMagnifierSyncApiMessage@CMagnifierControl@@QEAAJW4DWMCMD@@PEAX_NKPEBU_REMOTE_PORT_VIEW@@PEAJP.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18004E04C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004E2E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CMagnifier::OnCaptureRTBitsWorker(
        CMagnifier *this,
        __int64 a2,
        char a3,
        int a4,
        const struct MAGN_UPDATE_TEXTURES_PARAM *a5,
        struct MILCMD_DWM_CAPTURE_METARENDERTARGET_BITSREPLY *a6)
{
  __int64 v8; // rax
  __int64 v9; // rcx
  int v10; // r9d
  int v11; // eax
  unsigned int v12; // esi
  int v13; // eax

  if ( *((_DWORD *)this + 44) )
  {
    v8 = *((_QWORD *)this + 4);
    v9 = *((_QWORD *)this + 2);
    v10 = a3 & 1 | 2;
    if ( !a4 )
      v10 = a3 & 1;
    v11 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, _QWORD, __int64, int, _DWORD, const struct MAGN_UPDATE_TEXTURES_PARAM *, char *))(*(_QWORD *)v9 + 760LL))(
            v9,
            *(unsigned int *)(v8 + 24),
            *((unsigned int *)this + 45),
            *((unsigned int *)this + 46),
            a2,
            v10,
            0,
            a5,
            (char *)a6 + 40);
    v12 = v11;
    if ( v11 >= 0 )
    {
      *((_DWORD *)a6 + 6) = *((_DWORD *)this + 44);
      *((_DWORD *)a6 + 7) = *((_DWORD *)this + 47);
      *((_DWORD *)a6 + 8) = *((_DWORD *)this + 45);
      v13 = *((_DWORD *)this + 46);
      *((_DWORD *)a6 + 5) = 0;
      *((_DWORD *)a6 + 2) = 0;
      *(_QWORD *)((char *)a6 + 12) = 0LL;
      *((_DWORD *)a6 + 9) = v13;
    }
    else
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_1800C46F8, 8LL, v11, 0x21Cu);
    }
  }
  else
  {
    return (unsigned int)-2003292404;
  }
  return v12;
}
