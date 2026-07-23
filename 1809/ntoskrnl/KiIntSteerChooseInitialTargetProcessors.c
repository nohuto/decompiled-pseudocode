/*
 * XREFs of KiIntSteerChooseInitialTargetProcessors @ 0x14016E388
 * Callers:
 *     KiIntSteerConnect @ 0x14016DFA4 (KiIntSteerConnect.c)
 * Callees:
 *     KeFindFirstSetRightGroupAffinity @ 0x1400165E0 (KeFindFirstSetRightGroupAffinity.c)
 *     KeIntSteerGetSteeringMode @ 0x14016E4A0 (KeIntSteerGetSteeringMode.c)
 *     KiIntRedirectConnnect @ 0x14016E538 (KiIntRedirectConnnect.c)
 */

__int64 __fastcall KiIntSteerChooseInitialTargetProcessors(
        __int64 a1,
        unsigned int a2,
        __int64 a3,
        __int64 a4,
        char a5,
        __int64 a6,
        _DWORD *a7)
{
  __int64 *v7; // rsi
  int v10; // edi
  int v11; // r9d
  int SteeringMode; // ebp
  __int64 v13; // r11
  unsigned __int16 v14; // cx
  unsigned int v15; // ecx
  __int64 v17; // r8
  __int64 v18; // [rsp+20h] [rbp-28h]

  v7 = (__int64 *)(a3 + 24);
  v18 = a3 + 24;
  v10 = 0;
  *(_QWORD *)a6 = 0LL;
  *(_QWORD *)(a6 + 8) = 0LL;
  v11 = *(_DWORD *)(a3 + 16);
  LOBYTE(a3) = a5;
  SteeringMode = KeIntSteerGetSteeringMode(a1, a2, a3, v11, v18);
  if ( SteeringMode != 2 || (v10 = KiIntRedirectConnnect(a1, a2, v13), v10 >= 0) )
  {
    v14 = *((_WORD *)v7 + 4);
    *(_WORD *)(a6 + 8) = v14;
    if ( SteeringMode )
    {
      *(_QWORD *)a6 = qword_14041C2C8[v14];
      v15 = KiProcessorIndexToNumberMappingTable[(unsigned int)KeFindFirstSetRightGroupAffinity(a6)];
      *(_DWORD *)(a6 + 10) = 0;
      *(_WORD *)(a6 + 14) = 0;
      *(_QWORD *)a6 = 1LL << (v15 & 0x3F);
      *(_WORD *)(a6 + 8) = v15 >> 6;
    }
    else
    {
      v17 = *v7;
      *(_QWORD *)a6 = *v7;
      if ( LOWORD(KiIntSteerAffinitizedInterrupts[0]) <= v14 )
        LOWORD(KiIntSteerAffinitizedInterrupts[0]) = v14 + 1;
      qword_14041C388[v14] |= v17;
    }
    *a7 = SteeringMode;
  }
  return (unsigned int)v10;
}
