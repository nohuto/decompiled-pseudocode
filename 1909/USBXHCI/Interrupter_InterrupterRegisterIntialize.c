/*
 * XREFs of Interrupter_InterrupterRegisterIntialize @ 0x1C001F140
 * Callers:
 *     Interrupter_ControllerResetPostReset @ 0x1C001DFB8 (Interrupter_ControllerResetPostReset.c)
 *     Interrupter_D0Entry @ 0x1C001E020 (Interrupter_D0Entry.c)
 * Callees:
 *     WPP_RECORDER_SF_qqdddi @ 0x1C00034D8 (WPP_RECORDER_SF_qqdddi.c)
 *     Interrupter_UpdateERDP @ 0x1C001F324 (Interrupter_UpdateERDP.c)
 */

__int64 __fastcall Interrupter_InterrupterRegisterIntialize(__int64 a1, __int64 a2)
{
  __int64 i; // rdi
  __int64 result; // rax
  __int64 v5; // rbx
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // rcx
  int v9; // eax
  __int64 v10; // rcx
  signed __int32 v11[10]; // [rsp+0h] [rbp-68h] BYREF
  __int64 v12; // [rsp+28h] [rbp-40h]
  __int64 v13; // [rsp+30h] [rbp-38h]
  int v14; // [rsp+38h] [rbp-30h]
  int v15; // [rsp+40h] [rbp-28h]
  int v16; // [rsp+48h] [rbp-20h]
  __int64 v17; // [rsp+50h] [rbp-18h]

  for ( i = 0LL; (unsigned int)i < *(_DWORD *)(a1 + 80); i = (unsigned int)(i + 1) )
  {
    result = *(_QWORD *)(a1 + 32);
    v5 = *(_QWORD *)(result + 8 * i);
    if ( v5 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v6 = *(unsigned int *)(v5 + 124);
        v7 = *(_QWORD *)(v5 + 144);
        v8 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL);
        v17 = *(_QWORD *)(v7 + 24) + 16 * v6;
        v9 = *(_DWORD *)(v5 + 128);
        v16 = v6;
        v15 = v9;
        v14 = *(_DWORD *)(v5 + 120);
        v13 = v7;
        v12 = v5;
        WPP_RECORDER_SF_qqdddi(v8, v6, v7, 0x1Fu, v11[8]);
      }
      *(_DWORD *)(*(_QWORD *)(v5 + 24) + 8LL) = (unsigned __int16)*(_DWORD *)(v5 + 108);
      _InterlockedOr(v11, 0);
      LOBYTE(a2) = 1;
      Interrupter_UpdateERDP(v5, a2);
      a2 = *(_QWORD *)(v5 + 24);
      v10 = *(_QWORD *)(*(_QWORD *)(v5 + 152) + 24LL);
      result = *(_QWORD *)(*(_QWORD *)(v5 + 8) + 336LL);
      if ( (result & 1) != 0 )
      {
        *(_DWORD *)(a2 + 16) = v10;
        _InterlockedOr(v11, 0);
        *(_DWORD *)(a2 + 20) = HIDWORD(v10);
      }
      else
      {
        *(_QWORD *)(a2 + 16) = v10;
      }
      _InterlockedOr(v11, 0);
    }
  }
  return result;
}
