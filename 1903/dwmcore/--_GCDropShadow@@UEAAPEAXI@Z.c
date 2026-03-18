/*
 * XREFs of ??_GCDropShadow@@UEAAPEAXI@Z @ 0x1800DB990
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1800932DC (--3@YAXPEAX@Z.c)
 *     ?PrepareForReuse@CSwRenderTargetGetBounds@@UEAAXXZ @ 0x1800D9950 (-PrepareForReuse@CSwRenderTargetGetBounds@@UEAAXXZ.c)
 *     ??1CDropShadow@@UEAA@XZ @ 0x1800DBA58 (--1CDropShadow@@UEAA@XZ.c)
 */

CDropShadow *__fastcall CDropShadow::`scalar deleting destructor'(CDropShadow *this, char a2)
{
  CDropShadow::~CDropShadow(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      CSwRenderTargetGetBounds::PrepareForReuse(this);
    else
      operator delete(this);
  }
  return this;
}
