/*
 * XREFs of ?RIMDeviceCallback_Destroyed@CBaseInput@@AEAAKPEAURawInputManagerDeviceObject@@@Z @ 0x1C0065750
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C004F724 (WPP_RECORDER_SF_q.c)
 *     HMRemoveHandleForObject @ 0x1C00657F0 (HMRemoveHandleForObject.c)
 *     HMMarkObjectDestroy @ 0x1C00659B0 (HMMarkObjectDestroy.c)
 *     _guard_dispatch_icall_nop @ 0x1C00AF730 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CBaseInput::RIMDeviceCallback_Destroyed(CBaseInput *this, struct RawInputManagerDeviceObject *a2)
{
  struct DEVICEINFO *v2; // rax
  struct DEVICEINFO **v5; // rdx

  v2 = CBaseInput::_spDevList;
  v5 = &CBaseInput::_spDevList;
  while ( 1 )
  {
    if ( !v2 )
    {
      WPP_RECORDER_SF_q(gBaseLog, 2u, 2u, 0x13u, (__int64)&WPP_0652932e8e25336fb557d9c15dc128bf_Traceguids, a2);
      return 0LL;
    }
    if ( v2 == (struct RawInputManagerDeviceObject *)((char *)a2 + 88) )
      break;
    v5 = (struct DEVICEINFO **)((char *)v2 + 56);
    v2 = (struct DEVICEINFO *)*((_QWORD *)v2 + 7);
  }
  *v5 = (struct DEVICEINFO *)*((_QWORD *)a2 + 18);
  *((_QWORD *)a2 + 18) = 0LL;
  ObfDereferenceObject(a2);
  if ( (*(unsigned __int8 (__fastcall **)(CBaseInput *, struct RawInputManagerDeviceObject *, char *))(*(_QWORD *)this + 104LL))(
         this,
         a2,
         (char *)a2 + 88)
    && (unsigned int)HMMarkObjectDestroy((char *)a2 + 88) )
  {
    HMRemoveHandleForObject((char *)a2 + 88);
  }
  return 0LL;
}
