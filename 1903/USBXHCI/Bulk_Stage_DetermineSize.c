/*
 * XREFs of Bulk_Stage_DetermineSize @ 0x1C003678C
 * Callers:
 *     Bulk_PrepareStage @ 0x1C0034E7C (Bulk_PrepareStage.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0008A20 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Bulk_Stage_DetermineSize(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax
  unsigned int v4; // ebx
  bool v6; // zf
  unsigned int v8; // edi
  __int64 v9; // rax
  __int64 v10; // rcx
  _DWORD v11[8]; // [rsp+40h] [rbp-28h] BYREF

  result = 0LL;
  v4 = *(_DWORD *)(a2 + 104) - *(_DWORD *)(a2 + 112);
  v6 = *(_DWORD *)(a2 + 76) == 3;
  memset(v11, 0, 20);
  if ( v6 )
  {
    v8 = *(_DWORD *)(a1 + 4);
    if ( !*(_BYTE *)(a1 + 280) )
    {
      v9 = *(_QWORD *)(a2 + 48);
      v10 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 40) + 96LL) + 24LL);
      *(_OWORD *)&v11[1] = 0LL;
      v11[0] = 1;
      (*(void (__fastcall **)(__int64, _QWORD, _QWORD, _QWORD, bool, _DWORD *))(*(_QWORD *)(v10 + 8) + 136LL))(
        v10,
        *(_QWORD *)(a3 + 48),
        0LL,
        v4,
        (*(_BYTE *)(v9 + 32) & 1) == 0,
        v11);
      result = *(unsigned int *)(a1 + 8);
      if ( v11[1] > (unsigned int)result )
      {
        result = (unsigned int)(((_DWORD)result << 12) - 4096);
        if ( (unsigned int)result < v8 )
          v8 = result;
      }
    }
    if ( v4 > v8 )
      v4 = v8;
  }
  *(_DWORD *)(a3 + 40) = v4;
  return result;
}
