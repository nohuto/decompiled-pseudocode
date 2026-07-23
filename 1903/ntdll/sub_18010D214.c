/*
 * XREFs of sub_18010D214 @ 0x18010D214
 * Callers:
 *     sub_18000456C @ 0x18000456C (sub_18000456C.c)
 *     sub_18005300C @ 0x18005300C (sub_18005300C.c)
 *     sub_180081920 @ 0x180081920 (sub_180081920.c)
 *     sub_180083864 @ 0x180083864 (sub_180083864.c)
 *     sub_18008567C @ 0x18008567C (sub_18008567C.c)
 *     sub_180086DAC @ 0x180086DAC (sub_180086DAC.c)
 *     sub_1800892EC @ 0x1800892EC (sub_1800892EC.c)
 *     sub_18010D540 @ 0x18010D540 (sub_18010D540.c)
 * Callees:
 *     ZwTraceControl @ 0x18009FE70 (ZwTraceControl.c)
 */

__int64 __fastcall sub_18010D214(int a1, _DWORD *a2)
{
  unsigned __int16 v4; // di
  __int64 v5; // rbx
  __int64 v6; // rsi
  int v7; // eax
  unsigned __int16 OutputBuffer; // [rsp+80h] [rbp+18h] BYREF
  ULONG ReturnLength; // [rsp+88h] [rbp+20h] BYREF

  v4 = 0;
  while ( 1 )
  {
    v5 = 2LL * v4;
    _InterlockedAdd((volatile signed __int32 *)(qword_180163518 + 16LL * v4 + 8), 1u);
    v6 = *(_QWORD *)(qword_180163518 + 16LL * v4);
    if ( (v6 & 1) != 0 || !*(_QWORD *)(v6 + 560) )
      goto LABEL_10;
    LOWORD(v7) = *(_WORD *)(v6 + 568);
    if ( (_WORD)v7 )
    {
      v7 = (unsigned __int16)v7;
    }
    else
    {
      if ( ZwTraceControl(EtwQuerySessionDemuxObject, (PVOID)(v6 + 560), 8u, &OutputBuffer, 2u, &ReturnLength)
        || ReturnLength != 2 )
      {
        goto LABEL_10;
      }
      v7 = OutputBuffer;
      *(_WORD *)(v6 + 568) = OutputBuffer;
    }
    if ( v7 == a1 )
      break;
LABEL_10:
    ++v4;
    _InterlockedDecrement((volatile signed __int32 *)(qword_180163518 + 8 * v5 + 8));
    if ( v4 >= 8u )
      return 4201LL;
  }
  *a2 = v4;
  _InterlockedDecrement((volatile signed __int32 *)(qword_180163518 + 16LL * v4 + 8));
  return 0LL;
}
