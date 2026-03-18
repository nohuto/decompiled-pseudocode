/*
 * XREFs of ?EmitSetTarget@CBaseExpressionMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C000B7C8
 * Callers:
 *     ?EmitUpdateCommands@CBaseExpressionMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C000B5F0 (-EmitUpdateCommands@CBaseExpressionMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 * Callees:
 *     ?EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z @ 0x1C000CBD4 (-EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00C13F0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00C1440 (memset.c)
 */

char __fastcall DirectComposition::CBaseExpressionMarshaler::EmitSetTarget(
        DirectComposition::CBaseExpressionMarshaler *this,
        struct DirectComposition::CBatch **a2)
{
  char v3; // bp
  __int64 v4; // rdi
  char *v5; // r14
  char *v6; // rcx
  __int64 v7; // rax
  __int64 v8; // rcx
  int v9; // eax
  __int64 v10; // rax
  __int64 v12; // rax
  void *v13; // [rsp+40h] [rbp+8h] BYREF

  v3 = 1;
  if ( (*((_DWORD *)this + 4) & 0x40) == 0 )
  {
    v4 = 0LL;
    if ( DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x34uLL, &v13) )
    {
      v5 = (char *)v13;
      v6 = (char *)v13 + 4;
      *(_DWORD *)v13 = 52;
      memset(v6, 0, 0x30uLL);
      *((_DWORD *)v5 + 1) = 26;
      *((_DWORD *)v5 + 2) = *((_DWORD *)this + 6);
      if ( (*((_BYTE *)this + 104) & 1) != 0 && (v7 = *((_QWORD *)this + 7)) != 0 && (v8 = *(_QWORD *)(v7 + 16)) != 0 )
      {
        *((_DWORD *)v5 + 4) = *(_DWORD *)(v8 + 24);
        v9 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(*((_QWORD *)this + 7) + 16LL) + 16LL))(*(_QWORD *)(*((_QWORD *)this + 7) + 16LL));
      }
      else
      {
        *((_DWORD *)v5 + 4) = 0;
        v9 = 0;
      }
      *((_DWORD *)v5 + 3) = v9;
      *((_DWORD *)v5 + 5) = *((_DWORD *)this + 16);
      *((_DWORD *)v5 + 10) = *((_DWORD *)this + 12);
      v5[44] = (*((_BYTE *)this + 104) & 0x10) != 0;
      v10 = *((_QWORD *)this + 9);
      if ( v10 )
      {
        *((_WORD *)v5 + 18) = *(unsigned __int8 *)(v10 + 4);
        *((_WORD *)v5 + 19) = **((_WORD **)this + 9);
        v12 = *((_QWORD *)this + 9);
        if ( *(_DWORD *)v12 == 1 )
        {
          v4 = *(unsigned __int8 *)(v12 + 8);
        }
        else if ( *(_DWORD *)v12 == 2 )
        {
          v4 = *(_QWORD *)(v12 + 8);
        }
      }
      else
      {
        *((_DWORD *)v5 + 9) = 0;
      }
      *(_QWORD *)(v5 + 28) = v4;
      *((_DWORD *)this + 4) |= 0x40u;
    }
    else
    {
      return 0;
    }
  }
  return v3;
}
