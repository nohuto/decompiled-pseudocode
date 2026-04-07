/*
 * XREFs of ?SetOwner@CWindowList@@AEAAJPEAVCWindowData@@0@Z @ 0x180022FC8
 * Callers:
 *     ?ImmediateDestroyWindow@CWindowList@@AEAAXPEAVCWindowData@@@Z @ 0x180012BE4 (-ImmediateDestroyWindow@CWindowList@@AEAAXPEAVCWindowData@@@Z.c)
 *     ?OwnerChange@CWindowList@@UEAAJPEAUIDwmWindow@@0@Z @ 0x180022E60 (-OwnerChange@CWindowList@@UEAAJPEAUIDwmWindow@@0@Z.c)
 * Callees:
 *     ?NotifyRepresentationChanged@CWindowData@@QEAAJXZ @ 0x1800147A4 (-NotifyRepresentationChanged@CWindowData@@QEAAJXZ.c)
 *     ?CheckOwnedWindowEligibility@CWindowData@@QEAAXXZ @ 0x180014844 (-CheckOwnedWindowEligibility@CWindowData@@QEAAXXZ.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180014F38 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?UnmetTabRequirementsMaybeUpdated@CWindowData@@QEAAXXZ @ 0x180022BE4 (-UnmetTabRequirementsMaybeUpdated@CWindowData@@QEAAXXZ.c)
 *     ?Remove@?$DynArray@PEAVCWindowData@@$0A@@@QEAAHAEBQEAVCWindowData@@@Z @ 0x18002507C (-Remove@-$DynArray@PEAVCWindowData@@$0A@@@QEAAHAEBQEAVCWindowData@@@Z.c)
 *     ?UpdateOwnerLists@CWindowData@@QEAAX_N@Z @ 0x1800250E8 (-UpdateOwnerLists@CWindowData@@QEAAX_N@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18004FBC4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CWindowList::SetOwner(CWindowData **this, __int64 a2, struct CWindowData *a3)
{
  __int64 v3; // rdi
  unsigned int v4; // ebx
  CWindowData *v6; // rax
  CWindowData *v8; // r8
  unsigned int v9; // eax
  unsigned int v10; // edx
  int v11; // eax
  int v12; // eax
  unsigned int v13; // r9d
  int v14; // r9d
  unsigned int v15; // [rsp+20h] [rbp-18h]
  void *v16; // [rsp+28h] [rbp-10h]
  CWindowData *v17; // [rsp+48h] [rbp+10h] BYREF

  v17 = (CWindowData *)a2;
  v3 = *(_QWORD *)(a2 + 552);
  v4 = 0;
  v6 = (CWindowData *)a2;
  if ( (struct CWindowData *)v3 != a3 )
  {
    if ( v3 )
    {
      CWindowData::UpdateOwnerLists((CWindowData *)a2, 0);
      v6 = v17;
    }
    *((_QWORD *)v6 + 69) = 0LL;
    if ( v3 )
    {
      DynArray<CWindowData *,0>::Remove(v3 + 560, &v17);
      v13 = *(_DWORD *)(v3 + 472);
      a2 = 0LL;
      if ( v13 )
      {
        v8 = v17;
        while ( 1 )
        {
          this = *(CWindowData ***)(*(_QWORD *)(v3 + 448) + 8 * a2);
          if ( this[8] == v17 )
            break;
          a2 = (unsigned int)(a2 + 1);
          if ( (unsigned int)a2 >= v13 )
            goto LABEL_7;
        }
        v12 = CWindowData::NotifyRepresentationChanged((CWindowData *)v3);
        v4 = v12;
        if ( v12 < 0 )
        {
          v15 = 3683;
LABEL_25:
          v14 = v12;
LABEL_28:
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v14, v15, v16);
          return v4;
        }
      }
    }
    v8 = v17;
LABEL_7:
    *((_QWORD *)v8 + 69) = a3;
    if ( !a3 || a3 == v17 )
    {
LABEL_15:
      CWindowData::UnmetTabRequirementsMaybeUpdated((CWindowData *)this, a2);
      return v4;
    }
    v9 = *((_DWORD *)a3 + 146);
    v10 = v9 + 1;
    if ( v9 + 1 < v9 )
    {
      v4 = -2147024362;
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024362, 0xB5u, v16);
    }
    else
    {
      if ( v10 <= *((_DWORD *)a3 + 145) )
      {
        *(_QWORD *)(*((_QWORD *)a3 + 70) + 8LL * *((unsigned int *)a3 + 146)) = v17;
        *((_DWORD *)a3 + 146) = v10;
        goto LABEL_14;
      }
      v11 = DynArrayImpl<0>::AddMultipleAndSet((__int64)a3 + 560, 8, 1, &v17);
      v4 = v11;
      if ( v11 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v11, 0xC0u, v16);
      if ( (v4 & 0x80000000) == 0 )
      {
LABEL_14:
        CWindowData::CheckOwnedWindowEligibility(v17);
        v12 = CWindowData::NotifyRepresentationChanged(a3);
        v4 = v12;
        if ( v12 < 0 )
        {
          v15 = 3701;
          goto LABEL_25;
        }
        goto LABEL_15;
      }
    }
    v15 = 3696;
    v14 = v4;
    goto LABEL_28;
  }
  return v4;
}
