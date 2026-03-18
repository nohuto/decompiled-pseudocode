/*
 * XREFs of HvlpReadPerfRegister @ 0x140286148
 * Callers:
 *     HvlReadPerfIoPort @ 0x1402852F0 (HvlReadPerfIoPort.c)
 *     HvlReadPerfMsr @ 0x140285370 (HvlReadPerfMsr.c)
 * Callees:
 *     HvlpHvToNtStatus @ 0x14028D628 (HvlpHvToNtStatus.c)
 *     HvcallFastExtended @ 0x140343A40 (HvcallFastExtended.c)
 */

__int64 __fastcall HvlpReadPerfRegister(int a1, __int64 a2, _QWORD *a3)
{
  unsigned int v3; // ebx
  unsigned __int16 v5; // ax
  _DWORD v7[2]; // [rsp+30h] [rbp-28h] BYREF
  __int64 v8; // [rsp+38h] [rbp-20h]
  __int64 v9; // [rsp+40h] [rbp-18h] BYREF

  v3 = 0;
  v7[0] = a1;
  v8 = a2;
  v7[1] = 0;
  v5 = HvcallFastExtended(65564, (unsigned int)v7, 16, (unsigned int)&v9, 16);
  if ( v5 )
    return (unsigned int)HvlpHvToNtStatus(v5);
  else
    *a3 = v9;
  return v3;
}
