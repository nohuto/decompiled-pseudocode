/*
 * XREFs of ?ChangeSecondaryWindowRepresentation@CWindowData@@QEAAJPEAVCSecondaryWindowRepresentation@@PEAVCWindowRepresentation@@@Z @ 0x18002601C
 * Callers:
 *     ?OnRepresentationUpdated@CSecondaryWindowRepresentation@@QEAAJXZ @ 0x18002379C (-OnRepresentationUpdated@CSecondaryWindowRepresentation@@QEAAJXZ.c)
 * Callees:
 *     ?OnEligibleOwnedWindowAddedOrRemoved@CSecondaryWindowRepresentation@@QEAAJPEAVCWindowData@@_N@Z @ 0x1800065AC (-OnEligibleOwnedWindowAddedOrRemoved@CSecondaryWindowRepresentation@@QEAAJPEAVCWindowData@@_N@Z.c)
 *     ?TrackOwnedWindows@CWindowData@@AEAAX_N@Z @ 0x18000F02C (-TrackOwnedWindows@CWindowData@@AEAAX_N@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x18002107C (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?IsImmersiveWindow@CWindowData@@QEBA_NXZ @ 0x180021410 (-IsImmersiveWindow@CWindowData@@QEBA_NXZ.c)
 *     ?RemoveSecondaryWindowRepresentation@CWindowData@@AEAAXPEAVCSecondaryWindowRepresentation@@W4WindowRepresentationType@@_N@Z @ 0x180026BF8 (-RemoveSecondaryWindowRepresentation@CWindowData@@AEAAXPEAVCSecondaryWindowRepresentation@@W4Win.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18004E04C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?Create@CWindowIconic@@SAJPEAVCWindowData@@PEAPEAV1@_N@Z @ 0x18008D950 (-Create@CWindowIconic@@SAJPEAVCWindowData@@PEAPEAV1@_N@Z.c)
 */

__int64 __fastcall CWindowData::ChangeSecondaryWindowRepresentation(
        CWindowData *this,
        struct CSecondaryWindowRepresentation *a2,
        CWindowData **a3,
        __int64 a4)
{
  CWindowData *v6; // rcx
  __int64 v7; // rdi
  bool v8; // si
  bool v9; // al
  int v10; // ebx
  unsigned int v12; // eax
  unsigned int v13; // edx
  int v14; // eax
  __int64 v15; // rax
  int v16; // eax
  __int64 v17; // rsi
  char *v18; // rdx
  unsigned int v19; // [rsp+20h] [rbp-28h]
  __int128 v20; // [rsp+30h] [rbp-18h]
  CSecondaryWindowRepresentation *v21; // [rsp+58h] [rbp+10h] BYREF

  v6 = *a3;
  v7 = *((_QWORD *)a2 + 8);
  v20 = *((_OWORD *)a2 + 4);
  v8 = *a3 != (CWindowData *)v7;
  if ( *a3 )
  {
    if ( *a3 == (CWindowData *)v7 || v6 == this )
      a4 = 0LL;
    else
      LOBYTE(a4) = 1;
    CWindowData::RemoveSecondaryWindowRepresentation(v6, a2, *((unsigned int *)a3 + 2), a4);
  }
  v9 = v8 && (CWindowData *)v7 != this;
  v10 = 0;
  v21 = a2;
  if ( v9 )
  {
    v12 = *(_DWORD *)(v7 + 464);
    v13 = v12 + 1;
    v10 = v12 + 1 < v12 ? 0x80070216 : 0;
    if ( v12 + 1 >= v12 )
    {
      if ( v13 > *(_DWORD *)(v7 + 460) )
      {
        v14 = DynArrayImpl<0>::AddMultipleAndSet(v7 + 440, 8u, 1, &v21);
        v10 = v14;
        if ( v14 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v14, 0xC0u);
      }
      else
      {
        *(_QWORD *)(*(_QWORD *)(v7 + 440) + 8LL * *(unsigned int *)(v7 + 464)) = v21;
        *(_DWORD *)(v7 + 464) = v13;
      }
    }
    else
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v10, 0xB5u);
    }
    if ( v10 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v10, 0x1CBCu);
      goto LABEL_9;
    }
  }
  if ( DWORD2(v20) == 1 )
  {
    if ( ++*(_DWORD *)(v7 + 472) == 1 )
    {
      CWindowData::TrackOwnedWindows((CWindowData *)v7, 1);
      goto LABEL_9;
    }
    v17 = 0LL;
    if ( *(_DWORD *)(v7 + 576) )
    {
      while ( 1 )
      {
        v18 = *(char **)(*(_QWORD *)(v7 + 552) + 8 * v17);
        if ( v18[597] < 0 )
        {
          v16 = CSecondaryWindowRepresentation::OnEligibleOwnedWindowAddedOrRemoved(v21, (struct CWindowData *)v18, 1);
          v10 = v16;
          if ( v16 < 0 )
            break;
        }
        v17 = (unsigned int)(v17 + 1);
        if ( (unsigned int)v17 >= *(_DWORD *)(v7 + 576) )
          goto LABEL_9;
      }
      v19 = 7376;
LABEL_34:
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v16, v19);
    }
  }
  else if ( DWORD2(v20) != 2 )
  {
    if ( DWORD2(v20) != 3 )
    {
      v10 = -2147418113;
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147418113, 0x1CEBu);
      goto LABEL_29;
    }
    if ( !CWindowData::IsImmersiveWindow((CWindowData *)v7) )
    {
      v15 = *(_QWORD *)(v7 + 432);
      if ( v15 )
      {
        _InterlockedIncrement((volatile signed __int32 *)(v15 + 8));
        goto LABEL_9;
      }
      v16 = CWindowIconic::Create((struct CWindowData *)v7, (struct CWindowIconic **)(v7 + 432), 0);
      v10 = v16;
      if ( v16 >= 0 )
        return (unsigned int)v10;
      v19 = 7388;
      goto LABEL_34;
    }
  }
LABEL_9:
  if ( v10 < 0 )
LABEL_29:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v10, 0x1D61u);
  return (unsigned int)v10;
}
