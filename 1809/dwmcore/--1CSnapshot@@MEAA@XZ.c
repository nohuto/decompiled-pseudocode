/*
 * XREFs of ??1CSnapshot@@MEAA@XZ @ 0x1801B26DC
 * Callers:
 *     ??_ECSnapshot@@MEAAPEAXI@Z @ 0x1801B2780 (--_ECSnapshot@@MEAAPEAXI@Z.c)
 * Callees:
 *     ?Release@CGdiSpriteBitmap@@UEAAKXZ @ 0x18005A8F0 (-Release@CGdiSpriteBitmap@@UEAAKXZ.c)
 */

void __fastcall CSnapshot::~CSnapshot(CSnapshot *this)
{
  __int64 v1; // rdx
  unsigned int v2; // ebx
  __int64 v4; // r8
  unsigned int v5; // ecx
  __int64 v6; // r9
  __int64 v7; // rcx

  v1 = *((_QWORD *)this + 9);
  v2 = 0;
  *(_QWORD *)this = &CSnapshot::`vftable';
  if ( v1 )
  {
    CGdiSpriteBitmap::Release((CGdiSpriteBitmap *)(v1 + 16));
    v1 = *((_QWORD *)this + 9);
  }
  v4 = *((_QWORD *)this + 2);
  v5 = *(_DWORD *)(v4 + 672);
  v6 = *(_QWORD *)(v4 + 648);
  if ( v5 )
  {
    do
    {
      if ( v1 == *(_QWORD *)(v6 + 8LL * v2) )
        break;
      ++v2;
    }
    while ( v2 < v5 );
  }
  if ( v2 < v5 )
  {
    for ( ; v2 < v5 - 1; v5 = *(_DWORD *)(v4 + 672) )
    {
      v7 = v2++;
      *(_QWORD *)(v6 + 8 * v7) = *(_QWORD *)(v6 + 8LL * v2);
    }
    *(_DWORD *)(v4 + 672) = v5 - 1;
  }
  CResource::~CResource(this);
}
