/*
 * XREFs of Bulk_Stage_DetermineSize @ 0x1C0031878
 * Callers:
 *     Bulk_PrepareStage @ 0x1C0030114 (Bulk_PrepareStage.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0006C60 (_guard_dispatch_icall_nop.c)
 */

void __fastcall Bulk_Stage_DetermineSize(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v4; // ebx
  unsigned int v6; // edi
  __int64 v7; // rcx
  __int64 v8; // rax
  unsigned int v9; // eax
  unsigned int v10; // eax
  bool v11; // [rsp+20h] [rbp-48h]
  _QWORD v12[2]; // [rsp+40h] [rbp-28h] BYREF
  int v13; // [rsp+50h] [rbp-18h]

  v4 = *(_DWORD *)(a2 + 104) - *(_DWORD *)(a2 + 112);
  if ( *(_DWORD *)(a2 + 76) == 3 )
  {
    v6 = *(_DWORD *)(a1 + 4);
    if ( !*(_BYTE *)(a1 + 280) )
    {
      v7 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 40) + 96LL) + 24LL);
      v12[0] = 0LL;
      v12[1] = 0LL;
      v13 = 0;
      v8 = *(_QWORD *)(a2 + 48);
      LODWORD(v12[0]) = 1;
      v11 = (*(_BYTE *)(v8 + 32) & 1) == 0;
      (*(void (__fastcall **)(__int64, _QWORD, _QWORD, _QWORD, bool, _QWORD *))(*(_QWORD *)(v7 + 8) + 136LL))(
        v7,
        *(_QWORD *)(a3 + 48),
        0LL,
        v4,
        v11,
        v12);
      v9 = *(_DWORD *)(a1 + 8);
      if ( HIDWORD(v12[0]) > v9 )
      {
        v10 = (v9 << 12) - 4096;
        if ( v10 < v6 )
          v6 = v10;
      }
    }
    if ( v4 > v6 )
      v4 = v6;
  }
  *(_DWORD *)(a3 + 40) = v4;
}
