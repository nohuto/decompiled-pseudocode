/*
 * XREFs of ?InitializeWaveformOrdinalForDevice@InteractiveControlDevice@@QEAAJXZ @ 0x1C02538FC
 * Callers:
 *     ?Initialize@InteractiveControlDevice@@QEAAJPEAURawInputManagerDeviceObject@@@Z @ 0x1C0253484 (-Initialize@InteractiveControlDevice@@QEAAJPEAURawInputManagerDeviceObject@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall InteractiveControlDevice::InitializeWaveformOrdinalForDevice(InteractiveControlDevice *this)
{
  __int64 v1; // r8
  unsigned int v2; // edx
  unsigned int v4; // r9d
  __int64 v5; // r8
  __int64 v6; // rax
  _WORD *v7; // rcx
  _WORD *i; // rax

  v1 = *((_QWORD *)this + 48);
  v2 = 0;
  v4 = 0;
  if ( v1 )
  {
    v4 = *(_DWORD *)(v1 + 88);
    v5 = *(_QWORD *)(v1 + 80);
  }
  else
  {
    v5 = 0LL;
  }
  if ( v5 && v4 )
  {
    v6 = 0LL;
    v7 = (_WORD *)(v5 + 2);
    while ( *v7 != 4099 )
    {
      v6 = (unsigned int)(v6 + 1);
      v7 += 4;
      if ( (unsigned int)v6 >= v4 )
        goto LABEL_11;
    }
    *((_WORD *)this + 197) = *(_WORD *)(v5 + 8 * v6);
LABEL_11:
    for ( i = (_WORD *)(v5 + 2); *i != 4100; i += 4 )
    {
      if ( ++v2 >= v4 )
        return 0LL;
    }
    *((_WORD *)this + 196) = *(_WORD *)(v5 + 8LL * v2);
  }
  return 0LL;
}
