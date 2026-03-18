/*
 * XREFs of ?EmitUpdate@CCompiledEffectTemplateMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C00551DC
 * Callers:
 *     ?EmitUpdateCommands@CCompiledEffectTemplateMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0055150 (-EmitUpdateCommands@CCompiledEffectTemplateMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 * Callees:
 *     ?EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z @ 0x1C000CBD4 (-EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z.c)
 *     OpenDwmHandle @ 0x1C003E5C4 (OpenDwmHandle.c)
 *     ??_GCEvent@DirectComposition@@QEAAPEAXI@Z @ 0x1C0055CB0 (--_GCEvent@DirectComposition@@QEAAPEAXI@Z.c)
 *     memset @ 0x1C00C1440 (memset.c)
 */

char __fastcall DirectComposition::CCompiledEffectTemplateMarshaler::EmitUpdate(
        DirectComposition::CCompiledEffectTemplateMarshaler *this,
        struct DirectComposition::CBatch **a2)
{
  char *v4; // rax
  _DWORD *v5; // rdi
  __int64 v6; // r9
  __int64 v7; // rax
  __int64 v8; // rcx
  void **v9; // rdi
  unsigned int v10; // edx
  DirectComposition::CEvent *v11; // rcx
  _QWORD *v12; // rax
  __int64 v13; // rdx
  int v15; // [rsp+20h] [rbp-18h]
  void *v16; // [rsp+40h] [rbp+8h] BYREF

  if ( (*((_DWORD *)this + 4) & 0x40) != 0 )
    return 1;
  if ( DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x24uLL, &v16) )
  {
    v4 = (char *)v16;
    *(_DWORD *)v16 = 36;
    v5 = v4 + 4;
    memset(v4 + 4, 0, 0x20uLL);
    *v5 = 60;
    v5[1] = *((_DWORD *)this + 6);
    v7 = *((_QWORD *)this + 6);
    if ( v7 )
      LODWORD(v7) = *(_DWORD *)(v7 + 24);
    v5[2] = v7;
    v5[3] = *((_DWORD *)this + 14);
    v5[4] = *((_DWORD *)this + 15);
    v8 = *((_QWORD *)this + 9);
    if ( v8 )
    {
      v9 = (void **)(v5 + 6);
      if ( (int)OpenDwmHandle(*(PVOID *)(v8 + 8), (POBJECT_TYPE)ExEventObjectType, 2u, v6, v15, v9) < 0 )
      {
        *v9 = 0LL;
        KeSetEvent(*(PRKEVENT *)(*((_QWORD *)this + 9) + 8LL), 1, 0);
      }
      v11 = (DirectComposition::CEvent *)*((_QWORD *)this + 9);
      if ( v11 )
        DirectComposition::CEvent::`scalar deleting destructor'(v11, v10);
      *((_QWORD *)this + 9) = 0LL;
    }
    v12 = (_QWORD *)*((_QWORD *)this + 10);
    if ( v12 )
    {
      v13 = *((_QWORD *)*a2 + 1);
      *v12 = *(_QWORD *)(v13 + 208);
      *(_QWORD *)(v13 + 208) = v12;
      *((_QWORD *)this + 10) = 0LL;
    }
    *((_DWORD *)this + 4) |= 0x40u;
    return 1;
  }
  return 0;
}
