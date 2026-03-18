/*
 * XREFs of ?ProcessSetMask@CDropShadow@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_DROPSHADOW_SETMASK@@@Z @ 0x1801CA470
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x18009D840 (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     ?SetMask@ShadowIntermediates@CDropShadow@@QEAAJPEAV2@PEAVCSpriteVisualContent@@@Z @ 0x18003030C (-SetMask@ShadowIntermediates@CDropShadow@@QEAAJPEAV2@PEAVCSpriteVisualContent@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z @ 0x18009D7D0 (-GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CDropShadow::ProcessSetMask(
        CDropShadow *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_DROPSHADOW_SETMASK *a3)
{
  unsigned int v4; // ebx
  unsigned int v5; // edx
  struct CSpriteVisualContent *Resource; // rax
  __int64 v8; // rcx
  signed int v9; // eax
  __int64 v10; // rcx

  v4 = 0;
  v5 = *((_DWORD *)a3 + 2);
  Resource = 0LL;
  if ( !v5 || (Resource = (struct CSpriteVisualContent *)CResourceTable::GetResource((__int64)a2, v5, 0xEu)) != 0LL )
  {
    if ( Resource != *((struct CSpriteVisualContent **)this + 18) )
    {
      v9 = CDropShadow::ShadowIntermediates::SetMask((CDropShadow *)((char *)this + 136), this, Resource);
      v4 = v9;
      if ( v9 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, v9, 0xA8u, 0LL);
      else
        (*(void (__fastcall **)(CDropShadow *, _QWORD, CDropShadow *))(*(_QWORD *)this + 64LL))(this, 0LL, this);
    }
  }
  else
  {
    v4 = -2003303421;
    MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, 0x88980403, 0xA2u, 0LL);
  }
  return v4;
}
