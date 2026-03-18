/*
 * XREFs of ?ProcessSetInertiaModifierAnimations@CInteractionTracker@@QEAAJPEAVCResourceTable@@PEBUMILCMD_INTERACTIONTRACKER_SETINERTIAMODIFIERANIMATIONS@@PEBXI@Z @ 0x1801A0970
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z @ 0x1800D0FD0 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x18002FAC8 (--2@YAPEAX_K@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z @ 0x1800D0ED0 (-GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ??3@YAXPEAX_K@Z @ 0x1800EBE98 (--3@YAXPEAX_K@Z.c)
 *     memcpy_0 @ 0x1800F007B (memcpy_0.c)
 *     ??4?$ComPtr@VCConditionalExpression@@@WRL@Microsoft@@QEAAAEAV012@PEAVCConditionalExpression@@@Z @ 0x18019DC38 (--4-$ComPtr@VCConditionalExpression@@@WRL@Microsoft@@QEAAAEAV012@PEAVCConditionalExpression@@@Z.c)
 *     ?AreInteractionAnimationsAlive@CInteractionTracker@@QEBA_NXZ @ 0x18019E4BC (-AreInteractionAnimationsAlive@CInteractionTracker@@QEBA_NXZ.c)
 */

__int64 __fastcall CInteractionTracker::ProcessSetInertiaModifierAnimations(
        CInteractionTracker *this,
        struct CResourceTable *a2,
        const struct MILCMD_INTERACTIONTRACKER_SETINERTIAMODIFIERANIMATIONS *a3,
        const void *a4,
        unsigned int a5)
{
  __int64 Resource; // rax
  unsigned int v9; // edi
  __int64 v10; // rcx
  SIZE_T v11; // rax

  Resource = CResourceTable::GetResource((__int64)a2, *((_DWORD *)a3 + 3), 0x26u);
  Microsoft::WRL::ComPtr<CConditionalExpression>::operator=((__int64 *)this + *((unsigned int *)a3 + 2) + 47, Resource);
  v9 = 0;
  v10 = *((_QWORD *)this + *((unsigned int *)a3 + 2) + 47);
  if ( v10 )
    *(_DWORD *)(v10 + 200) = *((_DWORD *)a3 + 1);
  if ( *((_DWORD *)a3 + 4) == a5 )
  {
    operator delete(*((void **)this + *((unsigned int *)a3 + 2) + 51));
    *((_QWORD *)this + *((unsigned int *)a3 + 2) + 51) = 0LL;
    *((_DWORD *)this + *((unsigned int *)a3 + 2) + 110) = *((_DWORD *)a3 + 4);
    if ( *((_DWORD *)a3 + 4) )
    {
      v11 = 4LL * *((unsigned int *)a3 + 4);
      if ( !is_mul_ok(*((unsigned int *)a3 + 4), 4uLL) )
        v11 = -1LL;
      *((_QWORD *)this + *((unsigned int *)a3 + 2) + 51) = operator new(v11);
      memcpy_0(*((void **)this + *((unsigned int *)a3 + 2) + 51), a4, *((unsigned int *)a3 + 4));
    }
    if ( CInteractionTracker::AreInteractionAnimationsAlive(this) )
      *(_BYTE *)(*(_QWORD *)(*((_QWORD *)this + 2) + 224LL) + 416LL) |= 4u;
  }
  else
  {
    v9 = -2003303421;
    MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, -2003303421, 0x308u);
  }
  return v9;
}
