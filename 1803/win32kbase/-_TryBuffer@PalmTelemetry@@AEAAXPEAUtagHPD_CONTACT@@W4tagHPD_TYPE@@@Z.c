/*
 * XREFs of ?_TryBuffer@PalmTelemetry@@AEAAXPEAUtagHPD_CONTACT@@W4tagHPD_TYPE@@@Z @ 0x1C01080A0
 * Callers:
 *     ?_BufferPenPacket@PalmTelemetry@@AEAAXPEAUtagHPD_CONTACT@@W4tagHPD_TYPE@@@Z @ 0x1C0107B28 (-_BufferPenPacket@PalmTelemetry@@AEAAXPEAUtagHPD_CONTACT@@W4tagHPD_TYPE@@@Z.c)
 *     ?_ProcessTouchPacket@PalmTelemetry@@AEAAXPEAUtagHID_POINTER_DEVICE_INFO@@PEAUtagHPD_CONTACT@@KH@Z @ 0x1C0107D18 (-_ProcessTouchPacket@PalmTelemetry@@AEAAXPEAUtagHID_POINTER_DEVICE_INFO@@PEAUtagHPD_CONTACT@@KH@.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PalmTelemetry::_TryBuffer(_DWORD *a1, _DWORD *a2, int a3)
{
  int v3; // r10d
  int v6; // ecx
  __int64 result; // rax
  __int64 v8; // rbx
  __int64 v9; // rdx

  v3 = a1[3];
  v6 = a1[6];
  result = (unsigned int)(-1713954085 * (v6 + v3));
  v8 = (v6 + v3) % 0x1AAu;
  if ( v3 == 426 )
  {
    if ( *a1 )
      return result;
    a1[6] = (v6 + 1) % 0x1AAu;
  }
  else
  {
    ++v3;
  }
  v9 = 3 * v8;
  a1[2 * v9 + 521] = a2[601];
  a1[6 * v8 + 522] = a2[2];
  a1[2 * v9 + 525] = a2[614];
  a1[2 * v9 + 523] = a2[612];
  result = (unsigned int)a2[613];
  a1[2 * v9 + 524] = result;
  a1[2 * v9 + 520] = a3;
  a1[3] = v3;
  return result;
}
