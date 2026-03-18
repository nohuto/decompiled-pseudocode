/*
 * XREFs of ?ivChildLoop@CBaseInput@@AEAAJKPEAURawInputManagerObject@@@Z @ 0x1C018F5A0
 * Callers:
 *     ?PostInitialize@CMouseSensor@@EEAAJXZ @ 0x1C0060E70 (-PostInitialize@CMouseSensor@@EEAAJXZ.c)
 *     ?PostInitialize@CHidInput@@EEAAJXZ @ 0x1C00A9360 (-PostInitialize@CHidInput@@EEAAJXZ.c)
 *     ?PostInitialize@CKeyboardSensor@@EEAAJXZ @ 0x1C00A95E0 (-PostInitialize@CKeyboardSensor@@EEAAJXZ.c)
 *     ?_ivPacketDispatch@CBaseInput@@CAJPEAU_IVSRContext@@@Z @ 0x1C018BEB0 (-_ivPacketDispatch@CBaseInput@@CAJPEAU_IVSRContext@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C002E6D4 (WPP_RECORDER_SF_.c)
 *     isChildPartition @ 0x1C00323E8 (isChildPartition.c)
 *     WPP_RECORDER_SF_D @ 0x1C00380CC (WPP_RECORDER_SF_D.c)
 *     ?ivrIVRecv@@YAJKPEAU_ETHREAD@@0U_IVPacketContext@@KP6AJPEAU_IVSRContext@@@Z@Z @ 0x1C018DDC8 (-ivrIVRecv@@YAJKPEAU_ETHREAD@@0U_IVPacketContext@@KP6AJPEAU_IVSRContext@@@Z@Z.c)
 */

__int64 __fastcall CBaseInput::ivChildLoop(CBaseInput *this, int a2, struct RawInputManagerObject *a3)
{
  int v4; // ebp
  unsigned int v6; // ebx
  int v7; // edx
  int v8; // eax
  int v9; // r9d
  __int128 v11; // [rsp+30h] [rbp-68h]
  __int128 v12; // [rsp+50h] [rbp-48h] BYREF
  __int64 v13; // [rsp+60h] [rbp-38h]

  v4 = a2;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(a2) = 5;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      a2,
      12,
      10,
      (__int64)&WPP_191b21106844345f25023169b703e8db_Traceguids);
  }
  v6 = 0;
  if ( !isChildPartition() )
    goto LABEL_14;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v7) = 4;
    WPP_RECORDER_SF_((_DWORD)gBaseLog, v7, 12, 11, (__int64)&WPP_191b21106844345f25023169b703e8db_Traceguids);
  }
  *(_QWORD *)&v11 = this;
  *((_QWORD *)&v11 + 1) = a3;
  v8 = ObReferenceObjectByPointer(a3, 3u, ExRawInputManagerObjectType, 0);
  v6 = v8;
  if ( v8 < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return v6;
    v9 = 12;
    goto LABEL_13;
  }
  v12 = v11;
  v13 = 9LL;
  v8 = ivrIVRecv(0x10u, gpIVThread, (__int64)KeGetCurrentThread(), &v12, v4, (__int64)CBaseInput::_ivHeaderCallback);
  v6 = v8;
  if ( v8 < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return v6;
    v9 = 13;
LABEL_13:
    LOBYTE(v7) = 2;
    WPP_RECORDER_SF_D((_DWORD)gBaseLog, v7, 12, v9, (__int64)&WPP_191b21106844345f25023169b703e8db_Traceguids, v8);
  }
LABEL_14:
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(v7) = 5;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      v7,
      12,
      14,
      (__int64)&WPP_191b21106844345f25023169b703e8db_Traceguids);
  }
  return v6;
}
