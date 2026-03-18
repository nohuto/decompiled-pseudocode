/*
 * XREFs of ?_ivPacketDispatch@CBaseInput@@CAJPEAU_IVSRContext@@@Z @ 0x1C018BEB0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C002E6D4 (WPP_RECORDER_SF_.c)
 *     RIMLockExclusive @ 0x1C00320D0 (RIMLockExclusive.c)
 *     WPP_RECORDER_SF_D @ 0x1C00380CC (WPP_RECORDER_SF_D.c)
 *     _guard_dispatch_icall_nop @ 0x1C00C13F0 (_guard_dispatch_icall_nop.c)
 *     IsRimObjectUnregistered @ 0x1C018E214 (IsRimObjectUnregistered.c)
 *     ?ivChildLoop@CBaseInput@@AEAAJKPEAURawInputManagerObject@@@Z @ 0x1C018F5A0 (-ivChildLoop@CBaseInput@@AEAAJKPEAURawInputManagerObject@@@Z.c)
 */

__int64 __fastcall CBaseInput::_ivPacketDispatch(struct _IVSRContext *a1)
{
  _QWORD *v2; // r14
  unsigned int v3; // ebp
  enum IVHandlerResult (__high *v4)(void *, struct RawInputManagerObject *); // r15
  char v5; // al
  char v6; // bl
  CBaseInput *v8; // rdi
  int v9; // ebx
  int v10; // edx
  int v11; // ebx

  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      5,
      12,
      24,
      (__int64)&WPP_ead607961d3c3e051bc3eba132247bd1_Traceguids);
  v2 = (_QWORD *)*((_QWORD *)a1 + 19);
  v3 = 0;
  v4 = off_1C01D4090[*((unsigned int *)a1 + 40)];
  RIMLockExclusive((__int64)(v2 + 13));
  v5 = IsRimObjectUnregistered(v2);
  v2[14] = 0LL;
  v6 = v5;
  ExReleasePushLockExclusiveEx(v2 + 13, 0LL);
  KeLeaveCriticalRegion();
  if ( v6 )
  {
    ObfDereferenceObject(v2);
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
        WPP_RECORDER_SF_(
          WPP_GLOBAL_Control->DeviceExtension,
          5,
          12,
          25,
          (__int64)&WPP_ead607961d3c3e051bc3eba132247bd1_Traceguids);
    }
    return 0LL;
  }
  v8 = (CBaseInput *)*((_QWORD *)a1 + 18);
  v9 = ((__int64 (__fastcall *)(CBaseInput *, _QWORD, _QWORD *))v4)(v8, *((_QWORD *)a1 + 13), v2);
  ObfDereferenceObject(v2);
  if ( v9 )
  {
    v11 = v9 - 1;
    if ( v11 )
    {
      if ( v11 == 1 )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v10) = 4;
          WPP_RECORDER_SF_D(
            (_DWORD)gBaseLog,
            v10,
            12,
            27,
            (__int64)&WPP_ead607961d3c3e051bc3eba132247bd1_Traceguids,
            *((_DWORD *)a1 + 40));
        }
        v3 = -1073741823;
      }
      goto LABEL_18;
    }
  }
  else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v10) = 2;
    WPP_RECORDER_SF_D(
      (_DWORD)gBaseLog,
      v10,
      12,
      26,
      (__int64)&WPP_ead607961d3c3e051bc3eba132247bd1_Traceguids,
      *((_DWORD *)a1 + 40));
  }
  v3 = CBaseInput::ivChildLoop(v8, *((_DWORD *)a1 + 44), (struct RawInputManagerObject *)v2);
LABEL_18:
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      5,
      12,
      28,
      (__int64)&WPP_ead607961d3c3e051bc3eba132247bd1_Traceguids);
  return v3;
}
