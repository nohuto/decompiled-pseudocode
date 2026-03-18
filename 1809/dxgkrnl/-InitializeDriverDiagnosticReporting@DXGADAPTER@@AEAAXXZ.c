/*
 * XREFs of ?InitializeDriverDiagnosticReporting@DXGADAPTER@@AEAAXXZ @ 0x1C01500C4
 * Callers:
 *     ?Initialize@DXGADAPTER@@QEAAJPEAU_DEVICE_OBJECT@@PEAU_DXGK_ADAPTER_CAPS@@@Z @ 0x1C014EA68 (-Initialize@DXGADAPTER@@QEAAJPEAU_DEVICE_OBJECT@@PEAU_DXGK_ADAPTER_CAPS@@@Z.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0011DE0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?UpdateDiagnosticReporting@DXGADAPTER@@QEAAJPEAU_ADAPTER_UPDATE_DIAGNOSTIC_REPORTING@1@@Z @ 0x1C01C0140 (-UpdateDiagnosticReporting@DXGADAPTER@@QEAAJPEAU_ADAPTER_UPDATE_DIAGNOSTIC_REPORTING@1@@Z.c)
 */

void __fastcall DXGADAPTER::InitializeDriverDiagnosticReporting(DXGADAPTER *this)
{
  struct DXGGLOBAL *Global; // rax
  unsigned int v3; // ebx
  _DWORD *v4; // rdi
  __int64 v5; // [rsp+20h] [rbp-10h] BYREF
  __int64 v6; // [rsp+28h] [rbp-8h]

  Global = DXGGLOBAL::GetGlobal((__int64)this);
  *((_QWORD *)this + 535) = 0LL;
  *((_QWORD *)this + 536) = -1LL;
  v3 = 0;
  v5 = 0LL;
  v6 = 0LL;
  v4 = (_DWORD *)((char *)Global + 20320);
  do
  {
    HIDWORD(v5) = *v4;
    if ( HIDWORD(v5) )
    {
      if ( v3 )
      {
        LODWORD(v5) = v5 | 2;
        LODWORD(v6) = v6 | 0xFFFFFFFE;
      }
      else
      {
        LODWORD(v5) = v5 | 1;
        LODWORD(v6) = v6 | 0xFFFFFFFC;
      }
      HIDWORD(v6) = v3;
      DXGADAPTER::UpdateDiagnosticReporting(this, (struct DXGADAPTER::_ADAPTER_UPDATE_DIAGNOSTIC_REPORTING *)&v5);
    }
    ++v3;
    ++v4;
  }
  while ( v3 < 2 );
}
