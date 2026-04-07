/*
 * XREFs of ?SetOwner@CWindowList@@AEAAJPEAVCWindowData@@0@Z @ 0x1800145D8
 * Callers:
 *     ?ImmediateDestroyWindow@CWindowList@@AEAAXPEAVCWindowData@@@Z @ 0x180012D6C (-ImmediateDestroyWindow@CWindowList@@AEAAXPEAVCWindowData@@@Z.c)
 *     ?OwnerChange@CWindowList@@UEAAJPEAUIDwmWindow@@0@Z @ 0x180014470 (-OwnerChange@CWindowList@@UEAAJPEAUIDwmWindow@@0@Z.c)
 * Callees:
 *     ?UpdateOwnerLists@CWindowData@@QEAAX_N@Z @ 0x180011D7C (-UpdateOwnerLists@CWindowData@@QEAAX_N@Z.c)
 *     ?Remove@?$DynArray@PEAVCWindowData@@$0A@@@QEAAHAEBQEAVCWindowData@@@Z @ 0x180011E0C (-Remove@-$DynArray@PEAVCWindowData@@$0A@@@QEAAHAEBQEAVCWindowData@@@Z.c)
 *     ?UnmetTabRequirementsMaybeUpdated@CWindowData@@QEAAXXZ @ 0x180014A34 (-UnmetTabRequirementsMaybeUpdated@CWindowData@@QEAAXXZ.c)
 *     ?NotifyRepresentationChanged@CWindowData@@QEAAJXZ @ 0x180014EB4 (-NotifyRepresentationChanged@CWindowData@@QEAAJXZ.c)
 *     ?CheckOwnedWindowEligibility@CWindowData@@QEAAXXZ @ 0x180014F54 (-CheckOwnedWindowEligibility@CWindowData@@QEAAXXZ.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180015648 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18004F8B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CWindowList::SetOwner(CWindowData **this, struct CWindowData *a2, struct CWindowData *a3)
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
  __int64 v14; // rdx
  int v15; // r9d
  unsigned int v16; // [rsp+20h] [rbp-18h]
  void *v17; // [rsp+28h] [rbp-10h]
  CWindowData *v18; // [rsp+48h] [rbp+10h] BYREF

  v18 = a2;
  v3 = *((_QWORD *)a2 + 69);
  v4 = 0;
  v6 = a2;
  if ( (struct CWindowData *)v3 != a3 )
  {
    if ( v3 )
    {
      CWindowData::UpdateOwnerLists(a2, 0);
      v6 = v18;
    }
    *((_QWORD *)v6 + 69) = 0LL;
    if ( v3 )
    {
      DynArray<CWindowData *,0>::Remove((__int64 *)(v3 + 560), &v18);
      v13 = *(_DWORD *)(v3 + 472);
      v14 = 0LL;
      if ( v13 )
      {
        v8 = v18;
        while ( 1 )
        {
          this = *(CWindowData ***)(*(_QWORD *)(v3 + 448) + 8 * v14);
          if ( this[8] == v18 )
            break;
          v14 = (unsigned int)(v14 + 1);
          if ( (unsigned int)v14 >= v13 )
            goto LABEL_7;
        }
        v12 = CWindowData::NotifyRepresentationChanged((CWindowData *)v3);
        v4 = v12;
        if ( v12 < 0 )
        {
          v16 = 3683;
LABEL_25:
          v15 = v12;
LABEL_28:
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v15, v16, v17);
          return v4;
        }
      }
    }
    v8 = v18;
LABEL_7:
    *((_QWORD *)v8 + 69) = a3;
    if ( !a3 || a3 == v18 )
    {
LABEL_15:
      CWindowData::UnmetTabRequirementsMaybeUpdated((CWindowData *)this);
      return v4;
    }
    v9 = *((_DWORD *)a3 + 146);
    v10 = v9 + 1;
    if ( v9 + 1 < v9 )
    {
      v4 = -2147024362;
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024362, 0xB5u, v17);
    }
    else
    {
      if ( v10 <= *((_DWORD *)a3 + 145) )
      {
        *(_QWORD *)(*((_QWORD *)a3 + 70) + 8LL * *((unsigned int *)a3 + 146)) = v18;
        *((_DWORD *)a3 + 146) = v10;
        goto LABEL_14;
      }
      v11 = DynArrayImpl<0>::AddMultipleAndSet((char *)a3 + 560, 8LL, 1LL, &v18);
      v4 = v11;
      if ( v11 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v11, 0xC0u, v17);
      if ( (v4 & 0x80000000) == 0 )
      {
LABEL_14:
        CWindowData::CheckOwnedWindowEligibility(v18);
        v12 = CWindowData::NotifyRepresentationChanged(a3);
        v4 = v12;
        if ( v12 < 0 )
        {
          v16 = 3701;
          goto LABEL_25;
        }
        goto LABEL_15;
      }
    }
    v16 = 3696;
    v15 = v4;
    goto LABEL_28;
  }
  return v4;
}
