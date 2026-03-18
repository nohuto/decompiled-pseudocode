/*
 * XREFs of ?CalculatePState@DXGPOWERSTATISTICSTRANSITIONENGINE@@AEAAXI@Z @ 0x1C003CC9C
 * Callers:
 *     ?RecordVSync@DXGPOWERSTATISTICSTRANSITIONENGINE@@QEAAXXZ @ 0x1C003D144 (-RecordVSync@DXGPOWERSTATISTICSTRANSITIONENGINE@@QEAAXXZ.c)
 * Callees:
 *     ?CalculateIdealPState@DXGPOWERSTATISTICSTRANSITIONENGINE@@AEAAII@Z @ 0x1C003CC14 (-CalculateIdealPState@DXGPOWERSTATISTICSTRANSITIONENGINE@@AEAAII@Z.c)
 *     ?RequestPState@DXGPOWERSTATISTICSTRANSITIONENGINE@@AEAAXI@Z @ 0x1C003D200 (-RequestPState@DXGPOWERSTATISTICSTRANSITIONENGINE@@AEAAXI@Z.c)
 */

void __fastcall DXGPOWERSTATISTICSTRANSITIONENGINE::CalculatePState(
        DXGPOWERSTATISTICSTRANSITIONENGINE *this,
        unsigned int a2)
{
  _DWORD *v2; // rsi
  unsigned int v4; // eax
  unsigned int v6; // edx
  unsigned int v7; // ecx
  int v8; // ecx

  v2 = *(_DWORD **)this;
  v4 = *((_DWORD *)this + 14);
  if ( a2 <= *(_DWORD *)(*(_QWORD *)this + 4088LL) )
  {
    if ( a2 > v2[1023] && v4 )
      v4 = DXGPOWERSTATISTICSTRANSITIONENGINE::CalculateIdealPState(this, a2);
  }
  else
  {
    v4 = 0;
  }
  if ( a2 >= v2[1024] || v4 >= **((_DWORD **)this + 2) - 1 )
    goto LABEL_12;
  v6 = *((_DWORD *)this + 20);
  v7 = *((_DWORD *)this + 21) + 1;
  *((_DWORD *)this + 21) = v7;
  if ( a2 > v6 )
    v6 = a2;
  *((_DWORD *)this + 20) = v6;
  if ( v7 >= v2[1026] )
  {
    v4 = DXGPOWERSTATISTICSTRANSITIONENGINE::CalculateIdealPState(this, v6);
LABEL_12:
    *((_DWORD *)this + 21) = 0;
    *((_DWORD *)this + 20) = 0;
  }
  v8 = *((_DWORD *)this + 23);
  if ( v8 == 1 || v8 == 2 && v4 < *((_DWORD *)this + 24) || v8 == 3 && v4 > *((_DWORD *)this + 24) )
    v4 = *((_DWORD *)this + 24);
  DXGPOWERSTATISTICSTRANSITIONENGINE::RequestPState(this, v4);
}
