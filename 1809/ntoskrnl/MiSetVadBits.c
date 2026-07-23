/*
 * XREFs of MiSetVadBits @ 0x140859D74
 * Callers:
 *     MiUpdateVadBits @ 0x14067AFD0 (MiUpdateVadBits.c)
 * Callees:
 *     RtlSetBits @ 0x140076D70 (RtlSetBits.c)
 */

void __fastcall MiSetVadBits(__int64 a1)
{
  unsigned int v1; // esi
  unsigned int v2; // ebp
  __int64 v3; // rdi
  unsigned int i; // r14d
  unsigned int v5; // ecx
  unsigned int v6; // r9d
  unsigned int v7; // r8d
  unsigned int v8; // edx
  BOOL v9; // ebx

  v1 = (*(_DWORD *)(a1 + 24) >> 4) | (*(unsigned __int8 *)(a1 + 32) << 28);
  v2 = (*(_DWORD *)(a1 + 28) >> 4) | (*(unsigned __int8 *)(a1 + 33) << 28);
  v3 = *(_QWORD *)&KeGetCurrentThread()->ApcState.Process[1].IdealGlobalNode + 48LL;
  for ( i = 0; i < 3; ++i )
  {
    v5 = 8 * (*(_DWORD *)(v3 + 8) - qword_14043B5E8);
    if ( v2 >= v5 )
    {
      v6 = v5 + *(_DWORD *)v3;
      if ( v1 < v6 )
      {
        v7 = v6 - 1;
        v8 = 8 * (*(_DWORD *)(v3 + 8) - qword_14043B5E8);
        if ( v1 >= v5 )
          v8 = v1;
        v9 = v1 < v5;
        if ( v2 >= v6 )
          v9 = 1;
        else
          v7 = v2;
        RtlSetBits((PRTL_BITMAP)v3, v8 - v5, v7 - v8 + 1);
        if ( !v9 )
          break;
      }
    }
    v3 += 56LL;
  }
}
