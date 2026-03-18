/*
 * XREFs of ?EmitUpdateCommands@CInteractionMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C003ED10
 * Callers:
 *     <none>
 * Callees:
 *     ?EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z @ 0x1C0009C94 (-EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z.c)
 *     Win32FreePool @ 0x1C0012E40 (Win32FreePool.c)
 *     ?EmitUpdateCommands@CInteractionConfigurationGroup@DirectComposition@@QEAA_NPEAPEAVCBatch@2@@Z @ 0x1C003EDE0 (-EmitUpdateCommands@CInteractionConfigurationGroup@DirectComposition@@QEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitHoverPointerSource@CInteractionMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x1C003F2F0 (-EmitHoverPointerSource@CInteractionMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitUpdateRails@CInteractionMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x1C003F36C (-EmitUpdateRails@CInteractionMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitUpdateFlags@CInteractionMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x1C003F3F8 (-EmitUpdateFlags@CInteractionMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitInputSink@CInteractionMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x1C003F4C0 (-EmitInputSink@CInteractionMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z.c)
 */

char __fastcall DirectComposition::CInteractionMarshaler::EmitUpdateCommands(
        DirectComposition::CInteractionMarshaler *this,
        struct DirectComposition::CBatch **a2)
{
  char v4; // di
  int v5; // eax
  int v6; // eax
  int v8; // ecx
  __int64 v9; // rbp
  char *v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rbp
  char *v13; // r8
  __int64 v14; // rcx
  char *v15; // rcx
  __int64 v16; // rax
  int v17; // eax
  char *v18; // rcx
  void *v19; // [rsp+50h] [rbp+18h] BYREF

  v4 = 0;
  if ( !DirectComposition::CInteractionMarshaler::EmitInputSink(this, a2) )
    return v4;
  v5 = *((_DWORD *)this + 4);
  if ( (v5 & 0x80u) != 0 )
  {
    v8 = *((_DWORD *)this + 68);
    if ( v8 )
    {
      while ( 1 )
      {
        v9 = (unsigned int)(v8 - 1);
        if ( !DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x10uLL, &v19) )
          return v4;
        v10 = (char *)v19;
        *(_DWORD *)v19 = 16;
        *(_QWORD *)(v10 + 4) = 0LL;
        *((_DWORD *)v10 + 3) = 0;
        *((_DWORD *)v10 + 1) = 214;
        *((_DWORD *)v10 + 2) = *((_DWORD *)this + 6);
        *((_DWORD *)v10 + 3) = *(_DWORD *)(*((_QWORD *)this + 33) + 4 * v9);
        if ( (unsigned int)v9 < --*((_DWORD *)this + 68) )
        {
          do
          {
            v11 = (unsigned int)v9;
            LODWORD(v9) = v9 + 1;
            *(_DWORD *)(*((_QWORD *)this + 33) + 4 * v11) = *(_DWORD *)(*((_QWORD *)this + 33) + 4LL * (unsigned int)v9);
          }
          while ( (unsigned int)v9 < *((_DWORD *)this + 68) );
        }
        v8 = *((_DWORD *)this + 68);
        if ( !v8 )
        {
          v5 = *((_DWORD *)this + 4);
          break;
        }
      }
    }
    *((_DWORD *)this + 4) = v5 & 0xFFFFFF7F;
  }
  if ( DirectComposition::CInteractionMarshaler::EmitUpdateFlags(this, a2) )
  {
    while ( 1 )
    {
      v6 = *((_DWORD *)this + 72);
      if ( !v6 )
        break;
      v12 = (unsigned int)(v6 - 1);
      if ( !DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x1CuLL, &v19) )
        return v4;
      v13 = (char *)v19;
      *(_DWORD *)v19 = 28;
      *(_QWORD *)(v13 + 4) = 0LL;
      *(_QWORD *)(v13 + 12) = 0LL;
      *(_QWORD *)(v13 + 20) = 0LL;
      *((_DWORD *)v13 + 1) = 213;
      *((_DWORD *)v13 + 2) = *((_DWORD *)this + 6);
      *((_DWORD *)v13 + 3) = **(_DWORD **)(*((_QWORD *)this + 35) + 8 * v12);
      *(_QWORD *)(v13 + 20) = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 35) + 8 * v12) + 8LL);
      Win32FreePool(*(_QWORD *)(*((_QWORD *)this + 35) + 8 * v12));
      if ( (unsigned int)v12 < --*((_DWORD *)this + 72) )
      {
        do
        {
          v14 = (unsigned int)v12;
          LODWORD(v12) = v12 + 1;
          *(_QWORD *)(*((_QWORD *)this + 35) + 8 * v14) = *(_QWORD *)(*((_QWORD *)this + 35) + 8LL * (unsigned int)v12);
        }
        while ( (unsigned int)v12 < *((_DWORD *)this + 72) );
      }
    }
    if ( (*((_DWORD *)this + 4) & 0x400) != 0 )
    {
      if ( !DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x10uLL, &v19) )
        return v4;
      v15 = (char *)v19;
      *(_DWORD *)v19 = 16;
      *(_QWORD *)(v15 + 4) = 0LL;
      *((_DWORD *)v15 + 3) = 0;
      *((_DWORD *)v15 + 1) = 218;
      *((_DWORD *)v15 + 2) = *((_DWORD *)this + 6);
      v16 = *((_QWORD *)this + 37);
      if ( v16 )
        v17 = *(_DWORD *)(v16 + 24);
      else
        v17 = 0;
      *((_DWORD *)v15 + 3) = v17;
      *((_DWORD *)this + 4) &= ~0x400u;
    }
    if ( DirectComposition::CInteractionMarshaler::EmitUpdateRails(this, a2)
      && DirectComposition::CInteractionConfigurationGroup::EmitUpdateCommands(
           (DirectComposition::CInteractionMarshaler *)((char *)this + 40),
           a2)
      && DirectComposition::CInteractionConfigurationGroup::EmitUpdateCommands(
           (DirectComposition::CInteractionMarshaler *)((char *)this + 144),
           a2) )
    {
      if ( (*((_DWORD *)this + 4) & 0x1000) != 0 )
      {
        if ( !DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x10uLL, &v19) )
          return v4;
        v18 = (char *)v19;
        *(_DWORD *)v19 = 16;
        *(_QWORD *)(v18 + 4) = 0LL;
        *((_DWORD *)v18 + 3) = 0;
        *((_DWORD *)v18 + 2) = *((_DWORD *)this + 6);
        *((_DWORD *)v18 + 1) = 215;
        v18[12] = *((_BYTE *)this + 316) >> 7;
        *((_DWORD *)this + 4) &= ~0x1000u;
      }
      if ( DirectComposition::CInteractionMarshaler::EmitHoverPointerSource(this, a2) )
        return 1;
    }
  }
  return v4;
}
