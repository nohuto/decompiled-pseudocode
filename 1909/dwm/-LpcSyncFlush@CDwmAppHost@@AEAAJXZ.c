/*
 * XREFs of ?LpcSyncFlush@CDwmAppHost@@AEAAJXZ @ 0x140001CC0
 * Callers:
 *     ?Run@CDwmAppHost@@QEAAJXZ @ 0x140001B50 (-Run@CDwmAppHost@@QEAAJXZ.c)
 * Callees:
 *     ??0CPortClient@@QEAA@IPEAX@Z @ 0x1400012F0 (--0CPortClient@@QEAA@IPEAX@Z.c)
 *     ??1CPortClient@@UEAA@XZ @ 0x140001380 (--1CPortClient@@UEAA@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1400017A0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x140004A90 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CDwmAppHost::LpcSyncFlush(CDwmAppHost *this, __int64 a2, void *a3)
{
  unsigned int v3; // ebx
  int v4; // eax
  __int16 v6; // [rsp+28h] [rbp-80h]
  _BYTE v7[32]; // [rsp+40h] [rbp-68h] BYREF
  __int64 (__fastcall *v8)(_BYTE *, __int64, int *, __int64, _QWORD, __int16, CDwmAppHost **); // [rsp+60h] [rbp-48h]
  __int64 v9; // [rsp+70h] [rbp-38h]
  CDwmAppHost *v10; // [rsp+B0h] [rbp+8h] BYREF
  int v11; // [rsp+B8h] [rbp+10h] BYREF
  int v12; // [rsp+BCh] [rbp+14h]

  v10 = this;
  v3 = 0;
  if ( *(&g_dwmAppHost + 1) )
  {
    LODWORD(v10) = 0;
    CPortClient::CPortClient((CPortClient *)v7, a2, a3);
    v11 = -2147483639;
    v12 = 0;
    v9 = (__int64)*(&g_dwmAppHost + 1);
    v6 = 0;
    v4 = v8(v7, 2147483657LL, &v11, 8LL, 0LL, v6, &v10);
    v3 = v4;
    if ( v4 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v4, 0x15Eu);
    CPortClient::~CPortClient((CPortClient *)v7);
  }
  return v3;
}
