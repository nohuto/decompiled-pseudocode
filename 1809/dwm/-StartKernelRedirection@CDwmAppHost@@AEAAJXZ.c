/*
 * XREFs of ?StartKernelRedirection@CDwmAppHost@@AEAAJXZ @ 0x140001D10
 * Callers:
 *     ?StartComposition@CDwmAppHost@@AEAAJXZ @ 0x140001C60 (-StartComposition@CDwmAppHost@@AEAAJXZ.c)
 * Callees:
 *     ??0CPortClient@@QEAA@IPEAX@Z @ 0x1400012B0 (--0CPortClient@@QEAA@IPEAX@Z.c)
 *     ??1CPortClient@@UEAA@XZ @ 0x140001340 (--1CPortClient@@UEAA@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x140001690 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _Init_thread_footer @ 0x1400032B0 (_Init_thread_footer.c)
 *     _Init_thread_header @ 0x140003318 (_Init_thread_header.c)
 *     _guard_dispatch_icall_nop @ 0x1400043B0 (_guard_dispatch_icall_nop.c)
 *     McTemplateU0 @ 0x1400050C0 (McTemplateU0.c)
 */

__int64 __fastcall CDwmAppHost::StartKernelRedirection(CDwmAppHost *this, __int64 a2, void *a3, __int64 a4)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  signed int v6; // ebx
  signed int LastError; // eax
  unsigned int v9; // [rsp+20h] [rbp-78h]
  _BYTE v10[16]; // [rsp+30h] [rbp-68h] BYREF
  __int64 (__fastcall *v11)(_BYTE *, __int64); // [rsp+40h] [rbp-58h]
  __int64 v12; // [rsp+60h] [rbp-38h]

  v4 = 4LL;
  if ( dword_14000B8AC > *(_DWORD *)(*(_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + 4LL) )
  {
    Init_thread_header(&dword_14000B8AC, 4LL, a3, a4);
    if ( dword_14000B8AC == -1 )
    {
      dword_14000B818 = -2147024865;
      Init_thread_footer(&dword_14000B8AC);
    }
  }
  if ( *(&g_dwmAppHost + 1) )
  {
    CPortClient::CPortClient((CPortClient *)v10, v4, a3);
    if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
      McTemplateU0(v5, &UdwmEstablishKernelRedirection_Start);
    v12 = (__int64)*(&g_dwmAppHost + 1);
    v6 = v11(v10, 1073741861LL);
    if ( v6 < 0 )
    {
      v9 = 285;
    }
    else
    {
      SetLastError(0);
      if ( (unsigned int)DwmKernelStartup() )
      {
        v6 = v11(v10, 1073741862LL);
        if ( v6 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_14000B818, 1u, v6, 0x121u);
        goto LABEL_11;
      }
      LastError = GetLastError();
      v6 = LastError;
      if ( LastError > 0 )
        v6 = (unsigned __int16)LastError | 0x80070000;
      v9 = 287;
      if ( v6 >= 0 )
        v6 = -2003304445;
    }
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_14000B818, 1u, v6, v9);
LABEL_11:
    CPortClient::~CPortClient((CPortClient *)v10);
    return (unsigned int)v6;
  }
  return 0LL;
}
