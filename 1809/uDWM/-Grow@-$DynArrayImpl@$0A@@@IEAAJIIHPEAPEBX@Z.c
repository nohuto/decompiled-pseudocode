/*
 * XREFs of ?Grow@?$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z @ 0x18001F390
 * Callers:
 *     ?UpdateWindowVisuals@CTopLevelWindow@@AEAAJXZ @ 0x18001C300 (-UpdateWindowVisuals@CTopLevelWindow@@AEAAJXZ.c)
 *     ?Validate@CAtlasedImage@@QEAAJXZ @ 0x18001E7F0 (-Validate@CAtlasedImage@@QEAAJXZ.c)
 *     ?InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z @ 0x18001F020 (-InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z.c)
 *     ?AddMultipleAndSet@?$DynArray@PEAVCRenderDataInstruction@@$0A@@@QEAAJPEFBQEAVCRenderDataInstruction@@I@Z @ 0x18001F684 (-AddMultipleAndSet@-$DynArray@PEAVCRenderDataInstruction@@$0A@@@QEAAJPEFBQEAVCRenderDataInstruct.c)
 *     ?CloneVisualTree@CAtlasedRectsVisual@@UEAAJPEAPEAVCVisual@@_N11@Z @ 0x18001FD30 (-CloneVisualTree@CAtlasedRectsVisual@@UEAAJPEAPEAVCVisual@@_N11@Z.c)
 *     ?AddMultipleAndSet@?$DynArray@PEAVCWindowData@@$0A@@@QEAAJPEFBQEAVCWindowData@@I@Z @ 0x180020FE0 (-AddMultipleAndSet@-$DynArray@PEAVCWindowData@@$0A@@@QEAAJPEFBQEAVCWindowData@@I@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x18002107C (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?CopyAndAddRef@CBitmapSourceArray@@QEAAJAEBV1@@Z @ 0x1800215C8 (-CopyAndAddRef@CBitmapSourceArray@@QEAAJAEBV1@@Z.c)
 *     ?InsertAtlasImageAtIndex@CAtlasedRectsVisual@@QEAAJPEAVCAtlasedImage@@I@Z @ 0x180021D08 (-InsertAtlasImageAtIndex@CAtlasedRectsVisual@@QEAAJPEAVCAtlasedImage@@I@Z.c)
 *     ?InsertAt@?$DynArray@PEAVCWindowData@@$0A@@@QEAAJAEBQEAVCWindowData@@I@Z @ 0x1800378D8 (-InsertAt@-$DynArray@PEAVCWindowData@@$0A@@@QEAAJAEBQEAVCWindowData@@I@Z.c)
 *     ?CreateBitmapsFromAtlasImageStrip@CTopLevelWindow@@SAJQEAXHIPEAU_MARGINS@@AEAV?$DynArray@PEAVCBitmapSource@@$0A@@@@Z @ 0x18003E1C4 (-CreateBitmapsFromAtlasImageStrip@CTopLevelWindow@@SAJQEAXHIPEAU_MARGINS@@AEAV-$DynArray@PEAVCBi.c)
 *     ?InsertAt@?$DynArray@ULivePreviewVisual@@$0A@@@QEAAJAEBULivePreviewVisual@@I@Z @ 0x18007426C (-InsertAt@-$DynArray@ULivePreviewVisual@@$0A@@@QEAAJAEBULivePreviewVisual@@I@Z.c)
 *     ?InsertAt@?$DynArray@UTOUCH_DRAG_POINT@@$0A@@@QEAAJAEBUTOUCH_DRAG_POINT@@I@Z @ 0x1800985A0 (-InsertAt@-$DynArray@UTOUCH_DRAG_POINT@@$0A@@@QEAAJAEBUTOUCH_DRAG_POINT@@I@Z.c)
 *     ?AddMultiple@?$DynArrayImpl@$0A@@@IEAAJIIPEAPEAX@Z @ 0x1800B1840 (-AddMultiple@-$DynArrayImpl@$0A@@@IEAAJIIPEAPEAX@Z.c)
 *     ?EnsureCount@CMILResourceCache@@IEAAJI@Z @ 0x1800B46C8 (-EnsureCount@CMILResourceCache@@IEAAJI@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18004E04C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     memcpy_0 @ 0x18004E28A (memcpy_0.c)
 *     _guard_dispatch_icall_nop @ 0x18004E2E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DynArrayImpl<0>::Grow(char **a1, unsigned int a2, int a3, int a4, unsigned __int64 *a5)
{
  unsigned int v5; // eax
  char *v6; // r10
  unsigned int v9; // edi
  unsigned int v10; // eax
  unsigned __int64 v12; // r8
  unsigned int v13; // ecx
  int v14; // r9d
  unsigned int v15; // edx
  unsigned int v16; // edx
  unsigned int v17; // eax
  int v18; // esi
  int v19; // eax
  unsigned __int64 v21; // rdx
  unsigned __int64 v22; // r9
  char *v23; // [rsp+40h] [rbp+8h] BYREF

  v5 = *((_DWORD *)a1 + 6);
  v6 = 0LL;
  v23 = 0LL;
  v9 = v5 + a3;
  if ( v5 + a3 < v5 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024362, 0xE7u);
    return 2147942934LL;
  }
  v10 = *((_DWORD *)a1 + 5);
  if ( v9 <= v10 )
    return 0LL;
  v12 = a2 * (unsigned __int64)v9;
  if ( v12 <= 0xFFFFFFFF )
  {
    if ( a4 )
    {
LABEL_13:
      if ( a2 == 16 )
        v17 = 0xFFFFFFF;
      else
        v17 = 0xFFFFFFFF / a2;
      if ( v9 <= v17 )
      {
        if ( *a1 == a1[1] )
        {
          v18 = 0;
          if ( (_DWORD)v12 )
          {
            v23 = (char *)(*(__int64 (__fastcall **)(WPF::HeapBase *, _QWORD))(*(_QWORD *)WPF::g_pProcessHeap + 8LL))(
                            WPF::g_pProcessHeap,
                            (unsigned int)v12);
            v6 = v23;
            if ( !v23 )
              v18 = -2147024882;
          }
          else
          {
            v18 = -2147024809;
          }
          if ( v18 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v18, 0x111u);
            return (unsigned int)v18;
          }
          v19 = *((_DWORD *)a1 + 6);
          if ( v19 )
          {
            memcpy_0(v6, *a1, a2 * v19);
            v6 = v23;
          }
        }
        else
        {
          v23 = *a1;
          v18 = (*(__int64 (__fastcall **)(WPF::HeapBase *, char **))(*(_QWORD *)WPF::g_pProcessHeap + 24LL))(
                  WPF::g_pProcessHeap,
                  &v23);
          if ( v18 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v18, 0x12Au);
            return (unsigned int)v18;
          }
          v21 = (unsigned __int64)*a1;
          v6 = v23;
          if ( v23 != *a1 )
          {
            if ( a5 )
            {
              v22 = *a5;
              if ( *a5 >= v21 && v22 < v21 + a2 * *((_DWORD *)a1 + 5) )
                *a5 = (unsigned __int64)&v23[v22 - v21];
            }
          }
        }
        *((_DWORD *)a1 + 5) = v9;
        *a1 = v6;
        return (unsigned int)v18;
      }
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024362, 0x10Au);
      return 2147942934LL;
    }
    v13 = v9 - v10;
    if ( v10 > 0x10 )
    {
      v15 = 8092;
      v14 = v10;
      if ( v10 >= 0x1F9C )
        goto LABEL_8;
    }
    else
    {
      v14 = 16;
    }
    v15 = v14;
LABEL_8:
    if ( v13 <= v15 )
      v13 = v15;
    v16 = v13 + v10;
    if ( v13 + v10 >= v10 && a2 * (unsigned __int64)v16 <= 0xFFFFFFFF )
    {
      v9 = v13 + v10;
      LODWORD(v12) = a2 * v16;
    }
    goto LABEL_13;
  }
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024362, 0xF0u);
  return 2147942934LL;
}
