/*
 * XREFs of ?AddSecondaryWindowRepresentation@CWindowData@@AEAAJPEAVCSecondaryWindowRepresentation@@W4WindowRepresentationType@@_N@Z @ 0x180012428
 * Callers:
 *     ?ChangeSecondaryWindowRepresentation@CWindowData@@QEAAJPEAVCSecondaryWindowRepresentation@@PEAVCWindowRepresentation@@@Z @ 0x180012388 (-ChangeSecondaryWindowRepresentation@CWindowData@@QEAAJPEAVCSecondaryWindowRepresentation@@PEAVC.c)
 * Callees:
 *     ?IsImmersiveWindow@CWindowData@@QEBA_NXZ @ 0x1800147A0 (-IsImmersiveWindow@CWindowData@@QEBA_NXZ.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180015648 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?TrackOwnedWindows@CWindowData@@AEAAX_N@Z @ 0x180026E74 (-TrackOwnedWindows@CWindowData@@AEAAX_N@Z.c)
 *     ?OnEligibleOwnedWindowAddedOrRemoved@CSecondaryWindowRepresentation@@QEAAJPEAVCWindowData@@_N@Z @ 0x18003C720 (-OnEligibleOwnedWindowAddedOrRemoved@CSecondaryWindowRepresentation@@QEAAJPEAVCWindowData@@_N@Z.c)
 *     ?Create@CWindowIconic@@SAJPEAVCWindowData@@PEAPEAV1@_N@Z @ 0x18003EBF4 (-Create@CWindowIconic@@SAJPEAVCWindowData@@PEAPEAV1@_N@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18004F8B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CWindowData::AddSecondaryWindowRepresentation(
        __int64 a1,
        CSecondaryWindowRepresentation *a2,
        int a3,
        char a4)
{
  unsigned int v4; // ebx
  int v7; // esi
  int v8; // esi
  __int64 v10; // rax
  int v11; // eax
  unsigned int v12; // eax
  unsigned int v13; // edx
  int v14; // eax
  int v15; // r9d
  __int64 v16; // rsi
  char *v17; // rdx
  unsigned int v18; // [rsp+20h] [rbp-18h]
  void *v19; // [rsp+28h] [rbp-10h]
  CSecondaryWindowRepresentation *v20; // [rsp+48h] [rbp+10h] BYREF

  v20 = a2;
  v4 = 0;
  if ( !a4 )
    goto LABEL_2;
  v12 = *(_DWORD *)(a1 + 472);
  v13 = v12 + 1;
  if ( v12 + 1 < v12 )
  {
    v4 = -2147024362;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024362, 0xB5u, v19);
    goto LABEL_20;
  }
  if ( v13 <= *(_DWORD *)(a1 + 468) )
  {
    *(_QWORD *)(*(_QWORD *)(a1 + 448) + 8LL * *(unsigned int *)(a1 + 472)) = v20;
    *(_DWORD *)(a1 + 472) = v13;
    goto LABEL_2;
  }
  v14 = DynArrayImpl<0>::AddMultipleAndSet(a1 + 448, 8LL, 1LL, &v20);
  v4 = v14;
  if ( v14 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v14, 0xC0u, v19);
  if ( (v4 & 0x80000000) != 0 )
  {
LABEL_20:
    v18 = 7522;
LABEL_22:
    v15 = v4;
LABEL_24:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v15, v18, v19);
    return v4;
  }
LABEL_2:
  v7 = a3 - 1;
  if ( !v7 )
  {
    if ( ++*(_DWORD *)(a1 + 480) == 1 )
    {
      CWindowData::TrackOwnedWindows((CWindowData *)a1, 1);
      return v4;
    }
    v16 = 0LL;
    if ( !*(_DWORD *)(a1 + 584) )
      return v4;
    while ( 1 )
    {
      v17 = *(char **)(*(_QWORD *)(a1 + 560) + 8 * v16);
      if ( v17[605] < 0 )
      {
        v11 = CSecondaryWindowRepresentation::OnEligibleOwnedWindowAddedOrRemoved(v20, (struct CWindowData *)v17, 1);
        v4 = v11;
        if ( v11 < 0 )
          break;
      }
      v16 = (unsigned int)(v16 + 1);
      if ( (unsigned int)v16 >= *(_DWORD *)(a1 + 584) )
        return v4;
    }
    v18 = 7542;
    goto LABEL_23;
  }
  v8 = v7 - 1;
  if ( !v8 )
    return v4;
  if ( v8 != 1 )
  {
    v4 = -2147418113;
    v18 = 7569;
    goto LABEL_22;
  }
  if ( !CWindowData::IsImmersiveWindow((CWindowData *)a1) )
  {
    v10 = *(_QWORD *)(a1 + 440);
    if ( v10 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v10 + 8));
      return v4;
    }
    v11 = CWindowIconic::Create((struct CWindowData *)a1, (struct CWindowIconic **)(a1 + 440), 0);
    v4 = v11;
    if ( v11 < 0 )
    {
      v18 = 7554;
LABEL_23:
      v15 = v11;
      goto LABEL_24;
    }
  }
  return v4;
}
