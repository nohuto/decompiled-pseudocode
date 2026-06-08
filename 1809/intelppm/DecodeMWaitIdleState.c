/*
 * XREFs of DecodeMWaitIdleState @ 0x1C0024830
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0002E78 (WPP_RECORDER_SF_.c)
 *     IsValidAcpiGenericAddress @ 0x1C0020C54 (IsValidAcpiGenericAddress.c)
 */

__int64 __fastcall DecodeMWaitIdleState(
        __int64 a1,
        __int64 a2,
        int a3,
        __int64 a4,
        __int64 *a5,
        _BYTE *a6,
        _BYTE *a7,
        __int64 a8)
{
  __int64 v10; // rax
  unsigned int v11; // ebx
  __int64 v12; // rcx
  unsigned __int8 v13; // dl
  __int64 v14; // r9
  __int64 (__fastcall *v15)(__int64); // rax
  __int64 v17; // rax
  bool v18; // zf
  __int128 v19; // [rsp+30h] [rbp-20h]
  __int64 v20; // [rsp+40h] [rbp-10h]

  HIDWORD(v20) = 0;
  if ( *(_BYTE *)a2 != 127 || *(_BYTE *)(a2 + 1) != 1 || *(_BYTE *)(a2 + 2) != 2 )
    return (unsigned int)-1073741823;
  v10 = *(_QWORD *)(a1 + 264);
  if ( a3 == -1 )
  {
    if ( (v10 & 0x20000000000LL) != 0 )
      goto LABEL_6;
LABEL_21:
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      2u,
      1u,
      0xAu,
      (__int64)&WPP_34a4022a10a23463488b8657e85abd31_Traceguids);
    return (unsigned int)-1073741637;
  }
  if ( (v10 & 0x7F000) == 0 )
    goto LABEL_21;
LABEL_6:
  v11 = 0;
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      5u,
      3u,
      0xBu,
      (__int64)&WPP_34a4022a10a23463488b8657e85abd31_Traceguids);
  v12 = *(_QWORD *)(a2 + 4);
  v13 = *(_BYTE *)(a2 + 3);
  *(_QWORD *)&v19 = v12;
  LODWORD(v20) = v13;
  *((_QWORD *)&v19 + 1) = *(_QWORD *)(a1 + 200);
  if ( (*(_DWORD *)(a1 + 272) & 0x80000) != 0 )
    DWORD1(v19) = HIDWORD(v12) | 1;
  if ( a5 )
  {
    v17 = (unsigned int)v12 | 0x30000000000000LL;
    if ( (v13 & 2) != 0 )
      v17 = (unsigned int)v12 | 0x130000000000000LL;
    *a5 = v17;
  }
  v14 = a8;
  if ( a8 )
  {
    *(_BYTE *)(a8 + 80) = 1;
    if ( (v13 & 2) == 0
      || (v18 = IsValidAcpiGenericAddress((unsigned __int8 *)&dword_1C001AD84) == 0, v15 = MWaitIdleCheck, v18) )
    {
      v15 = 0LL;
    }
    *(_QWORD *)(v14 + 16) = v15;
    *(_QWORD *)(v14 + 24) = MWaitIdle;
    *(_OWORD *)(v14 + 32) = v19;
    *(_QWORD *)(v14 + 64) = DecodeMWaitContext;
    *(_QWORD *)(v14 + 48) = v20;
  }
  if ( a6 )
    *a6 = 0;
  if ( a7 )
    *a7 = 1;
  return v11;
}
