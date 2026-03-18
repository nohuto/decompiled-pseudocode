/*
 * XREFs of ?IVSerializeKeyboardInput@@YAJAEBU_KEYBOARD_INPUT_DATA@@AEBU_UNICODE_STRING@@AEAUCIVSerializer@@@Z @ 0x1C0187CAC
 * Callers:
 *     ?SerializeKeyboardInputForContainer@CKeyboardSensor@@AEAAJAEAUCIVSerializer@@AEBU_UNICODE_STRING@@AEBU_KEYBOARD_INPUT_DATA@@@Z @ 0x1C017E9C8 (-SerializeKeyboardInputForContainer@CKeyboardSensor@@AEAAJAEAUCIVSerializer@@AEBU_UNICODE_STRING.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C002D584 (WPP_RECORDER_SF_.c)
 *     ?Serialize@CIVSerializer@@QEAAJAEAU_UNICODE_STRING@@AEBU2@_N@Z @ 0x1C0189508 (-Serialize@CIVSerializer@@QEAAJAEAU_UNICODE_STRING@@AEBU2@_N@Z.c)
 */

__int64 __fastcall IVSerializeKeyboardInput(
        const struct _KEYBOARD_INPUT_DATA *a1,
        const struct _UNICODE_STRING *a2,
        struct CIVSerializer *a3)
{
  const struct _UNICODE_STRING *v4; // rbp
  __int64 v6; // rbx
  int v7; // edx
  int v8; // esi

  v4 = a2;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(a2) = 5;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      (_DWORD)a2,
      12,
      129,
      (__int64)&WPP_ead607961d3c3e051bc3eba132247bd1_Traceguids);
  }
  v6 = *((_QWORD *)a3 + 2);
  v8 = CIVSerializer::Serialize(a3, (struct _UNICODE_STRING *)v6, v4, 0);
  if ( v8 >= 0 )
  {
    *(_WORD *)(v6 + 16) = a1->UnitId;
    *(_WORD *)(v6 + 20) = a1->MakeCode;
    *(_WORD *)(v6 + 24) = a1->Flags;
    *(_WORD *)(v6 + 28) = a1->Reserved;
    *(_DWORD *)(v6 + 32) = a1->ExtraInformation;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(v7) = 5;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      v7,
      12,
      130,
      (__int64)&WPP_ead607961d3c3e051bc3eba132247bd1_Traceguids);
  }
  return (unsigned int)v8;
}
