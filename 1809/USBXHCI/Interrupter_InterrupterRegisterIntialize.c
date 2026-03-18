/*
 * XREFs of Interrupter_InterrupterRegisterIntialize @ 0x1C001BC1C
 * Callers:
 *     Interrupter_ControllerResetPostReset @ 0x1C001ABF8 (Interrupter_ControllerResetPostReset.c)
 *     Interrupter_D0Entry @ 0x1C001AC60 (Interrupter_D0Entry.c)
 * Callees:
 *     WPP_RECORDER_SF_qqdddi @ 0x1C0003018 (WPP_RECORDER_SF_qqdddi.c)
 *     Interrupter_UpdateERDP @ 0x1C001BDE4 (Interrupter_UpdateERDP.c)
 */

__int64 __fastcall Interrupter_InterrupterRegisterIntialize(__int64 a1)
{
  __int64 i; // rbx
  __int64 result; // rax
  __int64 v4; // rsi
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // rcx
  int v8; // eax
  __int64 v9; // rdx
  __int64 v10; // rdx
  __int64 v11; // rcx
  signed __int32 v12[10]; // [rsp+0h] [rbp-68h] BYREF
  __int64 v13; // [rsp+28h] [rbp-40h]
  __int64 v14; // [rsp+30h] [rbp-38h]
  int v15; // [rsp+38h] [rbp-30h]
  int v16; // [rsp+40h] [rbp-28h]
  int v17; // [rsp+48h] [rbp-20h]
  __int64 v18; // [rsp+50h] [rbp-18h]

  for ( i = 0LL; (unsigned int)i < *(_DWORD *)(a1 + 80); i = (unsigned int)(i + 1) )
  {
    result = *(_QWORD *)(a1 + 32);
    v4 = *(_QWORD *)(result + 8 * i);
    if ( v4 )
    {
      v5 = *(unsigned int *)(v4 + 124);
      v6 = *(_QWORD *)(v4 + 144);
      v7 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL);
      v18 = *(_QWORD *)(v6 + 24) + 16 * v5;
      v8 = *(_DWORD *)(v4 + 128);
      v17 = v5;
      v16 = v8;
      v15 = *(_DWORD *)(v4 + 120);
      v14 = v6;
      v13 = v4;
      WPP_RECORDER_SF_qqdddi(v7, v5, v6, 0x1Fu, v12[8]);
      *(_DWORD *)(*(_QWORD *)(v4 + 24) + 8LL) = (unsigned __int16)*(_DWORD *)(v4 + 108);
      _InterlockedOr(v12, 0);
      LOBYTE(v9) = 1;
      Interrupter_UpdateERDP(v4, v9);
      v10 = *(_QWORD *)(v4 + 24);
      v11 = *(_QWORD *)(*(_QWORD *)(v4 + 152) + 24LL);
      result = *(_QWORD *)(*(_QWORD *)(v4 + 8) + 272LL);
      if ( (result & 1) != 0 )
      {
        *(_DWORD *)(v10 + 16) = v11;
        _InterlockedOr(v12, 0);
        *(_DWORD *)(v10 + 20) = HIDWORD(v11);
      }
      else
      {
        *(_QWORD *)(v10 + 16) = v11;
      }
      _InterlockedOr(v12, 0);
    }
  }
  return result;
}
