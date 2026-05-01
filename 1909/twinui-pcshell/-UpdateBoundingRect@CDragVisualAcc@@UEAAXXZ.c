/*
 * XREFs of ?UpdateBoundingRect@CDragVisualAcc@@UEAAXXZ @ 0x180400190
 * Callers:
 *     ?ShowFocus@CDragVisualAcc@@UEAAXXZ @ 0x180400080 (-ShowFocus@CDragVisualAcc@@UEAAXXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x180089590 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 *     ?Equals@Guid@Platform@@QEAA_NAEBU_GUID@@@Z @ 0x180178EE0 (-Equals@Guid@Platform@@QEAA_NAEBU_GUID@@@Z.c)
 *     ?GetBoundingRectangle@AccessibilityHelpers@@YAJPEBUtagRECT@@PEAUtagVARIANT@@@Z @ 0x1803FEEE8 (-GetBoundingRectangle@AccessibilityHelpers@@YAJPEBUtagRECT@@PEAUtagVARIANT@@@Z.c)
 */

void __fastcall CDragVisualAcc::UpdateBoundingRect(CDragVisualAcc *this)
{
  AccessibilityHelpers *v2; // r8
  __int128 v3; // xmm0
  IRecordInfo *v4; // xmm1_8
  VARIANTARG pvarg; // [rsp+20h] [rbp-29h] BYREF
  VARIANT newValue; // [rsp+40h] [rbp-9h] BYREF
  VARIANT oldValue; // [rsp+60h] [rbp+17h] BYREF
  __int128 v8; // [rsp+80h] [rbp+37h] BYREF

  (*(void (__fastcall **)(_QWORD, __int128 *))(**((_QWORD **)this + 4) + 120LL))(*((_QWORD *)this + 4), &v8);
  if ( !Platform::Guid::Equals((Platform::Guid *)&v8, (const struct _GUID *)((char *)this + 40)) )
  {
    *(_OWORD *)v2 = v8;
    if ( AccessibilityHelpers::GetBoundingRectangle(v2, &pvarg, (struct tagVARIANT *)v2) >= 0 )
    {
      *(_OWORD *)&newValue.vt = *(_OWORD *)&pvarg.vt;
      v3 = *(_OWORD *)((char *)this + 56);
      newValue.pRecInfo = pvarg.pRecInfo;
      v4 = (IRecordInfo *)*((_QWORD *)this + 9);
      *(_OWORD *)&oldValue.vt = v3;
      oldValue.pRecInfo = v4;
      UiaRaiseAutomationPropertyChangedEvent((IRawElementProviderSimple *)this - 4, 30001, &oldValue, &newValue);
      VariantClear(&pvarg);
    }
  }
}
