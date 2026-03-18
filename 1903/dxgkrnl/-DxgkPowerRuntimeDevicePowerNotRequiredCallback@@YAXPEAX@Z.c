/*
 * XREFs of ?DxgkPowerRuntimeDevicePowerNotRequiredCallback@@YAXPEAX@Z @ 0x1C003B120
 * Callers:
 *     <none>
 * Callees:
 *     ?PowerRuntimeDevicePowerRequiredCallback@DXGADAPTER@@QEAAXE@Z @ 0x1C0033EE8 (-PowerRuntimeDevicePowerRequiredCallback@DXGADAPTER@@QEAAXE@Z.c)
 *     McTemplateK0pqq @ 0x1C00356E4 (McTemplateK0pqq.c)
 */

void __fastcall DxgkPowerRuntimeDevicePowerNotRequiredCallback(DXGADAPTER *this, __int64 a2, const GUID *a3)
{
  int v4; // [rsp+20h] [rbp-18h]
  int v5; // [rsp+28h] [rbp-10h]

  if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
  {
    v5 = 0;
    v4 = 0;
    McTemplateK0pqq(0LL, &Dxgk_PowerRuntimeDevicePowerRequiredCallback, a3, this, v4, v5);
  }
  DXGADAPTER::PowerRuntimeDevicePowerRequiredCallback(this, 0LL);
  PoFxCompleteDevicePowerNotRequired(*((_QWORD *)this + 325));
}
