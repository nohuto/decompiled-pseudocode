/*
 * XREFs of ?ProcessUpdateEdgyConfiguration@CManipulation@@QEAAJPEAVCResourceTable@@PEBUMILCMD_MANIPULATION_UPDATEEDGYCONFIGURATION@@@Z @ 0x1801A5CC0
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z @ 0x1800D0FD0 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z @ 0x1800D0ED0 (-GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z.c)
 *     memcmp_0 @ 0x1800F006F (memcmp_0.c)
 *     memcpy_0 @ 0x1800F007B (memcpy_0.c)
 *     ?_UpdateEdgyInput@CManipulation@@AEAAJW4Enum@EdgyCompositionUpdateType@@@Z @ 0x1801A7630 (-_UpdateEdgyInput@CManipulation@@AEAAJW4Enum@EdgyCompositionUpdateType@@@Z.c)
 *     ModuleFailFastForHRESULT @ 0x1801E0F18 (ModuleFailFastForHRESULT.c)
 */

__int64 __fastcall CManipulation::ProcessUpdateEdgyConfiguration(
        CManipulation *this,
        struct CResourceTable *a2,
        const struct MILCMD_MANIPULATION_UPDATEEDGYCONFIGURATION *a3)
{
  unsigned int v4; // ebp
  unsigned int v5; // edx
  char v8; // di
  __int64 Resource; // rax
  int v10; // ecx
  int v11; // eax
  int v12; // eax
  float v13; // xmm1_4
  float v14; // xmm1_4
  unsigned int v15; // r14d
  int updated; // eax
  __int64 v17; // rcx
  void *retaddr; // [rsp+48h] [rbp+0h]

  v4 = 0;
  v5 = *((_DWORD *)a3 + 5);
  if ( v5 )
  {
    v8 = 0;
    Resource = CResourceTable::GetResource((__int64)a2, v5, 0x53u);
    if ( Resource )
      Resource -= 8LL;
    if ( !Resource )
      ModuleFailFastForHRESULT(2147500036LL, retaddr);
    v10 = *(_DWORD *)(Resource + 1696);
    *((_BYTE *)this + 568) = 0;
    if ( v10 != *((_DWORD *)this + 181) )
    {
      *((_DWORD *)this + 181) = v10;
      v8 = 1;
    }
    v11 = *((_DWORD *)a3 + 2) != 0;
    if ( *((_DWORD *)this + 178) != v11 )
    {
      *((_DWORD *)this + 178) = v11;
      v8 = 1;
    }
    v12 = *((_DWORD *)a3 + 6);
    if ( *((_DWORD *)this + 182) != v12 )
    {
      *((_DWORD *)this + 182) = v12;
      v8 = 1;
    }
    v13 = *((float *)a3 + 3);
    if ( *((float *)this + 179) != v13 )
    {
      *((float *)this + 179) = v13;
      v8 = 1;
    }
    v14 = *((float *)a3 + 4);
    if ( *((float *)this + 180) != v14 )
    {
      *((float *)this + 180) = v14;
      v8 = 1;
    }
    v15 = *((_DWORD *)a3 + 7);
    if ( *((_DWORD *)this + 183) != v15 || memcmp_0((char *)this + 736, (char *)a3 + 32, 8LL * v15) )
    {
      *((_DWORD *)this + 183) = v15;
      memcpy_0((char *)this + 736, (char *)a3 + 32, 8LL * *((unsigned int *)a3 + 7));
      v8 = 1;
    }
    if ( v8 )
    {
      updated = CManipulation::_UpdateEdgyInput(this, 0LL);
      v4 = updated;
      if ( updated < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v17, 0LL, 0, updated, 0x32Du);
    }
  }
  return v4;
}
