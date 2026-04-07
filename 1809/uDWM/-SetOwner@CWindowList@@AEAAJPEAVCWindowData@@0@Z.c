/*
 * XREFs of ?SetOwner@CWindowList@@AEAAJPEAVCWindowData@@0@Z @ 0x180020E38
 * Callers:
 *     ?ImmediateDestroyWindow@CWindowList@@AEAAXPEAVCWindowData@@@Z @ 0x180020430 (-ImmediateDestroyWindow@CWindowList@@AEAAXPEAVCWindowData@@@Z.c)
 * Callees:
 *     ?UnmetTabRequirementsMaybeUpdated@CWindowData@@QEAAXXZ @ 0x18000F424 (-UnmetTabRequirementsMaybeUpdated@CWindowData@@QEAAXXZ.c)
 *     ?NotifyRepresentationChanged@CWindowData@@QEAAJXZ @ 0x18000F484 (-NotifyRepresentationChanged@CWindowData@@QEAAJXZ.c)
 *     ?Remove@?$DynArray@PEAVCWindowData@@$0A@@@QEAAHAEBQEAVCWindowData@@@Z @ 0x18000F524 (-Remove@-$DynArray@PEAVCWindowData@@$0A@@@QEAAHAEBQEAVCWindowData@@@Z.c)
 *     ?UpdateOwnerLists@CWindowData@@QEAAX_N@Z @ 0x18000F590 (-UpdateOwnerLists@CWindowData@@QEAAX_N@Z.c)
 *     ?CheckOwnedWindowEligibility@CWindowData@@QEAAXXZ @ 0x18000F668 (-CheckOwnedWindowEligibility@CWindowData@@QEAAXXZ.c)
 *     ?AddMultipleAndSet@?$DynArray@PEAVCWindowData@@$0A@@@QEAAJPEFBQEAVCWindowData@@I@Z @ 0x180020FE0 (-AddMultipleAndSet@-$DynArray@PEAVCWindowData@@$0A@@@QEAAJPEFBQEAVCWindowData@@I@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18004E04C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CWindowList::SetOwner(CWindowData **this, struct CWindowData *a2, struct CWindowData *a3)
{
  __int64 v3; // rdi
  unsigned int v4; // ebx
  CWindowData *v6; // rax
  unsigned int v8; // r9d
  __int64 v9; // rdx
  CWindowData *v10; // r8
  int v11; // eax
  int v12; // eax
  int v13; // eax
  CWindowData *v14; // [rsp+48h] [rbp+10h] BYREF

  v14 = a2;
  v3 = *((_QWORD *)a2 + 68);
  v4 = 0;
  v6 = a2;
  if ( (struct CWindowData *)v3 != a3 )
  {
    if ( v3 )
    {
      CWindowData::UpdateOwnerLists(a2, 0);
      v6 = v14;
    }
    *((_QWORD *)v6 + 68) = 0LL;
    if ( !v3 )
      goto LABEL_15;
    DynArray<CWindowData *,0>::Remove((__int64 *)(v3 + 552), &v14);
    v8 = *(_DWORD *)(v3 + 464);
    v9 = 0LL;
    if ( !v8 )
      goto LABEL_15;
    v10 = v14;
    while ( 1 )
    {
      this = *(CWindowData ***)(*(_QWORD *)(v3 + 440) + 8 * v9);
      if ( this[8] == v14 )
        break;
      v9 = (unsigned int)(v9 + 1);
      if ( (unsigned int)v9 >= v8 )
        goto LABEL_16;
    }
    v11 = CWindowData::NotifyRepresentationChanged((CWindowData *)v3);
    v4 = v11;
    if ( v11 >= 0 )
    {
LABEL_15:
      v10 = v14;
LABEL_16:
      *((_QWORD *)v10 + 68) = a3;
      if ( a3 && a3 != v14 )
      {
        v12 = DynArray<CWindowData *,0>::AddMultipleAndSet((char *)a3 + 552, &v14);
        v4 = v12;
        if ( v12 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v12, 0xE21u);
          return v4;
        }
        CWindowData::CheckOwnedWindowEligibility(v14);
        v13 = CWindowData::NotifyRepresentationChanged(a3);
        v4 = v13;
        if ( v13 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v13, 0xE26u);
          return v4;
        }
      }
      CWindowData::UnmetTabRequirementsMaybeUpdated((CWindowData *)this);
      return v4;
    }
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v11, 0xE14u);
  }
  return v4;
}
