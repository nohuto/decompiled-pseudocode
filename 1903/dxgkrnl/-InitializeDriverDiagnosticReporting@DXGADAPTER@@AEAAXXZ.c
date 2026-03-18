/*
 * XREFs of ?InitializeDriverDiagnosticReporting@DXGADAPTER@@AEAAXXZ @ 0x1C01674F0
 * Callers:
 *     ?Initialize@DXGADAPTER@@QEAAJPEAU_DEVICE_OBJECT@@PEAU_DXGK_ADAPTER_CAPS@@@Z @ 0x1C01651A8 (-Initialize@DXGADAPTER@@QEAAJPEAU_DEVICE_OBJECT@@PEAU_DXGK_ADAPTER_CAPS@@@Z.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000C320 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?UpdateDiagnosticReporting@DXGADAPTER@@QEAAJPEAU_ADAPTER_UPDATE_DIAGNOSTIC_REPORTING@1@@Z @ 0x1C01EF704 (-UpdateDiagnosticReporting@DXGADAPTER@@QEAAJPEAU_ADAPTER_UPDATE_DIAGNOSTIC_REPORTING@1@@Z.c)
 */

void __fastcall DXGADAPTER::InitializeDriverDiagnosticReporting(DXGADAPTER *this, __int64 a2)
{
  struct DXGGLOBAL *Global; // rax
  unsigned int v4; // ebx
  _DWORD *v5; // rdi
  __int64 v6; // [rsp+20h] [rbp-10h] BYREF
  __int64 v7; // [rsp+28h] [rbp-8h]

  Global = DXGGLOBAL::GetGlobal((__int64)this, a2);
  *((_QWORD *)this + 534) = 0LL;
  *((_QWORD *)this + 535) = -1LL;
  v4 = 0;
  v6 = 0LL;
  v7 = 0LL;
  v5 = (_DWORD *)((char *)Global + 303988);
  do
  {
    HIDWORD(v6) = *v5;
    if ( HIDWORD(v6) )
    {
      if ( v4 )
      {
        LODWORD(v6) = v6 | 2;
        LODWORD(v7) = v7 | 0xFFFFFFFE;
      }
      else
      {
        LODWORD(v6) = v6 | 1;
        LODWORD(v7) = v7 | 0xFFFFFFFC;
      }
      HIDWORD(v7) = v4;
      DXGADAPTER::UpdateDiagnosticReporting(this, (struct DXGADAPTER::_ADAPTER_UPDATE_DIAGNOSTIC_REPORTING *)&v6);
    }
    ++v4;
    ++v5;
  }
  while ( v4 < 2 );
}
