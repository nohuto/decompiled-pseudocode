/*
 * XREFs of ??_GCDropShadow@@UEAAPEAXI@Z @ 0x1800E35A0
 * Callers:
 *     <none>
 * Callees:
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x1800BAE7C (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ??1CDropShadow@@UEAA@XZ @ 0x1800E35E0 (--1CDropShadow@@UEAA@XZ.c)
 *     ?PrepareForReuse@CSwRenderTargetGetBounds@@UEAAXXZ @ 0x1800E5BD0 (-PrepareForReuse@CSwRenderTargetGetBounds@@UEAAXXZ.c)
 */

CDropShadow *__fastcall CDropShadow::`scalar deleting destructor'(CDropShadow *this, char a2)
{
  CDropShadow::~CDropShadow(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      CSwRenderTargetGetBounds::PrepareForReuse(this);
    else
      WPF::ProcessHeapImpl::Free(this);
  }
  return this;
}
