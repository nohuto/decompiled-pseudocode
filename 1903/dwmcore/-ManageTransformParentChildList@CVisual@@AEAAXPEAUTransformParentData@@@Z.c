/*
 * XREFs of ?ManageTransformParentChildList@CVisual@@AEAAXPEAUTransformParentData@@@Z @ 0x18008AF5C
 * Callers:
 *     ??1CVisual@@MEAA@XZ @ 0x180089E58 (--1CVisual@@MEAA@XZ.c)
 *     ?OnChanged@CVisual@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x18008BF40 (-OnChanged@CVisual@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?ProcessSetTransformParent@CVisual@@QEAAJPEBVCResourceTable@@PEBUtagMILCMD_VISUAL_SETTRANSFORMPARENT@@@Z @ 0x1800C2F14 (-ProcessSetTransformParent@CVisual@@QEAAJPEBVCResourceTable@@PEBUtagMILCMD_VISUAL_SETTRANSFORMPA.c)
 * Callees:
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x18008D2DC (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Remove@?$DynArray@PEAVCVisual@@$0A@@@QEAAHAEBQEAVCVisual@@@Z @ 0x1800C17F8 (-Remove@-$DynArray@PEAVCVisual@@$0A@@@QEAAHAEBQEAVCVisual@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CVisual::ManageTransformParentChildList(
        CVisual *this,
        struct TransformParentData *a2,
        __int64 a3,
        __int64 a4)
{
  unsigned int v5; // ecx
  __int64 v6; // r10
  unsigned int v7; // eax
  unsigned int v8; // edx
  __int64 v9; // rcx
  int v10; // eax
  unsigned int v11; // ecx
  CVisual *v12; // [rsp+48h] [rbp+10h] BYREF

  if ( a2 && (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)a2 + 192LL))(*(_QWORD *)a2) )
  {
    if ( (*((_BYTE *)this + 95) & 1) == 0 )
    {
      v6 = *((_QWORD *)this + 2);
      v12 = this;
      v7 = *(_DWORD *)(v6 + 1032);
      v8 = v7 + 1;
      if ( v7 + 1 < v7 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v5, 0LL, 0, -2147024362, 0xB8u, 0LL);
      }
      else if ( v8 > *(_DWORD *)(v6 + 1028) )
      {
        v10 = DynArrayImpl<0>::AddMultipleAndSet(v6 + 1008, 8LL, 1LL, &v12);
        if ( v10 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, v10, 0xC3u, 0LL);
      }
      else
      {
        *(_QWORD *)(*(_QWORD *)(v6 + 1008) + 8LL * v7) = v12;
        *(_DWORD *)(v6 + 1032) = v8;
      }
      *((_BYTE *)this + 95) |= 1u;
    }
  }
  else if ( (*((_BYTE *)this + 95) & 1) != 0 )
  {
    v9 = *((_QWORD *)this + 2) + 1008LL;
    v12 = this;
    DynArray<CVisual *,0>::Remove(v9, &v12, a3, a4);
    *((_BYTE *)this + 95) &= ~1u;
  }
}
