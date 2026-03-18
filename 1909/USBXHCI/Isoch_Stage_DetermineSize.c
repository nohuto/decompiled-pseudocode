/*
 * XREFs of Isoch_Stage_DetermineSize @ 0x1C0030AB0
 * Callers:
 *     Isoch_PrepareStage @ 0x1C002EB50 (Isoch_PrepareStage.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0008A20 (_guard_dispatch_icall_nop.c)
 *     Isoch_GetPacketLength @ 0x1C002E438 (Isoch_GetPacketLength.c)
 */

__int64 __fastcall Isoch_Stage_DetermineSize(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax
  unsigned int v5; // ebx
  unsigned int v8; // edi
  __int64 v9; // rax
  __int64 v10; // rcx
  int v11; // r10d
  unsigned int v12; // r15d
  __int64 v13; // r10
  unsigned int i; // r11d
  int v15; // r14d
  __int64 v16; // r12
  _DWORD v17[8]; // [rsp+40h] [rbp-38h] BYREF

  result = 0LL;
  v5 = *(_DWORD *)(a2 + 80) - *(_DWORD *)(a2 + 92) - *(_DWORD *)(a2 + 88);
  v8 = *(_DWORD *)(a1 + 4);
  memset(v17, 0, 20);
  if ( !*(_BYTE *)(a1 + 280) )
  {
    v9 = *(_QWORD *)(a2 + 48);
    v10 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 40) + 96LL) + 24LL);
    *(_OWORD *)&v17[1] = 0LL;
    v17[0] = 1;
    (*(void (__fastcall **)(__int64, _QWORD, _QWORD, _QWORD, bool, _DWORD *))(*(_QWORD *)(v10 + 8) + 136LL))(
      v10,
      *(_QWORD *)(a3 + 64),
      0LL,
      v5,
      (*(_BYTE *)(v9 + 32) & 1) == 0,
      v17);
    result = *(unsigned int *)(a1 + 8);
    if ( v17[1] > (unsigned int)result )
    {
      result = (unsigned int)(((_DWORD)result << 12) - 4096);
      if ( (unsigned int)result < v8 )
        v8 = result;
    }
  }
  if ( v5 > v8 )
  {
    v12 = *(_DWORD *)(a3 + 40);
    v5 = 0;
    v13 = *(unsigned int *)(a1 + 356);
    for ( i = v12 / (unsigned int)v13; ; ++i )
    {
      v15 = 0;
      if ( (_DWORD)v13 )
      {
        v16 = v13;
        do
        {
          v15 += Isoch_GetPacketLength(a2, v12++);
          --v16;
        }
        while ( v16 );
      }
      result = v15 + v5;
      if ( (unsigned int)result > v8 )
        break;
      v5 += v15;
    }
    v11 = i * v13;
  }
  else
  {
    v11 = *(_DWORD *)(a2 + 96);
  }
  *(_DWORD *)(a3 + 52) = v5;
  *(_DWORD *)(a3 + 44) = v11 - 1;
  return result;
}
