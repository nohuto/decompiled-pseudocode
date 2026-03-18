/*
 * XREFs of XilCoreCommand_AddCommandTRBToRing @ 0x1C0041A14
 * Callers:
 *     XilCommand_AddCommandCRBToRing @ 0x1C0009C04 (XilCommand_AddCommandCRBToRing.c)
 * Callees:
 *     WPP_RECORDER_SF_ddL @ 0x1C00093F0 (WPP_RECORDER_SF_ddL.c)
 */

char __fastcall XilCoreCommand_AddCommandTRBToRing(__int64 *a1, __int64 a2)
{
  __int64 v3; // rdx
  __int64 v4; // rcx
  char result; // al
  unsigned int v6; // ecx
  BOOL v7; // edx
  int v8; // eax
  __int64 v9; // rcx
  __int64 v10; // rcx
  signed __int32 v11[8]; // [rsp+0h] [rbp-48h] BYREF
  __int64 v12; // [rsp+28h] [rbp-20h]
  __int64 v13; // [rsp+30h] [rbp-18h]
  __int64 v14; // [rsp+38h] [rbp-10h]

  *(_DWORD *)(a2 + 12) = *(_DWORD *)(a2 + 12) & 0xFFFFFFFE | (*((_DWORD *)a1 + 11) != 1);
  *(_OWORD *)(a1[6] + 16LL * *((unsigned int *)a1 + 9)) = *(_OWORD *)a2;
  v3 = *((unsigned int *)a1 + 9);
  v4 = a1[6];
  v3 *= 2LL;
  result = *(_BYTE *)(v4 + 8 * v3 + 12) ^ 1;
  *(_BYTE *)(v4 + 8 * v3 + 12) = result;
  _InterlockedOr(v11, 0);
  ++*((_DWORD *)a1 + 9);
  v6 = *((_DWORD *)a1 + 8);
  if ( *((_DWORD *)a1 + 9) == v6 )
  {
    *(_BYTE *)(a1[6] + 16LL * v6 + 12) ^= 1u;
    _InterlockedOr(v11, 0);
    v7 = *((_DWORD *)a1 + 11) != 1;
    *((_DWORD *)a1 + 11) = v7;
    result = (char)WPP_GLOBAL_Control;
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    {
      v8 = *((_DWORD *)a1 + 8);
      v9 = *a1;
      LODWORD(v14) = v7;
      LODWORD(v13) = v8;
      v10 = *(_QWORD *)(v9 + 16);
      LODWORD(v12) = *((_DWORD *)a1 + 9);
      result = WPP_RECORDER_SF_ddL(
                 v10,
                 5u,
                 7u,
                 0xBu,
                 (__int64)&WPP_ccc52cc2905d309fa48011d6b18aa528_Traceguids,
                 v12,
                 v13,
                 v14);
    }
    *((_DWORD *)a1 + 9) = 0;
  }
  return result;
}
