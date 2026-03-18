/*
 * XREFs of ?GetTextureMemoryLayoutData@CDropShadow@@UEBAJAEBUD2D_SIZE_F@@AEAV?$vector@ULayoutData@CContent@@V?$allocator@ULayoutData@CContent@@@std@@@std@@@Z @ 0x1801CA350
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CDropShadow::GetTextureMemoryLayoutData(__int64 a1, __int64 a2, _QWORD *a3)
{
  unsigned int v3; // ebx
  __int64 v4; // rcx
  signed int v5; // eax
  __int64 v6; // rcx

  v3 = 0;
  a3[1] = *a3;
  if ( !*(_DWORD *)(a1 + 132) )
  {
    v4 = *(_QWORD *)(a1 + 144);
    if ( v4 )
    {
      v5 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v4 + 320LL))(v4);
      v3 = v5;
      if ( v5 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v6, 0LL, 0, v5, 0x174u, 0LL);
    }
  }
  return v3;
}
