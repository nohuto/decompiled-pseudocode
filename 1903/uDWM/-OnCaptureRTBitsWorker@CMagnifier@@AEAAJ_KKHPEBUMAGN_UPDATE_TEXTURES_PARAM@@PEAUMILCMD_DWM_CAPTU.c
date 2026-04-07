/*
 * XREFs of ?OnCaptureRTBitsWorker@CMagnifier@@AEAAJ_KKHPEBUMAGN_UPDATE_TEXTURES_PARAM@@PEAUMILCMD_DWM_CAPTURE_METARENDERTARGET_BITSREPLY@@@Z @ 0x180083B38
 * Callers:
 *     ?OnMagnifierSyncApiMessage@CMagnifierControl@@QEAAJW4DWMCMD@@PEAX_NKPEBU_REMOTE_PORT_VIEW@@PEAJPEAI@Z @ 0x180085060 (-OnMagnifierSyncApiMessage@CMagnifierControl@@QEAAJW4DWMCMD@@PEAX_NKPEBU_REMOTE_PORT_VIEW@@PEAJP.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18004FBC4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004FE00 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CMagnifier::OnCaptureRTBitsWorker(
        CMagnifier *this,
        __int64 a2,
        char a3,
        int a4,
        const struct MAGN_UPDATE_TEXTURES_PARAM *a5,
        struct MILCMD_DWM_CAPTURE_METARENDERTARGET_BITSREPLY *a6)
{
  int v7; // r8d
  int v8; // r10d
  bool v9; // zf
  __int64 v10; // r9
  __int64 v11; // rcx
  int v12; // eax
  unsigned int v13; // ebx
  int v14; // eax

  if ( *((_DWORD *)this + 42) )
  {
    v7 = a3 & 1;
    v8 = v7 | 2;
    v9 = a4 == 0;
    v10 = *((unsigned int *)this + 44);
    v11 = *(_QWORD *)(*((_QWORD *)this + 3) + 16LL);
    if ( v9 )
      v8 = v7;
    v12 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, __int64, __int64, int, _DWORD, const struct MAGN_UPDATE_TEXTURES_PARAM *, char *))(**(_QWORD **)(v11 + 16) + 712LL))(
            *(_QWORD *)(v11 + 16),
            *(unsigned int *)(v11 + 24),
            *((unsigned int *)this + 43),
            v10,
            a2,
            v8,
            0,
            a5,
            (char *)a6 + 40);
    v13 = v12;
    if ( v12 >= 0 )
    {
      *((_DWORD *)a6 + 6) = *((_DWORD *)this + 42);
      *((_DWORD *)a6 + 7) = *((_DWORD *)this + 45);
      *((_DWORD *)a6 + 8) = *((_DWORD *)this + 43);
      v14 = *((_DWORD *)this + 44);
      *((_DWORD *)a6 + 5) = 0;
      *((_DWORD *)a6 + 2) = 0;
      *(_QWORD *)((char *)a6 + 12) = 0LL;
      *((_DWORD *)a6 + 9) = v14;
    }
    else
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_1800CAC08, 8LL, v12, 0x1E9u);
    }
  }
  else
  {
    return (unsigned int)-2003292404;
  }
  return v13;
}
