/*
 * XREFs of Command_ASMediaGetFirmwareVersionLowCommandCompletion @ 0x1C0007460
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C00091C4 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_ddL @ 0x1C00093F0 (WPP_RECORDER_SF_ddL.c)
 */

LONG __fastcall Command_ASMediaGetFirmwareVersionLowCommandCompletion(__int64 a1)
{
  __int64 *v1; // rbx
  char v2; // al
  __int64 v3; // rdi
  int v4; // edx

  v1 = *(__int64 **)(a1 + 48);
  v2 = *((_BYTE *)v1 + 43);
  v3 = *v1;
  if ( v2 == 1 )
  {
    v4 = (unsigned __int8)*((_DWORD *)v1 + 10);
    LOBYTE(v4) = 4;
    WPP_RECORDER_SF_ddL(
      *(_QWORD *)(v3 + 16),
      v4,
      7,
      21,
      (__int64)&WPP_6807f6924beb3ee6c5fb59b3efd77224_Traceguids,
      BYTE2(*((_DWORD *)v1 + 10)),
      BYTE1(*((_DWORD *)v1 + 10)),
      *((_DWORD *)v1 + 10));
    *(_QWORD *)(*(_QWORD *)(v3 + 8) + 264LL) = (unsigned __int8)*((_DWORD *)v1 + 10) | ((unsigned __int64)*(unsigned __int16 *)((char *)v1 + 41) << 8);
  }
  else
  {
    WPP_RECORDER_SF_d(*(_QWORD *)(v3 + 16), 3, 7, 22, (__int64)&WPP_6807f6924beb3ee6c5fb59b3efd77224_Traceguids, v2);
  }
  return KeSetEvent((PRKEVENT)(v1 + 13), 0, 0);
}
