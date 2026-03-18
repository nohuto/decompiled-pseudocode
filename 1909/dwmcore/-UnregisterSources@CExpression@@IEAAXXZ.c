/*
 * XREFs of ?UnregisterSources@CExpression@@IEAAXXZ @ 0x1800A42E8
 * Callers:
 *     ??1CExpression@@UEAA@XZ @ 0x1800A48B8 (--1CExpression@@UEAA@XZ.c)
 *     ?SetOwner@CExpression@@UEAAXPEAVCBaseExpression@@@Z @ 0x1801D4B00 (-SetOwner@CExpression@@UEAAXPEAVCBaseExpression@@@Z.c)
 * Callees:
 *     ?RemoveSourceAnimation@CResource@@QEAAXPEAVCBaseExpression@@I@Z @ 0x1800A4384 (-RemoveSourceAnimation@CResource@@QEAAXPEAVCBaseExpression@@I@Z.c)
 */

void __fastcall CExpression::UnregisterSources(CExpression *this)
{
  char v2; // cl
  struct CBaseExpression *v3; // rsi
  __int64 v4; // rdi
  __int64 v5; // r8
  __int64 v6; // rcx
  CResource *v7; // rcx

  v2 = *((_BYTE *)this + 432);
  if ( (v2 & 2) != 0 )
  {
    v3 = this;
    if ( *((_QWORD *)this + 53) )
      v3 = (struct CBaseExpression *)*((_QWORD *)this + 53);
    v4 = 0LL;
    if ( *((_DWORD *)this + 104) )
    {
      do
      {
        v5 = *((_QWORD *)this + 51);
        v6 = *(_QWORD *)(*((_QWORD *)this + 49) + 8LL * *(unsigned int *)(v5 + 24 * v4 + 20));
        if ( v6 )
        {
          v7 = *(CResource **)(v6 + 16);
          if ( v7 )
            CResource::RemoveSourceAnimation(v7, v3, *(_DWORD *)(v5 + 24 * v4));
        }
        v4 = (unsigned int)(v4 + 1);
      }
      while ( (unsigned int)v4 < *((_DWORD *)this + 104) );
      v2 = *((_BYTE *)this + 432);
    }
    *((_BYTE *)this + 432) = v2 & 0xFD;
  }
}
