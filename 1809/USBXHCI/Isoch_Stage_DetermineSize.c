/*
 * XREFs of Isoch_Stage_DetermineSize @ 0x1C002BE0C
 * Callers:
 *     Isoch_PrepareStage @ 0x1C002A0E4 (Isoch_PrepareStage.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0006C60 (_guard_dispatch_icall_nop.c)
 *     Isoch_GetPacketLength @ 0x1C0029A34 (Isoch_GetPacketLength.c)
 */

void __fastcall Isoch_Stage_DetermineSize(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v5; // ebx
  unsigned int v7; // edi
  __int64 v8; // rcx
  __int64 v9; // rax
  unsigned int v10; // eax
  unsigned int v11; // eax
  int v12; // r10d
  unsigned int v13; // r15d
  __int64 v14; // r10
  unsigned int i; // r11d
  int v16; // r14d
  __int64 v17; // r12
  _QWORD v18[2]; // [rsp+40h] [rbp-38h] BYREF
  int v19; // [rsp+50h] [rbp-28h]

  v5 = *(_DWORD *)(a2 + 80) - *(_DWORD *)(a2 + 92) - *(_DWORD *)(a2 + 88);
  v7 = *(_DWORD *)(a1 + 4);
  if ( !*(_BYTE *)(a1 + 280) )
  {
    v8 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 40) + 96LL) + 24LL);
    v18[0] = 0LL;
    v18[1] = 0LL;
    v19 = 0;
    v9 = *(_QWORD *)(a2 + 48);
    LODWORD(v18[0]) = 1;
    (*(void (__fastcall **)(__int64, _QWORD, _QWORD, _QWORD, bool, _QWORD *))(*(_QWORD *)(v8 + 8) + 136LL))(
      v8,
      *(_QWORD *)(a3 + 64),
      0LL,
      v5,
      (*(_BYTE *)(v9 + 32) & 1) == 0,
      v18);
    v10 = *(_DWORD *)(a1 + 8);
    if ( HIDWORD(v18[0]) > v10 )
    {
      v11 = (v10 << 12) - 4096;
      if ( v11 < v7 )
        v7 = v11;
    }
  }
  if ( v5 > v7 )
  {
    v13 = *(_DWORD *)(a3 + 40);
    v5 = 0;
    v14 = *(unsigned int *)(a1 + 356);
    for ( i = v13 / (unsigned int)v14; ; ++i )
    {
      v16 = 0;
      if ( (_DWORD)v14 )
      {
        v17 = v14;
        do
        {
          v16 += Isoch_GetPacketLength(a2, v13++);
          --v17;
        }
        while ( v17 );
      }
      if ( v16 + v5 > v7 )
        break;
      v5 += v16;
    }
    v12 = i * v14;
  }
  else
  {
    v12 = *(_DWORD *)(a2 + 96);
  }
  *(_DWORD *)(a3 + 52) = v5;
  *(_DWORD *)(a3 + 44) = v12 - 1;
}
